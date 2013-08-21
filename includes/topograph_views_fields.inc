<?php

/**
 * @file
 * Defines a view for displaying fields.
 */

/**
 * Begin view
 */
function topograph_list_all_fields() {
  /*
   * View 'topograph_list_all_fields'
   */
  $view = views_new_view();
  $view->name = 'topograph_list_all_fields';
  $view->description = 'Gives you the lay of the land for your fields.';
  $view->tag = '';
  $view->base_table = 'field_config';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Topograph: List All Fields';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'type_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'description',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    3 => array(
      'field' => 'module',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    4 => array(
      'field' => 'title_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    5 => array(
      'field' => 'help',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    6 => array(
      'field' => 'bundle',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_name' => 'field_name',
    'type' => 'type',
    'bundle' => 'bundle',
    'description' => 'description',
    'help' => 'help',
    'type_1' => 'type_1',
    'module' => 'module',
    'name' => 'name',
    'title_label' => 'title_label',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'bundle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'help' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'module' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Topograph: Field Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_config';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  /* Field: Topograph: Field type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'field_config';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Topograph: Bundle */
  $handler->display->display_options['fields']['bundle']['id'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['table'] = 'field_config_instance';
  $handler->display->display_options['fields']['bundle']['field'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['bundle']['element_label_colon'] = FALSE;
  /* Field: Nodetype: Nodetype Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'node_type';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['empty'] = '[nodetype has no description]';
  /* Field: Nodetype: Nodetype Help */
  $handler->display->display_options['fields']['help']['id'] = 'help';
  $handler->display->display_options['fields']['help']['table'] = 'node_type';
  $handler->display->display_options['fields']['help']['field'] = 'help';
  $handler->display->display_options['fields']['help']['label'] = 'Help text';
  $handler->display->display_options['fields']['help']['exclude'] = TRUE;
  $handler->display->display_options['fields']['help']['empty'] = '[none]';
  /* Field: Nodetype: Nodetype machine name */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node_type';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['empty'] = '[no nodetype machine name]';
  /* Field: Nodetype: Nodetype Module */
  $handler->display->display_options['fields']['module']['id'] = 'module';
  $handler->display->display_options['fields']['module']['table'] = 'node_type';
  $handler->display->display_options['fields']['module']['field'] = 'module';
  $handler->display->display_options['fields']['module']['label'] = 'Nodetype defined by module';
  $handler->display->display_options['fields']['module']['exclude'] = TRUE;
  $handler->display->display_options['fields']['module']['empty'] = '[none]';
  /* Field: Nodetype: Nodetype Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'node_type';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['empty'] = '[no nodetype associated]';
  /* Field: Nodetype: Nodetype Title Label */
  $handler->display->display_options['fields']['title_label']['id'] = 'title_label';
  $handler->display->display_options['fields']['title_label']['table'] = 'node_type';
  $handler->display->display_options['fields']['title_label']['field'] = 'title_label';
  $handler->display->display_options['fields']['title_label']['label'] = 'Title Label';
  $handler->display->display_options['fields']['title_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_label']['empty'] = '[none]';
  /* Field: Nodetype: Available menus */
  $handler->display->display_options['fields']['nodetype_menus']['id'] = 'nodetype_menus';
  $handler->display->display_options['fields']['nodetype_menus']['table'] = 'node_type';
  $handler->display->display_options['fields']['nodetype_menus']['field'] = 'nodetype_menus';
  /* Field: Nodetype: Node options */
  $handler->display->display_options['fields']['nodetype_options']['id'] = 'nodetype_options';
  $handler->display->display_options['fields']['nodetype_options']['table'] = 'node_type';
  $handler->display->display_options['fields']['nodetype_options']['field'] = 'nodetype_options';
  /* Field: Nodetype: Node submitted */
  $handler->display->display_options['fields']['nodetype_submitted']['id'] = 'nodetype_submitted';
  $handler->display->display_options['fields']['nodetype_submitted']['table'] = 'node_type';
  $handler->display->display_options['fields']['nodetype_submitted']['field'] = 'nodetype_submitted';
  /* Field: Nodetype: Node preview */
  $handler->display->display_options['fields']['nodetype_preview']['id'] = 'nodetype_preview';
  $handler->display->display_options['fields']['nodetype_preview']['table'] = 'node_type';
  $handler->display->display_options['fields']['nodetype_preview']['field'] = 'nodetype_preview';
  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'topograph-list-all-fields';

  return $view;
}

/**
 * Custom data for the field base table.
 *
 * @return array
 */
function topograph_field_data() {
  $data = array(
    'table' => array(
      'base' => array(
        'field' => 'id',
        'title' => t('Fields'),
        'help' => t(''),
        'weight' => 0,
      ),
    ),
    'field_name' => array(
      'title' => t('Field Name'),
      'group' => t('Topograph'),
      'help' => t('Name of the field.'),
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
    'type' => array(
      'group' => t('Topograph'),
      'title' => t('Field type'),
      'help' => t('Type of the field.'),
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
      'group' => t('Topograph'),
      'title' => t('Module'),
      'help' => t('Module that supplies the field.'),
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
    'id' => array(
      'group' => t('Topograph'),
      'title' => t('ID'),
      'help' => t('Field ID.'),
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
  );

  return $data;
}

/**
 *
 * @return array
 */
function topograph_field_instance_data() {

  $data = array(
    'field_id' => array(
      'group' => t('Topograph'),
      'title' => t('Field ID'),
      'help' => t('The ID of the field in the field_config_instance table.'),
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
    'bundle' => array(
      'group' => t('Topograph'),
      'title' => t('Bundle'),
      'help' => t('The bundle (content type) on which this field appears.'),
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
    'data' => array(
      'group' => t('Field instance'),
      'title' => t('Field instance data'),
      'help' => t('Serialized data from the field instance settings.'),
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
  );
  return $data;
}
