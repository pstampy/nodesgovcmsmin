<?php
/**
 * @file
 * nodesmixed.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nodesmixed_taxonomy_default_vocabularies() {
  return array(
    'collections' => array(
      'name' => 'Collections',
      'machine_name' => 'collections',
      'description' => 'This vocabulary is used to create collections of gallery images.',
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
    'website_types' => array(
      'name' => 'Website Types',
      'machine_name' => 'website_types',
      'description' => 'This vocabulary is used to sort links into different types to display in the footer of the site.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
