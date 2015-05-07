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
projects[drupal][version] = 7.37

; Modules

; --------

projects[admin_menu][version] = 3.0-rc5
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

projects[advuser][version] = 3.0-beta1
projects[advuser][type] = "module"
projects[advuser][subdir] = "contrib"

projects[addthis][type] = module
projects[addthis][download][type] = git
projects[addthis][download][revision] = d766ed7
projects[addthis][download][branch] = 7.x-4.x-dev
projects[addthis][subdir] = "contrib"

projects[backup_migrate][version] = 3.0
projects[backup_migrate][type] = "module"
projects[backup_migrate][subdir] = "contrib"

projects[bean][version] = 1.9
projects[bean][type] = "module"
projects[bean][subdir] = "contrib"

projects[better_exposed_filters][version] = 3.0-beta4
projects[better_exposed_filters][type] = "module"
projects[better_exposed_filters][subdir] = "contrib"

projects[better_formats][version] = 1.0-beta1
projects[better_formats][type] = "module"
projects[better_formats][subdir] = "contrib"

projects[honeypot][version] = 1.17
projects[honeypot][type] = "module"
projects[honeypot][subdir] = "contrib"

projects[breakpoints][version] = 1.3
projects[breakpoints][type] = "module"
projects[breakpoints][subdir] = "contrib"

projects[captcha][type] = module
projects[captcha][download][type] = git
projects[captcha][download][revision] = 9b39e1b
projects[captcha][download][branch] = 7.x-1.x-dev
projects[captcha][subdir] = "contrib"

projects[context][version] = 3.6
projects[context][type] = "module"
projects[context][subdir] = "contrib"

projects[coffee][version] = 2.2
projects[coffee][type] = "module"
projects[coffee][subdir] = "contrib"

projects[clean_markup][version] = 2.7
projects[clean_markup][type] = "module"
projects[clean_markup][subdir] = "contrib"

projects[ctools][version] = 1.7
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[ckeditor][version] = 1.16
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"

projects[countries][version] = 2.3
projects[countries][type] = "module"
projects[countries][subdir] = "contrib"

projects[chosen][version] = 2.0-beta4
projects[chosen][type] = "module"
projects[chosen][subdir] = "contrib"

projects[date][version] = 2.8
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[devel][version] = 1.5
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[devel_image_provider][type] = module
projects[devel_image_provider][download][type] = git
projects[devel_image_provider][download][revision] = 790ea95
projects[devel_image_provider][download][branch] = 7.x-1.x-dev
projects[devel_image_provider][subdir] = "contrib"

projects[diff][version] = 3.2
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[disable_term_node_listings][type] = module
projects[disable_term_node_listings][download][type] = git
projects[disable_term_node_listings][download][revision] = 54d1e66
projects[disable_term_node_listings][download][branch] = 7.x-1.x-dev
projects[disable_term_node_listings][subdir] = "contrib"
projects[disable_term_node_listings][patch][1845798] = "https://www.drupal.org/files/issues/disable_term_node_listings-fix-i18n-1936304-4.patch"

projects[ds][version] = 2.8
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[double_field][version] = 2.4
projects[double_field][type] = "module"
projects[double_field][subdir] = "contrib"

projects[strongarm][version] = 2.0
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[email][version] = 1.3
projects[email][type] = "module"
projects[email][subdir] = "contrib"

projects[eck][version] = 2.0-rc7
projects[eck][type] = "module"
projects[eck][subdir] = "contrib"

projects[entity][version] = 1.6
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[environment_indicator][version] = 2.5
projects[environment_indicator][type] = "module"
projects[environment_indicator][subdir] = "contrib"

projects[entityreference][version] = 1.1
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[entity_translation][version] = 1.0-beta4
projects[entity_translation][type] = "module"
projects[entity_translation][subdir] = "contrib"

projects[eu-cookie-compliance][type] = module
projects[eu-cookie-compliance][download][type] = git
projects[eu-cookie-compliance][download][revision] = 0e6a86b
projects[eu-cookie-compliance][download][branch] = 7.x-2.x
projects[eu-cookie-compliance][subdir] = "contrib"

projects[extlink][version] = 1.18
projects[extlink][type] = "module"
projects[extlink][subdir] = "contrib"

projects[field_group][version] = 1.4
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"

projects[field_placeholder][version] = 1.0
projects[field_placeholder][type] = "module"
projects[field_placeholder][subdir] = "contrib"

projects[file_entity][type] = module
projects[file_entity][download][type] = git
projects[file_entity][download][revision] = b610413
projects[file_entity][download][branch] = 7.x-2.x
projects[file_entity][subdir] = "contrib"

projects[field_permissions][type] = module
projects[field_permissions][download][type] = git
projects[field_permissions][download][revision] = dadb3a9
projects[field_permissions][download][branch] = 7.x-1.x
projects[field_permissions][subdir] = "contrib"
projects[field_permissions][patch][1845798] = "https://drupal.org/files/issues/field_permissions.miscellaneous.1845798-11.patch"

projects[field_validation][version] = 2.4
projects[field_validation][type] = "module"
projects[field_validation][subdir] = "contrib"

projects[focal_point][version] = 1.0-beta4
projects[focal_point][type] = "module"
projects[focal_point][subdir] = "contrib"

projects[flexslider][version] = 2.0-alpha3
projects[flexslider][type] = "module"
projects[flexslider][subdir] = "contrib"

projects[jquery_update][version] = 2.5
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[flag][version] = 3.6
projects[flag][type] = "module"
projects[flag][subdir] = "contrib"

projects[flippy][version] = 1.3
projects[flippy][type] = "module"
projects[flippy][subdir] = "contrib"

projects[field_formatter_settings][version] = 1.1
projects[field_formatter_settings][type] = "module"
projects[field_formatter_settings][subdir] = "contrib"

projects[fontyourface][version] = 2.8
projects[fontyourface][type] = "module"
projects[fontyourface][subdir] = "contrib"

projects[google_analytics][version] = 1.4
projects[google_analytics][type] = "module"
projects[google_analytics][subdir] = "contrib"

projects[geolocation][version] = 1.6
projects[geolocation][type] = "module"
projects[geolocation][subdir] = "contrib"

projects[globalredirect][version] = 1.5
projects[globalredirect][type] = "module"
projects[globalredirect][subdir] = "contrib"

projects[htmlmail][version] = 2.65
projects[htmlmail][type] = "module"
projects[htmlmail][subdir] = "contrib"

projects[i18n][version] = 1.12
projects[i18n][type] = "module"
projects[i18n][subdir] = "contrib"

projects[insert][version] = 1.3
projects[insert][type] = "module"
projects[insert][subdir] = "contrib"

projects[imagecache_actions][version] = 1.5
projects[imagecache_actions][type] = "module"
projects[imagecache_actions][subdir] = "contrib"

projects[image_delta_formatter][version] = 1.0-rc1
projects[image_delta_formatter][type] = "module"
projects[image_delta_formatter][subdir] = "contrib"

projects[image_link_formatter][type] = module
projects[image_link_formatter][download][type] = git
projects[image_link_formatter][download][revision] = 74cfdb2
projects[image_link_formatter][download][branch] = 7.x-1.x
projects[image_link_formatter][subdir] = "contrib"

projects[inline_entity_form][version] = 1.5
projects[inline_entity_form][type] = "module"
projects[inline_entity_form][subdir] = "contrib"

projects[i18nviews][type] = module
projects[i18nviews][download][type] = git
projects[i18nviews][download][revision] = 26bd52c
projects[i18nviews][download][branch] = 7.x-3.x
projects[i18nviews][subdir] = "contrib"

projects[job_scheduler][version] = 2.0-alpha3
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[l10n_update][version] = 1.0
projects[l10n_update][type] = "module"
projects[l10n_update][subdir] = "contrib"

projects[lang_dropdown][version] = 2.5
projects[lang_dropdown][type] = "module"
projects[lang_dropdown][subdir] = "contrib"

projects[link][version] = 1.3
projects[link][type] = "module"
projects[link][subdir] = "contrib"

projects[libraries][version] = 2.2
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[linkit][version] = 3.1
projects[linkit][type] = "module"
projects[linkit][subdir] = "contrib"

projects[linked_field][version] = 1.10
projects[linked_field][type] = "module"
projects[linked_field][subdir] = "contrib"

projects[masquerade][version] = 1.0-rc7
projects[masquerade][type] = "module"
projects[masquerade][subdir] = "contrib"

projects[maxlength][version] = 3.2
projects[maxlength][type] = "module"
projects[maxlength][subdir] = "contrib"

projects[mailsystem][version] = 2.34
projects[mailsystem][type] = "module"
projects[mailsystem][subdir] = "contrib"

projects[metatag][version] = 1.4
projects[metatag][type] = "module"
projects[metatag][subdir] = "contrib"

projects[menu_attributes][version] = 1.0-rc3
projects[menu_attributes][type] = "module"
projects[menu_attributes][subdir] = "contrib"

projects[menu_block][version] = 2.5
projects[menu_block][type] = "module"
projects[menu_block][subdir] = "contrib"

projects[media][type] = module
projects[media][download][type] = git
projects[media][download][revision] = 1e1aade
projects[media][download][branch] = 7.x-2.x
projects[media][subdir] = "contrib"
projects[media][patch][2146385] = "https://www.drupal.org/files/issues/media_remove_file_display_alter-2104193-91.patch"

projects[media_youtube][type] = module
projects[media_youtube][download][type] = git
projects[media_youtube][download][revision] = 9fd6c94
projects[media_youtube][download][branch] = 7.x-2.x
projects[media_youtube][subdir] = "contrib"

projects[menu_breadcrumb][version] = 1.6
projects[menu_breadcrumb][type] = "module"
projects[menu_breadcrumb][subdir] = "contrib"

projects[menu_views][version] = 2.2
projects[menu_views][type] = "module"
projects[menu_views][subdir] = "contrib"

projects[module_filter][version] = 2.0
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

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
projects[panelizer][patch][21] = "https://www.drupal.org/files/issues/panelizer-n1841262-10_0.patch"

projects[panels][version] = 3.5
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"

projects[panels_breadcrumbs][type] = module
projects[panels_breadcrumbs][download][type] = git
projects[panels_breadcrumbs][download][revision] = 81c5821
projects[panels_breadcrumbs][download][branch] = 7.x-2.x-dev
projects[panels_breadcrumbs][subdir] = "contrib"
projects[panels_breadcrumbs][patch][21] = "https://raw.githubusercontent.com/ferranriera/drupal7-link-patch/master/panels_breadcrumb.patch"

projects[panels_tabs][type] = module
projects[panels_tabs][download][type] = git
projects[panels_tabs][download][revision] = 2caec50
projects[panels_tabs][download][branch] = 7.x-2.x-dev
projects[panels_tabs][subdir] = "contrib"

projects[picture][version] = 1.5
projects[picture][type] = "module"
projects[picture][subdir] = "contrib"

projects[pathauto][version] = 1.2
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[profile2][type] = module
projects[profile2][download][type] = git
projects[profile2][download][revision] = 724a5e9
projects[profile2][download][branch] = 7.x-1.x-dev
projects[profile2][subdir] = "contrib"

projects[select_or_other][version] = 2.20
projects[select_or_other][type] = "module"
projects[select_or_other][subdir] = "contrib"

projects[search_api][version] = 1.14
projects[search_api][type] = "module"
projects[search_api][subdir] = "contrib"

projects[search_api_db][version] = 1.4
projects[search_api_db][type] = "module"
projects[search_api_db][subdir] = "contrib"

projects[smart_trim][version] = 1.5
projects[smart_trim][type] = "module"
projects[smart_trim][subdir] = "contrib"

projects[special_menu_items][version] = 2.0
projects[special_menu_items][type] = "module"
projects[special_menu_items][subdir] = "contrib"

projects[skinr][version] = 2.0-beta1
projects[skinr][type] = "module"
projects[skinr][subdir] = "contrib"

projects[strongarm][version] = 2.0
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[stringoverrides][type] = module
projects[stringoverrides][download][type] = git
projects[stringoverrides][download][revision] = 4229a48
projects[stringoverrides][download][branch] = 7.x-1.x
projects[stringoverrides][subdir] = "contrib"

projects[statistics_counter][version] = 1.2
projects[statistics_counter][type] = "module"
projects[statistics_counter][subdir] = "contrib"

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

projects[token][version] = 1.6
projects[token][type] = "module"
projects[token][subdir] = "contrib"

projects[variable][version] = 2.5
projects[variable][type] = "module"
projects[variable][subdir] = "contrib"

projects[features][version] = 2.4
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[features_extra][type] = module
projects[features_extra][download][type] = git
projects[features_extra][download][revision] = d3d1cba
projects[features_extra][download][branch] = 7.x-1.x
projects[features_extra][subdir] = "contrib"
projects[features_extra][patch][1279928-49] = "https://www.drupal.org/files/issues/features_extra-add-date-format-support-1279928-49.patch"

projects[views][version] = 3.11
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[views_conditional][version] = 1.3
projects[views_conditional][type] = "module"
projects[views_conditional][subdir] = "contrib"

projects[views_field_view][version] = 1.1
projects[views_field_view][type] = "module"
projects[views_field_view][subdir] = "contrib"

projects[views_fieldsets][version] = 1.3
projects[views_fieldsets][type] = "module"
projects[views_fieldsets][subdir] = "contrib"

projects[views_bootstrap][version] = 3.1
projects[views_bootstrap][type] = "module"
projects[views_bootstrap][subdir] = "contrib"
projects[views_bootstrap][patch][2203111-26] = "http://drupal.org/files/issues/views_bootstrap-thumbails-columns-per-device-size-2203111-26.patch"

projects[views_bulk_operations][version] = 3.2
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

projects[webform][version] = 4.6
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


; Github custom modules
; ---------

projects[fabe][subdir] = "custom"
projects[fabe][type] = "module"
projects[fabe][download][type] = "git"
projects[fabe][download][revision] = e9e0ea1cd790eaf12e1b6bd021075a78db4f0f8c
projects[fabe][download][url]="https://github.com/ferranriera/Field-API-Bean-Editor.git"


; Themes
; ------------

projects[bootstrap][version] = 3.0
projects[bootstrap][type] = "theme"
projects[bootstrap][subdir] = "contrib"

projects[adminimal_theme][version] = 1.18
projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][subdir] = "contrib"

; Libraries
; ---------


libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.0/ckeditor_4.4.0_standard.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

libraries[colorbox][download][type]= "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

libraries[superfish][download][type]= "get"
libraries[superfish][download][url] = "http://github.com/mehrpadin/Superfish-for-Drupal/archive/master.zip"
libraries[superfish][directory_name] = "superfish"
libraries[superfish][destination] = "libraries"

libraries[flexslider][download][type]= "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/master.zip"
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][destination] = "libraries"
