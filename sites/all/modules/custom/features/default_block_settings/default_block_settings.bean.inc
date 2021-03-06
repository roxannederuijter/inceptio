<?php
/**
 * @file
 * default_block_settings.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function default_block_settings_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'greenagent_banner';
  $bean_type->label = 'Greenagent banner';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['greenagent_banner'] = $bean_type;

  return $export;
}
