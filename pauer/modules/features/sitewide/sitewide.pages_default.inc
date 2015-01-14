<?php
/**
 * @file
 * sitewide.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function sitewide_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'contact_site_panel_context';
  $handler->task = 'contact_site';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact us',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
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
  $display->uuid = '7bc0c055-4567-46cf-aaea-5b6f75342119';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d99fb07-0aa9-4b60-9c52-a25b9b158f8f';
    $pane->panel = 'middle';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'title',
      'bean_delta' => 'oami-contact-us-title',
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
    $pane->uuid = '8d99fb07-0aa9-4b60-9c52-a25b9b158f8f';
    $display->content['new-8d99fb07-0aa9-4b60-9c52-a25b9b158f8f'] = $pane;
    $display->panels['middle'][0] = 'new-8d99fb07-0aa9-4b60-9c52-a25b9b158f8f';
    $pane = new stdClass();
    $pane->pid = 'new-dfc8d61b-7c85-4ffa-9b73-fcbb6f489285';
    $pane->panel = 'middle';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
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
    $pane->uuid = 'dfc8d61b-7c85-4ffa-9b73-fcbb6f489285';
    $display->content['new-dfc8d61b-7c85-4ffa-9b73-fcbb6f489285'] = $pane;
    $display->panels['middle'][1] = 'new-dfc8d61b-7c85-4ffa-9b73-fcbb6f489285';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dfc8d61b-7c85-4ffa-9b73-fcbb6f489285';
  $handler->conf['display'] = $display;
  $export['contact_site_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Node add Participation anonymous',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
              1 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'participation' => 'participation',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'oami_enter_the_competition',
    'panels_breadcrumbs_paths' => 'node/add/participation',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pauerpform';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'header_left' => NULL,
      'header_right' => NULL,
      'title' => NULL,
      'share' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0cced66f-c08d-4792-a81a-f4589fc2aa41';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-56292aa7-966d-45e3-8ef9-13e403e5e823';
    $pane->panel = 'bottom';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '56292aa7-966d-45e3-8ef9-13e403e5e823';
    $display->content['new-56292aa7-966d-45e3-8ef9-13e403e5e823'] = $pane;
    $display->panels['bottom'][0] = 'new-56292aa7-966d-45e3-8ef9-13e403e5e823';
    $pane = new stdClass();
    $pane->pid = 'new-d99e3d63-b397-4f32-b28e-1019ea18979e';
    $pane->panel = 'center';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'block-enter-the-competition-entr',
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
    $pane->uuid = 'd99e3d63-b397-4f32-b28e-1019ea18979e';
    $display->content['new-d99e3d63-b397-4f32-b28e-1019ea18979e'] = $pane;
    $display->panels['center'][0] = 'new-d99e3d63-b397-4f32-b28e-1019ea18979e';
    $pane = new stdClass();
    $pane->pid = 'new-a3805af5-654b-428f-964b-36a8420abe7c';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_ideas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'a3805af5-654b-428f-964b-36a8420abe7c';
    $display->content['new-a3805af5-654b-428f-964b-36a8420abe7c'] = $pane;
    $display->panels['center'][1] = 'new-a3805af5-654b-428f-964b-36a8420abe7c';
    $pane = new stdClass();
    $pane->pid = 'new-558e8473-55f5-4bed-9978-446d71d14a27';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_video_upload';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = '558e8473-55f5-4bed-9978-446d71d14a27';
    $display->content['new-558e8473-55f5-4bed-9978-446d71d14a27'] = $pane;
    $display->panels['center'][2] = 'new-558e8473-55f5-4bed-9978-446d71d14a27';
    $pane = new stdClass();
    $pane->pid = 'new-5e0a998f-da39-49b9-aa60-99a4e29e4fc4';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_entry';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5e0a998f-da39-49b9-aa60-99a4e29e4fc4';
    $display->content['new-5e0a998f-da39-49b9-aa60-99a4e29e4fc4'] = $pane;
    $display->panels['center'][3] = 'new-5e0a998f-da39-49b9-aa60-99a4e29e4fc4';
    $pane = new stdClass();
    $pane->pid = 'new-3e016f24-9212-4beb-a1b4-1da189c9ffba';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_rules';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3e016f24-9212-4beb-a1b4-1da189c9ffba';
    $display->content['new-3e016f24-9212-4beb-a1b4-1da189c9ffba'] = $pane;
    $display->panels['center'][4] = 'new-3e016f24-9212-4beb-a1b4-1da189c9ffba';
    $pane = new stdClass();
    $pane->pid = 'new-3f03d07c-0ecf-46af-843a-444569b8b6b1';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_terms_of_use';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3f03d07c-0ecf-46af-843a-444569b8b6b1';
    $display->content['new-3f03d07c-0ecf-46af-843a-444569b8b6b1'] = $pane;
    $display->panels['center'][5] = 'new-3f03d07c-0ecf-46af-843a-444569b8b6b1';
    $pane = new stdClass();
    $pane->pid = 'new-df53f243-2629-41f1-9275-a09a90eeecca';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_privacy_policy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'df53f243-2629-41f1-9275-a09a90eeecca';
    $display->content['new-df53f243-2629-41f1-9275-a09a90eeecca'] = $pane;
    $display->panels['center'][6] = 'new-df53f243-2629-41f1-9275-a09a90eeecca';
    $pane = new stdClass();
    $pane->pid = 'new-d6eabdf6-e5dc-42f6-ad4e-23fc25b4470e';
    $pane->panel = 'header_left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'd6eabdf6-e5dc-42f6-ad4e-23fc25b4470e';
    $display->content['new-d6eabdf6-e5dc-42f6-ad4e-23fc25b4470e'] = $pane;
    $display->panels['header_left'][0] = 'new-d6eabdf6-e5dc-42f6-ad4e-23fc25b4470e';
    $pane = new stdClass();
    $pane->pid = 'new-b1fc3f8d-84e0-4a92-a71b-22c776826553';
    $pane->panel = 'header_left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_surname';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'b1fc3f8d-84e0-4a92-a71b-22c776826553';
    $display->content['new-b1fc3f8d-84e0-4a92-a71b-22c776826553'] = $pane;
    $display->panels['header_left'][1] = 'new-b1fc3f8d-84e0-4a92-a71b-22c776826553';
    $pane = new stdClass();
    $pane->pid = 'new-2bb73b65-a5a8-4d56-a518-b1a5f6bb0bf9';
    $pane->panel = 'header_left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_date_of_birth';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = '2bb73b65-a5a8-4d56-a518-b1a5f6bb0bf9';
    $display->content['new-2bb73b65-a5a8-4d56-a518-b1a5f6bb0bf9'] = $pane;
    $display->panels['header_left'][2] = 'new-2bb73b65-a5a8-4d56-a518-b1a5f6bb0bf9';
    $pane = new stdClass();
    $pane->pid = 'new-32627a6d-d456-4ebf-b2e5-8b836f930e3d';
    $pane->panel = 'header_left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_gender';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '32627a6d-d456-4ebf-b2e5-8b836f930e3d';
    $display->content['new-32627a6d-d456-4ebf-b2e5-8b836f930e3d'] = $pane;
    $display->panels['header_left'][3] = 'new-32627a6d-d456-4ebf-b2e5-8b836f930e3d';
    $pane = new stdClass();
    $pane->pid = 'new-e318238a-bcb7-40a5-ab45-263d8b70bc79';
    $pane->panel = 'header_right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'e318238a-bcb7-40a5-ab45-263d8b70bc79';
    $display->content['new-e318238a-bcb7-40a5-ab45-263d8b70bc79'] = $pane;
    $display->panels['header_right'][0] = 'new-e318238a-bcb7-40a5-ab45-263d8b70bc79';
    $pane = new stdClass();
    $pane->pid = 'new-bda00a83-5ae4-4d86-9909-96871e788c86';
    $pane->panel = 'header_right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_city';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'bda00a83-5ae4-4d86-9909-96871e788c86';
    $display->content['new-bda00a83-5ae4-4d86-9909-96871e788c86'] = $pane;
    $display->panels['header_right'][1] = 'new-bda00a83-5ae4-4d86-9909-96871e788c86';
    $pane = new stdClass();
    $pane->pid = 'new-6d097989-83c4-4536-bb09-16bb4b360b8c';
    $pane->panel = 'header_right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = '6d097989-83c4-4536-bb09-16bb4b360b8c';
    $display->content['new-6d097989-83c4-4536-bb09-16bb4b360b8c'] = $pane;
    $display->panels['header_right'][2] = 'new-6d097989-83c4-4536-bb09-16bb4b360b8c';
    $pane = new stdClass();
    $pane->pid = 'new-739b98c1-9569-463c-a521-af46c7e0dd12';
    $pane->panel = 'header_right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_verify_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '739b98c1-9569-463c-a521-af46c7e0dd12';
    $display->content['new-739b98c1-9569-463c-a521-af46c7e0dd12'] = $pane;
    $display->panels['header_right'][3] = 'new-739b98c1-9569-463c-a521-af46c7e0dd12';
    $pane = new stdClass();
    $pane->pid = 'new-0dd83570-42e3-4b6a-910d-238f151238b9';
    $pane->panel = 'share';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links_not_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'oami_share',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0dd83570-42e3-4b6a-910d-238f151238b9';
    $display->content['new-0dd83570-42e3-4b6a-910d-238f151238b9'] = $pane;
    $display->panels['share'][0] = 'new-0dd83570-42e3-4b6a-910d-238f151238b9';
    $pane = new stdClass();
    $pane->pid = 'new-e41a53ab-598c-4180-8ecd-76889bc4ae94';
    $pane->panel = 'title';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'title',
      'bean_delta' => 'block-enter-the-competition-titl',
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
    $pane->uuid = 'e41a53ab-598c-4180-8ecd-76889bc4ae94';
    $display->content['new-e41a53ab-598c-4180-8ecd-76889bc4ae94'] = $pane;
    $display->panels['title'][0] = 'new-e41a53ab-598c-4180-8ecd-76889bc4ae94';
    $pane = new stdClass();
    $pane->pid = 'new-2e1f10f5-ac30-4717-9c97-37d0e76968b7';
    $pane->panel = 'title';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-block-enter-the-competition',
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
    $pane->uuid = '2e1f10f5-ac30-4717-9c97-37d0e76968b7';
    $display->content['new-2e1f10f5-ac30-4717-9c97-37d0e76968b7'] = $pane;
    $display->panels['title'][1] = 'new-2e1f10f5-ac30-4717-9c97-37d0e76968b7';
    $pane = new stdClass();
    $pane->pid = 'new-ccadf279-23af-4183-b87a-c8504bf87ef1';
    $pane->panel = 'title';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = 'ccadf279-23af-4183-b87a-c8504bf87ef1';
    $display->content['new-ccadf279-23af-4183-b87a-c8504bf87ef1'] = $pane;
    $display->panels['title'][2] = 'new-ccadf279-23af-4183-b87a-c8504bf87ef1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function sitewide_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog/!tid';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'tid' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'blog',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Entityform Type',
        'keyword' => 'entityform_type',
        'name' => 'entity:entityform_type',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'oami_menu_blog',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pauerblogpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'oami_blog';
  $display->uuid = '667199e1-ee82-4d35-b90e-eb12129bc51d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-96ed2db9-a693-49f0-9e8a-b0d7194814bc';
    $pane->panel = 'content_left';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'title',
      'bean_delta' => 'oami-block-blog-title',
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
    $pane->uuid = '96ed2db9-a693-49f0-9e8a-b0d7194814bc';
    $display->content['new-96ed2db9-a693-49f0-9e8a-b0d7194814bc'] = $pane;
    $display->panels['content_left'][0] = 'new-96ed2db9-a693-49f0-9e8a-b0d7194814bc';
    $pane = new stdClass();
    $pane->pid = 'new-ae303b5e-f872-4aa8-82c0-1332b9149efc';
    $pane->panel = 'content_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-oami-block-intro';
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
    $pane->uuid = 'ae303b5e-f872-4aa8-82c0-1332b9149efc';
    $display->content['new-ae303b5e-f872-4aa8-82c0-1332b9149efc'] = $pane;
    $display->panels['content_left'][1] = 'new-ae303b5e-f872-4aa8-82c0-1332b9149efc';
    $pane = new stdClass();
    $pane->pid = 'new-3253922b-6aa0-4807-a1b6-a75c83d74372';
    $pane->panel = 'content_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'blog-feed',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3253922b-6aa0-4807-a1b6-a75c83d74372';
    $display->content['new-3253922b-6aa0-4807-a1b6-a75c83d74372'] = $pane;
    $display->panels['content_left'][2] = 'new-3253922b-6aa0-4807-a1b6-a75c83d74372';
    $pane = new stdClass();
    $pane->pid = 'new-31196a93-b66e-4b0c-bb60-1064838ebbe2';
    $pane->panel = 'content_left';
    $pane->type = 'entity_view';
    $pane->subtype = 'entityform_type';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'context_entity:entityform_type_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '31196a93-b66e-4b0c-bb60-1064838ebbe2';
    $display->content['new-31196a93-b66e-4b0c-bb60-1064838ebbe2'] = $pane;
    $display->panels['content_left'][3] = 'new-31196a93-b66e-4b0c-bb60-1064838ebbe2';
    $pane = new stdClass();
    $pane->pid = 'new-e8eec256-0a72-4016-93fe-cea9d90e50e4';
    $pane->panel = 'content_right';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links_not_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'oami_share',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8eec256-0a72-4016-93fe-cea9d90e50e4';
    $display->content['new-e8eec256-0a72-4016-93fe-cea9d90e50e4'] = $pane;
    $display->panels['content_right'][0] = 'new-e8eec256-0a72-4016-93fe-cea9d90e50e4';
    $pane = new stdClass();
    $pane->pid = 'new-78a57942-da08-4a09-a8fd-a6597a8a9c27';
    $pane->panel = 'content_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'blogs-user blog-lateral ',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78a57942-da08-4a09-a8fd-a6597a8a9c27';
    $display->content['new-78a57942-da08-4a09-a8fd-a6597a8a9c27'] = $pane;
    $display->panels['content_right'][1] = 'new-78a57942-da08-4a09-a8fd-a6597a8a9c27';
    $pane = new stdClass();
    $pane->pid = 'new-bb8a6ab4-6939-4649-acee-14f009dd49de';
    $pane->panel = 'content_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'intellectual_property-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'lateral-tags',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bb8a6ab4-6939-4649-acee-14f009dd49de';
    $display->content['new-bb8a6ab4-6939-4649-acee-14f009dd49de'] = $pane;
    $display->panels['content_right'][2] = 'new-bb8a6ab4-6939-4649-acee-14f009dd49de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'competition';
  $page->task = 'page';
  $page->admin_title = 'Competition';
  $page->admin_description = '';
  $page->path = 'competition';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_competition_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'competition';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'oami_competition',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pauercompetitionpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'center1_one' => NULL,
      'center1_two' => NULL,
      'center1_three' => NULL,
      'center2_one' => NULL,
      'center2_two' => NULL,
      'center2_three' => NULL,
      'bottom' => NULL,
      'top' => NULL,
      'center' => NULL,
      'title' => NULL,
      'share' => NULL,
      'intro' => NULL,
      'banner1' => NULL,
      'banner2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1394fa1a-610e-486f-8d1c-03f394cd4586';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-83edb8ee-0baa-47cb-b046-15d6c290f01a';
    $pane->panel = 'banner1';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-competition-banner',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner1-competition',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '83edb8ee-0baa-47cb-b046-15d6c290f01a';
    $display->content['new-83edb8ee-0baa-47cb-b046-15d6c290f01a'] = $pane;
    $display->panels['banner1'][0] = 'new-83edb8ee-0baa-47cb-b046-15d6c290f01a';
    $pane = new stdClass();
    $pane->pid = 'new-a08cea0c-ca01-475c-bfd8-726dc0f11bd3';
    $pane->panel = 'banner2';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'countdown_home',
      'bean_delta' => 'oami-block-countdown-home',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'countdown',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a08cea0c-ca01-475c-bfd8-726dc0f11bd3';
    $display->content['new-a08cea0c-ca01-475c-bfd8-726dc0f11bd3'] = $pane;
    $display->panels['banner2'][0] = 'new-a08cea0c-ca01-475c-bfd8-726dc0f11bd3';
    $pane = new stdClass();
    $pane->pid = 'new-8768e860-65b4-43b4-a3c3-c8f2a3db84da';
    $pane->panel = 'banner2';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-enter-competition-link',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'enter-now',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8768e860-65b4-43b4-a3c3-c8f2a3db84da';
    $display->content['new-8768e860-65b4-43b4-a3c3-c8f2a3db84da'] = $pane;
    $display->panels['banner2'][1] = 'new-8768e860-65b4-43b4-a3c3-c8f2a3db84da';
    $pane = new stdClass();
    $pane->pid = 'new-822e98db-c788-4498-bc0b-a65f99246387';
    $pane->panel = 'center';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-block-rules-0',
      'override_title' => 0,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'competition-info',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '822e98db-c788-4498-bc0b-a65f99246387';
    $display->content['new-822e98db-c788-4498-bc0b-a65f99246387'] = $pane;
    $display->panels['center'][0] = 'new-822e98db-c788-4498-bc0b-a65f99246387';
    $pane = new stdClass();
    $pane->pid = 'new-fb835336-5466-42cd-9bca-73bd61f2524c';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'participation-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-participation-entry black',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fb835336-5466-42cd-9bca-73bd61f2524c';
    $display->content['new-fb835336-5466-42cd-9bca-73bd61f2524c'] = $pane;
    $display->panels['center'][1] = 'new-fb835336-5466-42cd-9bca-73bd61f2524c';
    $pane = new stdClass();
    $pane->pid = 'new-582f7c5f-99ff-42a8-997b-430237995d0e';
    $pane->panel = 'intro';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-competition-intro',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'competition-intro',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '582f7c5f-99ff-42a8-997b-430237995d0e';
    $display->content['new-582f7c5f-99ff-42a8-997b-430237995d0e'] = $pane;
    $display->panels['intro'][0] = 'new-582f7c5f-99ff-42a8-997b-430237995d0e';
    $pane = new stdClass();
    $pane->pid = 'new-55ce3b44-892e-4d44-abcb-0ba53c244eba';
    $pane->panel = 'left';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-block-guide-0',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'competition-info',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '55ce3b44-892e-4d44-abcb-0ba53c244eba';
    $display->content['new-55ce3b44-892e-4d44-abcb-0ba53c244eba'] = $pane;
    $display->panels['left'][0] = 'new-55ce3b44-892e-4d44-abcb-0ba53c244eba';
    $pane = new stdClass();
    $pane->pid = 'new-5409edfd-b2ec-42ef-b1ae-53460bfeb173';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'participation-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-participation-entry green',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5409edfd-b2ec-42ef-b1ae-53460bfeb173';
    $display->content['new-5409edfd-b2ec-42ef-b1ae-53460bfeb173'] = $pane;
    $display->panels['left'][1] = 'new-5409edfd-b2ec-42ef-b1ae-53460bfeb173';
    $pane = new stdClass();
    $pane->pid = 'new-b4a1b060-2ed2-4c92-9b06-277a7a8d5422';
    $pane->panel = 'right';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-block-faqs-0',
      'override_title' => 0,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'competition-info',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4a1b060-2ed2-4c92-9b06-277a7a8d5422';
    $display->content['new-b4a1b060-2ed2-4c92-9b06-277a7a8d5422'] = $pane;
    $display->panels['right'][0] = 'new-b4a1b060-2ed2-4c92-9b06-277a7a8d5422';
    $pane = new stdClass();
    $pane->pid = 'new-871e715e-903a-4207-87e5-83e771eb6b32';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'participation-panel_pane_3';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-participation-entry',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '871e715e-903a-4207-87e5-83e771eb6b32';
    $display->content['new-871e715e-903a-4207-87e5-83e771eb6b32'] = $pane;
    $display->panels['right'][1] = 'new-871e715e-903a-4207-87e5-83e771eb6b32';
    $pane = new stdClass();
    $pane->pid = 'new-436f3bf4-0469-461a-a9bf-5fbb869739a1';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'participation-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-participation-entry',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '436f3bf4-0469-461a-a9bf-5fbb869739a1';
    $display->content['new-436f3bf4-0469-461a-a9bf-5fbb869739a1'] = $pane;
    $display->panels['right'][2] = 'new-436f3bf4-0469-461a-a9bf-5fbb869739a1';
    $pane = new stdClass();
    $pane->pid = 'new-8f3f28b3-1e2d-40d9-9014-6117a6e7575d';
    $pane->panel = 'share';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links_not_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'oami_share',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f3f28b3-1e2d-40d9-9014-6117a6e7575d';
    $display->content['new-8f3f28b3-1e2d-40d9-9014-6117a6e7575d'] = $pane;
    $display->panels['share'][0] = 'new-8f3f28b3-1e2d-40d9-9014-6117a6e7575d';
    $pane = new stdClass();
    $pane->pid = 'new-b724e613-47f2-4e8a-9cd4-42be08161285';
    $pane->panel = 'title';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'title',
      'bean_delta' => 'oami-competition-title',
      'override_title' => 1,
      'override_title_text' => '<non>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b724e613-47f2-4e8a-9cd4-42be08161285';
    $display->content['new-b724e613-47f2-4e8a-9cd4-42be08161285'] = $pane;
    $display->panels['title'][0] = 'new-b724e613-47f2-4e8a-9cd4-42be08161285';
    $pane = new stdClass();
    $pane->pid = 'new-6f567196-5885-453f-9898-480ce560be66';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_competition';
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
    $pane->uuid = '6f567196-5885-453f-9898-480ce560be66';
    $display->content['new-6f567196-5885-453f-9898-480ce560be66'] = $pane;
    $display->panels['top'][0] = 'new-6f567196-5885-453f-9898-480ce560be66';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['competition'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'homepage',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Home',
    'panels_breadcrumbs_paths' => '<front>',
    'panels_breadcrumbs_home' => 1,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'pauerhome';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_side' => NULL,
      'right_side' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'bottom2' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '78c99500-8959-403e-ac57-b49dc3d35f80';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3ed1bdd-4f71-48d3-a660-771483318141';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'participation-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-participation-entry',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3ed1bdd-4f71-48d3-a660-771483318141';
    $display->content['new-d3ed1bdd-4f71-48d3-a660-771483318141'] = $pane;
    $display->panels['center'][0] = 'new-d3ed1bdd-4f71-48d3-a660-771483318141';
    $pane = new stdClass();
    $pane->pid = 'new-7c43af3c-8b8a-4d61-b6d8-086034b7787e';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'users-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'profiles-home',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c43af3c-8b8a-4d61-b6d8-086034b7787e';
    $display->content['new-7c43af3c-8b8a-4d61-b6d8-086034b7787e'] = $pane;
    $display->panels['center'][1] = 'new-7c43af3c-8b8a-4d61-b6d8-086034b7787e';
    $pane = new stdClass();
    $pane->pid = 'new-9f271c9d-211d-4b35-b768-517aa7f6fa8b';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'twitter_feeds-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'twitter-panel',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9f271c9d-211d-4b35-b768-517aa7f6fa8b';
    $display->content['new-9f271c9d-211d-4b35-b768-517aa7f6fa8b'] = $pane;
    $display->panels['center'][2] = 'new-9f271c9d-211d-4b35-b768-517aa7f6fa8b';
    $pane = new stdClass();
    $pane->pid = 'new-874a6072-e26e-4ef3-ab0f-2fb420792806';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'twitter';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'twitter-panel',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '874a6072-e26e-4ef3-ab0f-2fb420792806';
    $display->content['new-874a6072-e26e-4ef3-ab0f-2fb420792806'] = $pane;
    $display->panels['center'][3] = 'new-874a6072-e26e-4ef3-ab0f-2fb420792806';
    $pane = new stdClass();
    $pane->pid = 'new-9c06e995-8eaa-4647-80ad-d4a1425f253e';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-blog-entry',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9c06e995-8eaa-4647-80ad-d4a1425f253e';
    $display->content['new-9c06e995-8eaa-4647-80ad-d4a1425f253e'] = $pane;
    $display->panels['left'][0] = 'new-9c06e995-8eaa-4647-80ad-d4a1425f253e';
    $pane = new stdClass();
    $pane->pid = 'new-6768a5ad-6a04-4311-a1f2-4476fb14b118';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'facebook';
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
    $pane->uuid = '6768a5ad-6a04-4311-a1f2-4476fb14b118';
    $display->content['new-6768a5ad-6a04-4311-a1f2-4476fb14b118'] = $pane;
    $display->panels['left'][1] = 'new-6768a5ad-6a04-4311-a1f2-4476fb14b118';
    $pane = new stdClass();
    $pane->pid = 'new-4b008940-1eee-465c-93d1-1538a65858ff';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'users-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'profiles-home',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4b008940-1eee-465c-93d1-1538a65858ff';
    $display->content['new-4b008940-1eee-465c-93d1-1538a65858ff'] = $pane;
    $display->panels['right'][0] = 'new-4b008940-1eee-465c-93d1-1538a65858ff';
    $pane = new stdClass();
    $pane->pid = 'new-193ea77c-6dec-47b6-b884-38c38eea1b02';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'participation-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-participation-entry winner-entry',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '193ea77c-6dec-47b6-b884-38c38eea1b02';
    $display->content['new-193ea77c-6dec-47b6-b884-38c38eea1b02'] = $pane;
    $display->panels['right'][1] = 'new-193ea77c-6dec-47b6-b884-38c38eea1b02';
    $pane = new stdClass();
    $pane->pid = 'new-2dd9207b-a486-4349-952f-044cb6855087';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'participation-panel_pane_3';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-participation-entry winner-entry',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2dd9207b-a486-4349-952f-044cb6855087';
    $display->content['new-2dd9207b-a486-4349-952f-044cb6855087'] = $pane;
    $display->panels['right'][2] = 'new-2dd9207b-a486-4349-952f-044cb6855087';
    $pane = new stdClass();
    $pane->pid = 'new-2787246c-11b3-41e3-97c7-8a12d8575140';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ip_campaigns_nodes-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ipcampaign-home',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2787246c-11b3-41e3-97c7-8a12d8575140';
    $display->content['new-2787246c-11b3-41e3-97c7-8a12d8575140'] = $pane;
    $display->panels['right'][3] = 'new-2787246c-11b3-41e3-97c7-8a12d8575140';
    $pane = new stdClass();
    $pane->pid = 'new-d6193189-8133-425a-bc32-4a9240af184d';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_home';
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
      'css_class' => 'main-banner-home',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6193189-8133-425a-bc32-4a9240af184d';
    $display->content['new-d6193189-8133-425a-bc32-4a9240af184d'] = $pane;
    $display->panels['top'][0] = 'new-d6193189-8133-425a-bc32-4a9240af184d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ideas_gallery';
  $page->task = 'page';
  $page->admin_title = 'Ideas gallery';
  $page->admin_description = '';
  $page->path = 'ideas-gallery';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ideas_gallery_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ideas_gallery';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'oami_gallery',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pauergallery';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
      'header_left' => NULL,
      'header_right' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Gallery';
  $display->uuid = '87e56061-f3d5-47de-8ab3-9d7f33d6336f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-230385db-3ec8-434c-a6bb-8d34f66f0822';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'participation-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '230385db-3ec8-434c-a6bb-8d34f66f0822';
    $display->content['new-230385db-3ec8-434c-a6bb-8d34f66f0822'] = $pane;
    $display->panels['center'][0] = 'new-230385db-3ec8-434c-a6bb-8d34f66f0822';
    $pane = new stdClass();
    $pane->pid = 'new-aff74e70-450f-436a-8f33-bca33deb71ed';
    $pane->panel = 'center';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'banner',
      'bean_delta' => 'oami-participate-banner',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'participate-banner',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aff74e70-450f-436a-8f33-bca33deb71ed';
    $display->content['new-aff74e70-450f-436a-8f33-bca33deb71ed'] = $pane;
    $display->panels['center'][1] = 'new-aff74e70-450f-436a-8f33-bca33deb71ed';
    $pane = new stdClass();
    $pane->pid = 'new-2a07cc99-431d-4aa4-b569-da6f2859e886';
    $pane->panel = 'header_left';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'title',
      'bean_delta' => 'oami-block-gallery-title',
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
    $pane->uuid = '2a07cc99-431d-4aa4-b569-da6f2859e886';
    $display->content['new-2a07cc99-431d-4aa4-b569-da6f2859e886'] = $pane;
    $display->panels['header_left'][0] = 'new-2a07cc99-431d-4aa4-b569-da6f2859e886';
    $pane = new stdClass();
    $pane->pid = 'new-79deeef2-3d6c-4fd3-90d6-f30551acab74';
    $pane->panel = 'header_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-oami-block-gallery-intro';
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
    $pane->uuid = '79deeef2-3d6c-4fd3-90d6-f30551acab74';
    $display->content['new-79deeef2-3d6c-4fd3-90d6-f30551acab74'] = $pane;
    $display->panels['header_left'][1] = 'new-79deeef2-3d6c-4fd3-90d6-f30551acab74';
    $pane = new stdClass();
    $pane->pid = 'new-ba8ff29e-967d-4362-9bf3-f951b6b45ad2';
    $pane->panel = 'header_right';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links_not_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'oami_share',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ba8ff29e-967d-4362-9bf3-f951b6b45ad2';
    $display->content['new-ba8ff29e-967d-4362-9bf3-f951b6b45ad2'] = $pane;
    $display->panels['header_right'][0] = 'new-ba8ff29e-967d-4362-9bf3-f951b6b45ad2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ideas_gallery'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'intellectual_property';
  $page->task = 'page';
  $page->admin_title = 'how-to-power-your-ideas';
  $page->admin_description = '';
  $page->path = 'how-to-power-your-ideas';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_intellectual_property_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'intellectual_property';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'oami_menu_intellectual_property
',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'oami_intellectual_property_title';
  $display->uuid = '327c8020-da32-455c-afbe-e7941e054c93';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d212324a-851c-4206-ab1d-639988bcbfa5';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_intellectual_property-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd212324a-851c-4206-ab1d-639988bcbfa5';
    $display->content['new-d212324a-851c-4206-ab1d-639988bcbfa5'] = $pane;
    $display->panels['left'][0] = 'new-d212324a-851c-4206-ab1d-639988bcbfa5';
    $pane = new stdClass();
    $pane->pid = 'new-00e75933-aec9-4f7e-8ed2-0886fa813422';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links_not_node';
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
    $pane->uuid = '00e75933-aec9-4f7e-8ed2-0886fa813422';
    $display->content['new-00e75933-aec9-4f7e-8ed2-0886fa813422'] = $pane;
    $display->panels['right'][0] = 'new-00e75933-aec9-4f7e-8ed2-0886fa813422';
    $pane = new stdClass();
    $pane->pid = 'new-0dcdfcb9-c392-4803-8552-cc21a2303eeb';
    $pane->panel = 'top';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-block-intellectual-property',
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
    $pane->uuid = '0dcdfcb9-c392-4803-8552-cc21a2303eeb';
    $display->content['new-0dcdfcb9-c392-4803-8552-cc21a2303eeb'] = $pane;
    $display->panels['top'][0] = 'new-0dcdfcb9-c392-4803-8552-cc21a2303eeb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['intellectual_property'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ip_campaigns';
  $page->task = 'page';
  $page->admin_title = 'ip-campaigns';
  $page->admin_description = '';
  $page->path = 'ip-campaigns';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ip_campaigns_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ip_campaigns';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'oami_ip_campaigns',
    'panels_breadcrumbs_paths' => 'ip-campaigns',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pauergallery';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header_left' => NULL,
      'header_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8ec264d3-be02-40ff-a44e-efd75ad47918';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d77aec7-49d4-44b7-b70f-46edaaf203d5';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ip_campaigns_nodes-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d77aec7-49d4-44b7-b70f-46edaaf203d5';
    $display->content['new-9d77aec7-49d4-44b7-b70f-46edaaf203d5'] = $pane;
    $display->panels['center'][0] = 'new-9d77aec7-49d4-44b7-b70f-46edaaf203d5';
    $pane = new stdClass();
    $pane->pid = 'new-1ae48956-485b-4911-8e46-211b2f396986';
    $pane->panel = 'header_left';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'title',
      'bean_delta' => 'oami-block-ip-campaigns-title',
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'page-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ae48956-485b-4911-8e46-211b2f396986';
    $display->content['new-1ae48956-485b-4911-8e46-211b2f396986'] = $pane;
    $display->panels['header_left'][0] = 'new-1ae48956-485b-4911-8e46-211b2f396986';
    $pane = new stdClass();
    $pane->pid = 'new-8e3c3ce4-de2c-4f93-aca6-14c36680ce99';
    $pane->panel = 'header_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-oami-block-ip-campaigns-intro';
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
    $pane->uuid = '8e3c3ce4-de2c-4f93-aca6-14c36680ce99';
    $display->content['new-8e3c3ce4-de2c-4f93-aca6-14c36680ce99'] = $pane;
    $display->panels['header_left'][1] = 'new-8e3c3ce4-de2c-4f93-aca6-14c36680ce99';
    $pane = new stdClass();
    $pane->pid = 'new-2c3f8390-fc1f-4692-a475-77fc3cff32f3';
    $pane->panel = 'header_right';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links_not_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'oami_share',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c3f8390-fc1f-4692-a475-77fc3cff32f3';
    $display->content['new-2c3f8390-fc1f-4692-a475-77fc3cff32f3'] = $pane;
    $display->panels['header_right'][0] = 'new-2c3f8390-fc1f-4692-a475-77fc3cff32f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ip_campaigns'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'supporters';
  $page->task = 'page';
  $page->admin_title = 'Supporters';
  $page->admin_description = '';
  $page->path = 'supporters';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_supporters_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'supporters';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'supporters',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
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
  $display->uuid = '8041a818-67d7-4df5-810c-47461e3906ab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae0b91d4-313b-44d1-934a-d2f8861c55a0';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-oami-block-supporters-intro';
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
    $pane->uuid = 'ae0b91d4-313b-44d1-934a-d2f8861c55a0';
    $display->content['new-ae0b91d4-313b-44d1-934a-d2f8861c55a0'] = $pane;
    $display->panels['middle'][0] = 'new-ae0b91d4-313b-44d1-934a-d2f8861c55a0';
    $pane = new stdClass();
    $pane->pid = 'new-2d78f48e-e65c-400f-b4ca-0e05d054f7bb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'supporters-panel_pane_1';
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
    $pane->uuid = '2d78f48e-e65c-400f-b4ca-0e05d054f7bb';
    $display->content['new-2d78f48e-e65c-400f-b4ca-0e05d054f7bb'] = $pane;
    $display->panels['middle'][1] = 'new-2d78f48e-e65c-400f-b4ca-0e05d054f7bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['supporters'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'the_team';
  $page->task = 'page';
  $page->admin_title = 'contributors';
  $page->admin_description = '';
  $page->path = 'contributors';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_the_team_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'the_team';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'oami_contributors',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pauercontributors';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
      'header_left' => NULL,
      'header_right' => NULL,
      'center' => NULL,
      'banner1' => NULL,
      'banner2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0ef54098-31fb-42e4-baca-21037d0d546a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3042ec21-0d5d-4717-9e1c-15cc9825c129';
    $pane->panel = 'banner1';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'oami-contributors-banner-text',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'contrib-banner-text',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3042ec21-0d5d-4717-9e1c-15cc9825c129';
    $display->content['new-3042ec21-0d5d-4717-9e1c-15cc9825c129'] = $pane;
    $display->panels['banner1'][0] = 'new-3042ec21-0d5d-4717-9e1c-15cc9825c129';
    $pane = new stdClass();
    $pane->pid = 'new-b536f704-25ba-41f5-84f3-444677b1775c';
    $pane->panel = 'banner2';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'span_block',
      'bean_delta' => 'oami-contributors-banner',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'contrib-banner-link',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b536f704-25ba-41f5-84f3-444677b1775c';
    $display->content['new-b536f704-25ba-41f5-84f3-444677b1775c'] = $pane;
    $display->panels['banner2'][0] = 'new-b536f704-25ba-41f5-84f3-444677b1775c';
    $pane = new stdClass();
    $pane->pid = 'new-3c5c7fd7-f4a5-4736-be64-a7fe3630d3b7';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'users-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c5c7fd7-f4a5-4736-be64-a7fe3630d3b7';
    $display->content['new-3c5c7fd7-f4a5-4736-be64-a7fe3630d3b7'] = $pane;
    $display->panels['center'][0] = 'new-3c5c7fd7-f4a5-4736-be64-a7fe3630d3b7';
    $pane = new stdClass();
    $pane->pid = 'new-8de40ae1-3b01-46fd-94ae-a121de510d8e';
    $pane->panel = 'header_left';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'title',
      'bean_delta' => 'oami-block-contributors-title',
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
    $pane->uuid = '8de40ae1-3b01-46fd-94ae-a121de510d8e';
    $display->content['new-8de40ae1-3b01-46fd-94ae-a121de510d8e'] = $pane;
    $display->panels['header_left'][0] = 'new-8de40ae1-3b01-46fd-94ae-a121de510d8e';
    $pane = new stdClass();
    $pane->pid = 'new-7df7d0ad-006b-4199-b4d6-5bbe356ff592';
    $pane->panel = 'header_right';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links_not_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'oami_share',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7df7d0ad-006b-4199-b4d6-5bbe356ff592';
    $display->content['new-7df7d0ad-006b-4199-b4d6-5bbe356ff592'] = $pane;
    $display->panels['header_right'][0] = 'new-7df7d0ad-006b-4199-b4d6-5bbe356ff592';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['the_team'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'toolkit';
  $page->task = 'page';
  $page->admin_title = 'Toolkit';
  $page->admin_description = '';
  $page->path = 'toolkit';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_toolkit_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'toolkit';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'toolkit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
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
  $display->title = 'oami_toolkit';
  $display->uuid = '6f11ceb5-a9ea-4925-82ba-6f0001279685';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d2a4beee-a272-4633-806d-ba4837216ca3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-oami-block-toolkit-intro';
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
    $pane->uuid = 'd2a4beee-a272-4633-806d-ba4837216ca3';
    $display->content['new-d2a4beee-a272-4633-806d-ba4837216ca3'] = $pane;
    $display->panels['middle'][0] = 'new-d2a4beee-a272-4633-806d-ba4837216ca3';
    $pane = new stdClass();
    $pane->pid = 'new-e176e0bf-4edd-465e-8943-39dba8fbaeab';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'toolkit-panel_pane_1';
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
    $pane->uuid = 'e176e0bf-4edd-465e-8943-39dba8fbaeab';
    $display->content['new-e176e0bf-4edd-465e-8943-39dba8fbaeab'] = $pane;
    $display->panels['middle'][1] = 'new-e176e0bf-4edd-465e-8943-39dba8fbaeab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['toolkit'] = $page;

  return $pages;

}
