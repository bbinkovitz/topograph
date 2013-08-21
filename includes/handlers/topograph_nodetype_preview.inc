<?php

/**
 * @file
 * Views handler override for field that exposes nodetype preview settings.
 */


/**
 * @inheritdoc
 */
class topograph_nodetype_preview_views_handler extends views_handler_field {

  /**
  * Render the preview settings for this nodetype.
  */
  function render($values) {
    $value = $this->get_value($values);
    $preview = '';
    if(!empty($value)) {
      $preview = (variable_get('node_preview_' . $value) > 0 ? t('Preview before submitting') : t('Do not preview before submitting'));
    }
    return $this->sanitize_value($preview);
  }
}
