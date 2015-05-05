<?php
/**
 * @file
 * painting_company_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function painting_company_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: devel_clear-cache:devel/cache/clear
  $menu_links['devel_clear-cache:devel/cache/clear'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/cache/clear',
    'router_path' => 'devel/cache/clear',
    'link_title' => 'Clear cache',
    'options' => array(
      'attributes' => array(
        'title' => 'Clear the CSS cache and all database cache tables which store page, node, theme and variable caches.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_clear-cache:devel/cache/clear',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_devel-settings:devel/settings
  $menu_links['devel_devel-settings:devel/settings'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/settings',
    'router_path' => 'devel/settings',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
      'identifier' => 'devel_devel-settings:devel/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_entity-info:devel/entity/info
  $menu_links['devel_entity-info:devel/entity/info'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/entity/info',
    'router_path' => 'devel/entity/info',
    'link_title' => 'Entity info',
    'options' => array(
      'attributes' => array(
        'title' => 'View entity information across the whole site.',
      ),
      'identifier' => 'devel_entity-info:devel/entity/info',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_execute-php-code:devel/php
  $menu_links['devel_execute-php-code:devel/php'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/php',
    'router_path' => 'devel/php',
    'link_title' => 'Execute PHP Code',
    'options' => array(
      'attributes' => array(
        'title' => 'Execute some PHP code',
      ),
      'identifier' => 'devel_execute-php-code:devel/php',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_field-info:devel/field/info
  $menu_links['devel_field-info:devel/field/info'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/field/info',
    'router_path' => 'devel/field/info',
    'link_title' => 'Field info',
    'options' => array(
      'attributes' => array(
        'title' => 'View fields information across the whole site.',
      ),
      'identifier' => 'devel_field-info:devel/field/info',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_function-reference:devel/reference
  $menu_links['devel_function-reference:devel/reference'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reference',
    'router_path' => 'devel/reference',
    'link_title' => 'Function reference',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of currently defined user functions with documentation links.',
      ),
      'identifier' => 'devel_function-reference:devel/reference',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_hookelements:devel/elements
  $menu_links['devel_hookelements:devel/elements'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/elements',
    'router_path' => 'devel/elements',
    'link_title' => 'Hook_elements()',
    'options' => array(
      'attributes' => array(
        'title' => 'View the active form/render elements for this site.',
      ),
      'identifier' => 'devel_hookelements:devel/elements',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_menu-item:devel/menu/item
  $menu_links['devel_menu-item:devel/menu/item'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/item',
    'router_path' => 'devel/menu/item',
    'link_title' => 'Menu item',
    'options' => array(
      'attributes' => array(
        'title' => 'Details about a given menu item.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_menu-item:devel/menu/item',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_phpinfo:devel/phpinfo
  $menu_links['devel_phpinfo:devel/phpinfo'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/phpinfo',
    'router_path' => 'devel/phpinfo',
    'link_title' => 'PHPinfo()',
    'options' => array(
      'attributes' => array(
        'title' => 'View your server\'s PHP configuration',
      ),
      'identifier' => 'devel_phpinfo:devel/phpinfo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_rebuild-menus:devel/menu/reset
  $menu_links['devel_rebuild-menus:devel/menu/reset'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/reset',
    'router_path' => 'devel/menu/reset',
    'link_title' => 'Rebuild menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Rebuild menu based on hook_menu() and revert any custom changes. All menu items return to their default settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_rebuild-menus:devel/menu/reset',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_reinstall-modules:devel/reinstall
  $menu_links['devel_reinstall-modules:devel/reinstall'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reinstall',
    'router_path' => 'devel/reinstall',
    'link_title' => 'Reinstall modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Run hook_uninstall() and then hook_install() for a given module.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_reinstall-modules:devel/reinstall',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_run-cron:devel/run-cron
  $menu_links['devel_run-cron:devel/run-cron'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/run-cron',
    'router_path' => 'devel/run-cron',
    'link_title' => 'Run cron',
    'options' => array(
      'identifier' => 'devel_run-cron:devel/run-cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_session-viewer:devel/session
  $menu_links['devel_session-viewer:devel/session'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/session',
    'router_path' => 'devel/session',
    'link_title' => 'Session viewer',
    'options' => array(
      'attributes' => array(
        'title' => 'List the contents of $_SESSION.',
      ),
      'identifier' => 'devel_session-viewer:devel/session',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_theme-registry:devel/theme/registry
  $menu_links['devel_theme-registry:devel/theme/registry'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/theme/registry',
    'router_path' => 'devel/theme/registry',
    'link_title' => 'Theme registry',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of available theme functions across the whole site.',
      ),
      'identifier' => 'devel_theme-registry:devel/theme/registry',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_variable-editor:devel/variable
  $menu_links['devel_variable-editor:devel/variable'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/variable',
    'router_path' => 'devel/variable',
    'link_title' => 'Variable editor',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit and delete site variables.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_variable-editor:devel/variable',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_about-us:node/24
  $menu_links['main-menu_about-us:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => 'About the Painting Company',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_about-us:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_anne-arundel:customer-references
  $menu_links['main-menu_anne-arundel:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Anne Arundel',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 347,
      ),
      'identifier' => 'main-menu_anne-arundel:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_baltimore:customer-references
  $menu_links['main-menu_baltimore:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Baltimore',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 348,
      ),
      'identifier' => 'main-menu_baltimore:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_cabinet-painting:node/108
  $menu_links['main-menu_cabinet-painting:node/108'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/108',
    'router_path' => 'node/%',
    'link_title' => 'Cabinet Painting',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_cabinet-painting:node/108',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_photo-galleries:photo-galleries',
  );
  // Exported menu link: main-menu_carpentry:node/109
  $menu_links['main-menu_carpentry:node/109'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/109',
    'router_path' => 'node/%',
    'link_title' => 'Carpentry',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_carpentry:node/109',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_photo-galleries:photo-galleries',
  );
  // Exported menu link: main-menu_carroll:customer-references
  $menu_links['main-menu_carroll:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Carroll',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 349,
      ),
      'identifier' => 'main-menu_carroll:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_contact:node/40
  $menu_links['main-menu_contact:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contact:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_customer-references:customer-references
  $menu_links['main-menu_customer-references:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Customer References',
    'options' => array(
      'identifier' => 'main-menu_customer-references:customer-references',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_district-of-columbia:customer-references
  $menu_links['main-menu_district-of-columbia:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'District of Columbia',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 350,
      ),
      'identifier' => 'main-menu_district-of-columbia:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_eastern-shore:customer-references
  $menu_links['main-menu_eastern-shore:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Eastern Shore',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 351,
      ),
      'identifier' => 'main-menu_eastern-shore:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_exterior-painting:node/107
  $menu_links['main-menu_exterior-painting:node/107'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/107',
    'router_path' => 'node/%',
    'link_title' => 'Exterior Painting',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_exterior-painting:node/107',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_photo-galleries:photo-galleries',
  );
  // Exported menu link: main-menu_extreme-makeover-home-addition:node/110
  $menu_links['main-menu_extreme-makeover-home-addition:node/110'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/110',
    'router_path' => 'node/%',
    'link_title' => 'Extreme Makeover Home Addition',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_extreme-makeover-home-addition:node/110',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_photo-galleries:photo-galleries',
  );
  // Exported menu link: main-menu_frederick:customer-references
  $menu_links['main-menu_frederick:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Frederick',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 352,
      ),
      'identifier' => 'main-menu_frederick:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_home-improvement:node/111
  $menu_links['main-menu_home-improvement:node/111'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/111',
    'router_path' => 'node/%',
    'link_title' => 'Home Improvement',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home-improvement:node/111',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_photo-galleries:photo-galleries',
  );
  // Exported menu link: main-menu_home:node/26
  $menu_links['main-menu_home:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_howard:customer-references
  $menu_links['main-menu_howard:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Howard',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 353,
      ),
      'identifier' => 'main-menu_howard:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_interior-painting:node/112
  $menu_links['main-menu_interior-painting:node/112'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/112',
    'router_path' => 'node/%',
    'link_title' => 'Interior Painting',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_interior-painting:node/112',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_photo-galleries:photo-galleries',
  );
  // Exported menu link: main-menu_meet-the-mgmt:node/37
  $menu_links['main-menu_meet-the-mgmt:node/37'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Meet the Mgmt',
    'options' => array(
      'attributes' => array(
        'title' => 'Meet our Management Team',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_meet-the-mgmt:node/37',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_about-us:node/24',
  );
  // Exported menu link: main-menu_montgomery:customer-references
  $menu_links['main-menu_montgomery:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Montgomery',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 354,
      ),
      'identifier' => 'main-menu_montgomery:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_northen-virginia:customer-references
  $menu_links['main-menu_northen-virginia:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Northen Virginia',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 355,
      ),
      'identifier' => 'main-menu_northen-virginia:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_our-edge:node/25
  $menu_links['main-menu_our-edge:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Our Edge',
    'options' => array(
      'attributes' => array(
        'title' => 'The Painting Company Edge',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_our-edge:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_photo-galleries:photo-galleries
  $menu_links['main-menu_photo-galleries:photo-galleries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'photo-galleries',
    'router_path' => 'photo-galleries',
    'link_title' => 'Photo Galleries',
    'options' => array(
      'identifier' => 'main-menu_photo-galleries:photo-galleries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_powerwashing:node/113
  $menu_links['main-menu_powerwashing:node/113'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/113',
    'router_path' => 'node/%',
    'link_title' => 'Powerwashing',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_powerwashing:node/113',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_photo-galleries:photo-galleries',
  );
  // Exported menu link: main-menu_prince-georges:customer-references
  $menu_links['main-menu_prince-georges:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Prince George\'s',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 356,
      ),
      'identifier' => 'main-menu_prince-georges:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_services:service-listing/all
  $menu_links['main-menu_services:service-listing/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'service-listing/all',
    'router_path' => 'service-listing/%',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_services:service-listing/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_southern-maryland:customer-references
  $menu_links['main-menu_southern-maryland:customer-references'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-references',
    'router_path' => 'customer-references',
    'link_title' => 'Southern Maryland',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'field_county_tid' => 357,
      ),
      'identifier' => 'main-menu_southern-maryland:customer-references',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'main-menu_customer-references:customer-references',
  );
  // Exported menu link: main-menu_specialty-painting:node/114
  $menu_links['main-menu_specialty-painting:node/114'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/114',
    'router_path' => 'node/%',
    'link_title' => 'Specialty Painting',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_specialty-painting:node/114',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_photo-galleries:photo-galleries',
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_actions:admin/config/system/actions
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Exported menu link: management_administration:admin
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_administration:admin/config/administration
  $menu_links['management_administration:admin/config/administration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration',
    'router_path' => 'admin/config/administration',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administration tools.',
      ),
      'identifier' => 'management_administration:admin/config/administration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_appearance:admin/appearance
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_arrange:admin/config/front/arrange
  $menu_links['management_arrange:admin/config/front/arrange'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/front/arrange',
    'router_path' => 'admin/config/front/arrange',
    'link_title' => 'Arrange',
    'options' => array(
      'attributes' => array(
        'title' => 'Ability to re-arrange what order front page roles are processed.',
      ),
      'identifier' => 'management_arrange:admin/config/front/arrange',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'management_front-page:admin/config/front',
  );
  // Exported menu link: management_available-updates:admin/reports/updates
  $menu_links['management_available-updates:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
      'identifier' => 'management_available-updates:admin/reports/updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_billable-config:admin/config/billable
  $menu_links['management_billable-config:admin/config/billable'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/billable',
    'router_path' => 'admin/config/billable',
    'link_title' => 'Billable config',
    'options' => array(
      'identifier' => 'management_billable-config:admin/config/billable',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_billable-types:admin/structure/billable
  $menu_links['management_billable-types:admin/structure/billable'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/billable',
    'router_path' => 'admin/structure/billable',
    'link_title' => 'Billable Types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Billable Types.',
      ),
      'identifier' => 'management_billable-types:admin/structure/billable',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_blocks:admin/structure/block
  $menu_links['management_blocks:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
      'identifier' => 'management_blocks:admin/structure/block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_budget-types:admin/structure/budget
  $menu_links['management_budget-types:admin/structure/budget'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/budget',
    'router_path' => 'admin/structure/budget',
    'link_title' => 'Budget Types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Budget Types.',
      ),
      'identifier' => 'management_budget-types:admin/structure/budget',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_colorbox:admin/config/media/colorbox
  $menu_links['management_colorbox:admin/config/media/colorbox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/colorbox',
    'router_path' => 'admin/config/media/colorbox',
    'link_title' => 'Colorbox',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust Colorbox settings.',
      ),
      'identifier' => 'management_colorbox:admin/config/media/colorbox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_colors:admin/config/user-interface/colors
  $menu_links['management_colors:admin/config/user-interface/colors'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/colors',
    'router_path' => 'admin/config/user-interface/colors',
    'link_title' => 'Colors',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust Colors settings.',
      ),
      'identifier' => 'management_colors:admin/config/user-interface/colors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_comments:admin/content/comment
  $menu_links['management_comments:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
      'identifier' => 'management_comments:admin/content/comment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_configuration:admin/config
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_content-authoring:admin/config/content
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_content-types:admin/structure/types
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_content:admin/content
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_copy-messages-text-fields:admin/config/system/message/text-copy
  $menu_links['management_copy-messages-text-fields:admin/config/system/message/text-copy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/message/text-copy',
    'router_path' => 'admin/config/system/message/text-copy',
    'link_title' => 'Copy messages text fields',
    'options' => array(
      'attributes' => array(
        'title' => 'Copy messages text fields from one language to others',
      ),
      'identifier' => 'management_copy-messages-text-fields:admin/config/system/message/text-copy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_message-settings:admin/config/system/message',
  );
  // Exported menu link: management_cron-settings:admin/config/system/cron
  $menu_links['management_cron-settings:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'View and manage cron table',
      ),
      'identifier' => 'management_cron-settings:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_date-api:admin/config/date
  $menu_links['management_date-api:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
      'identifier' => 'management_date-api:admin/config/date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_date-item-types:admin/structure/date_item/date_item_types
  $menu_links['management_date-item-types:admin/structure/date_item/date_item_types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/date_item/date_item_types',
    'router_path' => 'admin/structure/date_item/date_item_types',
    'link_title' => 'date item types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage date_item entity types, including adding and removing fields and the display of fields.',
      ),
      'identifier' => 'management_date-item-types:admin/structure/date_item/date_item_types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-item:admin/structure/date_item',
  );
  // Exported menu link: management_date-item:admin/structure/date_item
  $menu_links['management_date-item:admin/structure/date_item'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/date_item',
    'router_path' => 'admin/structure/date_item',
    'link_title' => 'Date item',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer date_item items',
      ),
      'identifier' => 'management_date-item:admin/structure/date_item',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_date-popup:admin/config/date/date_popup
  $menu_links['management_date-popup:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
      'identifier' => 'management_date-popup:admin/config/date/date_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_devel-settings:admin/config/development/devel
  $menu_links['management_devel-settings:admin/config/development/devel'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/devel',
    'router_path' => 'admin/config/development/devel',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
      'identifier' => 'management_devel-settings:admin/config/development/devel',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_development:admin/config/development
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_diff:admin/config/content/diff
  $menu_links['management_diff:admin/config/content/diff'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/diff',
    'router_path' => 'admin/config/content/diff',
    'link_title' => 'Diff',
    'options' => array(
      'attributes' => array(
        'title' => 'Diff settings.',
      ),
      'identifier' => 'management_diff:admin/config/content/diff',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_display-suite:admin/structure/ds
  $menu_links['management_display-suite:admin/structure/ds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds',
    'router_path' => 'admin/structure/ds',
    'link_title' => 'Display suite',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage configuration for Display suite like fields, view modes etc.',
      ),
      'identifier' => 'management_display-suite:admin/structure/ds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_emergency:admin/structure/ds/emergency
  $menu_links['management_emergency:admin/structure/ds/emergency'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds/emergency',
    'router_path' => 'admin/structure/ds/emergency',
    'link_title' => 'Emergency',
    'options' => array(
      'attributes' => array(
        'title' => 'In case you have errors via Display suite, visit this page.',
      ),
      'identifier' => 'management_emergency:admin/structure/ds/emergency',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 100,
    'customized' => 0,
    'parent_identifier' => 'management_display-suite:admin/structure/ds',
  );
  // Exported menu link: management_erpal-reports-types:admin/structure/erpal/report-types
  $menu_links['management_erpal-reports-types:admin/structure/erpal/report-types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/erpal/report-types',
    'router_path' => 'admin/structure/erpal/report-types',
    'link_title' => 'ERPAL Reports types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage ERPAL Reports types.',
      ),
      'identifier' => 'management_erpal-reports-types:admin/structure/erpal/report-types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_erpal-reports:admin/config/erpal/reports
  $menu_links['management_erpal-reports:admin/config/erpal/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/erpal/reports',
    'router_path' => 'admin/config/erpal/reports',
    'link_title' => 'Erpal Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Erpal Reports.',
      ),
      'identifier' => 'management_erpal-reports:admin/config/erpal/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_erpal:admin/erpal
  $menu_links['management_erpal:admin/erpal'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/erpal',
    'router_path' => 'admin/erpal',
    'link_title' => 'ERPAL',
    'options' => array(
      'identifier' => 'management_erpal:admin/erpal',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_features:admin/structure/features
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_feeds-log:admin/reports/feeds
  $menu_links['management_feeds-log:admin/reports/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/feeds',
    'router_path' => 'admin/reports/feeds',
    'link_title' => 'Feeds log',
    'options' => array(
      'attributes' => array(
        'title' => 'Review log messages of imports and subscriptions to feeds.',
      ),
      'identifier' => 'management_feeds-log:admin/reports/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_field-collections:admin/structure/field-collections
  $menu_links['management_field-collections:admin/structure/field-collections'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/field-collections',
    'router_path' => 'admin/structure/field-collections',
    'link_title' => 'Field collections',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage fields on field collections.',
      ),
      'identifier' => 'management_field-collections:admin/structure/field-collections',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_field-list:admin/reports/fields
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_fields:admin/structure/ds/fields
  $menu_links['management_fields:admin/structure/ds/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds/fields',
    'router_path' => 'admin/structure/ds/fields',
    'link_title' => 'Fields',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage fields for all content.',
      ),
      'identifier' => 'management_fields:admin/structure/ds/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_display-suite:admin/structure/ds',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_flags:admin/structure/flags
  $menu_links['management_flags:admin/structure/flags'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/flags',
    'router_path' => 'admin/structure/flags',
    'link_title' => 'Flags',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure flags for marking content with arbitrary information (such as <em>offensive</em> or <em>bookmarked</em>).',
      ),
      'identifier' => 'management_flags:admin/structure/flags',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_front-page:admin/config/front
  $menu_links['management_front-page:admin/config/front'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/front',
    'router_path' => 'admin/config/front',
    'link_title' => 'Front Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure front page.',
      ),
      'identifier' => 'management_front-page:admin/config/front',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_fullcalendar:admin/config/user-interface/fullcalendar
  $menu_links['management_fullcalendar:admin/config/user-interface/fullcalendar'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/fullcalendar',
    'router_path' => 'admin/config/user-interface/fullcalendar',
    'link_title' => 'FullCalendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust FullCalendar settings.',
      ),
      'identifier' => 'management_fullcalendar:admin/config/user-interface/fullcalendar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_generate-relations:admin/config/development/generate/relation
  $menu_links['management_generate-relations:admin/config/development/generate/relation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/relation',
    'router_path' => 'admin/config/development/generate/relation',
    'link_title' => 'Generate relations',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate relations for testing.',
      ),
      'identifier' => 'management_generate-relations:admin/config/development/generate/relation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_home-links:admin/config/front/home-links
  $menu_links['management_home-links:admin/config/front/home-links'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/front/home-links',
    'router_path' => 'admin/config/front/home-links',
    'link_title' => 'Home links',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows you to change the location of the &lt;front&gt; placeholder.',
      ),
      'identifier' => 'management_home-links:admin/config/front/home-links',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'management_front-page:admin/config/front',
  );
  // Exported menu link: management_homebox:admin/structure/homebox
  $menu_links['management_homebox:admin/structure/homebox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/homebox',
    'router_path' => 'admin/structure/homebox',
    'link_title' => 'Homebox',
    'options' => array(
      'attributes' => array(
        'title' => 'List, edit, or add homebox pages.',
      ),
      'identifier' => 'management_homebox:admin/structure/homebox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_imce:admin/config/media/imce
  $menu_links['management_imce:admin/config/media/imce'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/imce',
    'router_path' => 'admin/config/media/imce',
    'link_title' => 'IMCE',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how your image/file browser works.',
      ),
      'identifier' => 'management_imce:admin/config/media/imce',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_jquery-multi-settings:admin/config/system/jqmulti
  $menu_links['management_jquery-multi-settings:admin/config/system/jqmulti'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/jqmulti',
    'router_path' => 'admin/config/system/jqmulti',
    'link_title' => 'jQuery Multi Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for jQuery Multi module',
      ),
      'identifier' => 'management_jquery-multi-settings:admin/config/system/jqmulti',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_jquery-ui-multiselect-widget:admin/config/user-interface/jquery_ui_multiselect_widget
  $menu_links['management_jquery-ui-multiselect-widget:admin/config/user-interface/jquery_ui_multiselect_widget'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/jquery_ui_multiselect_widget',
    'router_path' => 'admin/config/user-interface/jquery_ui_multiselect_widget',
    'link_title' => 'jQuery UI MultiSelect Widget',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure jQuery UI MultiSelect Widget settings.',
      ),
      'identifier' => 'management_jquery-ui-multiselect-widget:admin/config/user-interface/jquery_ui_multiselect_widget',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_languages:admin/config/regional/language
  $menu_links['management_languages:admin/config/regional/language'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/language',
    'router_path' => 'admin/config/regional/language',
    'link_title' => 'Languages',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure languages for content and the user interface.',
      ),
      'identifier' => 'management_languages:admin/config/regional/language',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_layout:admin/structure/ds/layout
  $menu_links['management_layout:admin/structure/ds/layout'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds/layout',
    'router_path' => 'admin/structure/ds/layout',
    'link_title' => 'Layout',
    'options' => array(
      'attributes' => array(
        'title' => 'Displays a list of content which can be styled.',
      ),
      'identifier' => 'management_layout:admin/structure/ds/layout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_display-suite:admin/structure/ds',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_media:admin/config/media
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_menu-token:admin/config/menu_token
  $menu_links['management_menu-token:admin/config/menu_token'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/menu_token',
    'router_path' => 'admin/config/menu_token',
    'link_title' => 'Menu Token',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Menu Token module.',
      ),
      'identifier' => 'management_menu-token:admin/config/menu_token',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_menus:admin/structure/menu
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_message-settings:admin/config/system/message
  $menu_links['management_message-settings:admin/config/system/message'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/message',
    'router_path' => 'admin/config/system/message',
    'link_title' => 'Message settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage message purging upon cron.',
      ),
      'identifier' => 'management_message-settings:admin/config/system/message',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_message-types:admin/structure/messages
  $menu_links['management_message-types:admin/structure/messages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/messages',
    'router_path' => 'admin/structure/messages',
    'link_title' => 'Message types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Message types.',
      ),
      'identifier' => 'management_message-types:admin/structure/messages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_migrate:admin/content/migrate
  $menu_links['management_migrate:admin/content/migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/migrate',
    'router_path' => 'admin/content/migrate',
    'link_title' => 'Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage importing of data into your Drupal site',
      ),
      'identifier' => 'management_migrate:admin/content/migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_mini-panels:admin/structure/mini-panels
  $menu_links['management_mini-panels:admin/structure/mini-panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/mini-panels',
    'router_path' => 'admin/structure/mini-panels',
    'link_title' => 'Mini panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete mini panels, which can be used as blocks or content panes in other panels.',
      ),
      'identifier' => 'management_mini-panels:admin/structure/mini-panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_module-filter:admin/config/user-interface/modulefilter
  $menu_links['management_module-filter:admin/config/user-interface/modulefilter'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/modulefilter',
    'router_path' => 'admin/config/user-interface/modulefilter',
    'link_title' => 'Module filter',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how the modules page looks and acts.',
      ),
      'identifier' => 'management_module-filter:admin/config/user-interface/modulefilter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_modules:admin/modules
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_pages:admin/structure/pages
  $menu_links['management_pages:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
      'identifier' => 'management_pages:admin/structure/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_panels:admin/structure/panels
  $menu_links['management_panels:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
      'identifier' => 'management_panels:admin/structure/panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_payments:admin/structure/payment/manage
  $menu_links['management_payments:admin/structure/payment/manage'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/payment/manage',
    'router_path' => 'admin/structure/payment/manage',
    'link_title' => 'Payments',
    'options' => array(
      'identifier' => 'management_payments:admin/structure/payment/manage',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_people:admin/config/people
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_people:admin/people
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_performance:admin/config/development/performance
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_profile-types:admin/structure/profiles
  $menu_links['management_profile-types:admin/structure/profiles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/profiles',
    'router_path' => 'admin/structure/profiles',
    'link_title' => 'Profile types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage profiles, including fields.',
      ),
      'identifier' => 'management_profile-types:admin/structure/profiles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_quicktabs:admin/structure/quicktabs
  $menu_links['management_quicktabs:admin/structure/quicktabs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/quicktabs',
    'router_path' => 'admin/structure/quicktabs',
    'link_title' => 'Quicktabs',
    'options' => array(
      'attributes' => array(
        'title' => 'Create blocks of tabbed content.',
      ),
      'identifier' => 'management_quicktabs:admin/structure/quicktabs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_relation-types:admin/structure/relation
  $menu_links['management_relation-types:admin/structure/relation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/relation',
    'router_path' => 'admin/structure/relation',
    'link_title' => 'Relation types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage relation types, including relation properties (directionality, transitivity etc), available bundles, and fields.',
      ),
      'identifier' => 'management_relation-types:admin/structure/relation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_reports:admin/reports
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_services:admin/structure/services
  $menu_links['management_services:admin/structure/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/services',
    'router_path' => 'admin/structure/services',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Services',
      ),
      'identifier' => 'management_services:admin/structure/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_settings:admin/config/front/settings
  $menu_links['management_settings:admin/config/front/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/front/settings',
    'router_path' => 'admin/config/front/settings',
    'link_title' => 'Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer custom front page settings.',
      ),
      'identifier' => 'management_settings:admin/config/front/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_front-page:admin/config/front',
  );
  // Exported menu link: management_shortcut-keys:admin/config/user-interface/shortcut-keys
  $menu_links['management_shortcut-keys:admin/config/user-interface/shortcut-keys'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut-keys',
    'router_path' => 'admin/config/user-interface/shortcut-keys',
    'link_title' => 'Shortcut Keys',
    'options' => array(
      'identifier' => 'management_shortcut-keys:admin/config/user-interface/shortcut-keys',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_status-report:admin/reports/status
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_strongarm:admin/config/development/strongarm
  $menu_links['management_strongarm:admin/config/development/strongarm'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/strongarm',
    'router_path' => 'admin/config/development/strongarm',
    'link_title' => 'Strongarm',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Drupal variable settings that have been strongarmed.',
      ),
      'identifier' => 'management_strongarm:admin/config/development/strongarm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_structure:admin/structure
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_styles:admin/structure/ds/styles
  $menu_links['management_styles:admin/structure/ds/styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds/styles',
    'router_path' => 'admin/structure/ds/styles',
    'link_title' => 'Styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Define classes which you can use as classes on regions and fields (if available).',
      ),
      'identifier' => 'management_styles:admin/structure/ds/styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_display-suite:admin/structure/ds',
  );
  // Exported menu link: management_superfish:admin/config/user-interface/superfish
  $menu_links['management_superfish:admin/config/user-interface/superfish'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/superfish',
    'router_path' => 'admin/config/user-interface/superfish',
    'link_title' => 'Superfish',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Superfish Menus',
      ),
      'identifier' => 'management_superfish:admin/config/user-interface/superfish',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_system:admin/config/system
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_text-formats:admin/config/content/formats
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_themekey:admin/config/user-interface/themekey
  $menu_links['management_themekey:admin/config/user-interface/themekey'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/themekey',
    'router_path' => 'admin/config/user-interface/themekey',
    'link_title' => 'ThemeKey',
    'options' => array(
      'attributes' => array(
        'title' => 'Set up rules to switch the site\'s appearance (theme) dynamically, depending on Drupal paths or different properties.',
      ),
      'identifier' => 'management_themekey:admin/config/user-interface/themekey',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_timetracking:admin/config/user-interface/timetracking
  $menu_links['management_timetracking:admin/config/user-interface/timetracking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/timetracking',
    'router_path' => 'admin/config/user-interface/timetracking',
    'link_title' => 'Timetracking',
    'options' => array(
      'identifier' => 'management_timetracking:admin/config/user-interface/timetracking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_token-authentication:admin/config/services/tokenauth
  $menu_links['management_token-authentication:admin/config/services/tokenauth'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/tokenauth',
    'router_path' => 'admin/config/services/tokenauth',
    'link_title' => 'Token authentication',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure token behavior to allow users to authenticate per page-load via URL.',
      ),
      'identifier' => 'management_token-authentication:admin/config/services/tokenauth',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_translate-interface:admin/config/regional/translate
  $menu_links['management_translate-interface:admin/config/regional/translate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/translate',
    'router_path' => 'admin/config/regional/translate',
    'link_title' => 'Translate interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Translate the built in interface and optionally other text.',
      ),
      'identifier' => 'management_translate-interface:admin/config/regional/translate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_user-profile-homebox:admin/people/homebox
  $menu_links['management_user-profile-homebox:admin/people/homebox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people/homebox',
    'router_path' => 'admin/people/homebox',
    'link_title' => 'User profile Homebox',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the intergration of Homebox and user profiles.',
      ),
      'identifier' => 'management_user-profile-homebox:admin/people/homebox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/people',
  );
  // Exported menu link: management_view-modes:admin/structure/ds/view_modes
  $menu_links['management_view-modes:admin/structure/ds/view_modes'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds/view_modes',
    'router_path' => 'admin/structure/ds/view_modes',
    'link_title' => 'View modes',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage view modes for all content.',
      ),
      'identifier' => 'management_view-modes:admin/structure/ds/view_modes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_display-suite:admin/structure/ds',
  );
  // Exported menu link: management_views-calc:admin/structure/views_calc
  $menu_links['management_views-calc:admin/structure/views_calc'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views_calc',
    'router_path' => 'admin/structure/views_calc',
    'link_title' => 'Views Calc',
    'options' => array(
      'attributes' => array(
        'title' => 'Set Views Calc fields and columns.',
      ),
      'identifier' => 'management_views-calc:admin/structure/views_calc',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_views-plugins:admin/reports/views-plugins
  $menu_links['management_views-plugins:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
      'identifier' => 'management_views-plugins:admin/reports/views-plugins',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_views:admin/structure/views
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_visualization:admin/config/system/visualization
  $menu_links['management_visualization:admin/config/system/visualization'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/visualization',
    'router_path' => 'admin/config/system/visualization',
    'link_title' => 'Visualization',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure visualization settings.',
      ),
      'identifier' => 'management_visualization:admin/config/system/visualization',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_web-services:admin/config/services
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_webform-settings:admin/config/content/webform
  $menu_links['management_webform-settings:admin/config/content/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/webform',
    'router_path' => 'admin/config/content/webform',
    'link_title' => 'Webform settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration of webform functionality.',
      ),
      'identifier' => 'management_webform-settings:admin/config/content/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_workflow:admin/config/workflow
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_wysiwyg-profiles:admin/config/content/wysiwyg
  $menu_links['management_wysiwyg-profiles:admin/config/content/wysiwyg'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/wysiwyg',
    'router_path' => 'admin/config/content/wysiwyg',
    'link_title' => 'Wysiwyg profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure client-side editors.',
      ),
      'identifier' => 'management_wysiwyg-profiles:admin/config/content/wysiwyg',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: navigation_:employee/test
  $menu_links['navigation_:employee/test'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'employee/test',
    'router_path' => 'employee/test',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:employee/test',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_:erpal/migrate/delete-fields
  $menu_links['navigation_:erpal/migrate/delete-fields'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'erpal/migrate/delete-fields',
    'router_path' => 'erpal/migrate/delete-fields',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:erpal/migrate/delete-fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_:front_page
  $menu_links['navigation_:front_page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'front_page',
    'router_path' => 'front_page',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:front_page',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_:reports/crm/test
  $menu_links['navigation_:reports/crm/test'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'reports/crm/test',
    'router_path' => 'reports/crm/test',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:reports/crm/test',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_activity:node/add/erpal-crm-activity
  $menu_links['navigation_activity:node/add/erpal-crm-activity'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-crm-activity',
    'router_path' => 'node/add/erpal-crm-activity',
    'link_title' => 'Activity',
    'options' => array(
      'attributes' => array(
        'title' => 'This is an activity with a contact, e.g a proposal, project request and other conversations.',
      ),
      'identifier' => 'navigation_activity:node/add/erpal-crm-activity',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_add-a-model:budget/add
  $menu_links['navigation_add-a-model:budget/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'budget/add',
    'router_path' => 'budget/add',
    'link_title' => 'Add a model',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new budget',
      ),
      'identifier' => 'navigation_add-a-model:budget/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-billable:billable/add
  $menu_links['navigation_add-billable:billable/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'billable/add',
    'router_path' => 'billable/add',
    'link_title' => 'Add billable',
    'options' => array(
      'identifier' => 'navigation_add-billable:billable/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-billable:billable/add/billable
  $menu_links['navigation_add-billable:billable/add/billable'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'billable/add/billable',
    'router_path' => 'billable/add/billable',
    'link_title' => 'Add Billable',
    'options' => array(
      'identifier' => 'navigation_add-billable:billable/add/billable',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-billable:billable/add',
  );
  // Exported menu link: navigation_add-budget:budget/add/budget
  $menu_links['navigation_add-budget:budget/add/budget'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'budget/add/budget',
    'router_path' => 'budget/add/budget',
    'link_title' => 'Add Budget',
    'options' => array(
      'identifier' => 'navigation_add-budget:budget/add/budget',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-a-model:budget/add',
  );
  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-payment:payment/add
  $menu_links['navigation_add-payment:payment/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'payment/add',
    'router_path' => 'payment/add',
    'link_title' => 'Add Payment',
    'options' => array(
      'identifier' => 'navigation_add-payment:payment/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-timetracking:timetracking/add
  $menu_links['navigation_add-timetracking:timetracking/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'timetracking/add',
    'router_path' => 'timetracking/add',
    'link_title' => 'Add timetracking',
    'options' => array(
      'identifier' => 'navigation_add-timetracking:timetracking/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-unbillable:billable/add/unbillable
  $menu_links['navigation_add-unbillable:billable/add/unbillable'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'billable/add/unbillable',
    'router_path' => 'billable/add/unbillable',
    'link_title' => 'Add Unbillable',
    'options' => array(
      'identifier' => 'navigation_add-unbillable:billable/add/unbillable',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-billable:billable/add',
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_contact:node/add/erpal-contact
  $menu_links['navigation_contact:node/add/erpal-contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-contact',
    'router_path' => 'node/add/erpal-contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'This is the basic content type for contacts in ERPAL',
      ),
      'identifier' => 'navigation_contact:node/add/erpal-contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_contract:node/add/erpal-contract
  $menu_links['navigation_contract:node/add/erpal-contract'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-contract',
    'router_path' => 'node/add/erpal-contract',
    'link_title' => 'Contract',
    'options' => array(
      'attributes' => array(
        'title' => 'A node to manage contracts',
      ),
      'identifier' => 'navigation_contract:node/add/erpal-contract',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_customer-forecast:node/add/erpal-customer-forecast
  $menu_links['navigation_customer-forecast:node/add/erpal-customer-forecast'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-customer-forecast',
    'router_path' => 'node/add/erpal-customer-forecast',
    'link_title' => 'Customer Forecast',
    'options' => array(
      'attributes' => array(
        'title' => 'Forecasts for a customer',
      ),
      'identifier' => 'navigation_customer-forecast:node/add/erpal-customer-forecast',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_date:node/add/erpal-date
  $menu_links['navigation_date:node/add/erpal-date'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-date',
    'router_path' => 'node/add/erpal-date',
    'link_title' => 'date',
    'options' => array(
      'attributes' => array(
        'title' => 'A content type for calendar dates in ERPAL',
      ),
      'identifier' => 'navigation_date:node/add/erpal-date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_document-page:node/add/erpal-book-page
  $menu_links['navigation_document-page:node/add/erpal-book-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-book-page',
    'router_path' => 'node/add/erpal-book-page',
    'link_title' => 'Document page',
    'options' => array(
      'attributes' => array(
        'title' => 'A page with subpages of a document',
      ),
      'identifier' => 'navigation_document-page:node/add/erpal-book-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_document:node/add/erpal-book
  $menu_links['navigation_document:node/add/erpal-book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-book',
    'router_path' => 'node/add/erpal-book',
    'link_title' => 'Document',
    'options' => array(
      'attributes' => array(
        'title' => 'A document representing a documentation or a proposal or a project specification',
      ),
      'identifier' => 'navigation_document:node/add/erpal-book',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_expense-forecast:node/add/erpal-expense-forecast
  $menu_links['navigation_expense-forecast:node/add/erpal-expense-forecast'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-expense-forecast',
    'router_path' => 'node/add/erpal-expense-forecast',
    'link_title' => 'Expense forecast',
    'options' => array(
      'identifier' => 'navigation_expense-forecast:node/add/erpal-expense-forecast',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_file:node/add/erpal-file
  $menu_links['navigation_file:node/add/erpal-file'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-file',
    'router_path' => 'node/add/erpal-file',
    'link_title' => 'File',
    'options' => array(
      'attributes' => array(
        'title' => 'A file from the global asset file pool',
      ),
      'identifier' => 'navigation_file:node/add/erpal-file',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_front-page-slide:node/add/front-page-slide
  $menu_links['navigation_front-page-slide:node/add/front-page-slide'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/front-page-slide',
    'router_path' => 'node/add/front-page-slide',
    'link_title' => 'Front page Slide',
    'options' => array(
      'identifier' => 'navigation_front-page-slide:node/add/front-page-slide',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_image-gallery:node/add/image-gallery
  $menu_links['navigation_image-gallery:node/add/image-gallery'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/image-gallery',
    'router_path' => 'node/add/image-gallery',
    'link_title' => 'Image Gallery',
    'options' => array(
      'identifier' => 'navigation_image-gallery:node/add/image-gallery',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_import:import
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_invoice:node/add/erpal-invoice
  $menu_links['navigation_invoice:node/add/erpal-invoice'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-invoice',
    'router_path' => 'node/add/erpal-invoice',
    'link_title' => 'Invoice',
    'options' => array(
      'attributes' => array(
        'title' => 'Content type for creating an invoice',
      ),
      'identifier' => 'navigation_invoice:node/add/erpal-invoice',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_message-example:heartbeat/all
  $menu_links['navigation_message-example:heartbeat/all'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'heartbeat/all',
    'router_path' => 'heartbeat/all',
    'link_title' => 'Message example',
    'options' => array(
      'attributes' => array(
        'title' => 'Typical UAS (User activity stream).',
      ),
      'identifier' => 'navigation_message-example:heartbeat/all',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_project-release:node/add/erpal-project-release
  $menu_links['navigation_project-release:node/add/erpal-project-release'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-project-release',
    'router_path' => 'node/add/erpal-project-release',
    'link_title' => 'Project release',
    'options' => array(
      'attributes' => array(
        'title' => 'A node to create project releases in ERPAL',
      ),
      'identifier' => 'navigation_project-release:node/add/erpal-project-release',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_project:node/add/erpal-project
  $menu_links['navigation_project:node/add/erpal-project'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-project',
    'router_path' => 'node/add/erpal-project',
    'link_title' => 'Project',
    'options' => array(
      'attributes' => array(
        'title' => 'A Project in ERPAL',
      ),
      'identifier' => 'navigation_project:node/add/erpal-project',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_recommended-vendor:node/add/recommended-vendor
  $menu_links['navigation_recommended-vendor:node/add/recommended-vendor'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/recommended-vendor',
    'router_path' => 'node/add/recommended-vendor',
    'link_title' => 'Recommended Vendor',
    'options' => array(
      'identifier' => 'navigation_recommended-vendor:node/add/recommended-vendor',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_search:search
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_service:node/add/service
  $menu_links['navigation_service:node/add/service'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/service',
    'router_path' => 'node/add/service',
    'link_title' => 'Service',
    'options' => array(
      'attributes' => array(
        'title' => 'Used for a description of a service offered',
      ),
      'identifier' => 'navigation_service:node/add/service',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_task:node/add/erpal-task
  $menu_links['navigation_task:node/add/erpal-task'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-task',
    'router_path' => 'node/add/erpal-task',
    'link_title' => 'Task',
    'options' => array(
      'attributes' => array(
        'title' => 'Basic content type for tasks',
      ),
      'identifier' => 'navigation_task:node/add/erpal-task',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_testimonial:node/add/testimonial
  $menu_links['navigation_testimonial:node/add/testimonial'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/testimonial',
    'router_path' => 'node/add/testimonial',
    'link_title' => 'Testimonial',
    'options' => array(
      'attributes' => array(
        'title' => 'Client feedback and comments',
      ),
      'identifier' => 'navigation_testimonial:node/add/testimonial',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_timetracking:node/add/erpal-timetracking
  $menu_links['navigation_timetracking:node/add/erpal-timetracking'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-timetracking',
    'router_path' => 'node/add/erpal-timetracking',
    'link_title' => 'Timetracking',
    'options' => array(
      'attributes' => array(
        'title' => 'Content type to create timetracking to nodes',
      ),
      'identifier' => 'navigation_timetracking:node/add/erpal-timetracking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_web-site-page:node/add/web-page
  $menu_links['navigation_web-site-page:node/add/web-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/web-page',
    'router_path' => 'node/add/web-page',
    'link_title' => 'Web Site Page',
    'options' => array(
      'identifier' => 'navigation_web-site-page:node/add/web-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_webform:node/add/webform
  $menu_links['navigation_webform:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
      'identifier' => 'navigation_webform:node/add/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_working-time:node/add/erpal-working-time
  $menu_links['navigation_working-time:node/add/erpal-working-time'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/erpal-working-time',
    'router_path' => 'node/add/erpal-working-time',
    'link_title' => 'Working time',
    'options' => array(
      'attributes' => array(
        'title' => 'This node type is for adding working time',
      ),
      'identifier' => 'navigation_working-time:node/add/erpal-working-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Account settings');
  t('Actions');
  t('Activity');
  t('Add Billable');
  t('Add Budget');
  t('Add Payment');
  t('Add Unbillable');
  t('Add a model');
  t('Add billable');
  t('Add content');
  t('Add timetracking');
  t('Administration');
  t('Administration menu');
  t('Anne Arundel');
  t('Appearance');
  t('Arrange');
  t('Available updates');
  t('Baltimore');
  t('Billable Types');
  t('Billable config');
  t('Blocks');
  t('Budget Types');
  t('Cabinet Painting');
  t('Carpentry');
  t('Carroll');
  t('Clean URLs');
  t('Clear cache');
  t('Colorbox');
  t('Colors');
  t('Comments');
  t('Compose tips');
  t('Configuration');
  t('Contact');
  t('Content');
  t('Content authoring');
  t('Content types');
  t('Contract');
  t('Copy messages text fields');
  t('Cron Settings');
  t('Customer Forecast');
  t('Customer References');
  t('Date API');
  t('Date Popup');
  t('Date and time');
  t('Date item');
  t('Devel settings');
  t('Development');
  t('Diff');
  t('Display suite');
  t('District of Columbia');
  t('Document');
  t('Document page');
  t('ERPAL');
  t('ERPAL Reports types');
  t('Eastern Shore');
  t('Emergency');
  t('Entity info');
  t('Erpal Reports');
  t('Execute PHP Code');
  t('Expense forecast');
  t('Exterior Painting');
  t('Extreme Makeover Home Addition');
  t('Features');
  t('Feeds log');
  t('Field collections');
  t('Field info');
  t('Field list');
  t('Fields');
  t('File');
  t('File system');
  t('Flags');
  t('Frederick');
  t('Front Page');
  t('Front page Slide');
  t('FullCalendar');
  t('Function reference');
  t('Generate relations');
  t('Home');
  t('Home Improvement');
  t('Home links');
  t('Homebox');
  t('Hook_elements()');
  t('Howard');
  t('IMCE');
  t('IP address blocking');
  t('Image Gallery');
  t('Image styles');
  t('Image toolkit');
  t('Import');
  t('Interior Painting');
  t('Invoice');
  t('Languages');
  t('Layout');
  t('Log out');
  t('Logging and errors');
  t('Main menu');
  t('Maintenance mode');
  t('Management');
  t('Media');
  t('Meet the Mgmt');
  t('Menu Token');
  t('Menu item');
  t('Menus');
  t('Message example');
  t('Message settings');
  t('Message types');
  t('Migrate');
  t('Mini panels');
  t('Module filter');
  t('Modules');
  t('Montgomery');
  t('Navigation');
  t('Northen Virginia');
  t('Our Edge');
  t('PHPinfo()');
  t('Pages');
  t('Panels');
  t('Payments');
  t('People');
  t('Performance');
  t('Photo Galleries');
  t('Powerwashing');
  t('Prince George\'s');
  t('Profile types');
  t('Project');
  t('Project release');
  t('Quicktabs');
  t('RSS publishing');
  t('Rebuild menus');
  t('Recent log messages');
  t('Recommended Vendor');
  t('Regional and language');
  t('Regional settings');
  t('Reinstall modules');
  t('Relation types');
  t('Reports');
  t('Run cron');
  t('Search');
  t('Search and metadata');
  t('Search settings');
  t('Service');
  t('Services');
  t('Session viewer');
  t('Settings');
  t('Shortcut Keys');
  t('Site information');
  t('Southern Maryland');
  t('Specialty Painting');
  t('Status report');
  t('Strongarm');
  t('Structure');
  t('Styles');
  t('Superfish');
  t('System');
  t('Task');
  t('Taxonomy');
  t('Testimonial');
  t('Text formats');
  t('Theme registry');
  t('ThemeKey');
  t('Timetracking');
  t('Token authentication');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('Translate interface');
  t('URL aliases');
  t('User interface');
  t('User menu');
  t('User profile Homebox');
  t('Variable editor');
  t('View modes');
  t('Views');
  t('Views Calc');
  t('Views plugins');
  t('Visualization');
  t('Web Site Page');
  t('Web services');
  t('Webform');
  t('Webform settings');
  t('Workflow');
  t('Working time');
  t('Wysiwyg profiles');
  t('date');
  t('date item types');
  t('jQuery Multi Settings');
  t('jQuery UI MultiSelect Widget');
  t('jQuery update');


  return $menu_links;
}
