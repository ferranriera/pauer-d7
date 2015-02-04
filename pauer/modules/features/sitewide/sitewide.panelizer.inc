<?php
/**
 * @file
 * sitewide.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sitewide_panelizer_defaults() {
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '75a61825-4ef7-437d-84ff-f35bb5a7e242';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94fb8b5b-fb84-4b85-abe7-2dd730bd1b40';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'system-powered-by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94fb8b5b-fb84-4b85-abe7-2dd730bd1b40';
    $display->content['new-94fb8b5b-fb84-4b85-abe7-2dd730bd1b40'] = $pane;
    $display->panels['center'][0] = 'new-94fb8b5b-fb84-4b85-abe7-2dd730bd1b40';
    $pane = new stdClass();
    $pane->pid = 'new-500c379c-6fe6-435e-9877-64fafd51801b';
    $pane->panel = 'center';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '500c379c-6fe6-435e-9877-64fafd51801b';
    $display->content['new-500c379c-6fe6-435e-9877-64fafd51801b'] = $pane;
    $display->panels['center'][1] = 'new-500c379c-6fe6-435e-9877-64fafd51801b';
    $pane = new stdClass();
    $pane->pid = 'new-6751647e-716c-449d-bf25-5f98942ef6e6';
    $pane->panel = 'center';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6751647e-716c-449d-bf25-5f98942ef6e6';
    $display->content['new-6751647e-716c-449d-bf25-5f98942ef6e6'] = $pane;
    $display->panels['center'][2] = 'new-6751647e-716c-449d-bf25-5f98942ef6e6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-94fb8b5b-fb84-4b85-abe7-2dd730bd1b40';
  $panelizer->display = $display;
  $export['node:system_pages:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:system_pages:home';
  $panelizer->title = 'Home';
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9e475417-6d8d-4236-acf9-53d55827a608';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-08e414b4-c284-483f-bf8d-6661d87b404c';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Home Variant</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08e414b4-c284-483f-bf8d-6661d87b404c';
    $display->content['new-08e414b4-c284-483f-bf8d-6661d87b404c'] = $pane;
    $display->panels['center'][0] = 'new-08e414b4-c284-483f-bf8d-6661d87b404c';
    $pane = new stdClass();
    $pane->pid = 'new-c096a80d-d7fa-444a-b834-ee254e6fbebb';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c096a80d-d7fa-444a-b834-ee254e6fbebb';
    $display->content['new-c096a80d-d7fa-444a-b834-ee254e6fbebb'] = $pane;
    $display->panels['center'][1] = 'new-c096a80d-d7fa-444a-b834-ee254e6fbebb';
    $pane = new stdClass();
    $pane->pid = 'new-752208ad-6181-4f99-a380-0cfa99927edc';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sp_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '752208ad-6181-4f99-a380-0cfa99927edc';
    $display->content['new-752208ad-6181-4f99-a380-0cfa99927edc'] = $pane;
    $display->panels['center'][2] = 'new-752208ad-6181-4f99-a380-0cfa99927edc';
    $pane = new stdClass();
    $pane->pid = 'new-5f8b352c-b9ec-42a5-b03f-19d1569c8a8e';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5f8b352c-b9ec-42a5-b03f-19d1569c8a8e';
    $display->content['new-5f8b352c-b9ec-42a5-b03f-19d1569c8a8e'] = $pane;
    $display->panels['center'][3] = 'new-5f8b352c-b9ec-42a5-b03f-19d1569c8a8e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c096a80d-d7fa-444a-b834-ee254e6fbebb';
  $panelizer->display = $display;
  $export['node:system_pages:home'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:system_pages:variant_1';
  $panelizer->title = 'Variant 1';
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd6094dc1-2d8a-4b9d-9f3f-264f23e66840';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff029c15-a061-4ab3-bd80-8c2bd6e17f6a';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Variant 1</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff029c15-a061-4ab3-bd80-8c2bd6e17f6a';
    $display->content['new-ff029c15-a061-4ab3-bd80-8c2bd6e17f6a'] = $pane;
    $display->panels['center'][0] = 'new-ff029c15-a061-4ab3-bd80-8c2bd6e17f6a';
    $pane = new stdClass();
    $pane->pid = 'new-bb8f5fc9-ba49-4885-9bb3-885c667e0247';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bb8f5fc9-ba49-4885-9bb3-885c667e0247';
    $display->content['new-bb8f5fc9-ba49-4885-9bb3-885c667e0247'] = $pane;
    $display->panels['center'][1] = 'new-bb8f5fc9-ba49-4885-9bb3-885c667e0247';
    $pane = new stdClass();
    $pane->pid = 'new-a08ca1df-a6c0-4f2c-a36e-d729664d488b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sp_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a08ca1df-a6c0-4f2c-a36e-d729664d488b';
    $display->content['new-a08ca1df-a6c0-4f2c-a36e-d729664d488b'] = $pane;
    $display->panels['center'][2] = 'new-a08ca1df-a6c0-4f2c-a36e-d729664d488b';
    $pane = new stdClass();
    $pane->pid = 'new-38bdfc54-dbd0-4dd4-a830-1c352dd71d66';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '38bdfc54-dbd0-4dd4-a830-1c352dd71d66';
    $display->content['new-38bdfc54-dbd0-4dd4-a830-1c352dd71d66'] = $pane;
    $display->panels['center'][3] = 'new-38bdfc54-dbd0-4dd4-a830-1c352dd71d66';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bb8f5fc9-ba49-4885-9bb3-885c667e0247';
  $panelizer->display = $display;
  $export['node:system_pages:variant_1'] = $panelizer;

  return $export;
}
