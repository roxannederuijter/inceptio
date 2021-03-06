<?php
/**
 * @file
 * default_image_styles.default_resp_img_suffixs.inc
 */

/**
 * Implements hook_default_resp_img_suffixs().
 */
function default_image_styles_default_resp_img_suffixs() {
  $export = array();

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'mobile';
  $resp_img_suffix->label = 'mobile';
  $resp_img_suffix->suffix = '__mobile';
  $resp_img_suffix->breakpoint = 0;
  $export['mobile'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'smartphone';
  $resp_img_suffix->label = 'narrow';
  $resp_img_suffix->suffix = '__narrow';
  $resp_img_suffix->breakpoint = 500;
  $export['smartphone'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'standard';
  $resp_img_suffix->label = 'normal';
  $resp_img_suffix->suffix = ' __normal';
  $resp_img_suffix->breakpoint = 720;
  $export['standard'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'tablet_portrait';
  $resp_img_suffix->label = 'wide';
  $resp_img_suffix->suffix = '__wide';
  $resp_img_suffix->breakpoint = 900;
  $export['tablet_portrait'] = $resp_img_suffix;

  return $export;
}
