/*(function ($) {

 	Drupal.behaviors.sanco_stuff = {
  	'attach': function (context) {
     $( "input[type='checkbox'][name ^= field_matrix]" ).click(function() {
				// Si esta check, desmarquem la fila sencera

				if($('#'+this.id).is(':checked')) {  
					var files = this.id.split('-');
					fila = files[5];
					element = files[6];
					for ( var i = 1; i <= 5; i++ ) {
						if (i != element) {
						$('#edit-field-matrix-und-grid-'+fila+'-'+i+'-'+i).attr('checked', false);
						}
					}
				}
			
			});	   


    }
  }


   	Drupal.behaviors.sanco_stuff = {
  	'attach': function (context) {
  	
    	$('.close-survey').click(function() {
			$('.expand-survey').slideUp("slow");
			$('.open-survey').show();
			$('.close-survey').hide();
		});	   
		$('.open-survey').click(function() {
			$('.expand-survey').slideDown( "slow" );
			$('.close-survey').show();
			$('.open-survey').hide();
		});	

    	$('.close-city').click(function() {
			$('.views-field-field-body,.views-field-title-1').slideUp("slow");;
			$('.open-city').show();
			$('.close-city').hide();
			$('.pane-cities-panel-pane-3').css("padding-bottom", "0px");
		});	   
		$('.open-city').click(function() {
			$('.views-field-field-body,.views-field-title-1').slideDown( "slow" );
			$('.close-city').show();
			$('.open-city').hide();
			$('.pane-cities-panel-pane-3').css("padding-bottom", "20px");
		});	
  
    }
  }
 

  
  
})(jQuery);


jQuery(document).ready(function ($) {
	
	$('.btt').click(function () {
	$('html,body').animate({
	scrollTop: 0
	}, 500);
	return false;
	});	

});


//edit-field-profile-type-of-organizati-und-0
//edit-field-profile-type-of-organizati-und-1
//edit-field-profile-type-of-organizati-und-2
//edit-field-profile-type-of-organizati-und-3

//edit-field-number-of-staff
//edit-field-charter-number-of-citizens
//edit-field-charter-number-of-students
//edit-field-charter-number-of-professi
//edit-field-charter-number-of-individu