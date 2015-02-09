#!/bin/bash
cd docroot
# Here you have to change user/pass to match your mysql user
drush -y si --db-url=mysql://root:123@localhost/pauer --locale=en --account-pass=admin pauer
# login as admin after the install.
drush mreg
drush fr-all -y
drush migrate-import --all