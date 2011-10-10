<?php
/**
 * @file
 * Provide some views integration for uc_signup
 */

function uc_signup_views_data() {
  $data['uc_signup_order']['table'] = array(
    'group' => t('Signup'),
  );

  $data['uc_signup_order']['table']['join']['signup_log'] = array(
    'left_field' => 'sid',
    'field' => 'sid',
  );
 
  $data['uc_signup_order']['order_id'] = array(
    'title' => t('Order ID'),
    'help' => t('The associated order ID.'),
    'field' => array(
      'handler' => 'uc_order_handler_field_order_id',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'name field' => 'title',
      'numeric' => TRUE,
      'validate type' => 'order_id',
    ),
  );

  return $data;
}
