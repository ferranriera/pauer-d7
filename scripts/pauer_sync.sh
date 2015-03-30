#!/bin/bash
. assets/pauer_info.sh
drush -y sql-sync $alias_drush_content_environment $alias_drush
drush -y rsync $alias_drush_content_environment:%files $alias_drush:%files
drush $alias_drush cc all