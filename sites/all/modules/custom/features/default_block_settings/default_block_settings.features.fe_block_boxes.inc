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
  $fe_block_boxes->info = 'blocktitel';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'blocktitel';
  $fe_block_boxes->body = '<h2>Diensten</h2>
';

  $export['blocktitel'] = $fe_block_boxes;

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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'googlemaps';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'googlemaps';
  $fe_block_boxes->body = '<p><iframe allowfullscreen="" frameborder="0" height="450" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d8362.426423274452!2d3.587643049095047!3d51.45514070231085!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x47c499f8a7606f55%3A0x5dc4cbf382f1b277!2sEdisonweg+53%2C+4382+NV+Vlissingen!5e0!3m2!1sen!2snl!4v1437467125508" style="border:0" width="600"></iframe></p>
';

  $export['googlemaps'] = $fe_block_boxes;

  return $export;
}
