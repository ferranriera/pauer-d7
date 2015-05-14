<?php
/**
 * @file
 * menu-tree.func.php
 */

/**
 * Overrides theme_menu_tree().
 */


function in2_menu_tree__menu_summer_school($variables) {
    return '<div class="navbar-header">
	            <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar" aria-expanded="false" aria-controls="navbar">
              <span class="sr-only">Toggle navigation</span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
            </button></div>
	            <div id="navbar" class="collapse navbar-collapse pane-inner" aria-expanded="false"><ul class="main-menu">' . $variables ['tree'] . '</ul></div>';
}
