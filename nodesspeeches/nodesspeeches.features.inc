<?php
/**
 * @file
 * nodesspeeches.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nodesspeeches_node_info() {
  $items = array(
    'speeches' => array(
      'name' => t('Speeches'),
      'base' => 'node_content',
      'description' => t('This content type holds speeches.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
