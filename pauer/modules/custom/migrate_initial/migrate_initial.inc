<?php


class PauerExampleMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial example');

    // You may optionally declare dependencies for your migration - other migrations
    // which should run first. In this case, terms assigned to our nodes and
    // the authors of the nodes should be migrated before the nodes themselves.
    /*$this->dependencies = array('CharterUser');*/

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Nid' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Nid',
          'alias' => 'b',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
     $module_path = drupal_get_path('module', 'migrate_initial');
     $csv_path = $module_path . '/node/export-recipes.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationNode('recipes');

    
    //$this->addFieldMapping('nid', 'Nid');
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_recipe_ingredients', 'field_recipe_ingredients');
    $this->addFieldMapping('field_recipe_ingredients:format')
     ->defaultValue('full_html');

    //$this->addFieldMapping('field_recipe_image', 'filepath');
    // Here we specify the directory containing the source files.
    $this->addFieldMapping('field_recipe_image', 'filepath');



    $this->addFieldMapping('field_sanco_method', 'field_sanco_method');
    $this->addFieldMapping('field_sanco_method:format')
     ->defaultValue('full_html');
    $this->addFieldMapping('field_sanco_nutritional_info', 'field_sanco_nutritional_info');
    $this->addFieldMapping('field_sanco_nutritional_info:format')
     ->defaultValue('full_html');
    
    $this->addFieldMapping('field_sanco_serves', 'field_sanco_serves');
    $this->addFieldMapping('field_sanco_source:title', 'field_sanco_source_title');
    $this->addFieldMapping('field_sanco_source', 'field_sanco_source_url');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('uid')
    ->defaultValue('1');
    $this->addFieldMapping('status')
    ->defaultValue('1');

  }
  
}