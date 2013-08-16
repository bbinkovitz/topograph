<?php

/**
 * @file
 * Defines a view for displaying blocks.
 */


/**
 * Begin view
 */
function topograph_list_all_blocks() {
  /*
   * View 'topograph_list_all_blocks'
   */
  $view = new view();
  $view->name = 'topograph_list_all_blocks';
  $view->description = 'Gives you the lay of the land for your blocks.';
  $view->tag = '';
  $view->base_table = 'block';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Topograph: List All Blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'delta' => 'delta',
    'status' => 'status',
    'region' => 'region',
    'theme' => 'theme',
    'module' => 'module',
  );
  $handler->display->display_options['style_options']['default'] = 'delta';
  $handler->display->display_options['style_options']['info'] = array(
    'delta' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'theme' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'module' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: : Delta */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'block';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Field: :  */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'block';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* Field: : Region */
  $handler->display->display_options['fields']['region']['id'] = 'region';
  $handler->display->display_options['fields']['region']['table'] = 'block';
  $handler->display->display_options['fields']['region']['field'] = 'region';
  /* Field: : Theme */
  $handler->display->display_options['fields']['theme']['id'] = 'theme';
  $handler->display->display_options['fields']['theme']['table'] = 'block';
  $handler->display->display_options['fields']['theme']['field'] = 'theme';
  /* Field: : Module */
  $handler->display->display_options['fields']['module']['id'] = 'module';
  $handler->display->display_options['fields']['module']['table'] = 'block';
  $handler->display->display_options['fields']['module']['field'] = 'module';
  /* Filter criterion: : Theme */
  $handler->display->display_options['filters']['theme']['id'] = 'theme';
  $handler->display->display_options['filters']['theme']['table'] = 'block';
  $handler->display->display_options['filters']['theme']['field'] = 'theme';
  $handler->display->display_options['filters']['theme']['exposed'] = TRUE;
  $handler->display->display_options['filters']['theme']['expose']['operator_id'] = 'theme_op';
  $handler->display->display_options['filters']['theme']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['theme']['expose']['description'] = 'Select which theme\'s blocks to display';
  $handler->display->display_options['filters']['theme']['expose']['operator'] = 'theme_op';
  $handler->display->display_options['filters']['theme']['expose']['identifier'] = 'Theme';
  $handler->display->display_options['filters']['theme']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'topograph-list-all-blocks';
  return $view;
}
