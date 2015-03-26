<?php
/**
 * @file field--fences-div.tpl.php
 * Wrap each field value in the <div> element.
 *
 * @see http://developers.whatwg.org/grouping-content.html#the-div-element
 */
?>
<?php foreach ($items as $delta => $item): ?>
  <div class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<?php if ($element['#label_display'] == 'inline'): ?>
	  <span class="field-label"<?php print $title_attributes; ?>>
	    <?php print $label; ?>:
	  </span>
	<?php elseif ($element['#label_display'] == 'above'): ?>
	  <div class="field-label"<?php print $title_attributes; ?>>
	    <?php print $label; ?>
	  </div>
	<?php endif; ?>  
  	<div class="field-item">
    	<?php print render($item); ?>
	</div>
  </div>
<?php endforeach; ?>