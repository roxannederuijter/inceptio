<?php
/**
 * @file
 * content_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_blog_node_info() {
  $items = array(
    'greenagent_blog' => array(
      'name' => t('greenagent blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
