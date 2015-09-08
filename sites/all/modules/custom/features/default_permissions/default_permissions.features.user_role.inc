<?php
/**
 * @file
 * default_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function default_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Staff.
  $roles['Staff'] = array(
    'name' => 'Staff',
    'weight' => 3,
  );

  return $roles;
}
