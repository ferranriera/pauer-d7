<?php
/**
 * @file
 * p_sitewide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function p_sitewide_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_to_clone';
  $context->description = 'General sitewide to clone';
  $context->tag = 'structure';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General sitewide to clone');
  t('structure');
  $export['sitewide_to_clone'] = $context;

  return $export;
}
