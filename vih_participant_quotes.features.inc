<?php
/**
 * @file
 * vih_participant_quotes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_participant_quotes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_participant_quotes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_participant_quotes_node_info() {
  $items = array(
    'citater' => array(
      'name' => t('Short Course Testimonial'),
      'base' => 'node_content',
      'description' => t('Use <em>short course testimonial</em> for adding quotes about short courses.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
