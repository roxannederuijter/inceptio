<?php
/**
 * @file
 * content_over_ons.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_over_ons_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_over_ons_node_info() {
  $items = array(
    'over_ons' => array(
      'name' => t('Over ons'),
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
