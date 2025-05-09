<?php

/**
 * @file
 * Theme and preprocess functions for html.
 */

use Drupal\Core\Template\Attribute;

/**
 * Implements hook_preprocess_html().
 */
function ixp_artisan_preprocess_html(&$variables) {
  if ($variables['logged_in'] ?? FALSE) {
    if ($variables['attributes'] instanceof Attribute) {
      $variables['attributes']->addClass('user-logged-in');
    }
    else {
      $variables['attributes']['class'][] = 'user-logged-in';
    }
  }
}
