<?php
/**
 * @file
 * p_sitewide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function p_sitewide_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function p_sitewide_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function p_sitewide_eck_bundle_info() {
  $items = array(
    'multiple_values_multiple_values' => array(
      'machine_name' => 'multiple_values_multiple_values',
      'entity_type' => 'multiple_values',
      'name' => 'multiple_values',
      'label' => 'Multiple Values',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function p_sitewide_eck_entity_type_info() {
  $items = array(
    'multiple_values' => array(
      'name' => 'multiple_values',
      'label' => 'Multiple Values',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function p_sitewide_node_info() {
  $items = array(
    'system_pages' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
