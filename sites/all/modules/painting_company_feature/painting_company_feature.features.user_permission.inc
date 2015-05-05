<?php
/**
 * @file
 * painting_company_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function painting_company_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access activities view'.
  $permissions['access activities view'] = array(
    'name' => 'access activities view',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
    ),
    'module' => 'erpal_crm_helper',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access billables view'.
  $permissions['access billables view'] = array(
    'name' => 'access billables view',
    'roles' => array(
      'controller' => 'controller',
      'financial user' => 'financial user',
    ),
    'module' => 'erpal_projects_billable',
  );

  // Exported permission: 'access bookmarks view'.
  $permissions['access bookmarks view'] = array(
    'name' => 'access bookmarks view',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_bookmark_helper',
  );

  // Exported permission: 'access books view'.
  $permissions['access books view'] = array(
    'name' => 'access books view',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_book_helper',
  );

  // Exported permission: 'access budgets view'.
  $permissions['access budgets view'] = array(
    'name' => 'access budgets view',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access calendar view'.
  $permissions['access calendar view'] = array(
    'name' => 'access calendar view',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_calendar_helper',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access contact view'.
  $permissions['access contact view'] = array(
    'name' => 'access contact view',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_basic_helper',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(),
    'module' => 'contextual',
  );

  // Exported permission: 'access contracts view'.
  $permissions['access contracts view'] = array(
    'name' => 'access contracts view',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
    ),
    'module' => 'erpal_contract_helper',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'access documents view'.
  $permissions['access documents view'] = array(
    'name' => 'access documents view',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_docs_helper',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access erpal heartbeat'.
  $permissions['access erpal heartbeat'] = array(
    'name' => 'access erpal heartbeat',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_heartbeat',
  );

  // Exported permission: 'access erpal help'.
  $permissions['access erpal help'] = array(
    'name' => 'access erpal help',
    'roles' => array(),
    'module' => 'erpal_help',
  );

  // Exported permission: 'access invoices view'.
  $permissions['access invoices view'] = array(
    'name' => 'access invoices view',
    'roles' => array(
      'controller' => 'controller',
      'financial user' => 'financial user',
    ),
    'module' => 'erpal_invoice_helper',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access projects view'.
  $permissions['access projects view'] = array(
    'name' => 'access projects view',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access relations'.
  $permissions['access relations'] = array(
    'name' => 'access relations',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access sub tasks and tickets details view'.
  $permissions['access sub tasks and tickets details view'] = array(
    'name' => 'access sub tasks and tickets details view',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access sub tasks and tickets tree view'.
  $permissions['access sub tasks and tickets tree view'] = array(
    'name' => 'access sub tasks and tickets tree view',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access sub tasks and tickets view'.
  $permissions['access sub tasks and tickets view'] = array(
    'name' => 'access sub tasks and tickets view',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access tasks details'.
  $permissions['access tasks details'] = array(
    'name' => 'access tasks details',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access tasks tree'.
  $permissions['access tasks tree'] = array(
    'name' => 'access tasks tree',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access tasks view'.
  $permissions['access tasks view'] = array(
    'name' => 'access tasks view',
    'roles' => array(
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access tickets details'.
  $permissions['access tickets details'] = array(
    'name' => 'access tickets details',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access tickets tree'.
  $permissions['access tickets tree'] = array(
    'name' => 'access tickets tree',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access tickets view'.
  $permissions['access tickets view'] = array(
    'name' => 'access tickets view',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access timetrackings view'.
  $permissions['access timetrackings view'] = array(
    'name' => 'access timetrackings view',
    'roles' => array(
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'access tokenauth'.
  $permissions['access tokenauth'] = array(
    'name' => 'access tokenauth',
    'roles' => array(),
    'module' => 'tokenauth',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add global dashboard reports'.
  $permissions['add global dashboard reports'] = array(
    'name' => 'add global dashboard reports',
    'roles' => array(),
    'module' => 'erpal_reports',
  );

  // Exported permission: 'add personal dashboard reports'.
  $permissions['add personal dashboard reports'] = array(
    'name' => 'add personal dashboard reports',
    'roles' => array(),
    'module' => 'erpal_reports',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(),
    'module' => 'ds',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(),
    'module' => 'ds',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer billable'.
  $permissions['administer billable'] = array(
    'name' => 'administer billable',
    'roles' => array(),
    'module' => 'billable',
  );

  // Exported permission: 'administer billable types'.
  $permissions['administer billable types'] = array(
    'name' => 'administer billable types',
    'roles' => array(),
    'module' => 'billable',
  );

  // Exported permission: 'administer billables'.
  $permissions['administer billables'] = array(
    'name' => 'administer billables',
    'roles' => array(),
    'module' => 'billable',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: 'administer budget types'.
  $permissions['administer budget types'] = array(
    'name' => 'administer budget types',
    'roles' => array(),
    'module' => 'budget',
  );

  // Exported permission: 'administer budgets'.
  $permissions['administer budgets'] = array(
    'name' => 'administer budgets',
    'roles' => array(),
    'module' => 'budget',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer date_item'.
  $permissions['administer date_item'] = array(
    'name' => 'administer date_item',
    'roles' => array(),
    'module' => 'date_item',
  );

  // Exported permission: 'administer date_item types'.
  $permissions['administer date_item types'] = array(
    'name' => 'administer date_item types',
    'roles' => array(),
    'module' => 'date_item',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer erpal docs access'.
  $permissions['administer erpal docs access'] = array(
    'name' => 'administer erpal docs access',
    'roles' => array(),
    'module' => 'erpal_docs_access',
  );

  // Exported permission: 'administer erpal document export'.
  $permissions['administer erpal document export'] = array(
    'name' => 'administer erpal document export',
    'roles' => array(),
    'module' => 'erpal_document_export',
  );

  // Exported permission: 'administer erpal_reports'.
  $permissions['administer erpal_reports'] = array(
    'name' => 'administer erpal_reports',
    'roles' => array(),
    'module' => 'erpal_reports',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field conditional states'.
  $permissions['administer field conditional states'] = array(
    'name' => 'administer field conditional states',
    'roles' => array(),
    'module' => 'field_conditional_state',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'administer front page'.
  $permissions['administer front page'] = array(
    'name' => 'administer front page',
    'roles' => array(),
    'module' => 'front_page',
  );

  // Exported permission: 'administer homebox'.
  $permissions['administer homebox'] = array(
    'name' => 'administer homebox',
    'roles' => array(),
    'module' => 'homebox',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(),
    'module' => 'imce',
  );

  // Exported permission: 'administer jqmulti'.
  $permissions['administer jqmulti'] = array(
    'name' => 'administer jqmulti',
    'roles' => array(),
    'module' => 'jqmulti',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu_token'.
  $permissions['administer menu_token'] = array(
    'name' => 'administer menu_token',
    'roles' => array(),
    'module' => 'menu_token',
  );

  // Exported permission: 'administer message types'.
  $permissions['administer message types'] = array(
    'name' => 'administer message types',
    'roles' => array(),
    'module' => 'message',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer own simple_date date_item'.
  $permissions['administer own simple_date date_item'] = array(
    'name' => 'administer own simple_date date_item',
    'roles' => array(),
    'module' => 'date_item',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer payment entities'.
  $permissions['administer payment entities'] = array(
    'name' => 'administer payment entities',
    'roles' => array(),
    'module' => 'payment',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer relation types'.
  $permissions['administer relation types'] = array(
    'name' => 'administer relation types',
    'roles' => array(),
    'module' => 'relation',
  );

  // Exported permission: 'administer relations'.
  $permissions['administer relations'] = array(
    'name' => 'administer relations',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: 'administer services'.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'administer shortcut groups'.
  $permissions['administer shortcut groups'] = array(
    'name' => 'administer shortcut groups',
    'roles' => array(),
    'module' => 'shortcut_keys',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(),
    'module' => 'shortcut_keys',
  );

  // Exported permission: 'administer simple_date date_item'.
  $permissions['administer simple_date date_item'] = array(
    'name' => 'administer simple_date date_item',
    'roles' => array(),
    'module' => 'date_item',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(),
    'module' => 'superfish',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer theme assignments'.
  $permissions['administer theme assignments'] = array(
    'name' => 'administer theme assignments',
    'roles' => array(),
    'module' => 'themekey',
  );

  // Exported permission: 'administer themekey settings'.
  $permissions['administer themekey settings'] = array(
    'name' => 'administer themekey settings',
    'roles' => array(),
    'module' => 'themekey',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer timetracking module'.
  $permissions['administer timetracking module'] = array(
    'name' => 'administer timetracking module',
    'roles' => array(),
    'module' => 'timetracking',
  );

  // Exported permission: 'administer timetrackings'.
  $permissions['administer timetrackings'] = array(
    'name' => 'administer timetrackings',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'timetracking',
  );

  // Exported permission: 'administer tokenauth'.
  $permissions['administer tokenauth'] = array(
    'name' => 'administer tokenauth',
    'roles' => array(),
    'module' => 'tokenauth',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'administer views calc'.
  $permissions['administer views calc'] = array(
    'name' => 'administer views calc',
    'roles' => array(),
    'module' => 'views_calc',
  );

  // Exported permission: 'administer views calc distinct'.
  $permissions['administer views calc distinct'] = array(
    'name' => 'administer views calc distinct',
    'roles' => array(),
    'module' => 'views_calc_distinct',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(),
    'module' => 'migrate',
  );

  // Exported permission: 'assign node themes'.
  $permissions['assign node themes'] = array(
    'name' => 'assign node themes',
    'roles' => array(),
    'module' => 'themekey_ui',
  );

  // Exported permission: 'assign path alias themes'.
  $permissions['assign path alias themes'] = array(
    'name' => 'assign path alias themes',
    'roles' => array(),
    'module' => 'themekey_ui',
  );

  // Exported permission: 'assign theme to own nodes'.
  $permissions['assign theme to own nodes'] = array(
    'name' => 'assign theme to own nodes',
    'roles' => array(),
    'module' => 'themekey_ui',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'bypass tasks view access'.
  $permissions['bypass tasks view access'] = array(
    'name' => 'bypass tasks view access',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'bypass tickets view access'.
  $permissions['bypass tickets view access'] = array(
    'name' => 'bypass tickets view access',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'clear erpal_contact_nodes_contact_company feeds'.
  $permissions['clear erpal_contact_nodes_contact_company feeds'] = array(
    'name' => 'clear erpal_contact_nodes_contact_company feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear erpal_contact_nodes_contact_person feeds'.
  $permissions['clear erpal_contact_nodes_contact_person feeds'] = array(
    'name' => 'clear erpal_contact_nodes_contact_person feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clone complete books'.
  $permissions['clone complete books'] = array(
    'name' => 'clone complete books',
    'roles' => array(
      'account manager' => 'account manager',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_book_helper',
  );

  // Exported permission: 'config erpal'.
  $permissions['config erpal'] = array(
    'name' => 'config erpal',
    'roles' => array(),
    'module' => 'erpal_basic_helper',
  );

  // Exported permission: 'config erpal basic'.
  $permissions['config erpal basic'] = array(
    'name' => 'config erpal basic',
    'roles' => array(),
    'module' => 'erpal_basic_helper',
  );

  // Exported permission: 'config erpal calendar'.
  $permissions['config erpal calendar'] = array(
    'name' => 'config erpal calendar',
    'roles' => array(),
    'module' => 'erpal_calendar_helper',
  );

  // Exported permission: 'config erpal crm'.
  $permissions['config erpal crm'] = array(
    'name' => 'config erpal crm',
    'roles' => array(),
    'module' => 'erpal_crm_helper',
  );

  // Exported permission: 'config erpal docs'.
  $permissions['config erpal docs'] = array(
    'name' => 'config erpal docs',
    'roles' => array(),
    'module' => 'erpal_docs_helper',
  );

  // Exported permission: 'config erpal employee'.
  $permissions['config erpal employee'] = array(
    'name' => 'config erpal employee',
    'roles' => array(),
    'module' => 'erpal_employee_helper',
  );

  // Exported permission: 'config erpal invoice'.
  $permissions['config erpal invoice'] = array(
    'name' => 'config erpal invoice',
    'roles' => array(),
    'module' => 'erpal_invoice_helper',
  );

  // Exported permission: 'config erpal projects'.
  $permissions['config erpal projects'] = array(
    'name' => 'config erpal projects',
    'roles' => array(),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'create billable'.
  $permissions['create billable'] = array(
    'name' => 'create billable',
    'roles' => array(),
    'module' => 'billable',
  );

  // Exported permission: 'create budget'.
  $permissions['create budget'] = array(
    'name' => 'create budget',
    'roles' => array(
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'budget',
  );

  // Exported permission: 'create erpal_book content'.
  $permissions['create erpal_book content'] = array(
    'name' => 'create erpal_book content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_book_page content'.
  $permissions['create erpal_book_page content'] = array(
    'name' => 'create erpal_book_page content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_contact content'.
  $permissions['create erpal_contact content'] = array(
    'name' => 'create erpal_contact content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_contract content'.
  $permissions['create erpal_contract content'] = array(
    'name' => 'create erpal_contract content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_crm_activity content'.
  $permissions['create erpal_crm_activity content'] = array(
    'name' => 'create erpal_crm_activity content',
    'roles' => array(
      'account manager' => 'account manager',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_customer_forecast content'.
  $permissions['create erpal_customer_forecast content'] = array(
    'name' => 'create erpal_customer_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_date content'.
  $permissions['create erpal_date content'] = array(
    'name' => 'create erpal_date content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_expense_forecast content'.
  $permissions['create erpal_expense_forecast content'] = array(
    'name' => 'create erpal_expense_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_file content'.
  $permissions['create erpal_file content'] = array(
    'name' => 'create erpal_file content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_invoice content'.
  $permissions['create erpal_invoice content'] = array(
    'name' => 'create erpal_invoice content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_project content'.
  $permissions['create erpal_project content'] = array(
    'name' => 'create erpal_project content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_project_release content'.
  $permissions['create erpal_project_release content'] = array(
    'name' => 'create erpal_project_release content',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_task content'.
  $permissions['create erpal_task content'] = array(
    'name' => 'create erpal_task content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_timetracking content'.
  $permissions['create erpal_timetracking content'] = array(
    'name' => 'create erpal_timetracking content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create erpal_working_time content'.
  $permissions['create erpal_working_time content'] = array(
    'name' => 'create erpal_working_time content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create front_page_slide content'.
  $permissions['create front_page_slide content'] = array(
    'name' => 'create front_page_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create image_gallery content'.
  $permissions['create image_gallery content'] = array(
    'name' => 'create image_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(),
    'module' => 'message',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create payment entity'.
  $permissions['create payment entity'] = array(
    'name' => 'create payment entity',
    'roles' => array(),
    'module' => 'payment',
  );

  // Exported permission: 'create recommended_vendor content'.
  $permissions['create recommended_vendor content'] = array(
    'name' => 'create recommended_vendor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create relations'.
  $permissions['create relations'] = array(
    'name' => 'create relations',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'create service content'.
  $permissions['create service content'] = array(
    'name' => 'create service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create simple_date date_item'.
  $permissions['create simple_date date_item'] = array(
    'name' => 'create simple_date date_item',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'date_item',
  );

  // Exported permission: 'create testimonial content'.
  $permissions['create testimonial content'] = array(
    'name' => 'create testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create timetracking'.
  $permissions['create timetracking'] = array(
    'name' => 'create timetracking',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'timetracking',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'create views calc'.
  $permissions['create views calc'] = array(
    'name' => 'create views calc',
    'roles' => array(),
    'module' => 'views_calc',
  );

  // Exported permission: 'create web_page content'.
  $permissions['create web_page content'] = array(
    'name' => 'create web_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create working times offset'.
  $permissions['create working times offset'] = array(
    'name' => 'create working times offset',
    'roles' => array(
      'controller' => 'controller',
    ),
    'module' => 'erpal_employee_helper',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete any erpal_book content'.
  $permissions['delete any erpal_book content'] = array(
    'name' => 'delete any erpal_book content',
    'roles' => array(
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_book_page content'.
  $permissions['delete any erpal_book_page content'] = array(
    'name' => 'delete any erpal_book_page content',
    'roles' => array(
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_contact content'.
  $permissions['delete any erpal_contact content'] = array(
    'name' => 'delete any erpal_contact content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_contract content'.
  $permissions['delete any erpal_contract content'] = array(
    'name' => 'delete any erpal_contract content',
    'roles' => array(
      'financial user' => 'financial user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_crm_activity content'.
  $permissions['delete any erpal_crm_activity content'] = array(
    'name' => 'delete any erpal_crm_activity content',
    'roles' => array(
      'account manager' => 'account manager',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_customer_forecast content'.
  $permissions['delete any erpal_customer_forecast content'] = array(
    'name' => 'delete any erpal_customer_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_date content'.
  $permissions['delete any erpal_date content'] = array(
    'name' => 'delete any erpal_date content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_expense_forecast content'.
  $permissions['delete any erpal_expense_forecast content'] = array(
    'name' => 'delete any erpal_expense_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_file content'.
  $permissions['delete any erpal_file content'] = array(
    'name' => 'delete any erpal_file content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_invoice content'.
  $permissions['delete any erpal_invoice content'] = array(
    'name' => 'delete any erpal_invoice content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_project content'.
  $permissions['delete any erpal_project content'] = array(
    'name' => 'delete any erpal_project content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_project_release content'.
  $permissions['delete any erpal_project_release content'] = array(
    'name' => 'delete any erpal_project_release content',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_task content'.
  $permissions['delete any erpal_task content'] = array(
    'name' => 'delete any erpal_task content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_timetracking content'.
  $permissions['delete any erpal_timetracking content'] = array(
    'name' => 'delete any erpal_timetracking content',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erpal_working_time content'.
  $permissions['delete any erpal_working_time content'] = array(
    'name' => 'delete any erpal_working_time content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any front_page_slide content'.
  $permissions['delete any front_page_slide content'] = array(
    'name' => 'delete any front_page_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any image_gallery content'.
  $permissions['delete any image_gallery content'] = array(
    'name' => 'delete any image_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any recommended_vendor content'.
  $permissions['delete any recommended_vendor content'] = array(
    'name' => 'delete any recommended_vendor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any service content'.
  $permissions['delete any service content'] = array(
    'name' => 'delete any service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any simple_date date_item'.
  $permissions['delete any simple_date date_item'] = array(
    'name' => 'delete any simple_date date_item',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'date_item',
  );

  // Exported permission: 'delete any testimonial content'.
  $permissions['delete any testimonial content'] = array(
    'name' => 'delete any testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any timetracking'.
  $permissions['delete any timetracking'] = array(
    'name' => 'delete any timetracking',
    'roles' => array(),
    'module' => 'timetracking',
  );

  // Exported permission: 'delete any web_page content'.
  $permissions['delete any web_page content'] = array(
    'name' => 'delete any web_page content',
    'roles' => array(
      'internal developer' => 'internal developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_book content'.
  $permissions['delete own erpal_book content'] = array(
    'name' => 'delete own erpal_book content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_book_page content'.
  $permissions['delete own erpal_book_page content'] = array(
    'name' => 'delete own erpal_book_page content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_contact content'.
  $permissions['delete own erpal_contact content'] = array(
    'name' => 'delete own erpal_contact content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_contract content'.
  $permissions['delete own erpal_contract content'] = array(
    'name' => 'delete own erpal_contract content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_crm_activity content'.
  $permissions['delete own erpal_crm_activity content'] = array(
    'name' => 'delete own erpal_crm_activity content',
    'roles' => array(
      'account manager' => 'account manager',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_customer_forecast content'.
  $permissions['delete own erpal_customer_forecast content'] = array(
    'name' => 'delete own erpal_customer_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_date content'.
  $permissions['delete own erpal_date content'] = array(
    'name' => 'delete own erpal_date content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_expense_forecast content'.
  $permissions['delete own erpal_expense_forecast content'] = array(
    'name' => 'delete own erpal_expense_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_file content'.
  $permissions['delete own erpal_file content'] = array(
    'name' => 'delete own erpal_file content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_invoice content'.
  $permissions['delete own erpal_invoice content'] = array(
    'name' => 'delete own erpal_invoice content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_project content'.
  $permissions['delete own erpal_project content'] = array(
    'name' => 'delete own erpal_project content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_project_release content'.
  $permissions['delete own erpal_project_release content'] = array(
    'name' => 'delete own erpal_project_release content',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_task content'.
  $permissions['delete own erpal_task content'] = array(
    'name' => 'delete own erpal_task content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_timetracking content'.
  $permissions['delete own erpal_timetracking content'] = array(
    'name' => 'delete own erpal_timetracking content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own erpal_working_time content'.
  $permissions['delete own erpal_working_time content'] = array(
    'name' => 'delete own erpal_working_time content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own front_page_slide content'.
  $permissions['delete own front_page_slide content'] = array(
    'name' => 'delete own front_page_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own image_gallery content'.
  $permissions['delete own image_gallery content'] = array(
    'name' => 'delete own image_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own recommended_vendor content'.
  $permissions['delete own recommended_vendor content'] = array(
    'name' => 'delete own recommended_vendor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own service content'.
  $permissions['delete own service content'] = array(
    'name' => 'delete own service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own simple_date date_item'.
  $permissions['delete own simple_date date_item'] = array(
    'name' => 'delete own simple_date date_item',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'date_item',
  );

  // Exported permission: 'delete own testimonial content'.
  $permissions['delete own testimonial content'] = array(
    'name' => 'delete own testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own timetracking'.
  $permissions['delete own timetracking'] = array(
    'name' => 'delete own timetracking',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'timetracking',
  );

  // Exported permission: 'delete own web_page content'.
  $permissions['delete own web_page content'] = array(
    'name' => 'delete own web_page content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete payment entity'.
  $permissions['delete payment entity'] = array(
    'name' => 'delete payment entity',
    'roles' => array(),
    'module' => 'payment',
  );

  // Exported permission: 'delete relations'.
  $permissions['delete relations'] = array(
    'name' => 'delete relations',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in activity_lost_reasons'.
  $permissions['delete terms in activity_lost_reasons'] = array(
    'name' => 'delete terms in activity_lost_reasons',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in activity_origin'.
  $permissions['delete terms in activity_origin'] = array(
    'name' => 'delete terms in activity_origin',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in activity_status_terms'.
  $permissions['delete terms in activity_status_terms'] = array(
    'name' => 'delete terms in activity_status_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in address_types'.
  $permissions['delete terms in address_types'] = array(
    'name' => 'delete terms in address_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in areas_to_be_painted'.
  $permissions['delete terms in areas_to_be_painted'] = array(
    'name' => 'delete terms in areas_to_be_painted',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in book_tags'.
  $permissions['delete terms in book_tags'] = array(
    'name' => 'delete terms in book_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in communication_categories'.
  $permissions['delete terms in communication_categories'] = array(
    'name' => 'delete terms in communication_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in company_relation_tags'.
  $permissions['delete terms in company_relation_tags'] = array(
    'name' => 'delete terms in company_relation_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in contact_tags'.
  $permissions['delete terms in contact_tags'] = array(
    'name' => 'delete terms in contact_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in contract_types'.
  $permissions['delete terms in contract_types'] = array(
    'name' => 'delete terms in contract_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
    'name' => 'delete terms in countries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in county'.
  $permissions['delete terms in county'] = array(
    'name' => 'delete terms in county',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in date_item_tags'.
  $permissions['delete terms in date_item_tags'] = array(
    'name' => 'delete terms in date_item_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in expense_category_terms'.
  $permissions['delete terms in expense_category_terms'] = array(
    'name' => 'delete terms in expense_category_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in file_tags'.
  $permissions['delete terms in file_tags'] = array(
    'name' => 'delete terms in file_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in image_galleries'.
  $permissions['delete terms in image_galleries'] = array(
    'name' => 'delete terms in image_galleries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in number_types'.
  $permissions['delete terms in number_types'] = array(
    'name' => 'delete terms in number_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in paint_brands'.
  $permissions['delete terms in paint_brands'] = array(
    'name' => 'delete terms in paint_brands',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in paint_finishes'.
  $permissions['delete terms in paint_finishes'] = array(
    'name' => 'delete terms in paint_finishes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in paint_manufacturers'.
  $permissions['delete terms in paint_manufacturers'] = array(
    'name' => 'delete terms in paint_manufacturers',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in priority_terms'.
  $permissions['delete terms in priority_terms'] = array(
    'name' => 'delete terms in priority_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in production_team'.
  $permissions['delete terms in production_team'] = array(
    'name' => 'delete terms in production_team',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in project_role_tags'.
  $permissions['delete terms in project_role_tags'] = array(
    'name' => 'delete terms in project_role_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in project_status_terms'.
  $permissions['delete terms in project_status_terms'] = array(
    'name' => 'delete terms in project_status_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in project_tags'.
  $permissions['delete terms in project_tags'] = array(
    'name' => 'delete terms in project_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in room_names'.
  $permissions['delete terms in room_names'] = array(
    'name' => 'delete terms in room_names',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in salutation_terms'.
  $permissions['delete terms in salutation_terms'] = array(
    'name' => 'delete terms in salutation_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_category_terms'.
  $permissions['delete terms in service_category_terms'] = array(
    'name' => 'delete terms in service_category_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in target_audience_terms'.
  $permissions['delete terms in target_audience_terms'] = array(
    'name' => 'delete terms in target_audience_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in task_status_terms'.
  $permissions['delete terms in task_status_terms'] = array(
    'name' => 'delete terms in task_status_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in task_type_terms'.
  $permissions['delete terms in task_type_terms'] = array(
    'name' => 'delete terms in task_type_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete working times offset'.
  $permissions['delete working times offset'] = array(
    'name' => 'delete working times offset',
    'roles' => array(
      'controller' => 'controller',
    ),
    'module' => 'erpal_employee_helper',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit any billable'.
  $permissions['edit any billable'] = array(
    'name' => 'edit any billable',
    'roles' => array(
      'financial user' => 'financial user',
    ),
    'module' => 'billable',
  );

  // Exported permission: 'edit any budget'.
  $permissions['edit any budget'] = array(
    'name' => 'edit any budget',
    'roles' => array(
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'budget',
  );

  // Exported permission: 'edit any contract profile'.
  $permissions['edit any contract profile'] = array(
    'name' => 'edit any contract profile',
    'roles' => array(
      'controller' => 'controller',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any erpal_book content'.
  $permissions['edit any erpal_book content'] = array(
    'name' => 'edit any erpal_book content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_book_page content'.
  $permissions['edit any erpal_book_page content'] = array(
    'name' => 'edit any erpal_book_page content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_contact content'.
  $permissions['edit any erpal_contact content'] = array(
    'name' => 'edit any erpal_contact content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_contract content'.
  $permissions['edit any erpal_contract content'] = array(
    'name' => 'edit any erpal_contract content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_crm_activity content'.
  $permissions['edit any erpal_crm_activity content'] = array(
    'name' => 'edit any erpal_crm_activity content',
    'roles' => array(
      'account manager' => 'account manager',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_customer_forecast content'.
  $permissions['edit any erpal_customer_forecast content'] = array(
    'name' => 'edit any erpal_customer_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_date content'.
  $permissions['edit any erpal_date content'] = array(
    'name' => 'edit any erpal_date content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_expense_forecast content'.
  $permissions['edit any erpal_expense_forecast content'] = array(
    'name' => 'edit any erpal_expense_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_file content'.
  $permissions['edit any erpal_file content'] = array(
    'name' => 'edit any erpal_file content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_invoice content'.
  $permissions['edit any erpal_invoice content'] = array(
    'name' => 'edit any erpal_invoice content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_project content'.
  $permissions['edit any erpal_project content'] = array(
    'name' => 'edit any erpal_project content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_project_release content'.
  $permissions['edit any erpal_project_release content'] = array(
    'name' => 'edit any erpal_project_release content',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_task content'.
  $permissions['edit any erpal_task content'] = array(
    'name' => 'edit any erpal_task content',
    'roles' => array(
      'external developer' => 'external developer',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_timetracking content'.
  $permissions['edit any erpal_timetracking content'] = array(
    'name' => 'edit any erpal_timetracking content',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erpal_working_time content'.
  $permissions['edit any erpal_working_time content'] = array(
    'name' => 'edit any erpal_working_time content',
    'roles' => array(
      'controller' => 'controller',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any front_page_slide content'.
  $permissions['edit any front_page_slide content'] = array(
    'name' => 'edit any front_page_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any image_gallery content'.
  $permissions['edit any image_gallery content'] = array(
    'name' => 'edit any image_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'controller' => 'controller',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any recommended_vendor content'.
  $permissions['edit any recommended_vendor content'] = array(
    'name' => 'edit any recommended_vendor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any service content'.
  $permissions['edit any service content'] = array(
    'name' => 'edit any service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any testimonial content'.
  $permissions['edit any testimonial content'] = array(
    'name' => 'edit any testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any timetracking'.
  $permissions['edit any timetracking'] = array(
    'name' => 'edit any timetracking',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'timetracking',
  );

  // Exported permission: 'edit any web_page content'.
  $permissions['edit any web_page content'] = array(
    'name' => 'edit any web_page content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(),
    'module' => 'comment',
  );

  // Exported permission: 'edit own contract profile'.
  $permissions['edit own contract profile'] = array(
    'name' => 'edit own contract profile',
    'roles' => array(
      'controller' => 'controller',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own erpal_book content'.
  $permissions['edit own erpal_book content'] = array(
    'name' => 'edit own erpal_book content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_book_page content'.
  $permissions['edit own erpal_book_page content'] = array(
    'name' => 'edit own erpal_book_page content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_contact content'.
  $permissions['edit own erpal_contact content'] = array(
    'name' => 'edit own erpal_contact content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_contract content'.
  $permissions['edit own erpal_contract content'] = array(
    'name' => 'edit own erpal_contract content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_crm_activity content'.
  $permissions['edit own erpal_crm_activity content'] = array(
    'name' => 'edit own erpal_crm_activity content',
    'roles' => array(
      'account manager' => 'account manager',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_customer_forecast content'.
  $permissions['edit own erpal_customer_forecast content'] = array(
    'name' => 'edit own erpal_customer_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_date content'.
  $permissions['edit own erpal_date content'] = array(
    'name' => 'edit own erpal_date content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_expense_forecast content'.
  $permissions['edit own erpal_expense_forecast content'] = array(
    'name' => 'edit own erpal_expense_forecast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_file content'.
  $permissions['edit own erpal_file content'] = array(
    'name' => 'edit own erpal_file content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_invoice content'.
  $permissions['edit own erpal_invoice content'] = array(
    'name' => 'edit own erpal_invoice content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_project content'.
  $permissions['edit own erpal_project content'] = array(
    'name' => 'edit own erpal_project content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_project_release content'.
  $permissions['edit own erpal_project_release content'] = array(
    'name' => 'edit own erpal_project_release content',
    'roles' => array(
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_task content'.
  $permissions['edit own erpal_task content'] = array(
    'name' => 'edit own erpal_task content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_timetracking content'.
  $permissions['edit own erpal_timetracking content'] = array(
    'name' => 'edit own erpal_timetracking content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erpal_working_time content'.
  $permissions['edit own erpal_working_time content'] = array(
    'name' => 'edit own erpal_working_time content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own front_page_slide content'.
  $permissions['edit own front_page_slide content'] = array(
    'name' => 'edit own front_page_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own image_gallery content'.
  $permissions['edit own image_gallery content'] = array(
    'name' => 'edit own image_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own recommended_vendor content'.
  $permissions['edit own recommended_vendor content'] = array(
    'name' => 'edit own recommended_vendor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own service content'.
  $permissions['edit own service content'] = array(
    'name' => 'edit own service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own testimonial content'.
  $permissions['edit own testimonial content'] = array(
    'name' => 'edit own testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own timetracking'.
  $permissions['edit own timetracking'] = array(
    'name' => 'edit own timetracking',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'timetracking',
  );

  // Exported permission: 'edit own web_page content'.
  $permissions['edit own web_page content'] = array(
    'name' => 'edit own web_page content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit payment entity'.
  $permissions['edit payment entity'] = array(
    'name' => 'edit payment entity',
    'roles' => array(),
    'module' => 'payment',
  );

  // Exported permission: 'edit relations'.
  $permissions['edit relations'] = array(
    'name' => 'edit relations',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'edit terms in activity_lost_reasons'.
  $permissions['edit terms in activity_lost_reasons'] = array(
    'name' => 'edit terms in activity_lost_reasons',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in activity_origin'.
  $permissions['edit terms in activity_origin'] = array(
    'name' => 'edit terms in activity_origin',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in activity_status_terms'.
  $permissions['edit terms in activity_status_terms'] = array(
    'name' => 'edit terms in activity_status_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in address_types'.
  $permissions['edit terms in address_types'] = array(
    'name' => 'edit terms in address_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in areas_to_be_painted'.
  $permissions['edit terms in areas_to_be_painted'] = array(
    'name' => 'edit terms in areas_to_be_painted',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in book_tags'.
  $permissions['edit terms in book_tags'] = array(
    'name' => 'edit terms in book_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in communication_categories'.
  $permissions['edit terms in communication_categories'] = array(
    'name' => 'edit terms in communication_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in company_relation_tags'.
  $permissions['edit terms in company_relation_tags'] = array(
    'name' => 'edit terms in company_relation_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in contact_tags'.
  $permissions['edit terms in contact_tags'] = array(
    'name' => 'edit terms in contact_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in contract_types'.
  $permissions['edit terms in contract_types'] = array(
    'name' => 'edit terms in contract_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
    'name' => 'edit terms in countries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in county'.
  $permissions['edit terms in county'] = array(
    'name' => 'edit terms in county',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in date_item_tags'.
  $permissions['edit terms in date_item_tags'] = array(
    'name' => 'edit terms in date_item_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in expense_category_terms'.
  $permissions['edit terms in expense_category_terms'] = array(
    'name' => 'edit terms in expense_category_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in file_tags'.
  $permissions['edit terms in file_tags'] = array(
    'name' => 'edit terms in file_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in image_galleries'.
  $permissions['edit terms in image_galleries'] = array(
    'name' => 'edit terms in image_galleries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in number_types'.
  $permissions['edit terms in number_types'] = array(
    'name' => 'edit terms in number_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in paint_brands'.
  $permissions['edit terms in paint_brands'] = array(
    'name' => 'edit terms in paint_brands',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in paint_finishes'.
  $permissions['edit terms in paint_finishes'] = array(
    'name' => 'edit terms in paint_finishes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in paint_manufacturers'.
  $permissions['edit terms in paint_manufacturers'] = array(
    'name' => 'edit terms in paint_manufacturers',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in priority_terms'.
  $permissions['edit terms in priority_terms'] = array(
    'name' => 'edit terms in priority_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in production_team'.
  $permissions['edit terms in production_team'] = array(
    'name' => 'edit terms in production_team',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in project_role_tags'.
  $permissions['edit terms in project_role_tags'] = array(
    'name' => 'edit terms in project_role_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in project_status_terms'.
  $permissions['edit terms in project_status_terms'] = array(
    'name' => 'edit terms in project_status_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in project_tags'.
  $permissions['edit terms in project_tags'] = array(
    'name' => 'edit terms in project_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in room_names'.
  $permissions['edit terms in room_names'] = array(
    'name' => 'edit terms in room_names',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in salutation_terms'.
  $permissions['edit terms in salutation_terms'] = array(
    'name' => 'edit terms in salutation_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_category_terms'.
  $permissions['edit terms in service_category_terms'] = array(
    'name' => 'edit terms in service_category_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in target_audience_terms'.
  $permissions['edit terms in target_audience_terms'] = array(
    'name' => 'edit terms in target_audience_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in task_status_terms'.
  $permissions['edit terms in task_status_terms'] = array(
    'name' => 'edit terms in task_status_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in task_type_terms'.
  $permissions['edit terms in task_type_terms'] = array(
    'name' => 'edit terms in task_type_terms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform to erpal settings'.
  $permissions['edit webform to erpal settings'] = array(
    'name' => 'edit webform to erpal settings',
    'roles' => array(),
    'module' => 'webform_erpal_crm',
  );

  // Exported permission: 'edit working times offset'.
  $permissions['edit working times offset'] = array(
    'name' => 'edit working times offset',
    'roles' => array(
      'controller' => 'controller',
    ),
    'module' => 'erpal_employee_helper',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'export relation types'.
  $permissions['export relation types'] = array(
    'name' => 'export relation types',
    'roles' => array(),
    'module' => 'relation',
  );

  // Exported permission: 'field edit pricing'.
  $permissions['field edit pricing'] = array(
    'name' => 'field edit pricing',
    'roles' => array(
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'field edit task advanced'.
  $permissions['field edit task advanced'] = array(
    'name' => 'field edit task advanced',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'field edit timetracking duration'.
  $permissions['field edit timetracking duration'] = array(
    'name' => 'field edit timetracking duration',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'field view pricing'.
  $permissions['field view pricing'] = array(
    'name' => 'field view pricing',
    'roles' => array(
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'field view task advanced'.
  $permissions['field view task advanced'] = array(
    'name' => 'field view task advanced',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'field view timetracking duration'.
  $permissions['field view timetracking duration'] = array(
    'name' => 'field view timetracking duration',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_projects_helper',
  );

  // Exported permission: 'flag bookmark_flag'.
  $permissions['flag bookmark_flag'] = array(
    'name' => 'flag bookmark_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag project_subscriptions'.
  $permissions['flag project_subscriptions'] = array(
    'name' => 'flag project_subscriptions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag task_subscriptions'.
  $permissions['flag task_subscriptions'] = array(
    'name' => 'flag task_subscriptions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'get a system variable'.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'grant content access'.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(),
    'module' => 'content_access',
  );

  // Exported permission: 'grant own content access'.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(),
    'module' => 'content_access',
  );

  // Exported permission: 'import erpal_contact_nodes_contact_company feeds'.
  $permissions['import erpal_contact_nodes_contact_company feeds'] = array(
    'name' => 'import erpal_contact_nodes_contact_company feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import erpal_contact_nodes_contact_person feeds'.
  $permissions['import erpal_contact_nodes_contact_person feeds'] = array(
    'name' => 'import erpal_contact_nodes_contact_person feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'manage erpal_book aul access'.
  $permissions['manage erpal_book aul access'] = array(
    'name' => 'manage erpal_book aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_book_page aul access'.
  $permissions['manage erpal_book_page aul access'] = array(
    'name' => 'manage erpal_book_page aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_contact aul access'.
  $permissions['manage erpal_contact aul access'] = array(
    'name' => 'manage erpal_contact aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_contract aul access'.
  $permissions['manage erpal_contract aul access'] = array(
    'name' => 'manage erpal_contract aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_crm_activity aul access'.
  $permissions['manage erpal_crm_activity aul access'] = array(
    'name' => 'manage erpal_crm_activity aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_customer_forecast aul access'.
  $permissions['manage erpal_customer_forecast aul access'] = array(
    'name' => 'manage erpal_customer_forecast aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_date aul access'.
  $permissions['manage erpal_date aul access'] = array(
    'name' => 'manage erpal_date aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_expense_forecast aul access'.
  $permissions['manage erpal_expense_forecast aul access'] = array(
    'name' => 'manage erpal_expense_forecast aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_file aul access'.
  $permissions['manage erpal_file aul access'] = array(
    'name' => 'manage erpal_file aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_invoice aul access'.
  $permissions['manage erpal_invoice aul access'] = array(
    'name' => 'manage erpal_invoice aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_project aul access'.
  $permissions['manage erpal_project aul access'] = array(
    'name' => 'manage erpal_project aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_project_release aul access'.
  $permissions['manage erpal_project_release aul access'] = array(
    'name' => 'manage erpal_project_release aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_task aul access'.
  $permissions['manage erpal_task aul access'] = array(
    'name' => 'manage erpal_task aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_timetracking aul access'.
  $permissions['manage erpal_timetracking aul access'] = array(
    'name' => 'manage erpal_timetracking aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage erpal_working_time aul access'.
  $permissions['manage erpal_working_time aul access'] = array(
    'name' => 'manage erpal_working_time aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manage front_page_slide aul access'.
  $permissions['manage front_page_slide aul access'] = array(
    'name' => 'manage front_page_slide aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage image_gallery aul access'.
  $permissions['manage image_gallery aul access'] = array(
    'name' => 'manage image_gallery aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage recommended_vendor aul access'.
  $permissions['manage recommended_vendor aul access'] = array(
    'name' => 'manage recommended_vendor aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage service aul access'.
  $permissions['manage service aul access'] = array(
    'name' => 'manage service aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage testimonial aul access'.
  $permissions['manage testimonial aul access'] = array(
    'name' => 'manage testimonial aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage web_page aul access'.
  $permissions['manage web_page aul access'] = array(
    'name' => 'manage web_page aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'manage webform aul access'.
  $permissions['manage webform aul access'] = array(
    'name' => 'manage webform aul access',
    'roles' => array(),
    'module' => 'aul_ui',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'internal developer' => 'internal developer',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform unlimited index queries'.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'relation add endpoint autocomplete access'.
  $permissions['relation add endpoint autocomplete access'] = array(
    'name' => 'relation add endpoint autocomplete access',
    'roles' => array(),
    'module' => 'relation_add',
  );

  // Exported permission: 'remove reports from dashboard'.
  $permissions['remove reports from dashboard'] = array(
    'name' => 'remove reports from dashboard',
    'roles' => array(),
    'module' => 'erpal_reports',
  );

  // Exported permission: 'reply mails erpal crm activity'.
  $permissions['reply mails erpal crm activity'] = array(
    'name' => 'reply mails erpal crm activity',
    'roles' => array(),
    'module' => 'erpal_crm_helper',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'set a system variable'.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'tamper erpal_contact_nodes_contact_company'.
  $permissions['tamper erpal_contact_nodes_contact_company'] = array(
    'name' => 'tamper erpal_contact_nodes_contact_company',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper erpal_contact_nodes_contact_person'.
  $permissions['tamper erpal_contact_nodes_contact_person'] = array(
    'name' => 'tamper erpal_contact_nodes_contact_person',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'themekey_debug_see_messages'.
  $permissions['themekey_debug_see_messages'] = array(
    'name' => 'themekey_debug_see_messages',
    'roles' => array(),
    'module' => 'themekey_debug',
  );

  // Exported permission: 'timeracking export'.
  $permissions['timeracking export'] = array(
    'name' => 'timeracking export',
    'roles' => array(),
    'module' => 'erpal_timetracking_export',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: 'unflag bookmark_flag'.
  $permissions['unflag bookmark_flag'] = array(
    'name' => 'unflag bookmark_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag project_subscriptions'.
  $permissions['unflag project_subscriptions'] = array(
    'name' => 'unflag project_subscriptions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag task_subscriptions'.
  $permissions['unflag task_subscriptions'] = array(
    'name' => 'unflag task_subscriptions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unlock erpal_contact_nodes_contact_company feeds'.
  $permissions['unlock erpal_contact_nodes_contact_company feeds'] = array(
    'name' => 'unlock erpal_contact_nodes_contact_company feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock erpal_contact_nodes_contact_person feeds'.
  $permissions['unlock erpal_contact_nodes_contact_person feeds'] = array(
    'name' => 'unlock erpal_contact_nodes_contact_person feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'update ajax checklists'.
  $permissions['update ajax checklists'] = array(
    'name' => 'update ajax checklists',
    'roles' => array(),
    'module' => 'ajax_checklist',
  );

  // Exported permission: 'update any fullcalendar event'.
  $permissions['update any fullcalendar event'] = array(
    'name' => 'update any fullcalendar event',
    'roles' => array(),
    'module' => 'fullcalendar',
  );

  // Exported permission: 'update any simple_date date_item'.
  $permissions['update any simple_date date_item'] = array(
    'name' => 'update any simple_date date_item',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'date_item',
  );

  // Exported permission: 'update own simple_date date_item'.
  $permissions['update own simple_date date_item'] = array(
    'name' => 'update own simple_date date_item',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'date_item',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: 'use all savedsearches'.
  $permissions['use all savedsearches'] = array(
    'name' => 'use all savedsearches',
    'roles' => array(),
    'module' => 'views_savedsearches',
  );

  // Exported permission: 'use any shortcut key'.
  $permissions['use any shortcut key'] = array(
    'name' => 'use any shortcut key',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'shortcut_keys',
  );

  // Exported permission: 'use erpal_reports'.
  $permissions['use erpal_reports'] = array(
    'name' => 'use erpal_reports',
    'roles' => array(),
    'module' => 'erpal_reports',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use javascript shortcut type'.
  $permissions['use javascript shortcut type'] = array(
    'name' => 'use javascript shortcut type',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'shortcut_keys',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use quick timetracking'.
  $permissions['use quick timetracking'] = array(
    'name' => 'use quick timetracking',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'timetracking',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use url shortcut type'.
  $permissions['use url shortcut type'] = array(
    'name' => 'use url shortcut type',
    'roles' => array(),
    'module' => 'shortcut_keys',
  );

  // Exported permission: 'use views savedsearch'.
  $permissions['use views savedsearch'] = array(
    'name' => 'use views savedsearch',
    'roles' => array(),
    'module' => 'views_savedsearches',
  );

  // Exported permission: 'view active projects report'.
  $permissions['view active projects report'] = array(
    'name' => 'view active projects report',
    'roles' => array(),
    'module' => 'erpal_project_reports',
  );

  // Exported permission: 'view any billable'.
  $permissions['view any billable'] = array(
    'name' => 'view any billable',
    'roles' => array(
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'billable',
  );

  // Exported permission: 'view any budget'.
  $permissions['view any budget'] = array(
    'name' => 'view any budget',
    'roles' => array(
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'budget',
  );

  // Exported permission: 'view any contract profile'.
  $permissions['view any contract profile'] = array(
    'name' => 'view any contract profile',
    'roles' => array(
      'controller' => 'controller',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any erpal_book content'.
  $permissions['view any erpal_book content'] = array(
    'name' => 'view any erpal_book content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_book_page content'.
  $permissions['view any erpal_book_page content'] = array(
    'name' => 'view any erpal_book_page content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_contact content'.
  $permissions['view any erpal_contact content'] = array(
    'name' => 'view any erpal_contact content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_contract content'.
  $permissions['view any erpal_contract content'] = array(
    'name' => 'view any erpal_contract content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_crm_activity content'.
  $permissions['view any erpal_crm_activity content'] = array(
    'name' => 'view any erpal_crm_activity content',
    'roles' => array(
      'account manager' => 'account manager',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_customer_forecast content'.
  $permissions['view any erpal_customer_forecast content'] = array(
    'name' => 'view any erpal_customer_forecast content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_date content'.
  $permissions['view any erpal_date content'] = array(
    'name' => 'view any erpal_date content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_expense_forecast content'.
  $permissions['view any erpal_expense_forecast content'] = array(
    'name' => 'view any erpal_expense_forecast content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_file content'.
  $permissions['view any erpal_file content'] = array(
    'name' => 'view any erpal_file content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_invoice content'.
  $permissions['view any erpal_invoice content'] = array(
    'name' => 'view any erpal_invoice content',
    'roles' => array(
      'controller' => 'controller',
      'financial user' => 'financial user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_project content'.
  $permissions['view any erpal_project content'] = array(
    'name' => 'view any erpal_project content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_project_release content'.
  $permissions['view any erpal_project_release content'] = array(
    'name' => 'view any erpal_project_release content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_task content'.
  $permissions['view any erpal_task content'] = array(
    'name' => 'view any erpal_task content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_timetracking content'.
  $permissions['view any erpal_timetracking content'] = array(
    'name' => 'view any erpal_timetracking content',
    'roles' => array(
      'account manager' => 'account manager',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any erpal_working_time content'.
  $permissions['view any erpal_working_time content'] = array(
    'name' => 'view any erpal_working_time content',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any front_page_slide content'.
  $permissions['view any front_page_slide content'] = array(
    'name' => 'view any front_page_slide content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any image_gallery content'.
  $permissions['view any image_gallery content'] = array(
    'name' => 'view any image_gallery content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any recommended_vendor content'.
  $permissions['view any recommended_vendor content'] = array(
    'name' => 'view any recommended_vendor content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any service content'.
  $permissions['view any service content'] = array(
    'name' => 'view any service content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any testimonial content'.
  $permissions['view any testimonial content'] = array(
    'name' => 'view any testimonial content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any timekeeping'.
  $permissions['view any timekeeping'] = array(
    'name' => 'view any timekeeping',
    'roles' => array(
      'controller' => 'controller',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_employee_helper',
  );

  // Exported permission: 'view any timetracking'.
  $permissions['view any timetracking'] = array(
    'name' => 'view any timetracking',
    'roles' => array(
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'timetracking',
  );

  // Exported permission: 'view any web_page content'.
  $permissions['view any web_page content'] = array(
    'name' => 'view any web_page content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view any webform content'.
  $permissions['view any webform content'] = array(
    'name' => 'view any webform content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view crm customers report'.
  $permissions['view crm customers report'] = array(
    'name' => 'view crm customers report',
    'roles' => array(),
    'module' => 'erpal_crm_reports',
  );

  // Exported permission: 'view crm expense forecast plan'.
  $permissions['view crm expense forecast plan'] = array(
    'name' => 'view crm expense forecast plan',
    'roles' => array(),
    'module' => 'erpal_crm_reports',
  );

  // Exported permission: 'view crm expense report'.
  $permissions['view crm expense report'] = array(
    'name' => 'view crm expense report',
    'roles' => array(),
    'module' => 'erpal_crm_reports',
  );

  // Exported permission: 'view crm lead report'.
  $permissions['view crm lead report'] = array(
    'name' => 'view crm lead report',
    'roles' => array(),
    'module' => 'erpal_crm_reports',
  );

  // Exported permission: 'view crm sales forecast plan'.
  $permissions['view crm sales forecast plan'] = array(
    'name' => 'view crm sales forecast plan',
    'roles' => array(),
    'module' => 'erpal_crm_reports',
  );

  // Exported permission: 'view crm sales forecast report'.
  $permissions['view crm sales forecast report'] = array(
    'name' => 'view crm sales forecast report',
    'roles' => array(),
    'module' => 'erpal_crm_reports',
  );

  // Exported permission: 'view crm sales report'.
  $permissions['view crm sales report'] = array(
    'name' => 'view crm sales report',
    'roles' => array(),
    'module' => 'erpal_crm_reports',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view own contract profile'.
  $permissions['view own contract profile'] = array(
    'name' => 'view own contract profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own erpal_book content'.
  $permissions['view own erpal_book content'] = array(
    'name' => 'view own erpal_book content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_book_page content'.
  $permissions['view own erpal_book_page content'] = array(
    'name' => 'view own erpal_book_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_contact content'.
  $permissions['view own erpal_contact content'] = array(
    'name' => 'view own erpal_contact content',
    'roles' => array(
      'account manager' => 'account manager',
      'authenticated user' => 'authenticated user',
      'controller' => 'controller',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_contract content'.
  $permissions['view own erpal_contract content'] = array(
    'name' => 'view own erpal_contract content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_crm_activity content'.
  $permissions['view own erpal_crm_activity content'] = array(
    'name' => 'view own erpal_crm_activity content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_customer_forecast content'.
  $permissions['view own erpal_customer_forecast content'] = array(
    'name' => 'view own erpal_customer_forecast content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_date content'.
  $permissions['view own erpal_date content'] = array(
    'name' => 'view own erpal_date content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_expense_forecast content'.
  $permissions['view own erpal_expense_forecast content'] = array(
    'name' => 'view own erpal_expense_forecast content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_file content'.
  $permissions['view own erpal_file content'] = array(
    'name' => 'view own erpal_file content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_invoice content'.
  $permissions['view own erpal_invoice content'] = array(
    'name' => 'view own erpal_invoice content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_project content'.
  $permissions['view own erpal_project content'] = array(
    'name' => 'view own erpal_project content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_project_release content'.
  $permissions['view own erpal_project_release content'] = array(
    'name' => 'view own erpal_project_release content',
    'roles' => array(
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_task content'.
  $permissions['view own erpal_task content'] = array(
    'name' => 'view own erpal_task content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_timetracking content'.
  $permissions['view own erpal_timetracking content'] = array(
    'name' => 'view own erpal_timetracking content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own erpal_working_time content'.
  $permissions['view own erpal_working_time content'] = array(
    'name' => 'view own erpal_working_time content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own front_page_slide content'.
  $permissions['view own front_page_slide content'] = array(
    'name' => 'view own front_page_slide content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own image_gallery content'.
  $permissions['view own image_gallery content'] = array(
    'name' => 'view own image_gallery content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own recommended_vendor content'.
  $permissions['view own recommended_vendor content'] = array(
    'name' => 'view own recommended_vendor content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own service content'.
  $permissions['view own service content'] = array(
    'name' => 'view own service content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own simple_date date_item'.
  $permissions['view own simple_date date_item'] = array(
    'name' => 'view own simple_date date_item',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'date_item',
  );

  // Exported permission: 'view own testimonial content'.
  $permissions['view own testimonial content'] = array(
    'name' => 'view own testimonial content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view own web_page content'.
  $permissions['view own web_page content'] = array(
    'name' => 'view own web_page content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view own webform content'.
  $permissions['view own webform content'] = array(
    'name' => 'view own webform content',
    'roles' => array(),
    'module' => 'content_access_view',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'view payment entity'.
  $permissions['view payment entity'] = array(
    'name' => 'view payment entity',
    'roles' => array(),
    'module' => 'payment',
  );

  // Exported permission: 'view project management report'.
  $permissions['view project management report'] = array(
    'name' => 'view project management report',
    'roles' => array(),
    'module' => 'erpal_project_reports',
  );

  // Exported permission: 'view project profit report'.
  $permissions['view project profit report'] = array(
    'name' => 'view project profit report',
    'roles' => array(),
    'module' => 'erpal_project_reports',
  );

  // Exported permission: 'view project releases'.
  $permissions['view project releases'] = array(
    'name' => 'view project releases',
    'roles' => array(),
    'module' => 'erpal_project_release_ui',
  );

  // Exported permission: 'view project timetracking report'.
  $permissions['view project timetracking report'] = array(
    'name' => 'view project timetracking report',
    'roles' => array(),
    'module' => 'erpal_project_reports',
  );

  // Exported permission: 'view reports dashboard'.
  $permissions['view reports dashboard'] = array(
    'name' => 'view reports dashboard',
    'roles' => array(),
    'module' => 'erpal_reports',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view simple_date date_item'.
  $permissions['view simple_date date_item'] = array(
    'name' => 'view simple_date date_item',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'date_item',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'view timekeeping'.
  $permissions['view timekeeping'] = array(
    'name' => 'view timekeeping',
    'roles' => array(
      'account manager' => 'account manager',
      'controller' => 'controller',
      'external developer' => 'external developer',
      'financial user' => 'financial user',
      'internal developer' => 'internal developer',
      'project manager' => 'project manager',
    ),
    'module' => 'erpal_employee_helper',
  );

  return $permissions;
}
