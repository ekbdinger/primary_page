<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function primary_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function primary_page_node_info() {
  $items = array(
    'pp' => array(
      'name' => t('PP'),
      'module' => 'features',
      'description' => t('Created on 03/06/2012.  Decided on March 7, 2012 that this will be the default primary page going forward'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function primary_page_views_api() {
  return array(
    'api' => '2',
  );
}
