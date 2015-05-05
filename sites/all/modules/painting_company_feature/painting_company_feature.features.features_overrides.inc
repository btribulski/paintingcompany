<?php
/**
 * @file
 * painting_company_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function painting_company_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: cat_items
  $overrides["cat_items.erpal_crm_reports_detail_view.data|api_version"] = 1;
  $overrides["cat_items.erpal_project_reports_detail_view.data|api_version"] = 1;

  // Exported overrides for: field_base
  $overrides["field_base.field_city.settings|profile2_private"] = FALSE;
  $overrides["field_base.field_message_aggregator.foreign keys|message"] = array(
    'columns' => array(
      'target_id' => 'mid',
    ),
    'table' => 'message',
  );
  $overrides["field_base.field_message_aggregator.foreign keys|node"]["DELETED"] = TRUE;
  $overrides["field_base.field_message_comment.foreign keys"] = array(
    'comment' => array(
      'columns' => array(
        'target_id' => 'cid',
      ),
      'table' => 'comment',
    ),
  );

  // Exported overrides for: field_instance
  $overrides["field_instance.node-erpal_contract-field_activity_ref.display|node_view"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-erpal_contract-field_activity_ref.display|teaser"]["DELETED"] = TRUE;
  $overrides["field_instance.node-erpal_crm_activity-field_service_categories.node-erpal_crm_activity-field_service_categories"]["DELETED"] = TRUE;

  // Exported overrides for: menu_links
  $overrides["menu_links.menu-erpal-menu:heartbeat/all.customized"] = 0;
  $overrides["menu_links.user-menu:heartbeat.customized"] = 0;

  // Exported overrides for: message_type
  $overrides["message_type.erpal_heartbeat_comment_message.message_text|de"]["DELETED"] = TRUE;
  $overrides["message_type.erpal_heartbeat_node_message.message_text|de"]["DELETED"] = TRUE;
  $overrides["message_type.task_assigned_message.message_text|de"]["DELETED"] = TRUE;
  $overrides["message_type.task_comment_message.message_text|de"]["DELETED"] = TRUE;
  $overrides["message_type.task_node_message.message_text|de"]["DELETED"] = TRUE;
  $overrides["message_type.task_notification_message.message_text|de"]["DELETED"] = TRUE;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.site_template_panel_context.conf|access"] = array(
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
  );

  // Exported overrides for: taxonomy
  $overrides["taxonomy.service_category_terms.hierarchy"] = 1;

  // Exported overrides for: views_view
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|empty|text|empty"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.comments_recent.display|default|display_options|fields|subject|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.comments_recent.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.comments_recent.display|page|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.erpal_ical_export.display|default|display_options|fields|field_date_item_date|label"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|summary_options|inline"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|inherit_arguments"] = FALSE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.tasks.display|panel_pane_2|display_options|fields|field_estimated_time|label"]["DELETED"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|break_phrase"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|exception|title_enable"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|specify_validation"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|title_enable"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|new_comments|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|timestamp|comments"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|timestamp|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|use_more_always"] = FALSE;

  return $overrides;
}
