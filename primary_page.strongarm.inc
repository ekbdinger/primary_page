<?php

/**
 * Implementation of hook_strongarm().
 */
function primary_page_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pp';
  $strongarm->value = 0;
  $export['comment_anonymous_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_pp';
  $strongarm->value = '3';
  $export['comment_controls_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pp';
  $strongarm->value = '4';
  $export['comment_default_mode_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_pp';
  $strongarm->value = '1';
  $export['comment_default_order_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pp';
  $strongarm->value = '50';
  $export['comment_default_per_page_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pp';
  $strongarm->value = '0';
  $export['comment_form_location_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pp';
  $strongarm->value = '2';
  $export['comment_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pp';
  $strongarm->value = '1';
  $export['comment_preview_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pp';
  $strongarm->value = '1';
  $export['comment_subject_field_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_pp';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '4',
    'author' => '5',
    'options' => '6',
    'comment_settings' => '9',
    'menu' => '3',
    'taxonomy' => '-4',
    'attachments' => '7',
    'print' => '8',
  );
  $export['content_extra_weights_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pp';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_pp';
  $strongarm->value = '1';
  $export['upload_pp'] = $strongarm;

  return $export;
}
