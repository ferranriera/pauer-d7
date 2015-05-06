#!/bin/bash
. assets/info.sh

if [ "$modules" == "1" ]; then
#Put the maintenance.html as index default page
cd assets
cp .htaccess_maintenance ../../docroot/
cd ../../docroot
mv .htaccess_maintenance .htaccess

#Remove modules
rm -rf sites/all
fi
#Download the lastest changes from the repo
git checkout master
git pull

if [ "$modules" == "1" ]; then
drush -y make --working-copy ../pauer.make
drush updb

#Put the normal .htaccess
cd ..
cd scripts/assets
cp .htaccess_normal ../../docroot/
cd ../../docroot
mv .htaccess_normal .htaccess
drush $alias_drush cc all
fi
if [ "$fr" == "1" ]; then
#Download all modules and core
drush $alias_drush fr-all -y
fi
drush $alias_drush cc all
