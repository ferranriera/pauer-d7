<?php
class OamiGenderTermsMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Gender Terms migration');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Name' => array(
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
    $csv_path = $module_path . '/terms/export-gender.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('gender');
    //Fields
    $this->addFieldMapping('name', 'Name');
    $this->addFieldMapping('weight', 'weight');
  }
  public function prepareRow($current_row) {
     //$current_row->panelizer['default']->name="bean:general_structure:bean_variant_1";
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

/* Oami - Taxonomia Intellectual property */
class OamiIntellectualTermsMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Intellectual property Terms migration');
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

		//CSV    
		$module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = $module_path . '/terms/oami-export-intellectual.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('intellectual_property');
    
		//Fiels    
		$this->addFieldMapping('name', 'Name');
    $this->addFieldMapping('weight', 'weight');

    
  }
  public function prepareRow($current_row) {

      //$current_row->panelizer['default']->name="bean:general_structure:bean_variant_1";
     
    }
}
 /* Content Oami - Blog */
 class OamiBlogMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Blog migration');

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
    
		//CSV    
		$module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = $module_path . '/node/oami-export-blog.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
		
		$this->dependencies = array('OamiIntellectual');	    
		$this->destination = new MigrateDestinationNode('blog');
    
		//Fields
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_oami_blog_description', 'field_oami_blog_description');
 	  $this->addFieldMapping('uid','uid')->defaultValue('1');
 		$this->addFieldMapping('field_oami_blog_tags', 'field_oami_blog_tags')->separator('|');
    $this->addFieldMapping('promote')->defaultValue('0');
    $this->addFieldMapping('status')->defaultValue('1');
  }
  
}


 /* Content Oami - Participations */
 class OamiParticipationMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Participation migration');

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
    $csv_path = $module_path . '/node/oami-export-participation.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationNode('team');

    /* Fields a migrar */
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('oami_occupation', 'oami_occupation');
    $this->addFieldMapping('oami_subtitle', 'oami_subtitle');
 	  $this->addFieldMapping('uid')
    	->defaultValue('1');
    $this->addFieldMapping('status')
    	->defaultValue('1');
	  }
  
}

/* Block MIgrate */
class OamiBlockMigration extends Migration {
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
    	$module_path = drupal_get_path('module', 'migrate_initial');
     	$csv_path = $module_path . '/block/oami-export-block.csv';
    	$this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    	$this->destination = new MigrateDestinationEntityAPI('bean','general_structure');

      $this->addFieldMapping('label', 'label');
      $this->addFieldMapping('title', 'title');
      $this->addFieldMapping('field_oami_block_text_1', 'field_oami_block_text_1');
      $this->addFieldMapping('field_oami_block_text_2', 'field_oami_block_text_2');
        $this->addFieldMapping('field_block_text_3', 'field_block_text_3');
      $this->addFieldMapping('field_block_link:title', 'field_block_link_title');
    	$this->addFieldMapping('field_block_link', 'field_block_link_url');
      $this->addFieldMapping('field_block_link_2:title', 'field_block_link_2_title');
      $this->addFieldMapping('field_block_link_2', 'field_block_link_2_url');
   }
  
}

/* Menus Migrate */
class OamiMenusMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    
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
		$this->dependencies = array('OamiPage');	    
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
            $result = db_select('migrate_map_oamimenus', 'c')
                ->fields('c',array('destid1'))
                ->condition('sourceid1', $row->plid,'=')
                ->execute()
                ->fetchField();
            $row->plid=$result;
            $row->p1=$result;
        }
    }
}



 /* Content Oami - Toolkit */
 class OamiToolkitMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Toolkit migration');

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
    $csv_path = $module_path . '/node/oami-export-toolkit.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationNode('toolkit');

    /* Fields a migrar */
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_field_oami_toolkit_descrip', 'field_field_oami_toolkit_descrip');
 	  $this->addFieldMapping('field_file', 'field_file')
 	  	->separator('|');
 	  $this->addFieldMapping('uid')
    	->defaultValue('1');
    $this->addFieldMapping('status')
    	->defaultValue('1');
	  } 
	}

 /* Content Oami - Supporters */
 class OamiSupportersMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Supporters migration');

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
    $csv_path = $module_path . '/node/oami-export-supporters.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationNode('supporters');

    /* Fields a migrar */
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_logo', 'field_logo');
		$this->addFieldMapping('field_country_supporters', 'field_country_supporters');
	  $this->addFieldMapping('uid')
    	->defaultValue('1');
    $this->addFieldMapping('status')
	   	->defaultValue('1');
	  } 
	}

/* Content Oami - Intellectual property */
 class OamiIntellectualMigration extends Migration {
    public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Intellectual property migration');

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
    $csv_path = $module_path . '/node/oami-export-intellectual.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
		$this->dependencies = array('OamiIntellectual');    
		$this->destination = new MigrateDestinationNode('intellectual_property');

    /* Fields a migrar */
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_oami_subtitle', 'field_oami_subtitle');
    $this->addFieldMapping('field_oami_blog_description', 'field_oami_blog_description');
    $this->addFieldMapping('field_oami_blog_tags', 'field_oami_blog_tags')
      ->separator('|');
    $this->addFieldMapping('uid')
      ->defaultValue('1');
	  $this->addFieldMapping('status')
	    ->defaultValue('1');
	  } 
	}


class OamiUserMigration extends Migration {
  public function __construct($arguments) {
  parent::__construct($arguments);
  $this->description = t('Initial User migration');
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
    $csv_path = $module_path . '/user/export-oamiuser.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationUser();
    //Fields    
    $this->addFieldMapping('uid','uid');
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('pass', 'pass');
    $this->addFieldMapping('mail', 'mail');
		$this->addFieldMapping('field_oami_user_name', 'field_oami_user_name');
		$this->addFieldMapping('field_oami_user_surname', 'field_oami_user_surname');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('role_names', 'role_names');
    $this->addFieldMapping('is_new')->defaultValue('true');
  }
}

class OamiUserProfileMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Profile migration');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        )
      ),
      MigrateDestinationProfile2::getKeySchema()
    );
    //CSV
    $module_path = drupal_get_path('module', 'migrate_initial');
    $csv_path = $module_path . '/user/export-oamiuserprofile.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->dependencies = array('OamiUser');
    $this->destination = new MigrateDestinationProfile2('team_profile');
    //Fields
    $this->addFieldMapping('uid','uid');
    $this->addFieldMapping('field_oami_team_logo', 'field_oami_team_logo');
    $this->addFieldMapping('field_oami_categories', 'field_oami_categories')
      ->separator('|');
    $this->addFieldMapping('field_occupation', 'field_occupation');
    $this->addFieldMapping('field_oami_country', 'field_oami_country');
    $this->addFieldMapping('field_oami_subtitle', 'field_oami_subtitle');
    $this->addFieldMapping('field_oami_vip', 'field_oami_vip');
   }  
}

class OamiPageMigration extends Migration {
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
    $this->addFieldMapping('field_body:format')
     ->defaultValue('full_html');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('path', 'path');
    $this->addFieldMapping('pathauto', 'pathauto');
    $this->addFieldMapping('uid')
    ->defaultValue('1');
    $this->addFieldMapping('is_new')
    ->defaultValue('true');
  }
    public function complete($entity, stdClass $row) {
        // Clone panelizer settings
        $node=node_load($entity->nid);
        $node->panelizer['full']->name=$row->panelizer;
        node_save($node);
    }
}

class OamiIpCampaignsMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Ip Campaigns');
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
    $csv_path = $module_path . '/node/oami-export-ipcampaigns.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
		$this->dependencies = array('OamiIntellectual');    
		$this->destination = new MigrateDestinationNode('ip_campaigns');
    //Fields    
    //$this->addFieldMapping('nid', 'Nid');
    //$this->addFieldMapping('vid', 'Nid');
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_body', 'field_body');
    $this->addFieldMapping('field_body:format')
     ->defaultValue('full_html');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('field_oami_image', 'filepath');
    $this->addFieldMapping('field_oami_related_links', 'filepath');
    $this->addFieldMapping('field_oami_blog_tags', 'language');
    $this->addFieldMapping('path', 'path');
    $this->addFieldMapping('pathauto', 'pathauto');
    $this->addFieldMapping('uid')
      ->defaultValue('1');
  }
}

class OamiCompetitionMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Initial Competition');
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
    $csv_path = $module_path . '/node/oami-export-competition.csv';
    $this->source = new MigrateSourceCSV($csv_path, array(), array('embedded_newlines' => TRUE, 'header_rows' => 1));
    $this->destination = new MigrateDestinationNode('participation');
    //Fields
    //$this->addFieldMapping('nid', 'Nid');
    $this->addFieldMapping('title_field', 'Title');
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_city', 'field_city');
    $this->addFieldMapping('field_country', 'field_country');
    $this->addFieldMapping('field_email', 'field_email');
    $this->addFieldMapping('field_verify_email', 'field_verify_email');
    $this->addFieldMapping('field_entry', 'field_entry');
    $this->addFieldMapping('field_gender', 'field_gender');
		$this->addFieldMapping('field_date_of_birth', 'field_date_of_birth');
    $this->addFieldMapping('field_name', 'field_name');
    $this->addFieldMapping('field_surname', 'field_surname');
    $this->addFieldMapping('field_rules', 'field_rules');
		$this->addFieldMapping('field_terms_of_use', 'field_terms_of_use');
		$this->addFieldMapping('field_privacy_policy', 'field_privacy_policy');
		$this->addFieldMapping('field_ideas', 'field_ideas')->separator('|');
		$this->addFieldMapping('field_video_upload:thumb_fid','field_video_upload:thumb_fid')->defaultValue('kQ6k81aEabs');
		$this->addFieldMapping('field_video_upload:video_title','field_video_upload:video_title')->defaultValue('kQ6k81aEabs');
		//$this->addFieldMapping('field_video_upload:display','field_video_upload:display')->defaultValue('1');
		//$this->addFieldMapping('flag_oami_winner_month','flag_oami_winner_month')->defaultValue('0');
		$this->addFieldMapping('created','created');
   // $this->addFieldMapping('is_new')->defaultValue('true');
		$this->addFieldMapping('status')->defaultValue('1');
		//$this->addFieldMapping('field_surname', 'field_surname');
    $this->addFieldMapping('uid')->defaultValue('1');
  }
}
