<?php
/**
 * @file
 * fc_publication.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fc_publication_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Local File (field_pub_file:fid) */
  $handler->display->display_options['relationships']['field_pub_file_fid']['id'] = 'field_pub_file_fid';
  $handler->display->display_options['relationships']['field_pub_file_fid']['table'] = 'field_data_field_pub_file';
  $handler->display->display_options['relationships']['field_pub_file_fid']['field'] = 'field_pub_file_fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_pub_file_fid';
  $handler->display->display_options['fields']['filesize']['label'] = '';
  $handler->display->display_options['fields']['filesize']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filesize']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filesize']['element_default_classes'] = FALSE;
  /* Field: Content: Local File */
  $handler->display->display_options['fields']['field_pub_file']['id'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['table'] = 'field_data_field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['field'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['label'] = '';
  $handler->display->display_options['fields']['field_pub_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pub_file']['alter']['text'] = '<h3><a href="[field_pub_file]" class="local-file" title="[title]">[title]</a></h3>([filesize])';
  $handler->display->display_options['fields']['field_pub_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_file']['type'] = 'file_url_plain';
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_pub_link']['id'] = 'field_pub_link';
  $handler->display->display_options['fields']['field_pub_link']['table'] = 'field_data_field_pub_link';
  $handler->display->display_options['fields']['field_pub_link']['field'] = 'field_pub_link';
  $handler->display->display_options['fields']['field_pub_link']['label'] = '';
  $handler->display->display_options['fields']['field_pub_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pub_link']['alter']['text'] = '<h3><a href="[field_pub_link-url]" class="external-file" title="[title]">[title]</a></h3>';
  $handler->display->display_options['fields']['field_pub_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pub_link']['type'] = 'link_plain';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_pub_description']['id'] = 'field_pub_description';
  $handler->display->display_options['fields']['field_pub_description']['table'] = 'field_data_field_pub_description';
  $handler->display->display_options['fields']['field_pub_description']['field'] = 'field_pub_description';
  $handler->display->display_options['fields']['field_pub_description']['label'] = '';
  $handler->display->display_options['fields']['field_pub_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_description']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );

  /* Display: Publications Page */
  $handler = $view->new_display('page', 'Publications Page', 'page');
  $handler->display->display_options['display_description'] = 'Displays an unordered list of all published "Publication" nodes.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'publications';

  /* Display: Publications Feed */
  $handler = $view->new_display('feed', 'Publications Feed', 'feed_1');
  $handler->display->display_options['display_description'] = 'Provides an RSS Feed of Publication nodes.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'publications/feed';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $export['publications'] = $view;

  return $export;
}
