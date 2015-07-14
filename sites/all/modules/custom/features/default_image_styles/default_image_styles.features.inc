<?php
/**
 * @file
 * default_image_styles.features.inc
 */

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

  return $styles;
}
