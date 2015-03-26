#!/bin/bash
. pauer_info.sh
cd ..
# Make sure there is no docroot.
chmod -R 777 docroot
rm -rf docroot
# Download drupal core and contrib modules.
drush -y make $distro_make_file docroot
# Copy install profile to the docroot.
cd docroot/profiles
ln -s ../../$distro_name $distro_name
# Change dir before doing install.
#cd docroot
# Here you have to change user/pass to match your mysql user
drush -y si --db-url=mysql://$bd_user:$bd_pass@$bd_server/$bd_name --locale=$installation_language --account-pass=admin $distro_name
# login as admin after the install.
drush fr-all -y