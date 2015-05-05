<?php
/**
 * @file
 * painting_company_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function painting_company_feature_taxonomy_default_vocabularies() {
  return array(
    'county' => array(
      'name' => 'County',
      'machine_name' => 'county',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
