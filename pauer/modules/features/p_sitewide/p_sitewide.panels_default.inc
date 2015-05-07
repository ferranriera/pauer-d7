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
  $mini->name = 'image';
  $mini->category = 'Component';
  $mini->admin_title = 'Image';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Block',
      'keyword' => 'bean',
      'name' => 'entity:bean',
      'entity_id' => '',
      'id' => 1,
    ),
  );
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
    $pane = new stdClass();
    $pane->pid = 'new-b5f59ed9-cd47-4d7c-b69e-7f1cd2dca91b';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'bean:field_image_or_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'linked_field' => array(
          'linked' => 1,
          'destination' => '[bean:field-link:url]',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'requiredcontext_entity:bean_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->uuid = 'b5f59ed9-cd47-4d7c-b69e-7f1cd2dca91b';
    $display->content['new-b5f59ed9-cd47-4d7c-b69e-7f1cd2dca91b'] = $pane;
    $display->panels['middle'][0] = 'new-b5f59ed9-cd47-4d7c-b69e-7f1cd2dca91b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['image'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'long_text';
  $mini->category = 'Component';
  $mini->admin_title = 'Long Text';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Block',
      'keyword' => 'bean',
      'name' => 'entity:bean',
      'entity_id' => '',
      'id' => 1,
    ),
  );
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
    $pane = new stdClass();
    $pane->pid = 'new-4a12cc30-aa04-4c61-b3cb-12c8d7b30a9f';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'bean:field_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:bean_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->uuid = '4a12cc30-aa04-4c61-b3cb-12c8d7b30a9f';
    $display->content['new-4a12cc30-aa04-4c61-b3cb-12c8d7b30a9f'] = $pane;
    $display->panels['middle'][0] = 'new-4a12cc30-aa04-4c61-b3cb-12c8d7b30a9f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['long_text'] = $mini;

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
  $mini->name = 'short_text';
  $mini->category = 'Component';
  $mini->admin_title = 'Short Text';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Block',
      'keyword' => 'bean',
      'name' => 'entity:bean',
      'entity_id' => '',
      'id' => 1,
    ),
  );
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
    $pane = new stdClass();
    $pane->pid = 'new-a7aea3f5-b4d0-4ad1-ae02-b53440f3c85a';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'bean:field_text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => '',
        'title_class' => '',
        'linked_field' => array(
          'linked' => 1,
          'destination' => '[bean:field-link:url]',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
      'context' => 'requiredcontext_entity:bean_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->uuid = 'a7aea3f5-b4d0-4ad1-ae02-b53440f3c85a';
    $display->content['new-a7aea3f5-b4d0-4ad1-ae02-b53440f3c85a'] = $pane;
    $display->panels['middle'][0] = 'new-a7aea3f5-b4d0-4ad1-ae02-b53440f3c85a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['short_text'] = $mini;

  return $export;
}
