<?php
/**
 * @file
 * content_pdf.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_pdf_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_pdf_node_info() {
  $items = array(
    'pdf' => array(
      'name' => t('Pdf'),
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
