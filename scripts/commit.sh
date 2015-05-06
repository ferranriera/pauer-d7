#!/bin/bash
. assets/info.sh

if [ "$fu" == "1" ]; then
	drush $alias_drush fu-all  -y
fi


git checkout master
git add --all
git commit -m "Fast commit"
git push

if [ "$fu" == "1" ]; then
    $alias_ssh_content_environment -t 'cd www/scripts; ./update.sh fr=1; exit; bash -l'
else
    $alias_ssh_content_environment -t 'cd www/scripts; ./update.sh; exit; bash -l'
fi
