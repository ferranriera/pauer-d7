#!/bin/bash
rm -rf modules/contrib
rm -rf modules/sandbox
rm -rf modules/github
rm -rf themes/contrib
rm -rf libraries
drush make --working-copy --no-core --contrib-destination=. pauer.make .
drush updatedb -y && drush cc all
