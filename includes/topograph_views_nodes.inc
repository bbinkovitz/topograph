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
  /* Field: ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'node_type';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = FALSE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'topograph-list-all-nodetypes';
  return $view;
}

/**
 * Custom data for the nodetype base table.
 *
 * @return array
 */
function topograph_node_data() {
  $data = array(
    'table' => array(
      'base' => array(
        'field' => 'type',
        'title' => t('Nodetypes'),
        'help' => t(''),
        'weight' => 0,
      ),
    ),
    'type' => array(
      'title' => t('Nodetype machine name'),
      'help' => t('Machine name of the node type.'),
      'group' => 'Nodetype',
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'name' => array(
      'title' => t('Nodetype Name'),
      'help' => t('Human-readable name of the node type.'),
      'group' => 'Nodetype',
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'module' => array(
      'title' => t('Nodetype Module'),
      'help' => t('Module that defines the node type.'),
      'group' => 'Nodetype',
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'description' => array(
      'title' => t('Nodetype Description'),
      'help' => t('Description of the node type.'),
      'group' => 'Nodetype',
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'help' => array(
      'title' => t('Nodetype Help'),
      'help' => t('Help text of the node type.'),
      'group' => 'Nodetype',
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'title_label' => array(
      'title' => t('Nodetype Title Label'),
      'help' => t('Title label of the node type.'),
      'group' => 'Nodetype',
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'nodetype_menus' => array(
      'real field' => 'type',
      'group' => t('Menus'),
      'title' => t('Nodetype menus'),
      'help' => t('Menus available for this nodetype.'),
      'field' => array(
        'handler' => 'topograph_nodetype_menus_views_handler',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'nodetype_options' => array(
      'real field' => 'type',
      'group' => t('Node options'),
      'title' => t('Nodetype options'),
      'help' => t('Options settings for this nodetype.'),
      'field' => array(
        'handler' => 'topograph_nodetype_options_views_handler',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'nodetype_submitted' => array(
      'real field' => 'type',
      'group' => t('Node submitted'),
      'title' => t('Nodetype submitted'),
      'help' => t('Submission settings for this nodetype.'),
      'field' => array(
        'handler' => 'topograph_nodetype_submitted_views_handler',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
    'nodetype_preview' => array(
      'real field' => 'type',
      'group' => t('Node preview'),
      'title' => t('Nodetype preview'),
      'help' => t('Preview settings for this nodetype.'),
      'field' => array(
        'handler' => 'topograph_nodetype_preview_views_handler',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
    ),
  );

  return $data;
}
