<?php
/**
 * @file
 * p_sitewide.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function p_sitewide_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any general_structure bean'.
  $permissions['create any general_structure bean'] = array(
    'name' => 'create any general_structure bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any general_structure bean'.
  $permissions['delete any general_structure bean'] = array(
    'name' => 'delete any general_structure bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any general_structure bean'.
  $permissions['edit any general_structure bean'] = array(
    'name' => 'edit any general_structure bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any general_structure bean'.
  $permissions['view any general_structure bean'] = array(
    'name' => 'view any general_structure bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
