#!/bin/bash
. assets/pauer_info.sh
drush -y sql-sync $alias_drush_from $alias_drush_to
drush -y rsync $alias_drush_from:%files $alias_drush_to:%files
drush $alias_drush_to cc all