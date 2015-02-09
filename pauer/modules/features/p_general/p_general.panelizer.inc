<?php
/**
 * @file
 * p_general.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function p_general_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:system_pages:basic_page';
  $panelizer->title = 'Basic Page';
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
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Home
',
    'panels_breadcrumbs_paths' => '<front>
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
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
  $display->uuid = 'efac7955-a38f-448f-91c7-59a078454cba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6279d4b6-2f55-4b9f-9118-d54e3cb16252';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6279d4b6-2f55-4b9f-9118-d54e3cb16252';
    $display->content['new-6279d4b6-2f55-4b9f-9118-d54e3cb16252'] = $pane;
    $display->panels['middle'][0] = 'new-6279d4b6-2f55-4b9f-9118-d54e3cb16252';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:system_pages:basic_page'] = $panelizer;





  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:system_pages:newsletter';
  $panelizer->title = 'Newsletter';
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
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Home
',
    'panels_breadcrumbs_paths' => '<front>
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
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
  $display->uuid = 'efac7955-a38f-448f-91c7-59a078454cba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6279d4b6-2f55-4b9f-9118-d54e3cb16252';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6279d4b6-2f55-4b9f-9118-d54e3cb16252';
    $display->content['new-6279d4b6-2f55-4b9f-9118-d54e3cb16252'] = $pane;
    $display->panels['middle'][0] = 'new-6279d4b6-2f55-4b9f-9118-d54e3cb16252';
    $pane = new stdClass();
    $pane->pid = 'new-c03487b1-3b53-4f72-b90f-fd969217c665';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = 'c03487b1-3b53-4f72-b90f-fd969217c665';
    $display->content['new-c03487b1-3b53-4f72-b90f-fd969217c665'] = $pane;
    $display->panels['middle'][1] = 'new-c03487b1-3b53-4f72-b90f-fd969217c665';
    $pane = new stdClass();
    $pane->pid = 'new-0b0a760b-4678-46ae-a32f-11d32c88ba1f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'teaser-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'news',
      ),
      'override_title' => 1,
      'override_title_text' => 'Check out or blog',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'our-blogs',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0b0a760b-4678-46ae-a32f-11d32c88ba1f';
    $display->content['new-0b0a760b-4678-46ae-a32f-11d32c88ba1f'] = $pane;
    $display->panels['middle'][2] = 'new-0b0a760b-4678-46ae-a32f-11d32c88ba1f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:system_pages:newsletter'] = $panelizer;



  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:system_pages:sitemap';
  $panelizer->title = 'Sitemap';
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
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'home',
    'panels_breadcrumbs_paths' => '<front>',
    'panels_breadcrumbs_home' => 1,
  );
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
  $display->uuid = 'dc0eab57-519b-4d98-a32a-5c324f90e256';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff7682cd-b89e-464f-986e-8ae4528deaa9';
    $pane->panel = 'middle';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff7682cd-b89e-464f-986e-8ae4528deaa9';
    $display->content['new-ff7682cd-b89e-464f-986e-8ae4528deaa9'] = $pane;
    $display->panels['middle'][0] = 'new-ff7682cd-b89e-464f-986e-8ae4528deaa9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:system_pages:sitemap'] = $panelizer;



  return $export;
}
