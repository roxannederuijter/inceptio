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
