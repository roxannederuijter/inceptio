<?php
/**
 * @file
 * content_type_basic_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_basic_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_banner-field_image'
  $field_instances['field_collection_item-field_banner-field_image'] = array(
    'bundle' => 'field_banner',
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
    'entity_type' => 'field_collection_item',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-field_paragraph_s'
  $field_instances['node-page-field_paragraph_s'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_paragraph_s',
    'label' => 'Paragraph\'s',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_kolom_afbeelding' => '1_kolom_afbeelding',
        '1_kolom_tekst' => '1_kolom_tekst',
        '2_kolommen_afbeeldingen' => '2_kolommen_afbeeldingen',
        '2_kolommen_tekst' => '2_kolommen_tekst',
        '2_kolommen_tekst_afbeelding_link' => '2_kolommen_tekst_afbeelding_link',
        '2_kolommen_tekst_afbeelding_rech' => '2_kolommen_tekst_afbeelding_rech',
      ),
      'bundle_weights' => array(
        '1_kolom_afbeelding' => 2,
        '1_kolom_tekst' => 3,
        '2_kolommen_afbeeldingen' => 4,
        '2_kolommen_tekst' => 5,
        '2_kolommen_tekst_afbeelding_link' => 6,
        '2_kolommen_tekst_afbeelding_rech' => 7,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Afbeelding');
  t('Paragraph\'s');

  return $field_instances;
}
