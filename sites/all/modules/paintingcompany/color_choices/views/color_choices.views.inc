<?php 
// $Id: color_choices.views.inc,v 1.0 2010/05/26 12:10:57 btribulski Exp $

function color_choices_views_data() { 
 $data = array();
 $data['color_choice_choices'] = array( 
	'table' => array( 
		'group' => 'Color Choices', 
		'title' => 'Color Info', 
		'help' => t('Information about the color selections for this job'),
		'join' => array( 
			'node' => array( 
				'left_field' => 'nid', 
				'field' => 'nid',
			 ),
		 ), 
	 ), 
	 'room_name' => array( 
	 	'title' => t('Room Name'), 
		'help' => t('Name of the Room to be Painted'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
	  ),
	  'area' => array( 
	 	'title' => t('Area'), 
		'help' => t('Walls, Ceiling, Trim, etc'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
	  ),
	  'manufacturer' => array( 
	 	'title' => t('Manufacturer'), 
		'help' => t('The Paint Manufacturer'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
	  ),
	  'brand' => array( 
	 	'title' => t('Brand'), 
		'help' => t('Brand of Paint used'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
	  ),
	  'finish' => array( 
	 	'title' => t('Finish'), 
		'help' => t('The Paint Finish'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
	  ),
	  'color_name' => array( 
	 	'title' => t('Color Name'), 
		'help' => t('Paint Color Name'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
	  ),
	  'color_number' => array( 
	 	'title' => t('Color Number'), 
		'help' => t('Paint Color Number'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
	  ),
	  
	  
  );
  
  
  $data['color_choice_job'] = array(
  	'table' => array( 
		'group' => 'Color Choices', 
		'title' => 'Color Choice Job Details', 
		'help' => t('Information about Job for A color Choice'),
		'join' => array( 
			'node' => array( 
				'left_field' => 'nid', 
				'field' => 'nid',
			 ),
			 'user' => array(
			 	'left_field'=> 'uid',
				'field' => 'uid',
			 ),
			 
		 ), 
	),
	'first_name' => array( 
	 	'title' => t('First Name'), 
		'help' => t('Customer First Name'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'last_name' => array( 
	 	'title' => t('Last Name'), 
		'help' => t('Customer Last Name'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'email' => array( 
	 	'title' => t('Email'), 
		'help' => t('Customer Email'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'address' => array( 
	 	'title' => t('Address'), 
		'help' => t('Customer Address'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'city' => array( 
	 	'title' => t('city'), 
		'help' => t('Customer City'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'state' => array( 
	 	'title' => t('State'), 
		'help' => t('Customer State'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'zip' => array( 
	 	'title' => t('Zip'), 
		'help' => t('Customer Zip'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'phone_home' => array( 
	 	'title' => t('Home Phone'), 
		'help' => t('Customer Home Phone'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'phone_mobile' => array( 
	 	'title' => t('Mobile Phone'), 
		'help' => t('Customer Mobile Phone'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'branch_manager' => array( 
	 	'title' => t('Branch Manager'), 
		'help' => t('Branch Manager responsibile for Job'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'number_rooms' => array( 
	 	'title' => t('Number of Rooms'), 
		'help' => t('Number or Rooms'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_numeric',
		),
	  ),
	  'lead_source' => array( 
	 	'title' => t('Lead Source'), 
		'help' => t('Source of the Lead'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'total_price' => array( 
	 	'title' => t('Total Price'), 
		'help' => t('Total Price'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  'payment_method' => array( 
	 	'title' => t('Payment Method'), 
		'help' => t('Customer Method of Payment'), // The help that appears on the UI, 
		// Information for displaying the nid 
		'field' => array( 
			'handler' => 'views_handler_field_node', 
			'click sortable' => TRUE,
		),
		'sort' => array(
			'handler' => 'views_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	  ),
	  
  );
  
  return $data;  
}
