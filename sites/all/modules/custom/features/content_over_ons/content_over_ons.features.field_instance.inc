<?php
/**
 * @file
 * content_over_ons.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_over_ons_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-over_ons-field_tekst'
  $field_instances['node-over_ons-field_tekst'] = array(
    'bundle' => 'over_ons',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_tekst',
    'label' => 'Tekst',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Tekst');

  return $field_instances;
}
