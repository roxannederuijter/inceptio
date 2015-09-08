<?php
/**
 * @file
 * default_image_styles.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function default_image_styles_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'default';
  $breakpoint_group->name = 'Default';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.default.tv',
    1 => 'breakpoints.theme.default.wide',
    2 => 'breakpoints.theme.default.narrow',
    3 => 'breakpoints.theme.default.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['default'] = $breakpoint_group;

  return $export;
}
