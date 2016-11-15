<?php
/**
 * @file
 * my_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function my_blog_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  return $roles;
}
