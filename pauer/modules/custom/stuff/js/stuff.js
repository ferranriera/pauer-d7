jQuery(document).ready(function ($) {


	// browser window scroll (in pixels) after which the "back to top" link is shown
	var offset = 300,
		//browser window scroll (in pixels) after which the "back to top" link opacity is reduced
		offset_opacity = 1200,
		//duration of the top scrolling animation (in ms)
		scroll_top_duration = 700,
		//grab the "back to top" link
		$back_to_top = $('.btn-back-top');

	//hide or show the "back to top" link
	$(window).scroll(function(){
		( $(this).scrollTop() > offset ) ? $back_to_top.addClass('cd-is-visible') : $back_to_top.removeClass('cd-is-visible cd-fade-out');
		if( $(this).scrollTop() > offset_opacity ) { 
			$back_to_top.addClass('cd-fade-out');
		}
	});

	//smooth scroll to top
	$back_to_top.on('click', function(event){
		event.preventDefault();
		$('body,html').animate({
			scrollTop: 0 ,
		 	}, scroll_top_duration
		);
	});
			


});

jQuery(document).ready(function ($) {
	var path_to_media=".gallery.views-row-";
	$(".views-row.gallery").each(function( index ) {
		$(".view-gallery.view-display-id-panel_pane_1 .views-row-"+(index+1)+" .views-field-field-file-image-title-text").addClass("views-row views-row-"+(index+1)+" gallery").insertAfter(".view-gallery.view-display-id-panel_pane_2");
		if (index!=0){
			$(path_to_media+(index+1)).hide();
		}
	})
	$( ".view-gallery.view-display-id-panel_pane_2 .views-row" ).each(function(index) {
		$(this).css("cursor", "pointer");
			$(this).on("click", function(){
				$(".views-row.gallery").hide();
				$(path_to_media+(index+1)).fadeIn("slow");
			});

	});


});


jQuery(document).ready(function ($) {

		$(window).resize(function() {
        // This will fire each time the window is resized:
        if($(window).width() <= 768) {
            // if larger or equal
            $('.node-type-news .col-md-3 .group-responsive-group').insertAfter(".node-type-news .col-md-9 .field-name-field-news-summary");
        } else {
            // if smaller
            $('.node-type-news .col-md-3 .group-responsive-group').insertAfter(".node-type-news .col-md-9 .field-name-share-this");
        }
    }).resize();
    
});
