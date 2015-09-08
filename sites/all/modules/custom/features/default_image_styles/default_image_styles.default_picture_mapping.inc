<?php
/**
 * @file
 * default_image_styles.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function default_image_styles_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Picture mapping';
  $picture_mapping->machine_name = 'picture_mapping';
  $picture_mapping->breakpoint_group = 'default';
  $picture_mapping->mapping = array(
    'breakpoints.theme.default.tv' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_responsivebreakpoints_theme_default_tv_1x',
      ),
    ),
    'breakpoints.theme.default.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_responsivebreakpoints_theme_default_wide_1x',
      ),
    ),
    'breakpoints.theme.default.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_responsivebreakpoints_theme_default_narrow_1x',
      ),
    ),
    'breakpoints.theme.default.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_responsivebreakpoints_theme_default_mobile_1x',
      ),
    ),
  );
  $export['picture_mapping'] = $picture_mapping;

  return $export;
}
