<?php
/**
 * @file
 * nodesmixed.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nodesmixed_node_info() {
  $items = array(
    'articles' => array(
      'name' => t('Articles'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bio' => array(
      'name' => t('Bio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'galleries' => array(
      'name' => t('Galleries'),
      'base' => 'node_content',
      'description' => t('This content type holds images for galleries, tagged by minister, location, date and gallery collection.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => t('This content type holds links to websites, to be displayed in the footer of the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pages' => array(
      'name' => t('Pages'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
