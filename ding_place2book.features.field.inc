<?php
/**
 * @file
 * ding_place2book.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function ding_place2book_field_default_fields() {
  $fields = array();

  // Exported field: 'node-ding_event-field_place2book_tickets'.
  $fields['node-ding_event-field_place2book_tickets'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_place2book_tickets',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ding_event',
      'default_value' => array(
        0 => array(
          'value' => 'placeholder',
        ),
      ),
      'deleted' => '0',
      'description' => 'Placeholder for Place2book ticket information and/or order link',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 10,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaser_highlight' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_place2book_tickets',
      'label' => 'Place2book Tickets',
      'required' => TRUE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 35,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Place2book Tickets');
  t('Placeholder for Place2book ticket information and/or order link');

  return $fields;
}
