<?php
/**
 * @file
 * painting_company_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function painting_company_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function painting_company_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_cat_items_settings_info_alter().
 */
function painting_company_feature_cat_items_settings_info_alter(&$data) {
  if (isset($data['erpal_crm_reports_detail_view'])) {
    $data['erpal_crm_reports_detail_view']->data['api_version'] = 1; /* WAS: '' */
  }
  if (isset($data['erpal_project_reports_detail_view'])) {
    $data['erpal_project_reports_detail_view']->data['api_version'] = 1; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function painting_company_feature_field_default_field_bases_alter(&$data) {
  if (isset($data['field_city'])) {
    $data['field_city']['settings']['profile2_private'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_message_aggregator'])) {
    $data['field_message_aggregator']['foreign keys']['message'] = array(
      'columns' => array(
        'target_id' => 'mid',
      ),
      'table' => 'message',
    ); /* WAS: '' */
    unset($data['field_message_aggregator']['foreign keys']['node']);
  }
  if (isset($data['field_message_comment'])) {
    $data['field_message_comment']['foreign keys'] = array(
      'comment' => array(
        'columns' => array(
          'target_id' => 'cid',
        ),
        'table' => 'comment',
      ),
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function painting_company_feature_field_default_field_instances_alter(&$data) {
  if (isset($data['node-erpal_contract-field_activity_ref'])) {
    $data['node-erpal_contract-field_activity_ref']['display']['node_view'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    unset($data['node-erpal_contract-field_activity_ref']['display']['teaser']);
  }
  if (isset($data['node-erpal_crm_activity-field_service_categories'])) {
    unset($data['node-erpal_crm_activity-field_service_categories']);
  }
}

/**
 * Implements hook_menu_default_menu_links_alter().
 */
function painting_company_feature_menu_default_menu_links_alter(&$data) {
  if (isset($data['menu-erpal-menu:heartbeat/all'])) {
    $data['menu-erpal-menu:heartbeat/all']['customized'] = 0; /* WAS: '' */
  }
  if (isset($data['user-menu:heartbeat'])) {
    $data['user-menu:heartbeat']['customized'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_default_message_type_alter().
 */
function painting_company_feature_default_message_type_alter(&$data) {
  if (isset($data['erpal_heartbeat_comment_message'])) {
    unset($data['erpal_heartbeat_comment_message']->message_text['de']);
  }
  if (isset($data['erpal_heartbeat_node_message'])) {
    unset($data['erpal_heartbeat_node_message']->message_text['de']);
  }
  if (isset($data['task_assigned_message'])) {
    unset($data['task_assigned_message']->message_text['de']);
  }
  if (isset($data['task_comment_message'])) {
    unset($data['task_comment_message']->message_text['de']);
  }
  if (isset($data['task_node_message'])) {
    unset($data['task_node_message']->message_text['de']);
  }
  if (isset($data['task_notification_message'])) {
    unset($data['task_notification_message']->message_text['de']);
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function painting_company_feature_default_page_manager_handlers_alter(&$data) {
  if (isset($data['site_template_panel_context'])) {
    $data['site_template_panel_context']->conf['access'] = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'erpal_contact' => 'erpal_contact',
              'erpal_book' => 'erpal_book',
              'erpal_book_page' => 'erpal_book_page',
              'erpal_date' => 'erpal_date',
              'erpal_contract' => 'erpal_contract',
              'erpal_crm_activity' => 'erpal_crm_activity',
              'erpal_customer_forecast' => 'erpal_customer_forecast',
              'erpal_expense_forecast' => 'erpal_expense_forecast',
              'erpal_file' => 'erpal_file',
              'erpal_working_time' => 'erpal_working_time',
              'erpal_invoice' => 'erpal_invoice',
              'erpal_project' => 'erpal_project',
              'erpal_task' => 'erpal_task',
              'erpal_timetracking' => 'erpal_timetracking',
              'erpal_project_release' => 'erpal_project_release',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'erpal',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_taxonomy_default_vocabularies_alter().
 */
function painting_company_feature_taxonomy_default_vocabularies_alter(&$data) {
  if (isset($data['service_category_terms'])) {
    $data['service_category_terms']['hierarchy'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function painting_company_feature_views_default_views_alter(&$data) {
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
  if (isset($data['backlinks'])) {
    $data['backlinks']->display['block']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['block']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['backlinks']->display['default']->display_options['empty']['text']['empty']);
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['comments_recent'])) {
    $data['comments_recent']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['comments_recent']->display['default']->display_options['fields']['subject']['link_to_comment']);
    unset($data['comments_recent']->display['page']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['erpal_ical_export'])) {
    unset($data['erpal_ical_export']->display['default']->display_options['fields']['field_date_item_date']['label']);
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
  if (isset($data['glossary'])) {
    $data['glossary']->display['attachment']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['summary_options']['inline'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['inherit_arguments'] = FALSE; /* WAS: 0 */
    $data['glossary']->display['default']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['glossary']->display['attachment']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['tasks'])) {
    unset($data['tasks']->display['panel_pane_2']->display_options['fields']['field_estimated_time']['label']);
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
  if (isset($data['tracker'])) {
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['title_enable'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['fields']['timestamp']['comments'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['tracker']->display['default']->display_options['fields']['new_comments']['link_to_comment']);
    unset($data['tracker']->display['default']->display_options['fields']['timestamp']['link_to_node']);
    unset($data['tracker']->display['default']->display_options['style_options']['override']);
  }
}

/**
 * Implements hook_image_default_styles().
 */
function painting_company_feature_image_default_styles() {
  $styles = array();

  // Exported image style: front_page_slide_image.
  $styles['front_page_slide_image'] = array(
    'name' => 'front_page_slide_image',
    'label' => 'Front page slide image',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_size.
  $styles['full_size'] = array(
    'name' => 'full_size',
    'label' => 'Full Size (960px wide)',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_thumbnail.
  $styles['gallery_thumbnail'] = array(
    'name' => 'gallery_thumbnail',
    'label' => 'Gallery Thumbnail (150x150)',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function painting_company_feature_node_info() {
  $items = array(
    'front_page_slide' => array(
      'name' => t('Front page Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'image_gallery' => array(
      'name' => t('Image Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'recommended_vendor' => array(
      'name' => t('Recommended Vendor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('Used for a description of a service offered'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Client feedback and comments'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'web_page' => array(
      'name' => t('Web Site Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
