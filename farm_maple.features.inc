<?php
/**
 * @file
 * farm_maple.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_maple_ctools_plugin_api($module = NULL, $api = NULL) {
  return farm_record_api('ctools', $module, $api);
}

/**
 * Implements hook_views_api().
 */
function farm_maple_views_api($module = NULL, $api = NULL) {
  return farm_record_api('views', $module, $api);
}

/**
 * Implements hook_default_farm_asset_type().
 */
function farm_maple_default_farm_asset_type() {
  return farm_record_entity_type_definitions('farm_maple', 'farm_asset');
}

/**
 * Implements hook_default_log_type().
 */
function farm_maple_default_log_type() {
  return farm_record_entity_type_definitions('farm_maple', 'log');
}
