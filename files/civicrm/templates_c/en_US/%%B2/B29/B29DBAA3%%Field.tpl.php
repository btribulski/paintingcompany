<?php /* Smarty version 2.6.26, created on 2013-04-02 16:05:05
         compiled from CRM/UF/Form/Field.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/UF/Form/Field.tpl', 26, false),array('modifier', 'crmReplace', 'CRM/UF/Form/Field.tpl', 73, false),array('function', 'crmURL', 'CRM/UF/Form/Field.tpl', 174, false),)), $this); ?>
<h3><?php if ($this->_tpl_vars['action'] == 8): ?><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Delete Field<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> - <?php echo $this->_tpl_vars['fieldTitle']; ?>
<?php elseif ($this->_tpl_vars['action'] == 1): ?><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Add Field<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php elseif ($this->_tpl_vars['action'] == 2): ?><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Edit Field<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> - <?php echo $this->_tpl_vars['fieldTitle']; ?>
<?php endif; ?></h3>
<div class="crm-block crm-form-block crm-uf-field-form-block">
    <?php if ($this->_tpl_vars['action'] == 8): ?>
      	<div class="messages status">
          <div class="icon inform-icon"></div>
            <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>WARNING: Deleting this profile field will remove it from Profile forms and listings. If this field is used in any 'stand-alone' Profile forms, you will need to update those forms to remove this field.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Do you want to continue?<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
      </div>
    <?php else: ?>
        <div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'top')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div> 
        <table class="form-layout-compressed">
        <tr class="crm-uf-field-form-block-field_name">
            <td class="label"><?php echo $this->_tpl_vars['form']['field_name']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['field_name']['html']; ?>
<br />
            <span class="description">&nbsp;<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Select the type of CiviCRM record and the field you want to include in this Profile.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr> 
        <tr class="crm-uf-field-form-block-label">
            <td class="label"><?php echo $this->_tpl_vars['form']['label']['label']; ?>
 <?php if ($this->_tpl_vars['action'] == 2): ?><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => 'CRM/Core/I18n/Dialog.tpl', 'smarty_include_vars' => array('table' => 'civicrm_uf_field','field' => 'label','id' => $this->_tpl_vars['fieldId'])));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?><?php endif; ?></td>
            <td><?php echo $this->_tpl_vars['form']['label']['html']; ?>
<br />       
            <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>The field label displayed on the form (over-ride the default field label here, if desired).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        <tr class="crm-uf-field-form-block-is_required">
            <td class="label"><?php echo $this->_tpl_vars['form']['is_required']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['is_required']['html']; ?>
<br />
            <span class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Are users required to complete this field?<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        <tr class="crm-uf-field-form-block-is_view">
            <td class="label"><?php echo $this->_tpl_vars['form']['is_view']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['is_view']['html']; ?>
<br />
            <span class="description">&nbsp;<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>If checked, users can view but not edit this field.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><br />&nbsp;<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>NOTE: View Only fields can not be included in Profile Search forms.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        <tr  id="profile_visibility" class="crm-uf-field-form-block-visibility">
            <td class="label"><?php echo $this->_tpl_vars['form']['visibility']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['visibility']['html']; ?>
<br />
            <span class="description">&nbsp;<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Is this field hidden from other users ('User and User Admin Only'), or is it visible to others and potentially searchable in the Profile Search form ('Public Pages' or 'Public Pages and Listings')? When visibility is 'Public Pages and Listings', users can also click the field value when viewing a contact in order to locate other contacts with the same value(s) (i.e. other contacts who live in Poland).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        <tr class="crm-uf-field-form-block-is_searchable">
            <td class="label"><div id="is_search_label"><?php echo $this->_tpl_vars['form']['is_searchable']['label']; ?>
</div></td>
            <td><div id="is_search_html"><?php echo $this->_tpl_vars['form']['is_searchable']['html']; ?>
<br />
            <span class="description" id="is_search_desSpan"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Do you want to include this field in the Profile's Search form?<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></div></td>
        </tr>
        <tr class="crm-uf-field-form-block-in_selector">
            <td class="label"><div id="in_selector_label"><?php echo $this->_tpl_vars['form']['in_selector']['label']; ?>
</div></td>
            <td><div id="in_selector_html"><?php echo $this->_tpl_vars['form']['in_selector']['html']; ?>
<br />         
            <span id="in_selector_desSpan" class="description"><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Is this field included as a column in the search results table? This setting applies only to fields with 'Public Pages' or 'Public Pages and Listings' visibility.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></div></td>
        </tr>     
        <tr class="crm-uf-field-form-block-help_pre">
            <td class="label"><?php echo $this->_tpl_vars['form']['help_pre']['label']; ?>
<?php if ($this->_tpl_vars['action'] == 2): ?><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => 'CRM/Core/I18n/Dialog.tpl', 'smarty_include_vars' => array('table' => 'civicrm_uf_field','field' => 'help_pre','id' => $this->_tpl_vars['fieldId'])));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?><?php endif; ?></td>
            <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['help_pre']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge') : smarty_modifier_crmReplace($_tmp, 'class', 'huge')); ?>
<br /> 
            <span class="description">&nbsp;<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Explanatory text displayed to users for this field (can include HTML formatting tags).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
	<tr class="crm-uf-field-form-block-help_post">
            <td class="label"><?php echo $this->_tpl_vars['form']['help_post']['label']; ?>
<?php if ($this->_tpl_vars['action'] == 2): ?><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => 'CRM/Core/I18n/Dialog.tpl', 'smarty_include_vars' => array('table' => 'civicrm_uf_field','field' => 'help_post','id' => $this->_tpl_vars['fieldId'])));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?><?php endif; ?></td>
            <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['help_post']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge') : smarty_modifier_crmReplace($_tmp, 'class', 'huge')); ?>
<br /> 
            <span class="description">&nbsp;<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Explanatory text displayed to users for this field (can include HTML formatting tags).<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        <tr class="crm-uf-field-form-block-weight"> 
            <td class="label"><?php echo $this->_tpl_vars['form']['weight']['label']; ?>
</td>
            <td>&nbsp;<?php echo $this->_tpl_vars['form']['weight']['html']; ?>
<br />
            <span class="description">&nbsp;<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Weight controls the order in which fields are displayed within a profile. Enter a positive or negative integer - lower numbers are displayed ahead of higher numbers.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></td>
        </tr>
        <tr class="crm-uf-field-form-block-is_active">
            <td class="label"><?php echo $this->_tpl_vars['form']['is_active']['label']; ?>
</td>
            <td><?php echo $this->_tpl_vars['form']['is_active']['html']; ?>
</td>
        </tr>
        </table>
    <?php endif; ?>
    <div class="crm-submit-buttons"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'bottom')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></div>
</div>

 <?php echo $this->_tpl_vars['initHideBoxes']; ?>


<?php echo '
<script type="text/javascript">
var otherModule = new Array( );
'; ?>
<?php $_from = $this->_tpl_vars['otherModules']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['mkey'] => $this->_tpl_vars['mval']):
?><?php echo '
    otherModule['; ?>
<?php echo $this->_tpl_vars['mkey']; ?>
<?php echo '] = \''; ?>
<?php echo $this->_tpl_vars['mval']; ?>
<?php echo '\';
'; ?>
<?php endforeach; endif; unset($_from); ?><?php echo '

cj( function() {
   if ( cj.inArray( "Profile", otherModule ) > -1 && cj.inArray( "Search Profile", otherModule ) == -1 ){       
        cj(\'#profile_visibility\').show();
   } else if( cj.inArray( "Search Profile", otherModule ) > -1 ){
        cj(\'#profile_visibility\').show();
        cj("#in_selector").attr(\'checked\',true);
   } else if( cj.inArray( "Profile", otherModule ) == -1 && cj.inArray( "Search Profile", otherModule ) == -1 ){
        cj(\'#profile_visibility\').hide();
   }                         
});

function showLabel( ) {
    var labelValue = \'\';
    /* Code to set the Field Label */		
    if (document.forms.Field[\'field_name[0]\'].options[document.forms.Field[\'field_name[0]\'].selectedIndex].value) { 
        if ( document.forms.Field[\'field_name[1]\'].value ) {
            labelValue = document.forms.Field[\'field_name[1]\'].options[document.forms.Field[\'field_name[1]\'].selectedIndex].text; 
        }

        if ( document.forms.Field[\'field_name[3]\'].value ) { 
            labelValue = labelValue + \'-\' + document.forms.Field[\'field_name[3]\'].options[document.forms.Field[\'field_name[3]\'].selectedIndex].text + \'\'; 
        }   
        if ( document.forms.Field[\'field_name[2]\'].value ) { 
            labelValue = labelValue + \' (\' + document.forms.Field[\'field_name[2]\'].options[document.forms.Field[\'field_name[2]\'].selectedIndex].text + \')\'; 
        }   
    } else {
        labelValue = \'\';  
    }

    var custom = document.forms.Field[\'field_name[1]\'].value;
    if ( custom.substring( 0, 7 ) == \'custom_\' ) {
        var customFieldLabel = labelValue.split(\' :: \', 2);
        labelValue = customFieldLabel[0];
        if ( document.forms.Field[\'field_name[2]\'].value ) { 
            labelValue = labelValue + \' (\' + document.forms.Field[\'field_name[2]\'].options[document.forms.Field[\'field_name[2]\'].selectedIndex].text + \')\'; 
        }
    }
    
    var input = document.getElementById(\'label\');
    input.value = labelValue;

    /* Code to hide searchable attribute for no searchable fields */
    if (document.getElementsByName("field_name[1]")[0].selectedIndex == -1) {
        return;
    }
    var field2 = document.getElementsByName("field_name[1]")[0][document.getElementsByName("field_name[1]")[0].selectedIndex].text;
    var noSearch;
    '; ?>

    <?php $_from = $this->_tpl_vars['noSearchable']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['dnc'] => $this->_tpl_vars['val']):
?>
        <?php echo 'noSearch = "'; ?>
<?php echo $this->_tpl_vars['val']; ?>
<?php echo '";
        if (field2 == noSearch) {
            hide("is_search_label");
            hide("is_search_html");
            hide("is_search_desSpan");
        }
        '; ?>

    <?php endforeach; endif; unset($_from); ?>
    <?php echo '

    /* Code to set Profile Field help, from custom data field help */
    var fieldId = null;

    if ( custom.substring( 0, 7 ) == \'custom_\' ) {
        fieldId = custom.substring( custom.length, 7);
    } else {
        cj(\'#help_post\').val(" ");
        cj(\'#help_pre\').val(" ");
        return;
    }

    var dataUrl = '; ?>
"<?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/ajax/custom','h' => 0), $this);?>
"<?php echo ';
    cj.post( dataUrl, { id: fieldId }, function(data) {
        cj(\'#help_post\').val( data.help_post );
        cj(\'#help_pre\').val( data.help_pre );
    }, \'json\');
} 

'; ?>
<?php if ($this->_tpl_vars['action'] != 8): ?><?php echo '
   showHideSeletorSearch();
	
   function showHideSeletorSearch()
   {
       var vsbl= cj("#visibility").val( );
       if ( vsbl == "User and User Admin Only"){
           hide("is_search_label");
           hide("is_search_html");
           hide("is_search_desSpan");
           hide("in_selector_label");
           hide("in_selector_html");
           hide("in_selector_desSpan");
           cj("#is_searchable").attr(\'checked\',false);
       } else {
           if ( ! cj("#is_view").attr(\'checked\') ) {
               show("is_search_label");
               show("is_search_html");
               show("is_search_desSpan");
           }
           var fldName = cj("#field_name\\\\[1\\\\]").val();
           if ( fldName == \'group\' || fldName == \'tag\' ) { 
               hide("in_selector_label");
               hide("in_selector_html");
               hide("in_selector_desSpan");
           } else {
               show("in_selector_label");
               show("in_selector_html");
               show("in_selector_desSpan");
           }
       }
   }

   cj("#field_name\\\\[1\\\\]").bind( \'change blur\', function( ) {
       showHideSeletorSearch( );
   }); 

cj( function( ) {
    cj("#field_name\\\\[1\\\\]").addClass( \'huge\' );
    viewOnlyShowHide( );
    cj("#is_view").click( function(){
        viewOnlyShowHide();
    });
    
});
'; ?>
<?php endif; ?><?php echo '

function viewOnlyShowHide( ) {
    var vsbl= cj("#visibility").val( );
    if (cj("#is_view").attr(\'checked\')) {
       hide("is_search_label");
       hide("is_search_html");
       hide("is_search_desSpan");
       cj("#is_searchable").attr(\'checked\',false);
    } else if ( vsbl != "User and User Admin Only")  {
       show("is_search_label");
       show("is_search_html");
       show("is_search_desSpan");
    }
}

//CRM-4363	
function mixProfile( ) {
    var allMixTypes = ["Participant", "Membership", "Contribution"];
    var type = document.forms.Field[\'field_name[0]\'].value;
    var alreadyMixProfile = '; ?>
<?php if ($this->_tpl_vars['alreadyMixProfile']): ?>true<?php else: ?>false<?php endif; ?><?php echo ';
    if ( allMixTypes.indexOf( type ) != -1 || alreadyMixProfile ) {
        if ( document.getElementById("is_searchable").checked ) {
            document.getElementById("is_searchable").checked = false;
            if ( alreadyMixProfile ) {
                var message = '; ?>
'<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Oops. You can not mark fields as Searchable in a profile that contains fields for multiple record types.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
                alert( message ); 
            } else {
                var message = '; ?>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>'Oops. '<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> 
                + type + '<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?> fields can not be marked as Searchable in a profile.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
                alert( message ); 
            }
        }
        if ( document.getElementById("in_selector").checked ) {
            document.getElementById("in_selector").checked = false;
            if ( alreadyMixProfile ) {
                var message = '; ?>
'<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Oops. You can not mark a field as a Result Column in a profile that contains fields from multiple record types.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
                alert( message );
            } else {
                var message = '; ?>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>'Oops. '<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> 
                + type + '<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?> can not be used as a Result Column for profile searches.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
                alert( message ); 
            }
        }
    }
}

function verify( ) {
    var allMixTypes = ["Participant", "Membership", "Contribution"];
    var type = document.forms.Field[\'field_name[0]\'].value;
    if ( allMixTypes.indexOf( type ) != -1 ) {
        var message = '; ?>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>'Oops. One or more fields in this profile are configured to be Searchable and / or shown in a Results Column, AND you are trying to add a '<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?> 
        + type + '<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?> field. Profiles with a mixture of field types can not include Searchable or Results Column fields. If you save this field now, the Seachable and Results Column settings will be removed for all fields in this profile. Do you want to continue?<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>'<?php echo ';
        var ok = confirm( message );    
        if ( !ok ) {
            return false;
        }
    }
}

</script> 
'; ?>


<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formNavigate.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
