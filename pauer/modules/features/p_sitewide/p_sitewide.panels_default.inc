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

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'share_this';
  $mini->category = 'Structure';
  $mini->admin_title = 'Share this';
  $mini->admin_description = '';
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
  $display->title = 'Share';
  $display->uuid = '69c1c771-2e07-42db-8766-22e5272b9872';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cde236be-e413-4184-b64f-0c97b8502149';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'addthis-addthis_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cde236be-e413-4184-b64f-0c97b8502149';
    $display->content['new-cde236be-e413-4184-b64f-0c97b8502149'] = $pane;
    $display->panels['middle'][0] = 'new-cde236be-e413-4184-b64f-0c97b8502149';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cde236be-e413-4184-b64f-0c97b8502149';
  $mini->display = $display;
  $export['share_this'] = $mini;

  return $export;
}
