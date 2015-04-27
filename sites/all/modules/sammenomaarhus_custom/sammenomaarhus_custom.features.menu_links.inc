<?php
/**
 * @file
 * sammenomaarhus_custom.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sammenomaarhus_custom_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_button-menu:admin/structure/menu/manage/menu-button-menu
  $menu_links['management_button-menu:admin/structure/menu/manage/menu-button-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-button-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Button Menu',
    'options' => array(
      'identifier' => 'management_button-menu:admin/structure/menu/manage/menu-button-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menuer:admin/structure/menu',
  );
  // Exported menu link: menu-button-menu_ls-om-processen:node/10
  $menu_links['menu-button-menu_ls-om-processen:node/10'] = array(
    'menu_name' => 'menu-button-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Læs om processen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-button-menu_ls-om-processen:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-button-menu_stil-forslag:nyt-forslag
  $menu_links['menu-button-menu_stil-forslag:nyt-forslag'] = array(
    'menu_name' => 'menu-button-menu',
    'link_path' => 'nyt-forslag',
    'router_path' => 'nyt-forslag',
    'link_title' => 'Stil forslag',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-button-menu_stil-forslag:nyt-forslag',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Button Menu');
  t('Læs om processen');
  t('Stil forslag');


  return $menu_links;
}