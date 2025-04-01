<?php

/**
 * @file
 * Theme and preprocess functions for blocks.
 */
/**
 * Implements hook_preprocess_region().
*/
function ixp_artisan_preprocess_block(&$variables) {
  switch ($variables['plugin_id']) {
    case 'system_powered_by_block':
      $variables['content']['#markup'] = "<small>© Copyright 2025 Drupal IXP. " . $variables['content']['#markup'] . "</small>";
      break; 
    default:
      break;
  }
}
   