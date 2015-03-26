#!/bin/bash
. assets/pauer_get_vars.sh

#Development environment
if [ "$to" == "dev" ]; then
	bd_user=root
	bd_pass=123
	bd_server=localhost
	bd_name=pauer
	alias_drush_to=@pauer.dev
fi
if [ "$from" == "dev" ]; then
	alias_drush_from=@pauer.dev
fi


#Integration environment
if [ "$to" == "int" ]; then
    bd_user=moocsco_user
	bd_pass=pauer
	bd_server=localhost
	bd_name=moocsco_db
	alias_drush_to=@pauer.int
	alias_ssh=moocsco.int
fi
if [ "$from" == "int" ]; then
	alias_drush_from=@pauer.int
	alias_ssh=moocsco.int
fi

#Production environment
if [ "$to" == "prod" ]; then
    bd_user=rootint
	bd_pass=123
	bd_server=localhost
	bd_name=pauer
	alias_drush_to=@pauer.prod
    alias_ssh=moocsco.prod

fi
if [ "$from" == "prod" ]; then
	alias_drush_from=@pauer.prod
	alias_ssh=ssh pauer@pauer.pauservers.com
fi

#General Variables
distro_name=pauer
distro_make_file=pauer.make
installation_language='en'
