<?php
/**
 * @file
 * sitewide.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sitewide_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
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
      'sancho' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sancho',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
