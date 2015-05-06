<?php
/**
 * @file
 * p_sitewide.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function p_sitewide_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mini_panel_to_clone';
  $mini->category = 'Structure';
  $mini->admin_title = 'Mini panel to clone';
  $mini->admin_description = 'Clone this mini-panel to start creating a new mini-panel instance';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol_reset_clean';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'clean_markup' => array(
          'region_wrapper' => 'none',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'none',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'style' => 'clean_element',
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e46cfcc0-699a-4a2a-a240-2abfd21e02d8';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mini_panel_to_clone'] = $mini;

  return $export;
}
