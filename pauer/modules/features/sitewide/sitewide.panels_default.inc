<?php
/**
 * @file
 * sitewide.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function sitewide_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'pauerfooter';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_side' => NULL,
      'center_side' => NULL,
      'right_side' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'last' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
    'right' => array(
      'style' => 'naked',
    ),
    'bottom' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '69ea4508-1627-4282-b7c0-91b0a5541cbc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9f62b8ef-e0ec-4df9-9465-ffa1d31ce69a';
    $pane->panel = 'bottom_left';
    $pane->type = 'block';
    $pane->subtype = 'stuff-oami_logo_observatory';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f62b8ef-e0ec-4df9-9465-ffa1d31ce69a';
    $display->content['new-9f62b8ef-e0ec-4df9-9465-ffa1d31ce69a'] = $pane;
    $display->panels['bottom_left'][0] = 'new-9f62b8ef-e0ec-4df9-9465-ffa1d31ce69a';
    $pane = new stdClass();
    $pane->pid = 'new-a002f5d1-48b0-4b70-abd4-8e1510655cff';
    $pane->panel = 'bottom_right';
    $pane->type = 'block';
    $pane->subtype = 'stuff-oami_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a002f5d1-48b0-4b70-abd4-8e1510655cff';
    $display->content['new-a002f5d1-48b0-4b70-abd4-8e1510655cff'] = $pane;
    $display->panels['bottom_right'][0] = 'new-a002f5d1-48b0-4b70-abd4-8e1510655cff';
    $pane = new stdClass();
    $pane->pid = 'new-49a26645-6025-4a2c-a215-305b2ce15532';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-oami-info';
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
    $pane->uuid = '49a26645-6025-4a2c-a215-305b2ce15532';
    $display->content['new-49a26645-6025-4a2c-a215-305b2ce15532'] = $pane;
    $display->panels['first'][0] = 'new-49a26645-6025-4a2c-a215-305b2ce15532';
    $pane = new stdClass();
    $pane->pid = 'new-1bb898bb-c192-4e1f-9cdb-da9158130ccd';
    $pane->panel = 'last';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-oami-connect';
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
    $pane->uuid = '1bb898bb-c192-4e1f-9cdb-da9158130ccd';
    $display->content['new-1bb898bb-c192-4e1f-9cdb-da9158130ccd'] = $pane;
    $display->panels['last'][0] = 'new-1bb898bb-c192-4e1f-9cdb-da9158130ccd';
    $pane = new stdClass();
    $pane->pid = 'new-ad22e73f-496f-4ea3-aa8e-88506d1c72a4';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-oami-legal';
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
    $pane->uuid = 'ad22e73f-496f-4ea3-aa8e-88506d1c72a4';
    $display->content['new-ad22e73f-496f-4ea3-aa8e-88506d1c72a4'] = $pane;
    $display->panels['second'][0] = 'new-ad22e73f-496f-4ea3-aa8e-88506d1c72a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = '';
  $mini->admin_title = 'Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'pauerheader';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'main_left' => NULL,
      'share_left' => NULL,
      'share_right' => NULL,
      'bottom' => NULL,
      'share_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ddea0d48-34f3-4feb-8243-76234f2f894a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fbc36884-b68f-447f-936d-3ead1a4b1c88';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'superfish-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbc36884-b68f-447f-936d-3ead1a4b1c88';
    $display->content['new-fbc36884-b68f-447f-936d-3ead1a4b1c88'] = $pane;
    $display->panels['bottom'][0] = 'new-fbc36884-b68f-447f-936d-3ead1a4b1c88';
    $pane = new stdClass();
    $pane->pid = 'new-cabb612b-81c4-4ac7-ad15-7033c9828db4';
    $pane->panel = 'main_left';
    $pane->type = 'block';
    $pane->subtype = 'stuff-oami_logo';
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
    $pane->uuid = 'cabb612b-81c4-4ac7-ad15-7033c9828db4';
    $display->content['new-cabb612b-81c4-4ac7-ad15-7033c9828db4'] = $pane;
    $display->panels['main_left'][0] = 'new-cabb612b-81c4-4ac7-ad15-7033c9828db4';
    $pane = new stdClass();
    $pane->pid = 'new-739964af-0a62-46d6-ba13-64d2b3ada5a8';
    $pane->panel = 'share_right';
    $pane->type = 'block';
    $pane->subtype = 'stuff-oami_login';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '739964af-0a62-46d6-ba13-64d2b3ada5a8';
    $display->content['new-739964af-0a62-46d6-ba13-64d2b3ada5a8'] = $pane;
    $display->panels['share_right'][0] = 'new-739964af-0a62-46d6-ba13-64d2b3ada5a8';
    $pane = new stdClass();
    $pane->pid = 'new-12dbc070-74ea-4f85-ad4f-b3c2b3586a83';
    $pane->panel = 'share_right';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '12dbc070-74ea-4f85-ad4f-b3c2b3586a83';
    $display->content['new-12dbc070-74ea-4f85-ad4f-b3c2b3586a83'] = $pane;
    $display->panels['share_right'][1] = 'new-12dbc070-74ea-4f85-ad4f-b3c2b3586a83';
    $pane = new stdClass();
    $pane->pid = 'new-b2a0cac0-c790-41f3-9834-d0ddb3a288b4';
    $pane->panel = 'share_right';
    $pane->type = 'block';
    $pane->subtype = 'stuff-oami_follow_us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b2a0cac0-c790-41f3-9834-d0ddb3a288b4';
    $display->content['new-b2a0cac0-c790-41f3-9834-d0ddb3a288b4'] = $pane;
    $display->panels['share_right'][2] = 'new-b2a0cac0-c790-41f3-9834-d0ddb3a288b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_responsive';
  $mini->category = '';
  $mini->admin_title = 'Header Responsive';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ddea0d48-34f3-4feb-8243-76234f2f894a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-30d01857-8079-4006-94e2-15eba12a2545';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'sanco_stuff-sanco_logo_title';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '30d01857-8079-4006-94e2-15eba12a2545';
    $display->content['new-30d01857-8079-4006-94e2-15eba12a2545'] = $pane;
    $display->panels['middle'][0] = 'new-30d01857-8079-4006-94e2-15eba12a2545';
    $pane = new stdClass();
    $pane->pid = 'new-8c0d349a-a3ae-4052-b451-d7a1c57d6551';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'superfish-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8c0d349a-a3ae-4052-b451-d7a1c57d6551';
    $display->content['new-8c0d349a-a3ae-4052-b451-d7a1c57d6551'] = $pane;
    $display->panels['middle'][1] = 'new-8c0d349a-a3ae-4052-b451-d7a1c57d6551';
    $pane = new stdClass();
    $pane->pid = 'new-115ef209-4e38-47cc-a935-0f8bad9da818';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '115ef209-4e38-47cc-a935-0f8bad9da818';
    $display->content['new-115ef209-4e38-47cc-a935-0f8bad9da818'] = $pane;
    $display->panels['middle'][2] = 'new-115ef209-4e38-47cc-a935-0f8bad9da818';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header_responsive'] = $mini;

  return $export;
}
