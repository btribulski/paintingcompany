<?php
ini_set("display_errors","1");
//CONFIG VARIABLES
$live = true; // SET TO TRUE FOR PRODUCTION - FALSE for testing
$live_url = "https://www.salesforce.com/servlet/servlet.WebToLead?encoding=UTF-8";
$test_url = "http://www.paintingcompany.com/write_out_post.php";
$thank_you_page = "thank_you";

function field_map ($string){
	switch ($string) {
		case "00N70000001tvgY":
			$value = "Address";
			break;
		case "00N70000001tvaN":
			$value = "City";
			break;
		case "00N70000001tvgi":
			$value = "State";
			break;
		case "00N70000001tvgs":
			$value = "Zip";
			break;
		case "00N70000001tvjz":
			$value = "County";
			break;
		case "00N70000001tvk9":
			$value = "Home Phone";
			break;
		case "00N70000001tvkO":
			$value = "Work";
			break;
		case "00N70000001tvkY":
			$value = "Cell";
			break;
		case "00N70000001tvpE":
			$value = "Type of Work";
			break;
		case "00N70000001tvq1":
			$value = "Location of Work";
			break;
		case "00N70000001tvqV":
			$value = "Areas to be done";
			break;
		case "00N70000001tvt9":
			$value = "How Heard";
			break;
		case "00N70000001tvsz":
			$value = "Lead Source";
			break;
		default:
			$value = $string;
			break;	
	}
	return $value;
}  
  
//get data from form post.
if (isset($_POST)){
  $data_for_repost = http_build_query($_POST);
  foreach ($_POST as $key => $value) {
    $$key = mysql_real_escape_string(trim($value));
	$email_message .= field_map($key) .":".$value ."\n";
  }
}

//check for bademail address
$dontmail = strpos($email,"paintingcompany.com");
if (strlen($email)>100){$dontmail=true;}
//required field validation
if ($first_name== "") { $errormsg .="Your First Name<br>"; }
if ($last_name== "") { $errormsg .="Your Last Name<br>"; }
if ($email== "") {$errormsg .="Your Email<br>";  }
/*
if ($x00N70000001tvk9 == "") {$errormsg .="Your Phone Number<br>";  }
if ($x00N70000001tvjz == "") {$errormsg .="Your County<br>";  }
*/

if (strlen($errormsg)){
	include ("Templates/header.php");
	echo "<h1>Oops!</h1>";
    echo "<p>You the following required fields blank.<br>";
    echo $errormsg;
    echo "Please Press your the Back Button on your Browser and fill in this information</p>";
	include ("Templates/footer.php");
}
else {	
	
	/* recipients */ 
	$recipient .= "webmaster@paintingcompany.com". ", " ;
	
	if ($live){
		$recipient .= "sales@paintingcompany.com". ", " ;
		$recipient .= "jnewman@paintingcompany.com". ", " ;
		$recipient .= "bgummel@paintingcompany.com";
	}
	
	/* subject */
	$subject = "Painting Company Contact Form";

	/* message */
	$message .= "Contact From Web Site\n";
	$message .= $email_message;
	/* additional header pieces for errors, From cc's, bcc's, etc */
	
	$headers .= "From: The Painting Company <sales@paintingcompany.com>\n";
	$headers .= "Reply-To: sales@paintingcompany.com\n";
	$headers .= "X-Sender: <sales@paintingcompany.com>\n";
	$headers .= "X-Mailer: PHP\n"; // mailer
	//$headers .= "X-Priority: 1\n"; // Urgent message!
	$headers .= "Return-Path: <sales@paintingcompany.com>\n";  // Return path for errors
	
	/* If you want to send html mail, uncomment the following line */
	// $headers .= "Content-Type: text/html; charset=iso-8859-1\n"; // Mime type
	
	//$headers .= "cc: birthdayarchive@php.net\n"; // CC to
	//$headers .= "bcc: birthdaycheck@php.net, birthdaygifts@php.net\n"; // BCCs to
	
	/* and now mail it */
	if (!$dontmail){
		mail($recipient, $subject, $message, $headers);
	}  
	/* 
	*******************************************
	REPOST TO SALESFORCE 
	*******************************************
	*/
	$url = ($live)?$live_url:$test_url;
		
	$Curl_Session = curl_init($url);
	curl_setopt ($Curl_Session, CURLOPT_POST, 1);
	curl_setopt ($Curl_Session, CURLOPT_POSTFIELDS, $data_for_repost);
	curl_setopt ($Curl_Session, CURLOPT_FOLLOWLOCATION, 1);
	curl_exec ($Curl_Session);
	curl_close ($Curl_Session);
	
	//REDIRECT TO THANK YOU PAGE
	header ("Location: ". $thank_you_page);
	
}
?>
 
