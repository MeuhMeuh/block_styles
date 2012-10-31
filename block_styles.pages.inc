<?php

function _block_styles_admin_block_styles() {
  $form = array();

  $form['block_styles_presets'] = array(
    '#type' => 'textarea',
    '#title' => t('Block styles presets'),
    '#description' => t('Use class|label pairs (one per line).'),
    '#default_value' => variable_get('block_styles_presets', NULL)
  );

  return system_settings_form($form);
}
