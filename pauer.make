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
projects[drupal][version] = 7.34

  
  
; Modules

; --------

projects[admin_menu][version] = 3.0-rc5
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

projects[advuser][version] = 3.0-beta1
projects[advuser][type] = "module"
projects[advuser][subdir] = "contrib"

projects[ajax_form_entity][type] = module
projects[ajax_form_entity][download][type] = git
projects[ajax_form_entity][download][revision] = c32f054
projects[ajax_form_entity][download][branch] = 7.x-1.x-dev
projects[ajax_form_entity][subdir] = "contrib"

projects[addthis][type] = module
projects[addthis][download][type] = git
projects[addthis][download][revision] = d766ed7
projects[addthis][download][branch] = 7.x-4.x-dev
projects[addthis][subdir] = "contrib"

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

projects[better_exposed_filters][version] = 3.0-beta4
projects[better_exposed_filters][type] = "module"
projects[better_exposed_filters][subdir] = "contrib"

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

projects[captcha][type] = module
projects[captcha][download][type] = git
projects[captcha][download][revision] = 9b39e1b
projects[captcha][download][branch] = 7.x-1.x-dev
projects[captcha][subdir] = "contrib"

projects[ajax_form_entity][type] = module
projects[ajax_form_entity][download][type] = git
projects[ajax_form_entity][download][revision] = c32f054
projects[ajax_form_entity][download][branch] = 7.x-1.x-dev
projects[ajax_form_entity][subdir] = "contrib"

projects[context][version] = 3.6
projects[context][type] = "module"
projects[context][subdir] = "contrib"

projects[coffee][version] = 2.2
projects[coffee][type] = "module"
projects[coffee][subdir] = "contrib"

projects[colorbox][type] = module
projects[colorbox][download][type] = git
projects[colorbox][download][revision] = f79b458
projects[colorbox][download][branch] = 7.x-2.x
projects[colorbox][subdir] = "contrib"

projects[colorbox_node][type] = module
projects[colorbox_node][download][type] = git
projects[colorbox_node][download][revision] = 4b29c51
projects[colorbox_node][download][branch] = 7.x-3.x
projects[colorbox_node][subdir] = "contrib"
projects[colorbox_node][patch][666] = "https://www.drupal.org/files/issues/i18n_problems-1813122-20.patch"

projects[clean_markup][version] = 2.7
projects[clean_markup][type] = "module"
projects[clean_markup][subdir] = "contrib"

projects[ctools][version] = 1.6
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[ckeditor][version] = 1.16
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"

projects[countries][type] = module
projects[countries][download][type] = git
projects[countries][download][revision] = c1e1b03
projects[countries][download][branch] = 7.x-2.x
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

projects[diff][version] = 3.2
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[disable_term_node_listings][type] = module
projects[disable_term_node_listings][download][type] = git
projects[disable_term_node_listings][download][revision] = 54d1e66
projects[disable_term_node_listings][download][branch] = 7.x-1.x-dev
projects[disable_term_node_listings][subdir] = "contrib"
projects[disable_term_node_listings][patch][1845798] = "https://www.drupal.org/files/issues/disable_term_node_listings-fix-i18n-1936304-4.patch"

projects[ds][version] = 2.7
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

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

projects[entityform_block][version] = 1.1
projects[entityform_block][type] = "module"
projects[entityform_block][subdir] = "contrib"

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

projects[epsacrop][type] = module
projects[epsacrop][download][type] = git
projects[epsacrop][download][revision] = 8f3a1bb
projects[epsacrop][download][branch] = 7.x-2.x
projects[epsacrop][subdir] = "contrib"
projects[epsacrop][patch][1845798] = "https://www.drupal.org/files/issues/epsacrop-fix_update_hook-1396500-30.patch"

projects[extlink][version] = 1.18
projects[extlink][type] = "module"
projects[extlink][subdir] = "contrib"

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

projects[fences][version] = 1.0
projects[fences][type] = "module"
projects[fences][subdir] = "contrib"
projects[fences][patch][1845798] = "https://www.drupal.org/files/issues/fences-check_for_fences_wrapper-1679684-18.patch"

projects[field_group][version] = 1.4
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"

projects[field_group_link][version] = 1.3
projects[field_group_link][type] = "module"
projects[field_group_link][subdir] = "contrib"

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

projects[field_translatable][subdir] = "contrib"
projects[field_translatable][type] = "module"
projects[field_translatable][download][type] = "git"
projects[field_translatable][download][url] = "http://git.drupal.org/sandbox/friera/2184535.git"
projects[field_translatable][download][revision] = bbb7f57

projects[field_validation][version] = 2.4
projects[field_validation][type] = "module"
projects[field_validation][subdir] = "contrib"

projects[flexslider][version] = 2.0-alpha3
projects[flexslider][type] = "module"
projects[flexslider][subdir] = "contrib"

projects[jquery_update][version] = 2.5
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[flag][version] = 3.5
projects[flag][type] = "module"
projects[flag][subdir] = "contrib"


projects[flippy][version] = 1.3
projects[flippy][type] = "module"
projects[flippy][subdir] = "contrib"

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

projects[hybridauth][version] = 2.9
projects[hybridauth][type] = "module"
projects[hybridauth][subdir] = "contrib"

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

projects[menu_breadcrumb][version] = 1.5
projects[menu_breadcrumb][type] = "module"
projects[menu_breadcrumb][subdir] = "contrib"

projects[menu_item_visibility][version] = 1.x-dev
projects[menu_item_visibility][type] = "module"
projects[menu_item_visibility][subdir] = "contrib"

projects[menu_views][version] = 2.2
projects[menu_views][type] = "module"
projects[menu_views][subdir] = "contrib"

projects[module_filter][version] = 2.0
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

projects[oauth][version] = 3.2
projects[oauth][type] = "module"
projects[oauth][subdir] = "contrib"

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

projects[panels_extra_styles][version] = 1.1
projects[panels_extra_styles][type] = "module"
projects[panels_extra_styles][subdir] = "contrib"

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

projects[profile2][type] = module
projects[profile2][download][type] = git
projects[profile2][download][revision] = 724a5e9
projects[profile2][download][branch] = 7.x-1.x-dev
projects[profile2][subdir] = "contrib"

projects[realname][version] = 1.2
projects[realname][type] = "module"
projects[realname][subdir] = "contrib"

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

projects[skinr][version] = 2.0-beta1
projects[skinr][type] = "module"
projects[skinr][subdir] = "contrib"

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

projects[tbr][version] = 1.5
projects[tbr][type] = "module"
projects[tbr][subdir] = "contrib"

projects[tweet_feed][version] = 1.11
projects[tweet_feed][type] = "module"
projects[tweet_feed][subdir] = "contrib"

projects[token][version] = 1.5
projects[token][type] = "module"
projects[token][subdir] = "contrib"

projects[variable][version] = 2.5
projects[variable][type] = "module"
projects[variable][subdir] = "contrib"

projects[features][version] = 2.3
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[features_extra][type] = module
projects[features_extra][download][type] = git
projects[features_extra][download][revision] = d3d1cba
projects[features_extra][download][branch] = 7.x-1.x
projects[features_extra][subdir] = "contrib"
projects[features_extra][patch][1279928-49] = "https://www.drupal.org/files/issues/features_extra-add-date-format-support-1279928-49.patch"

projects[views][version] = 3.10
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[views_field_view][version] = 1.1
projects[views_field_view][type] = "module"
projects[views_field_view][subdir] = "contrib"

projects[views_bootstrap][version] = 3.1
projects[views_bootstrap][type] = "module"
projects[views_bootstrap][subdir] = "contrib"
projects[views_bootstrap][patch][2203111-26] = "http://drupal.org/files/issues/views_bootstrap-thumbails-columns-per-device-size-2203111-26.patch"


projects[views_ifempty][type] = module
projects[views_ifempty][download][type] = git
projects[views_ifempty][download][revision] = c90939f
projects[views_ifempty][download][branch] = 7.x-1.x-dev
projects[views_ifempty][subdir] = "contrib"

projects[views_bulk_operations][version] = 3.2
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"


projects[webform][version] = 4.3
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


; Github custom modules
; ---------

projects[angular_twitter][subdir] = "custom"
projects[angular_twitter][type] = "module"
projects[angular_twitter][download][type] = "git"
projects[angular_twitter][download][revision] = 3a1a5d41d87ed270e40092786348ef841d88116c
projects[angular_twitter][download][url]="https://github.com/ferranriera/Angular-Twitter-D7.git"

projects[DRUPAU_i18n][subdir] = "custom"
projects[DRUPAU_i18n][type] = "module"
projects[DRUPAU_i18n][download][type] = "git"
projects[DRUPAU_i18n][download][revision] = 7b019c7779416fd541435f0a60a52d0c13f14d72
projects[DRUPAU_i18n][download][url]="https://github.com/ferranriera/DRUPAU-i18n.git"

projects[DRUPAU_i18n_labels_import][subdir] = "custom"
projects[DRUPAU_i18n_labels_import][type] = "module"
projects[DRUPAU_i18n_labels_import][download][type] = "git"
projects[DRUPAU_i18n_labels_import][download][revision] = 2498748759c70d4cb0b9e056aaf15fa162e4f476
projects[DRUPAU_i18n_labels_import][download][url]="https://github.com/ferranriera/DRUPAU-i18n-Labels-import.git"

projects[social_media_links][subdir] = "custom"
projects[social_media_links][type] = "module"
projects[social_media_links][download][type] = "git"
projects[social_media_links][download][revision] = 9ba6057b7dda6845c1bd235d9b30f0607f4463c6
projects[social_media_links][download][url]="https://github.com/ferranriera/Social-media-Links.git"


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

; CKEditor
libraries[hybridauth][download][type]= "get"
libraries[hybridauth][download][url] = "https://github.com/hybridauth/hybridauth/archive/master.zip"
libraries[hybridauth][directory_name] = "hybridauth"
libraries[hybridauth][destination] = "libraries"

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

libraries[chosen][download][type]= "get"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/v1.2.0/chosen_v1.2.0.zip"
libraries[chosen][directory_name] = "chosen"
libraries[chosen][destination] = "libraries"

libraries[jcrop][download][type]= "get"
libraries[jcrop][download][url] = "https://github.com/tapmodo/Jcrop/zipball/v0.9.12"
libraries[jcrop][directory_name] = "jcrop"
libraries[jcrop][destination] = "libraries"

libraries[json2][download][type]= "get"
libraries[json2][download][url] = "https://github.com/douglascrockford/JSON-js/archive/master.zip"
libraries[json2][directory_name] = "json2"
libraries[json2][destination] = "libraries"