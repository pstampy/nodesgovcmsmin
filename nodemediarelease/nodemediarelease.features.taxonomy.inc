<?php
/**
 * @file
 * nodemediarelease.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nodemediarelease_taxonomy_default_vocabularies() {
  return array(
    'ministers' => array(
      'name' => 'Ministers',
      'machine_name' => 'ministers',
      'description' => 'Use this vocabulary to assign ministers to content types.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
