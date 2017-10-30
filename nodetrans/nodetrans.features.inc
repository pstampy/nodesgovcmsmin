<?php
/**
 * @file
 * nodetrans.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nodetrans_node_info() {
  $items = array(
    'transcripts' => array(
      'name' => t('Transcripts'),
      'base' => 'node_content',
      'description' => t('This content type holds transcripts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
