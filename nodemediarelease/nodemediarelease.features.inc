<?php
/**
 * @file
 * nodemediarelease.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nodemediarelease_node_info() {
  $items = array(
    'media_releases' => array(
      'name' => t('Media Releases'),
      'base' => 'node_content',
      'description' => t('This content type holds media releases.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
