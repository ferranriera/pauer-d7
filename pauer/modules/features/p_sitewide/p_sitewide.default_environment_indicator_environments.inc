<?php
/**
 * @file
 * p_sitewide.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function p_sitewide_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'integration_environment';
  $environment->name = 'Integration environment';
  $environment->regexurl = '\\w+()\\.pauservers.com';
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
  $environment->regexurl = '\\w+()\\.dev';
  $environment->settings = array(
    'color' => '#9ec3fd',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local_enviroment'] = $environment;

  return $export;
}
