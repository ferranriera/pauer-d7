<?php
/**
 * @file
 * p_sitewide.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function p_sitewide_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'thumbnail';
  $ds_view_mode->label = 'Thumbnail';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['thumbnail'] = $ds_view_mode;

  return $export;
}
