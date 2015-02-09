#!/bin/bash
git checkout master
git pull
cd docroot
drush vset maintenance_mode 1
drush -y make --working-copy ../pauer.make
drush updb
drush fr-all -y
drush vset maintenance_mode 0