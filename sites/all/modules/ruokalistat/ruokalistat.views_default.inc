<?php
/**
 * @file
 * ruokalistat.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ruokalistat_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'p_iv_n_lounas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Päivän lounas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'lounaslista' => 'lounaslista',
  );
  /* Filter criterion: Content: Date (field_lunchdate) */
  $handler->display->display_options['filters']['field_lunchdate_value']['id'] = 'field_lunchdate_value';
  $handler->display->display_options['filters']['field_lunchdate_value']['table'] = 'field_data_field_lunchdate';
  $handler->display->display_options['filters']['field_lunchdate_value']['field'] = 'field_lunchdate_value';
  $handler->display->display_options['filters']['field_lunchdate_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lunchdate_value']['value']['value'] = '2015-02-27';
  $handler->display->display_options['filters']['field_lunchdate_value']['expose']['operator_id'] = 'field_lunchdate_value_op';
  $handler->display->display_options['filters']['field_lunchdate_value']['expose']['label'] = 'Date (field_lunchdate)';
  $handler->display->display_options['filters']['field_lunchdate_value']['expose']['operator'] = 'field_lunchdate_value_op';
  $handler->display->display_options['filters']['field_lunchdate_value']['expose']['identifier'] = 'field_lunchdate_value';
  $handler->display->display_options['filters']['field_lunchdate_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['p_iv_n_lounas'] = $view;

  return $export;
}
