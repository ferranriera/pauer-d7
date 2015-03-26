#!/bin/bash
. assets/pauer_info.sh
drush $alias_drush_from fu-all  -y
git checkout master
git add --all
git commit -m "Fast commit"
git push
ssh $alias_ssh_to -t 'cd www; ./pauer_update.sh fr=1; exit; bash -l'