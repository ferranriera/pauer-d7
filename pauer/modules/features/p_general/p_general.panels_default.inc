<?php
/**
 * @file
 * p_general.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function p_general_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'gallery';
  $mini->category = 'pauweb';
  $mini->admin_title = 'Gallery';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol_reset_clean';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '33c389f8-e592-4f35-823a-c8c890022cce';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a74d6432-26f2-4696-b70f-1a8669636d74';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->uuid = 'a74d6432-26f2-4696-b70f-1a8669636d74';
    $display->content['new-a74d6432-26f2-4696-b70f-1a8669636d74'] = $pane;
    $display->panels['middle'][0] = 'new-a74d6432-26f2-4696-b70f-1a8669636d74';
    $pane = new stdClass();
    $pane->pid = 'new-5e430f22-7f54-4203-b69d-b5c5fd54a7e2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5e430f22-7f54-4203-b69d-b5c5fd54a7e2';
    $display->content['new-5e430f22-7f54-4203-b69d-b5c5fd54a7e2'] = $pane;
    $display->panels['middle'][1] = 'new-5e430f22-7f54-4203-b69d-b5c5fd54a7e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a74d6432-26f2-4696-b70f-1a8669636d74';
  $mini->display = $display;
  $export['gallery'] = $mini;

  return $export;
}
