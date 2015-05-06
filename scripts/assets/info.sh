#!/bin/bash
. assets/get_vars.sh

    bd_user=root
	bd_pass=123
	bd_server=localhost
	bd_name=pauer
	alias_drush=@pauer.dev
	#Variables for the content environment
	alias_drush_content_environment=@pauer.int
	alias_ssh_content_environment='ssh moocsco@moocsco.pauservers.com'
    #General Variables
    distro_name=pauer
    distro_make_file=pauer.make
    installation_language='en'
