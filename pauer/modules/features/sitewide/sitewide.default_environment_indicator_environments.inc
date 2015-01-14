<?php
/**
 * @file
 * sanco_sitewide.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function sitewide_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'integration_environment';
  $environment->name = 'Integration environment';
  $environment->regexurl = '*.pauservers.com';
  $environment->settings = array(
    'color' => '#88581d',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['integration_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local_enviroment';
  $environment->name = 'Local Enviroment';
  $environment->regexurl = '*.dev';
  $environment->settings = array(
    'color' => '#9ec3fd',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local_enviroment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'pre_production';
  $environment->name = 'Pre production';
  $environment->regexurl = '*.pauservers.com';
  $environment->settings = array(
    'color' => '#fd7474',
    'text_color' => '#fedcdd',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['pre_production'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'production';
  $environment->name = 'Production';
  $environment->regexurl = 'we-love.eating.eu';
  $environment->settings = array(
    'color' => '#f91c1c',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['production'] = $environment;

  return $export;
}
