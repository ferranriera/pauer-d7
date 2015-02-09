<?php
class PauThemeTagsMigration extends Migration {
    public function __construct($arguments) {
        parent::__construct($arguments);
        $this->description = t('Pau Theme Tags Migration');
        $this->map = new MigrateSQLMap($this->machineName,
            array(
                'name' => array(
                    'type' => 'varchar',
                    'length' => 255,
                    'not null' => TRUE,
                    'description' => 'Genders',
                )
            ),
            MigrateDestinationTerm::getKeySchema()
        );
        //CSV
        $module_path = drupal_get_path('module', 'migrate_initial');
        $csv_path = $module_path . '/terms/export-themes.csv';
        $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
        $this->destination = new MigrateDestinationTerm('theme_tags');
        //Fields
        $this->addFieldMapping('name', 'name');
    }
}


class PauFreeTagsMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Pau Free Tags Migration');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Genders',
        )
      ),
        MigrateDestinationTerm::getKeySchema()
    );
    //CSV
    $module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = 'http://paueducation.com/migrate-free-tags.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('free_tags');
    //Fields
    $this->addFieldMapping('name', 'name');
  }
}

class OamiIdeasTermsMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Ideas Terms migration');
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'Name' => array('type' => 'varchar',
                           'length' => 255,
                           'not null' => TRUE,
                           'description' => 'Ideas',
                          )
        ),
        MigrateDestinationTerm::getKeySchema()
      );

    $module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = $module_path . '/terms/oami-export-ideas.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('ideas');
    
    $this->addFieldMapping('name', 'Name');
    $this->addFieldMapping('weight', 'weight');

    
  }
  public function prepareRow($current_row) {

      //$current_row->panelizer['default']->name="bean:general_structure:bean_variant_1";
     
    }
}

class PauImageNewsMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('News File migration from the old website');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'fid' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Nid',
          'alias' => 'b',
        )
      ),
      MigrateDestinationMedia::getKeySchema()
    );

    //CSV
    $module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = 'http://paueducation.com/en/feeds-image.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array(
      'embedded_newlines' => TRUE,
      'header_rows' => 1
    ));
    $this->dependencies = array('PauNews');
    $this->destination = new MigrateDestinationMedia('image');


    $this->addFieldMapping('value', 'path');
    $this->addFieldMapping('uid')
      ->defaultValue(1);
    $this->addFieldMapping('field_file_image_alt_text','field_file_image_alt_text');
    $this->addFieldMapping('field_file_image_title_text','field_file_image_title_text');


  }
  public function complete($entity, stdClass $row)
  {
    $node=node_load($row->nid);
      if ($node){
          $value=0;
          if (isset($node->field_news_images['und'])){
              $value=count($node->field_news_images['und']);
          }
          $node->field_news_images['und'][$value]['fid']=$entity->fid;
          $node->field_news_images['und'][$value]['type']="image";
          node_save($node);
      }


  }


  }


 class PauNewsMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->dependencies = array('PauFreeTags','PauUser','PauProjects');

    $this->description = t('News migration from the old website');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Nid',
          'alias' => 'b',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

		//CSV
		$module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = 'http://paueducation.com/en/all-news.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
	$this->destination = new MigrateDestinationNode('news');

		//Fields
        $this->addFieldMapping('title', 'title');
        $this->addFieldMapping('language', 'language');
        $this->addFieldMapping('field_news_summary', 'field_news_summary');
        $this->addFieldMapping('field_news_summary:format')
        ->defaultValue('full_html');
        $this->addFieldMapping('field_news_description', 'field_news_description');
        $this->addFieldMapping('field_news_description:format')
        ->defaultValue('full_html');
        $this->addFieldMapping('field_news_documents','field_news_documents')->separator("|");
        $this->addFieldMapping('field_news_highlight', 'field_news_highlight');
        $this->addFieldMapping('field_news_highlight_priority', 'field_news_highlight_priority');
        $this->addFieldMapping('field_news_weight', 'field_news_weight');
        /*alt images and titles*/
        $this->addFieldMapping('field_news_video:file_class')->defaultValue('MigrateExtrasFileYoutube');
        $this->addFieldMapping('field_news_video', 'field_news_video');
        $this->addFieldMapping('field_news_location', 'field_news_location');
        $this->addFieldMapping('nid', 'nid');
        $this->addFieldMapping('field_news_free_tags', 'field_news_free_tags')->separator(",");
        $this->addFieldMapping('field_news_projects', 'field_news_projects');
        /*To Do: Importar autores */
        $this->addFieldMapping('uid','uid');
        $this->addFieldMapping('created', 'created');
        $this->addFieldMapping('field_news_post_date', 'created');
        $this->addFieldMapping('path', 'path');
        $this->addFieldMapping('changed', 'changed');
        $this->addFieldMapping('status', 'published');
        $this->addFieldMapping('is_new')
        ->defaultValue('true');

  }

   public function prepareRow($row) {
     //Convert 'English' to 'en'
     $row->uid= ($row->uid=='')  ? '1' : $row->uid;
     $row->field_news_description=str_replace('<p>&nbsp;</p>','',$row->field_news_description);
     $row->field_news_description=str_replace('<p style="text-align: justify;">&nbsp;</p>','',$row->field_news_description);
       //
       //<p style="text-align: justify;">&nbsp;</p>
       if ($row->field_news_flickr){
           $row->field_news_description.=$row->field_news_description;
           $row->field_news_description.='<p><a target="_blank" href="'.$row->field_news_flickr.'">Flickr Gallery</a><p>';
       }
     $row->language=strtolower(substr($row->language, 0, 2));
     $row->published= ($row->published=='Yes')  ? '1' : '0';

   }
  
}

class PauProjectsMigration extends Migration {
    public function __construct($arguments) {
        parent::__construct($arguments);
        $this->dependencies = array('PauUser','PauPage','PauThemeTags');

        $this->description = t('News migration from the old website');
        $this->map = new MigrateSQLMap($this->machineName,
            array(
                'nid' => array(
                    'type' => 'int',
                    'not null' => TRUE,
                    'description' => 'Nid',
                    'alias' => 'b',
                )
            ),
            MigrateDestinationNode::getKeySchema()
        );

        //CSV
        $module_path = drupal_get_path('module', 'migrate_initial');
        $csv_path = 'http://paueducation.com/all-projects.csv';
        $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
        $this->destination = new MigrateDestinationNode('projects');

        //Fields
        $this->addFieldMapping('title', 'title');
        $this->addFieldMapping('field_projects_color','field_projects_color');
        $this->addFieldMapping('field_projects_image_to_show','field_projects_image_to_show');
        $this->addFieldMapping('field_projects_image_to_change','field_projects_image_to_change');
        $this->addFieldMapping('field_projects_image_header','field_projects_image_header');
        $this->addFieldMapping('field_projects_logo_header','field_projects_logo_header');
        $this->addFieldMapping('field_projects_sentence','field_projects_sentence');
        $this->addFieldMapping('field_projects_solutions','field_projects_solutions');
        $this->addFieldMapping('field_projects_thematic','field_projects_thematic');
        $this->addFieldMapping('field_projects_target_group','field_projects_target_group')->separator("|");
        $this->addFieldMapping('field_projects_servicios','field_projects_servicios')->separator("|");
        $this->addFieldMapping('field_projects_summary','field_projects_summary');
        $this->addFieldMapping('field_projects_summary:format')
            ->defaultValue('full_html');
        $this->addFieldMapping('field_projects_description','field_projects_description');
        $this->addFieldMapping('field_projects_description:format')
            ->defaultValue('full_html');
        $this->addFieldMapping('field_projects_summary_name','field_projects_summary_name');
        $this->addFieldMapping('field_projects_summary_phrase','field_projects_summary_phrase');
        $this->addFieldMapping('field_projects_summary_image','field_projects_summary_image');
        $this->addFieldMapping('field_projects_summary_link','field_projects_summary_link');

        $this->addFieldMapping('field_projects_theme_tags')->defaultValue('innovative learning|literacy|creativity in the classrom')->separator('|');

        $this->addFieldMapping('field_projects_images','field_projects_image')->separator("|");
        $this->addFieldMapping('field_projects_link','field_projects_link');
        $this->addFieldMapping('field_projects_made_for','field_projects_made_for');
        //ield_projects_flickr
        $this->addFieldMapping('field_projects_video:file_class')->defaultValue('MigrateExtrasFileYoutube');
        $this->addFieldMapping('field_projects_video', 'field_projects_video')->separator("|");
        $this->addFieldMapping('field_projects_impact','field_projects_impact');
        $this->addFieldMapping('field_projects_highligh','field_projects_highligh');
        $this->addFieldMapping('field_projects_highligh_priority','field_projects_highligh_priority');
        $this->addFieldMapping('field_projects_weight','field_projects_weight');
        $this->addFieldMapping('field_projects_case_study','field_projects_case_study');
        $this->addFieldMapping('language', 'language');
        $this->addFieldMapping('nid', 'nid');
        $this->addFieldMapping('uid','uid');
        $this->addFieldMapping('created', 'created');
        $this->addFieldMapping('path', 'path');
        $this->addFieldMapping('changed', 'changed');
        $this->addFieldMapping('field_projects_business_unit','field_projects_business_unit');
        $this->addFieldMapping('status', 'published');
        $this->addFieldMapping('is_new')
            ->defaultValue('true');
        $this->addFieldMapping('field_projects_clients','field_projects_clients');

    }

    public function prepareRow($row) {
        //Convert 'English' to 'en'
        $row->language=strtolower(substr($row->language, 0, 2));
        $row->published= ($row->published=='Yes')  ? '1' : '0';
        $row->field_projects_business_unit=rand(8,11);

    }

    public function complete($entity, stdClass $row) {
        db_insert('flagging')
        ->fields(array(
            'flagging_id' => NULL,
            'fid' => 1,
            'entity_type' => 'projects',
            'entity_id' => $row->nid,
            'uid' => 0,
            'timestamp'=> 0
        ))
            ->execute();
    }

}

/* Block Migrate */
class PauBlockMigration extends Migration {
	public function __construct($arguments) {
    parent::__construct($arguments);
		$this->description = t('Initial Block');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'bid' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Nid',
          'alias' => 'b',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
     	$csv_path =  drupal_get_path('module', 'migrate_initial') . '/block/export-block.csv';
    	$this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    	$this->destination = new MigrateDestinationEntityAPI('bean','general_structure');

        $this->addFieldMapping('label', 'label');
        $this->addFieldMapping('title', 'title');
        $this->addFieldMapping('field_block_image', 'field_block_image');
        $this->addFieldMapping('field_block_body', 'field_block_body');
        $this->addFieldMapping('field_block_body:format')->defaultValue('full_html');
        $this->addFieldMapping('field_block_link:title', 'field_block_link_title');
        $this->addFieldMapping('field_block_link', 'field_block_link_url');
        $this->addFieldMapping('type')->defaultValue('general_structure');
        $this->addFieldMapping('field_block_body:language', 'language');
        $this->addFieldMapping('field_block_link:language', 'language');
        $this->addFieldMapping('title_field:language', 'language');
        $this->addFieldMapping('title_field', 'title');
        $this->addFieldMapping('field_block_link_2:title', 'field_block_link_2_title');
        $this->addFieldMapping('field_block_link_2', 'field_block_link2_url');
        $this->addFieldMapping('field_block_file', 'field_block_file');
        $this->addFieldMapping('field_block_file:description', 'field_block_file_title');
        $this->addFieldMapping('field_block_body_2', 'field_block_body_2');
        $this->addFieldMapping('field_block_body_2:format')->defaultValue('full_html');
        $this->addFieldMapping('field_block_body_2:language', 'language');

   }

    public function prepareRow($row) {
        $row->field_block_image= ($row->field_block_image!="") ? drupal_get_path('module', 'migrate_initial') .'/img/'.$row->field_block_image : "";
        $row->field_block_file= ($row->field_block_file!="") ? drupal_get_path('module', 'migrate_initial') .'/doc/'.$row->field_block_file : "";
    }
  
}

/* Menus Migrate */
class PauMenusMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
      $this->dependencies = array('PauPage');
      $this->description = t('Initial Menus');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
       'mlid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'ID of destination link',
        )
      ),
       MigrateDestinationMenuLinks::getKeySchema()
    );

    $module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = $module_path . '/menu/export-menu.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
		$this->dependencies = array('PauPage');
		$this->destination = new MigrateDestinationMenuLinks();
    
    $this->addFieldMapping('menu_name','menu_name'); // Always Main menu
    $this->addFieldMapping('mlid', 'mlid');
    $this->addFieldMapping('plid', 'plid');
    $this->addFieldMapping('link_path', 'link_path'); 
    $this->addFieldMapping('router_path','router_path');
    $this->addFieldMapping('link_title', 'link_title');
    $this->addFieldMapping('external','external');
    $this->addFieldMapping('expanded','expanded');
    $this->addFieldMapping('weight','weight');
    $this->addFieldMapping('customized','customized');
    $this->addFieldMapping('has_children','has_children');
    $this->addFieldMapping('depth','depth');
  }


    public function prepareRow($row) {
        if ($row->plid){
            $result = db_select('migrate_map_paumenus', 'c')
                ->fields('c',array('destid1'))
                ->condition('sourceid1', $row->plid,'=')
                ->execute()
                ->fetchField();
            $row->plid=$result;
            $row->p1=$result;
        }
    }
}



class PauPageMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Page content migration');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
       'Sid' => array(
         'type' => 'int',
         'not null' => TRUE,
         'description' => 'Sid',
         'alias' => 'b',
        )
      ),
      MigrateDestinationNode::getKeySchema()
      );
    //CSV
    $module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = $module_path . '/node/export-page.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationNode('system_pages');
    //Fields   
    $this->addFieldMapping('nid', 'Nid');
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_sp_body', 'field_body');
    $this->addFieldMapping('field_sp_image', 'field_sp_image');
    $this->addFieldMapping('field_sp_image_2', 'field_sp_image_2');
   $this->addFieldMapping('field_sp_body:format')->defaultValue('full_html');
      $this->addFieldMapping('field_sp_subtitle', 'field_sp_subtitle');
      $this->addFieldMapping('field_sp_map', 'lat');
      $this->addFieldMapping('field_sp_map:lng', 'lon');

      $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('path', 'path');
    $this->addFieldMapping('pathauto', 'pathauto');
    $this->addFieldMapping('uid')
    ->defaultValue('1');
    $this->addFieldMapping('is_new')
    ->defaultValue('true');
  }
    public function prepareRow($row) {
        $row->field_sp_image= ($row->field_sp_image!="") ? drupal_get_path('module', 'migrate_initial') .'/img/'.$row->field_sp_image : "";
        $row->field_sp_image_2= ($row->field_sp_image_2!="") ? drupal_get_path('module', 'migrate_initial') .'/img/'.$row->field_sp_image_2 : "";

    }
    public function complete($entity, stdClass $row) {
        // Clone panelizer settings  $flag->flag('flag', 456);
        $node=node_load($entity->nid);
        $node->panelizer['full']->name=$row->panelizer;
        node_save($node);
    }
}

class PauUserMigration extends Migration {
    public function __construct($arguments) {
        parent::__construct($arguments);
        $this->description = t('Pau User migration');
        $this->map = new MigrateSQLMap($this->machineName,
            array('uid' => array(
                'type' => 'int',
                'not null' => TRUE,
                'description' => 'Account ID.'
            )
            ),
            MigrateDestinationUser::getKeySchema()
        );
        //CSV
        $module_path = drupal_get_path('module', 'migrate_initial');
        $csv_path = 'http://paueducation.com/migrate-users.csv';
        $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
        $this->destination = new MigrateDestinationUser();
        //Fields
        $this->addFieldMapping('uid','uid');
        $this->addFieldMapping('name', 'name');
        $this->addFieldMapping('pass', 'pass');
        $this->addFieldMapping('mail', 'mail');
        $this->addFieldMapping('status', 'status');
        $this->addFieldMapping('is_new')->defaultValue('true');
    }
}