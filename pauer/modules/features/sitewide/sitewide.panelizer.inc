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
  $display->layout = 'onecol_reset_clean';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '775d4f51-9200-40fe-96bf-fd50f1127a77';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9c902fdb-fab5-41dd-8be4-4da0ffc213ae';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane centered',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 1,
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
    $pane->uuid = '9c902fdb-fab5-41dd-8be4-4da0ffc213ae';
    $display->content['new-9c902fdb-fab5-41dd-8be4-4da0ffc213ae'] = $pane;
    $display->panels['middle'][0] = 'new-9c902fdb-fab5-41dd-8be4-4da0ffc213ae';
    $pane = new stdClass();
    $pane->pid = 'new-0327d631-6512-43b9-bca1-2fba123fa318';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sp_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane centered',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 1,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0327d631-6512-43b9-bca1-2fba123fa318';
    $display->content['new-0327d631-6512-43b9-bca1-2fba123fa318'] = $pane;
    $display->panels['middle'][1] = 'new-0327d631-6512-43b9-bca1-2fba123fa318';
    $pane = new stdClass();
    $pane->pid = 'new-489cddb7-c1c9-418d-8352-f3589abc4d1e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sp_get_bussines_units-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'What we do',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane centered',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 1,
          'title_wrapper' => 'h3',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '489cddb7-c1c9-418d-8352-f3589abc4d1e';
    $display->content['new-489cddb7-c1c9-418d-8352-f3589abc4d1e'] = $pane;
    $display->panels['middle'][2] = 'new-489cddb7-c1c9-418d-8352-f3589abc4d1e';
    $pane = new stdClass();
    $pane->pid = 'new-0b99dc0d-382a-4368-a254-e1ff28e01de3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'angular_twitter-angularjs_twitter_timeline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Tweets',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane centered nowhite',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 1,
          'title_wrapper' => 'h3',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0b99dc0d-382a-4368-a254-e1ff28e01de3';
    $display->content['new-0b99dc0d-382a-4368-a254-e1ff28e01de3'] = $pane;
    $display->panels['middle'][3] = 'new-0b99dc0d-382a-4368-a254-e1ff28e01de3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
  $display->title = '<none>';
  $display->uuid = 'c8b575cb-b11d-4080-871f-e3a20eadabab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aa0e67f2-cc68-4956-bf91-3360c71d7aa1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa0e67f2-cc68-4956-bf91-3360c71d7aa1';
    $display->content['new-aa0e67f2-cc68-4956-bf91-3360c71d7aa1'] = $pane;
    $display->panels['center'][0] = 'new-aa0e67f2-cc68-4956-bf91-3360c71d7aa1';
    $pane = new stdClass();
    $pane->pid = 'new-1baec2f4-a198-401c-8c59-f25dd9935c0a';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1baec2f4-a198-401c-8c59-f25dd9935c0a';
    $display->content['new-1baec2f4-a198-401c-8c59-f25dd9935c0a'] = $pane;
    $display->panels['center'][1] = 'new-1baec2f4-a198-401c-8c59-f25dd9935c0a';
    $pane = new stdClass();
    $pane->pid = 'new-d11d712d-2782-4f86-91c5-85170a4d2369';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd11d712d-2782-4f86-91c5-85170a4d2369';
    $display->content['new-d11d712d-2782-4f86-91c5-85170a4d2369'] = $pane;
    $display->panels['center'][2] = 'new-d11d712d-2782-4f86-91c5-85170a4d2369';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-aa0e67f2-cc68-4956-bf91-3360c71d7aa1';
  $panelizer->display = $display;
  $export['node:system_pages:variant_1'] = $panelizer;

  return $export;
}
