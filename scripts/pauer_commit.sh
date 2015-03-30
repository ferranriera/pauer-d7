#!/bin/bash
. assets/pauer_info.sh

if [ "$fu" == "1" ]; then
	drush $alias_drush_from fu-all  -y
fi


git checkout master
git add --all
git commit -m "Fast commit"
git push

if [ "$fu" == "1" ]; then
$alias_ssh_to -t 'cd www ./scripts/pauer_update.sh fr=1 to=$to; exit; bash -l'
fi