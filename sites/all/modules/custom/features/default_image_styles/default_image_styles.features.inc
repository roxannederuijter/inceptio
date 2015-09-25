<?php
/**
 * @file
 * default_image_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function default_image_styles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "resp_img" && $api == "default_resp_img_suffixs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function default_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: banner.
  $styles['banner'] = array(
    'label' => 'Banner',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2560,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_responsivebreakpoints_theme_default_mobile_1x.
  $styles['banner_responsivebreakpoints_theme_default_mobile_1x'] = array(
    'label' => 'banner_responsivebreakpoints_theme_default_mobile_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_responsivebreakpoints_theme_default_narrow_1x.
  $styles['banner_responsivebreakpoints_theme_default_narrow_1x'] = array(
    'label' => 'banner_responsivebreakpoints_theme_default_narrow_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 850,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_responsivebreakpoints_theme_default_tv_1x.
  $styles['banner_responsivebreakpoints_theme_default_tv_1x'] = array(
    'label' => 'banner_responsivebreakpoints_theme_default_tv_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 20,
          'height' => 20,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_responsivebreakpoints_theme_default_wide_1x.
  $styles['banner_responsivebreakpoints_theme_default_wide_1x'] = array(
    'label' => 'banner_responsivebreakpoints_theme_default_wide_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2560,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_responsivemodule_picture_empty_srcset_1x.
  $styles['banner_responsivemodule_picture_empty_srcset_1x'] = array(
    'label' => 'banner_responsivemodule_picture_empty_srcset_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 1000,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_large.
  $styles['portfolio_large'] = array(
    'label' => 'Portfolio_large',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1180,
          'height' => 584,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_small.
  $styles['portfolio_small'] = array(
    'label' => 'Portfolio_small',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 590,
          'height' => 610,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
