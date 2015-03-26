<?php
/**
 * @file
 * p_sitewide.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function p_sitewide_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'general_structure';
  $bean_type->label = 'General structure';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['general_structure'] = $bean_type;

  return $export;
}
