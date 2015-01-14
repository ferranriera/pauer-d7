; ----------------
; Generate makefile from http://drushmake.me
; Permanent URL: http://drushmake.me/file.php?token=dbdd9a69e862
; ----------------
;
; This is a working makefile - try it! Any line starting with a `;` is a comment.
  
; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
  
core = 7.x
  
; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.
  
api = 2
  
; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.
  
; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = 7

  
  
; Modules

; --------

projects[admin_menu][version] = 3.0-rc4
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

projects[advuser][version] = 3.0-beta1
projects[advuser][type] = "module"
projects[advuser][subdir] = "contrib"

projects[backup_migrate][version] = 2.8
projects[backup_migrate][type] = "module"
projects[backup_migrate][subdir] = "contrib"

projects[bean][type] = module
projects[bean][download][type] = git
projects[bean][download][revision] = 2d0f262
projects[bean][download][branch] = 7.x-1.x
projects[bean][subdir] = "contrib"

projects[bean_panels][version] = 1.3
projects[bean_panels][type] = "module"
projects[bean_panels][subdir] = "contrib"


projects[better_formats][version] = 1.0-beta1
projects[better_formats][type] = "module"
projects[better_formats][subdir] = "contrib"

projects[botcha][version] = 3.3
projects[botcha][type] = "module"
projects[botcha][subdir] = "contrib"

projects[breakpoints][version] = 1.1
projects[breakpoints][type] = "module"
projects[breakpoints][subdir] = "contrib"

projects[botcha][version] = 3.3
projects[botcha][type] = "module"
projects[botcha][subdir] = "contrib"

projects[captcha][version] = 1.0
projects[captcha][type] = "module"
projects[captcha][subdir] = "contrib"

projects[coffee][version] = 2.2
projects[coffee][type] = "module"
projects[coffee][subdir] = "contrib"

projects[context][version] = 3.2
projects[context][type] = "module"
projects[context][subdir] = "contrib"

projects[clean_markup][version] = 2.4
projects[clean_markup][type] = "module"
projects[clean_markup][subdir] = "contrib"

projects[ctools][version] = 1.4
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"


projects[ckeditor][version] = 1.14
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"

projects[countries][type] = module
projects[countries][download][type] = git
projects[countries][download][revision] = c1e1b03
projects[countries][download][branch] = 7.x-2.x
projects[countries][subdir] = "contrib"

projects[date][version] = 2.7
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[devel][version] = 1.5
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[diff][version] = 3.2
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[ds][version] = 2.6
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[double_field][version] = 2.3
projects[double_field][type] = "module"
projects[double_field][subdir] = "contrib"

projects[strongarm][version] = 2.0
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[email][version] = 1.3
projects[email][type] = "module"
projects[email][subdir] = "contrib"

projects[entity][version] = 1.5
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[entityform][version] = 2.0-beta3
projects[entityform][type] = "module"
projects[entityform][subdir] = "contrib"

projects[environment_indicator][version] = 2.3
projects[environment_indicator][type] = "module"
projects[environment_indicator][subdir] = "contrib"

projects[entityreference][version] = 1.1
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[entity_translation][version] = 1.0-beta3
projects[entity_translation][type] = "module"
projects[entity_translation][subdir] = "contrib"

projects[eu-cookie-compliance][type] = module
projects[eu-cookie-compliance][download][type] = git
projects[eu-cookie-compliance][download][revision] = 0e6a86b
projects[eu-cookie-compliance][download][branch] = 7.x-2.x
projects[eu-cookie-compliance][subdir] = "contrib"

projects[feeds][type] = module
projects[feeds][download][type] = git
projects[feeds][download][revision] = 00a35fe 
projects[feeds][download][branch] = 7.x-2.x-dev
projects[feeds][subdir] = "contrib"

projects[feeds_ex][type] = module
projects[feeds_ex][download][type] = git
projects[feeds_ex][download][revision] = 15515b3 
projects[feeds_ex][download][branch] = 7.x-1.x-dev
projects[feeds_ex][subdir] = "contrib"

projects[feeds_oauth][version] = 1.0-beta3
projects[feeds_oauth][type] = "module"
projects[feeds_oauth][subdir] = "contrib"

projects[field_group][version] = 1.3
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"

projects[field_translatable][subdir] = "contrib"
projects[field_translatable][type] = "module"
projects[field_translatable][download][type] = "git"
projects[field_translatable][download][url] = "http://git.drupal.org/sandbox/friera/2184535.git"
projects[field_translatable][download][revision] = 69c29bc

projects[field_placeholder][version] = 1.0
projects[field_placeholder][type] = "module"
projects[field_placeholder][subdir] = "contrib"

projects[field_permissions][type] = module
projects[field_permissions][download][type] = git
projects[field_permissions][download][revision] = dadb3a9
projects[field_permissions][download][branch] = 7.x-1.x
projects[field_permissions][subdir] = "contrib"
projects[field_permissions][patch][1845798] = "https://drupal.org/files/issues/field_permissions.miscellaneous.1845798-11.patch"

projects[flexslider][version] = 2.0-alpha3
projects[flexslider][type] = "module"
projects[flexslider][subdir] = "contrib"

projects[jquery_update][version] = 2.4
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[flag][version] = 3.4
projects[flag][type] = "module"
projects[flag][subdir] = "contrib"

projects[fontyourface][version] = 2.8
projects[fontyourface][type] = "module"
projects[fontyourface][subdir] = "contrib"

projects[google_analytics][version] = 1.4
projects[google_analytics][type] = "module"
projects[google_analytics][subdir] = "contrib"

projects[geolocation][version] = 1.4
projects[geolocation][type] = "module"
projects[geolocation][subdir] = "contrib"

projects[globalredirect][version] = 1.5
projects[globalredirect][type] = "module"
projects[globalredirect][subdir] = "contrib"

projects[htmlmail][version] = 2.65
projects[htmlmail][type] = "module"
projects[htmlmail][subdir] = "contrib"

projects[i18n][version] = 1.10
projects[i18n][type] = "module"
projects[i18n][subdir] = "contrib"

projects[insert][version] = 1.3
projects[insert][type] = "module"
projects[insert][subdir] = "contrib"

projects[imagecache_actions][version] = 1.4
projects[imagecache_actions][type] = "module"
projects[imagecache_actions][subdir] = "contrib"

projects[image_delta_formatter][version] = 1.0-rc1
projects[image_delta_formatter][type] = "module"
projects[image_delta_formatter][subdir] = "contrib"

projects[image_link_formatter][version] = 1.0
projects[image_link_formatter][type] = "module"
projects[image_link_formatter][subdir] = "contrib"

projects[i18nviews][type] = module
projects[i18nviews][download][type] = git
projects[i18nviews][download][revision] = 26bd52c
projects[i18nviews][download][branch] = 7.x-3.x
projects[i18nviews][subdir] = "contrib"

projects[l10n_update][version] = 1.0
projects[l10n_update][type] = "module"
projects[l10n_update][subdir] = "contrib"

projects[lang_dropdown][version] = 2.5
projects[lang_dropdown][type] = "module"
projects[lang_dropdown][subdir] = "contrib"


projects[link][type] = module
projects[link][download][type] = git
projects[link][download][revision] = 7dc306c
projects[link][download][branch] = 7.x-1.x
projects[link][subdir] = "contrib"
projects[link][patch][2146385] = "https://raw.githubusercontent.com/ferranriera/drupal7-link-patch/master/translation_link.patch"

projects[less][version] = 3.0
projects[less][type] = "module"
projects[less][subdir] = "contrib"

projects[libraries][version] = 2.2
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[linkit][version] = 3.1
projects[linkit][type] = "module"
projects[linkit][subdir] = "contrib"

projects[matrix][version] = 2.1
projects[matrix][type] = "module"
projects[matrix][subdir] = "contrib"

projects[mailsystem][version] = 2.34
projects[mailsystem][type] = "module"
projects[mailsystem][subdir] = "contrib"

projects[metatag][version] = 1.0-beta9
projects[metatag][type] = "module"
projects[metatag][subdir] = "contrib"

projects[menu_attributes][version] = 1.0-rc2
projects[menu_attributes][type] = "module"
projects[menu_attributes][subdir] = "contrib"

projects[menu_block][version] = 2.4
projects[menu_block][type] = "module"
projects[menu_block][subdir] = "contrib"

projects[menu_breadcrumb][version] = 1.5
projects[menu_breadcrumb][type] = "module"
projects[menu_breadcrumb][subdir] = "contrib"

projects[module_filter][version] = 2.0-alpha2
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[moopapi][version] = 1.2
projects[moopapi][type] = "module"
projects[moopapi][subdir] = "contrib"

projects[migrate][type] = module
projects[migrate][download][type] = git
projects[migrate][download][revision] = 0010411
projects[migrate][download][branch] = 7.x-2.x
projects[migrate][subdir] = "contrib"

projects[migrate_extras][version] = 2.5
projects[migrate_extras][type] = "module"
projects[migrate_extras][subdir] = "contrib"

projects[panelizer][version] = 3.1
projects[panelizer][type] = "module"
projects[panelizer][subdir] = "contrib"

projects[panels][version] = 3.4
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"

projects[panels_breadcrumbs][version] = 2.1
projects[panels_breadcrumbs][type] = "module"
projects[panels_breadcrumbs][subdir] = "contrib"

projects[panels_tabs][type] = module
projects[panels_tabs][download][type] = git
projects[panels_tabs][download][revision] = 2caec50
projects[panels_tabs][download][branch] = 7.x-2.x-dev
projects[panels_tabs][subdir] = "contrib"

projects[picture][version] = 1.2
projects[picture][type] = "module"
projects[picture][subdir] = "contrib"

projects[pathauto][version] = 1.2
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[rules][version] = 2.6
projects[rules][type] = "module"
projects[rules][subdir] = "contrib"

projects[service_links][type] = module
projects[service_links][download][type] = git
projects[service_links][download][revision] = f53a565
projects[service_links][download][branch] = 7.x-2.x-dev
projects[service_links][subdir] = "contrib"
projects[service_links][patch][2146385] = "https://drupal.org/files/1789332-service_links-display_suite-compatibility.patch"

projects[select_or_other][version] = 2.20
projects[select_or_other][type] = "module"
projects[select_or_other][subdir] = "contrib"

projects[smart_trim][version] = 1.4
projects[smart_trim][type] = "module"
projects[smart_trim][subdir] = "contrib"

projects[special_menu_items][version] = 2.0
projects[special_menu_items][type] = "module"
projects[special_menu_items][subdir] = "contrib"

projects[strongarm][version] = 2.0
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[superfish][type] = module
projects[superfish][download][type] = git
projects[superfish][download][revision] = bdd7cbd
projects[superfish][download][branch] = 7.x-1.x
projects[superfish][subdir] = "contrib"

projects[quicktabs][version] = 3.6
projects[quicktabs][type] = "module"
projects[quicktabs][subdir] = "contrib"

projects[title][version] = 1.0-alpha7
projects[title][type] = "module"
projects[title][subdir] = "contrib"

projects[taxonomy_manager][version] = 1.0
projects[taxonomy_manager][type] = "module"
projects[taxonomy_manager][subdir] = "contrib"

projects[token][version] = 1.5
projects[token][type] = "module"
projects[token][subdir] = "contrib"

projects[variable][version] = 2.4
projects[variable][type] = "module"
projects[variable][subdir] = "contrib"

projects[features][version] = 2.0
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[features_extra][version] = 1.0-beta1
projects[features_extra][type] = "module"
projects[features_extra][subdir] = "contrib"

projects[video_embed_field][version] = 2.0-beta7
projects[video_embed_field][type] = "module"
projects[video_embed_field][subdir] = "contrib"

projects[views][version] = 3.7
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[views_field_view][version] = 1.1
projects[views_field_view][type] = "module"
projects[views_field_view][subdir] = "contrib"

projects[views_bootstrap][version] = 3.1
projects[views_bootstrap][type] = "module"
projects[views_bootstrap][subdir] = "contrib"
projects[views_bootstrap][patch][2203111] = "http://drupal.org/files/issues/views_bootstrap-2203111-thumbails-columns-per-device-size.patch"

projects[views_bulk_operations][version] = 3.2
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

projects[webform][version] = 4.0-rc5
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"

projects[webform_features][version] = 3.0-beta3
projects[webform_features][type] = "module"
projects[webform_features][subdir] = "contrib"

projects[webform_localization][type] = module
projects[webform_localization][download][type] = git
projects[webform_localization][download][revision] = a2dcf51
projects[webform_localization][download][branch] = 7.x-4.x
projects[webform_localization][subdir] = "contrib"

projects[webform_ajax][type] = module
projects[webform_ajax][download][type] = git
projects[webform_ajax][download][revision] = ef2a9a9
projects[webform_ajax][download][branch] = 7.x-1.x
projects[webform_ajax][subdir] = "contrib"

projects[wysiwyg][version] = 2.2
projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"


; Themes
; --------

projects[bootstrap][version] = 3.0
projects[bootstrap][type] = "theme"
projects[bootstrap][subdir] = "contrib"

projects[adminimal_theme][version] = 1.18
projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][subdir] = "contrib"

; Libraries
; --------

; CKEditor
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.0/ckeditor_4.4.0_standard.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

libraries[lessphp][download][type]= "get"
libraries[lessphp][download][url] = "https://github.com/oyejorge/less.php/archive/v1.7.0.1.zip"
libraries[lessphp][directory_name] = "lessphp"
libraries[lessphp][destination] = "libraries"

libraries[superfish][download][type]= "get"
libraries[superfish][download][url] = "http://github.com/mehrpadin/Superfish-for-Drupal/archive/master.zip"
libraries[superfish][directory_name] = "superfish"
libraries[superfish][destination] = "libraries"

libraries[flexslider][download][type]= "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/master.zip"
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][destination] = "libraries"
