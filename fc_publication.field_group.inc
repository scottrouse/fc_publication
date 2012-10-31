<?php
/**
 * @file
 * fc_publication.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fc_publication_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication|node|publication|form';
  $field_group->group_name = 'group_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '1',
    'children' => array(
      0 => 'field_pub_file',
      1 => 'field_pub_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<p>A Publication consists of <em>either</em> a <strong>Local File</strong> uploaded to the site or an <strong>External Link</strong>. Choose <em>one</em> of the two options and complete the appropriate form below.</p>',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_publication|node|publication|form'] = $field_group;

  return $export;
}
