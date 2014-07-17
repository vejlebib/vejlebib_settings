<?php
/**
 * @file
 * vejlebib_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vejlebib_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ding_dibs-dibs-cards-supported'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'dibs-cards-supported',
    'module' => 'ding_dibs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ddbasic' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ddbasic',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wellejus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wellejus',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ding_dibs-dibs-terms-of-sale'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'dibs-terms-of-sale',
    'module' => 'ding_dibs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ddbasic' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ddbasic',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wellejus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wellejus',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['mailchimp_lists-nyheder_fra_vejle_bibliotekerne'] = array(
    'cache' => 2,
    'custom' => 0,
    'delta' => 'nyheder_fra_vejle_bibliotekerne',
    'module' => 'mailchimp_lists',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ddbasic' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ddbasic',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wellejus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wellejus',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}