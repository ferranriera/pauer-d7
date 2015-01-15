<?php

/**
 * @file
 * Because the name of this file is the module name plus '.migrate.inc', when
 * hook_migrate_api is invoked by the Migrate module this file is automatically
 * loaded - thus, you don't need to implement your hook in the .module file.
 */

/*
 * You must implement hook_migrate_api(), setting the API level to 2, if you are
 * implementing any migration classes. As of Migrate 2.5, you should also
 * register your migration and handler classes explicitly here - the former
 * method of letting them get automatically registered on a cache clear will
 * break in certain environments (see http://drupal.org/node/1778952).
 */
function migrate_initial_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      /*'OamiIdeas' => array('class_name' => 'OamiIdeasTermsMigration'),
      'OamiTerms' => array('class_name' => 'OamiGenderTermsMigration'),
      'OamiIntellectual' => array('class_name' => 'OamiIntellectualTermsMigration'),
      'OamiBlog' => array('class_name' => 'OamiBlogMigration'),
      'OamiParticipation' => array('class_name' => 'OamiParticipationMigration'),
      'OamiBlock' => array('class_name' => 'OamiBlockMigration'),

      'OamiToolkit' => array('class_name' => 'OamiToolkitMigration'),
      'OamiSupporters' => array('class_name' => 'OamiSupportersMigration'),
      'OamiIntellectualContent' => array('class_name' => 'OamiIntellectualMigration'),
      'OamiUser' => array('class_name' => 'OamiUserMigration'),
      'OamiProfile' => array('class_name' => 'OamiUserProfileMigration'),*/
      'OamiPage' => array('class_name' => 'OamiPageMigration'),
      'OamiMenus' => array('class_name' => 'OamiMenusMigration'),
      /*'OamiIpCampaigns' => array('class_name' => 'OamiIpCampaignsMigration'),
      'OamiCompetition' => array('class_name' => 'OamiCompetitionMigration'),*/
    ),
  );
  return $api;
}

