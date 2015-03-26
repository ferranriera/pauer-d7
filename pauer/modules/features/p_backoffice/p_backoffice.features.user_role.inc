<?php
/**
 * @file
 * p_backoffice.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function p_backoffice_user_default_roles() {
  $roles = array();

  // Exported role: Editorial Team.
  $roles['Editorial Team'] = array(
    'name' => 'Editorial Team',
    'weight' => 2,
  );

  return $roles;
}
