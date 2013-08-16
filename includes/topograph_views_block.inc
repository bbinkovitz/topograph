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
  $view = views_new_view();
  $view->name = 'topograph_list_all_blocks';
  $view->description = 'Gives you the lay of the land for your blocks.';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'block';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE;
  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Topograph: List All Blocks';
  $handler->display->display_options['access'] = array(
    'type' => 'role',
    'role' => array(
      '3' => '3',
    )
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager'] = array(
    'type' => 'full',
    'options' => array(
      'items_per_page'=> '100',
      'offset' => '0',
      'id' => '0',
    ),
  );
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Delta name */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'block';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['element_label_colon'] = TRUE;
  /* Field: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'block';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['element_label_colon'] = TRUE;
  /* Field: Region */
  $handler->display->display_options['fields']['region']['id'] = 'region';
  $handler->display->display_options['fields']['region']['table'] = 'block';
  $handler->display->display_options['fields']['region']['field'] = 'region';
  $handler->display->display_options['fields']['region']['label'] = '';
  $handler->display->display_options['fields']['region']['exclude'] = FALSE;
  $handler->display->display_options['fields']['region']['element_label_colon'] = TRUE;
  /* Field: Theme */
  $handler->display->display_options['fields']['theme']['id'] = 'theme';
  $handler->display->display_options['fields']['theme']['table'] = 'block';
  $handler->display->display_options['fields']['theme']['field'] = 'theme';
  $handler->display->display_options['fields']['theme']['label'] = '';
  $handler->display->display_options['fields']['theme']['exclude'] = FALSE;
  $handler->display->display_options['fields']['theme']['element_label_colon'] = TRUE;
  /* Field: Module */
  $handler->display->display_options['fields']['module']['id'] = 'module';
  $handler->display->display_options['fields']['module']['table'] = 'block';
  $handler->display->display_options['fields']['module']['field'] = 'module';
  $handler->display->display_options['fields']['module']['label'] = '';
  $handler->display->display_options['fields']['module']['exclude'] = FALSE;
  $handler->display->display_options['fields']['module']['element_label_colon'] = TRUE;
  /* Filter criterion: : Menu title */
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
