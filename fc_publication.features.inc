<?php
/**
 * @file
 * fc_publication.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fc_publication_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fc_publication_node_info() {
  $items = array(
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('A <em>Publication</em> is a downloadable file with a text description.'),
      'has_title' => '1',
      'title_label' => t('Publication Name'),
      'help' => '',
    ),
  );
  return $items;
}
