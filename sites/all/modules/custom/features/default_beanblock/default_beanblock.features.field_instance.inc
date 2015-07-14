<?php
/**
 * @file
 * default_beanblock.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function default_beanblock_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-social_media-field_twitter'
  $field_instances['bean-social_media-field_twitter'] = array(
    'bundle' => 'social_media',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'linkimagefield',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'linkimagefield',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_twitter',
    'label' => 'Socialmedia',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'class_field' => 0,
      'custom_target' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'longdesc_field' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'rel_field' => 0,
      'target' => '_self',
      'title_field' => 0,
      'url' => '',
      'url_settings' => array(
        'class_field' => 0,
        'custom_target' => 0,
        'rel_field' => 0,
        'target' => '_blank',
        'url' => '',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'linkimagefield',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'linkimagefield_widget',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Socialmedia');

  return $field_instances;
}
