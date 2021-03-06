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

  // Exported field_instance: 'bean-greenagent_banner-field_image'
  $field_instances['bean-greenagent_banner-field_image'] = array(
    'bundle' => 'greenagent_banner',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'banner',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Afbeelding',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 32,
    ),
  );

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
  t('Afbeelding');
  t('Socialmedia');

  return $field_instances;
}
