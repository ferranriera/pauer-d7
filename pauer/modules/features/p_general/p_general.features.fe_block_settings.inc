<?php
/**
 * @file
 * p_general.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function p_general_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['addthis-addthis_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'addthis_block',
    'module' => 'addthis',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'in2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'in2',
        'weight' => 0,
      ),
    ),
    'title' => 'Share',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'in2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'in2',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
