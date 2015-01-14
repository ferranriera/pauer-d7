<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>

<div class="panel-display pauer-21 clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
	<div class="row clearfix">
		<div class="col-md-6 column title">
		<?php print $content['left_side']; ?>
		</div>
		<div class="col-md-6 column spread">
		<?php print $content['right_side']; ?>
		</div>
	</div>
	<div class="row clearfix">
		<div class="col-md-12 column">
		<?php print $content['bottom']; ?>
		</div>
	</div>	
</div>
