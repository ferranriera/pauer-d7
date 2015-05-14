Bootstrap sub-theme customized by IN2 Drupal team
=================================================

## Main features:

* SMACCS arquitechture
* less usage
* custom layouts 


## Useful commands and plugins

* Less compilation to CSS (local environments) examples:

1- Grunt, with watch plugin 
	> http://ericnish.io/blog/compile-less-files-with-grunt
	> cd yourproject/grunt && grunt

2- Lessc, lessc and guidestyle generator (/profiles/pauer/themes/custom/in2/guide/style.html)
	> http://lesscss.org/
	> https://jacobrask.github.io/styledocco/
	> cd yourproject/profiles/pauer/themes/custom/in2 && lessc less/style.less > css/style.css && styledocco -n "yourprojectname" -o guide css

	
* Less code for guide style generator example:

/*
  Back to top button
  
   <div class="btn-back-top">
   		<a title="Back to top"" href="#init">Back to top</a>
   </div>
*/

.btn-back-top {
	a {
		background: @ss-blue;
		color:white;
		font-family: 'Bree Serif', serif;
		padding:6px 12px;
		font-size: 24px;
		float:right;
		text-transform: uppercase;
	}
	a:hover {
		color:white;
		text-decoration: none;
	}
}