<?php
/**
 * @file
 * p_sitewide.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function p_sitewide_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:system_pages:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'system_pages';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6a819d3a-251c-4268-a855-8d2d99f479f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3391d685-7b22-4dd5-92a8-16e035a599e4';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3391d685-7b22-4dd5-92a8-16e035a599e4';
    $display->content['new-3391d685-7b22-4dd5-92a8-16e035a599e4'] = $pane;
    $display->panels['center'][0] = 'new-3391d685-7b22-4dd5-92a8-16e035a599e4';
    $pane = new stdClass();
    $pane->pid = 'new-58550e17-5126-4ad3-b1e4-05ecef512869';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_or_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58550e17-5126-4ad3-b1e4-05ecef512869';
    $display->content['new-58550e17-5126-4ad3-b1e4-05ecef512869'] = $pane;
    $display->panels['center'][1] = 'new-58550e17-5126-4ad3-b1e4-05ecef512869';
    $pane = new stdClass();
    $pane->pid = 'new-11dd4519-51ab-43ca-b0b8-78ed25d7aa3d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '11dd4519-51ab-43ca-b0b8-78ed25d7aa3d';
    $display->content['new-11dd4519-51ab-43ca-b0b8-78ed25d7aa3d'] = $pane;
    $display->panels['center'][2] = 'new-11dd4519-51ab-43ca-b0b8-78ed25d7aa3d';
    $pane = new stdClass();
    $pane->pid = 'new-21423a33-1d93-4931-9413-b9dcaaf75a4d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '21423a33-1d93-4931-9413-b9dcaaf75a4d';
    $display->content['new-21423a33-1d93-4931-9413-b9dcaaf75a4d'] = $pane;
    $display->panels['center'][3] = 'new-21423a33-1d93-4931-9413-b9dcaaf75a4d';
    $pane = new stdClass();
    $pane->pid = 'new-3562114b-9a2a-4909-8b8c-a5ac29eba9ac';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3562114b-9a2a-4909-8b8c-a5ac29eba9ac';
    $display->content['new-3562114b-9a2a-4909-8b8c-a5ac29eba9ac'] = $pane;
    $display->panels['center'][4] = 'new-3562114b-9a2a-4909-8b8c-a5ac29eba9ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3562114b-9a2a-4909-8b8c-a5ac29eba9ac';
  $panelizer->display = $display;
  $export['node:system_pages:default:full'] = $panelizer;

  return $export;
}
