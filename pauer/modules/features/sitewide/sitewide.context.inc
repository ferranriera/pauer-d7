<?php
/**
 * @file
 * sitewide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sitewide_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-header' => array(
          'module' => 'panels_mini',
          'delta' => 'header',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'panels_mini-header_responsive' => array(
          'module' => 'panels_mini',
          'delta' => 'header_responsive',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'panels_mini-service_links_and_language_switc' => array(
          'module' => 'panels_mini',
          'delta' => 'service_links_and_language_switc',
          'region' => 'header',
          'weight' => '-10',
        ),
        'panels_mini-footer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
