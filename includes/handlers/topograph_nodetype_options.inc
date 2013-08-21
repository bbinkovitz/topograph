<?php

/**
 * @file
 * Views handler override for field that exposes nodetype options.
 */


/**
 * @inheritdoc
 */
class topograph_nodetype_options_views_handler extends views_handler_field {

  /**
  * Render the options settings for this nodetype.
  */
  function render($values) {
    $value = $this->get_value($values);
    $available_options = array(
      'status' => t('Published'),
      'promote' => t('Promoted to front page'),
      'sticky' => t('Sticky at top of lists'),
      'revision' => t('Create new revision'),
    );

    $options_list = '';
    if(!empty($value)) {
      $options = variable_get('node_options_' . $value);
      $count = 0;
      if (!empty($options)) {
        foreach ($options as $option) {
          $options_list .= $available_options[$option];
          $count++;
          if ($count < (count($options))) {
            $options_list .= ', ';
          }
        }
      }
    }
    return $this->sanitize_value($options_list);
  }
}
