<?php
/**
 * @file
 * nodesspeeches.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nodesspeeches_taxonomy_default_vocabularies() {
  return array(
    'content_type' => array(
      'name' => 'Content type',
      'machine_name' => 'content_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'locations' => array(
      'name' => 'Locations',
      'machine_name' => 'locations',
      'description' => 'This vocabulary stores locaitons for content types, particularly the gallery and speeches.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
