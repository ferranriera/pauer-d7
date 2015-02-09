<?php
/**
 * @file
 * p_general.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function p_general_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-extra-links.
  $menus['menu-extra-links'] = array(
    'menu_name' => 'menu-extra-links',
    'title' => 'Extra Links',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Extra Links');


  return $menus;
}
