<?php
/**
 * @file
 * content_banner.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_banner_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-banner-field_banner'
  $field_instances['node-banner-field_banner'] = array(
    'bundle' => 'banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner',
    'label' => 'Banner',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner');

  return $field_instances;
}
