<?php
/**
 * @file
 * p_general.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function p_general_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_panel_context';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Your search';
  $display->uuid = '72b85847-2ecc-48f0-a128-467d57235037';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a892f09-1e40-4332-984a-7eac273bc732';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->uuid = '9a892f09-1e40-4332-984a-7eac273bc732';
    $display->content['new-9a892f09-1e40-4332-984a-7eac273bc732'] = $pane;
    $display->panels['middle'][0] = 'new-9a892f09-1e40-4332-984a-7eac273bc732';
    $pane = new stdClass();
    $pane->pid = 'new-0fc71dbc-0b74-4f8c-ada6-ff5ecffeecdf';
    $pane->panel = 'middle';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
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
    $pane->uuid = '0fc71dbc-0b74-4f8c-ada6-ff5ecffeecdf';
    $display->content['new-0fc71dbc-0b74-4f8c-ada6-ff5ecffeecdf'] = $pane;
    $display->panels['middle'][1] = 'new-0fc71dbc-0b74-4f8c-ada6-ff5ecffeecdf';
    $pane = new stdClass();
    $pane->pid = 'new-d7a4810d-7c21-4e4e-b1c8-440c6a000ad3';
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
      'override_title_text' => 'Check out our blog',
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
    $pane->uuid = 'd7a4810d-7c21-4e4e-b1c8-440c6a000ad3';
    $display->content['new-d7a4810d-7c21-4e4e-b1c8-440c6a000ad3'] = $pane;
    $display->panels['middle'][2] = 'new-d7a4810d-7c21-4e4e-b1c8-440c6a000ad3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_node_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function p_general_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = '404_error';
  $page->task = 'page';
  $page->admin_title = '404 Error';
  $page->admin_description = '';
  $page->path = 'not-found';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_404_error_panel_context';
  $handler->task = 'page';
  $handler->subtask = '404_error';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'home
',
    'panels_breadcrumbs_paths' => '<front>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'onecol_reset_clean';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Oops! Looks like that page is missing...';
  $display->uuid = '35205f86-0f3b-4afc-9807-0e649d285bfa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ba764fcf-6159-4f84-8943-bac7222a5890';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'search_404';
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
    $pane->uuid = 'ba764fcf-6159-4f84-8943-bac7222a5890';
    $display->content['new-ba764fcf-6159-4f84-8943-bac7222a5890'] = $pane;
    $display->panels['middle'][0] = 'new-ba764fcf-6159-4f84-8943-bac7222a5890';
    $pane = new stdClass();
    $pane->pid = 'new-1b3e305e-4199-4e01-9c82-081f28548c93';
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
      'override_title_text' => 'Check out our blog',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1b3e305e-4199-4e01-9c82-081f28548c93';
    $display->content['new-1b3e305e-4199-4e01-9c82-081f28548c93'] = $pane;
    $display->panels['middle'][1] = 'new-1b3e305e-4199-4e01-9c82-081f28548c93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['404_error'] = $page;

  return $pages;

}
