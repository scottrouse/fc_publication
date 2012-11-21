<?php
/**
 * @file
 * fc_publication.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fc_publication_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications';
  $context->description = 'Defines block layout on Publications page.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/9' => 'node/9',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-publications-block_1' => array(
          'module' => 'views',
          'delta' => 'publications-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defines block layout on Publications page.');
  $export['publications'] = $context;

  return $export;
}
