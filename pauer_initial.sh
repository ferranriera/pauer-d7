#!/bin/bash
# Make sure there is no docroot.
chmod -R 777 docroot
rm -rf docroot
# Download drupal core and contrib modules.
drush -y make pauer.make docroot
# Copy install profile to the docroot.
#ln -s pauer docroot/profiles
ln -s ~/Sites/pauer/pauer ~/Sites/pauer/docroot/profiles/pauer
# Change dir before doing install.
cd docroot
# Here you have to change user/pass to match your mysql user
drush -y si --db-url=mysql://root:root@localhost/pauer --locale=en --account-pass=admin pauer
# login as admin after the install.
drush mreg
drush migrate-import --all
