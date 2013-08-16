<?php

/**
 * @file
 * Defines a view for displaying menus
 */


/**
 * Begin view
 */
function topograph_list_all_menus() {
  /*
   * View 'topograph_list_all_menus'
   */
  $view = views_new_view();
  $view->name = 'topograph_list_all_menus';
  $view->description = 'Gives you the lay of the land for your menus.';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'menu_links';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE;
  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Topograph: List All Menus';
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
      'items_per_page'=> '500',
      'offset' => '0',
      'id' => '0',
    ),
  );
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'menu',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: : Link title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'menu_links';
  $handler->display->display_options['fields']['title']['field'] = 'link_title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: : Menu title */
  $handler->display->display_options['fields']['menu']['id'] = 'menu';
  $handler->display->display_options['fields']['menu']['table'] = 'menu_links';
  $handler->display->display_options['fields']['menu']['field'] = 'menu_name';
  $handler->display->display_options['fields']['menu']['label'] = '';
  $handler->display->display_options['fields']['menu']['exclude'] = TRUE;
  $handler->display->display_options['fields']['menu']['element_label_colon'] = FALSE;
  /* Field: : Router path */
  $handler->display->display_options['fields']['router']['id'] = 'router';
  $handler->display->display_options['fields']['router']['table'] = 'menu_links';
  $handler->display->display_options['fields']['router']['field'] = 'router_path';
  $handler->display->display_options['fields']['router']['label'] = '';
  $handler->display->display_options['fields']['router']['exclude'] = TRUE;
  $handler->display->display_options['fields']['router']['element_label_colon'] = FALSE;
  /* Filter criterion: : Link title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'menu_links';
  $handler->display->display_options['filters']['title']['field'] = 'link_title';
  $handler->display->display_options['filters']['title']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['title']['value'] = '0';
  /* Filter criterion: : Menu title */
  $handler->display->display_options['filters']['menu']['id'] = 'menu';
  $handler->display->display_options['filters']['menu']['table'] = 'menu_links';
  $handler->display->display_options['filters']['menu']['field'] = 'menu_name';
  $handler->display->display_options['filters']['menu']['exposed'] = TRUE;
  $handler->display->display_options['filters']['menu']['expose']['operator_id'] = 'menu_op';
  $handler->display->display_options['filters']['menu']['expose']['label'] = 'Menu';
  $handler->display->display_options['filters']['menu']['expose']['description'] = 'Select which menu to display';
  $handler->display->display_options['filters']['menu']['expose']['operator'] = 'menu_op';
  $handler->display->display_options['filters']['menu']['expose']['identifier'] = 'menu';
  $handler->display->display_options['filters']['menu']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'topograph-list-all-menus';
  return $view;
}
