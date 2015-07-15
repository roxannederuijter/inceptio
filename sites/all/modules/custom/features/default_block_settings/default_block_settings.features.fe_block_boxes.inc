<?php
/**
 * @file
 * default_block_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function default_block_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contact';
  $fe_block_boxes->body = '<ul>
	<li class="adres">Edisonweg 53L, 4382 NV Vlissingen</li>
	<li class="email">info@inceptio-studentenbedrijf.nl</li>
	<li class="tel">+31 (0) 118 558485</li>
</ul>
';

  $export['contact'] = $fe_block_boxes;

  return $export;
}
