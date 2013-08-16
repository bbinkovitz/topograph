<?php

/**
 * @file
 * Defines a view for displaying node types.
 */


/**
 * Begin view
 */
function topograph_list_all_nodetypes() {
  /*
   * View 'topograph_list_all_nodetypes'
   */
  $view = views_new_view();
  $view->name = 'topograph_list_all_nodetypes';
  $view->description = 'Gives you the lay of the land for your nodetypes.';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node_type';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE;
  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Topograph: List All Nodetypes';
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
  /* Field: Machine name */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node_type';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'node_type';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'node_type';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = FALSE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Module */
  $handler->display->display_options['fields']['module']['id'] = 'module';
  $handler->display->display_options['fields']['module']['table'] = 'node_type';
  $handler->display->display_options['fields']['module']['field'] = 'module';
  $handler->display->display_options['fields']['module']['label'] = '';
  $handler->display->display_options['fields']['module']['exclude'] = FALSE;
  $handler->display->display_options['fields']['module']['element_label_colon'] = FALSE;
  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'topograph-list-all-nodetypes';
  return $view;
}
