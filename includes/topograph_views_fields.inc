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
  $view->view_php = '';
  $view->base_table = 'field_config';
  $view->base_field = 'id';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE;
  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Topograph: List All Fields';
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
  /* Relationship: Field Instance */
  $handler->display->display_options['relationships']['field_rel']['id'] = 'field_rel';
  $handler->display->display_options['relationships']['field_rel']['table'] = 'field_config';
  $handler->display->display_options['relationships']['field_rel']['field'] = 'field_rel';
  $handler->display->display_options['relationships']['field_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_rel']['limit'] = 1;
  /* Field: Field name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_config';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_name']['exclude'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  /* Field: Field type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'field_config';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  $handler->display->display_options['fields']['type']['exclude'] = FALSE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Bundle */
  $handler->display->display_options['fields']['bundle']['id'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['table'] = 'field_config_instance';
  $handler->display->display_options['fields']['bundle']['field'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['label'] = 'Bundle';
  $handler->display->display_options['fields']['bundle']['exclude'] = FALSE;
  $handler->display->display_options['fields']['bundle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['bundle']['relationship'] = 'field_rel';
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
    'field_name' => array(
      'title' => t('Field Name'),
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

  $data['table']['join'] = array(
    'field_config_instance' => array(
      'left_field' => 'field_id',
      'field' => 'id',
    ),
  );
  $data['field_id'] = array(
    'title' => t('Field ID'),
    'help' => t('The ID of the field in the field_config_instance table.'),
    'relationship' => array(
      'base' => 'field_config_instance',
      'field' => 'field_id',
      'handler' => 'views_handler_relationship',
      'label' => t('Field instance data.'),
    ),
  );

  return $data;
}