<?php
/**
 * @file
 * p_general.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function p_general_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general';
  $context->description = '';
  $context->tag = 'pauweb';
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
        'panels_mini-pauweb_header' => array(
          'module' => 'panels_mini',
          'delta' => 'pauweb_header',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'panels_mini-breadcrumb_title' => array(
          'module' => 'panels_mini',
          'delta' => 'breadcrumb_title',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'panels_mini-pauweb_footer' => array(
          'module' => 'panels_mini',
          'delta' => 'pauweb_footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('pauweb');
  $export['general'] = $context;

  return $export;
}
