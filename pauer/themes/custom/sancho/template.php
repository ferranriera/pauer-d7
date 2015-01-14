<?php
/**
 * @file
 * menu-tree.func.php
 */

/**
 * Overrides theme_menu_tree().
 */
function sancho_menu_tree(&$variables) {
  return '<ul class="menu">' . $variables['tree'] . '</ul>';
}

/**
 * Bootstrap theme wrapper function for the primary menu links.
 */
function sancho_menu_tree__primary(&$variables) {
  return '<ul class="menu navbar-nav">' . $variables['tree'] . '</ul>';
}

/**
 * Bootstrap theme wrapper function for the secondary menu links.
 */
function sancho_menu_tree__secondary(&$variables) {
  return '<ul class="menu navbar-nav secondary">' . $variables['tree'] . '</ul>';
}

function sancho_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

	  global $base_path;
    global $language;
        //Add default url
    $url=$base_path.$language->language;


    //Default breadcrumb for all the site
    $output="";
    $output .="<div class='breadcrumb_sanco'>";
    $output .="<div class='container'>";
    $output .= '<ol class="breadcrumb"><li class="first"><a href="/"> '.t('Home').'</a></li>';
    foreach ($breadcrumb as $breadcrumb_list){
	    if (!is_array($breadcrumb_list)){
        if ($breadcrumb_list!='<span title="" class="separator"><hr></span>'){
          $output.="<li>".$breadcrumb_list."</li>";
        }
		    
	    }
    }
    $output .= '</ol>';
    $output .= '</div>';
    $output .= '</div>';
	
	return $output;
    
}

function sancho_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul>' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      /*$element['#attributes']['class'][] = 'dropdown';*/
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      /*$element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';*/
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == drupal_get_path_alias($_GET['q'])) || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
  	
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

