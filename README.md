Pauer Distro
============

## Requisites:

* Drupal 7
* Drush 7

## Instalation instructions

1. Clone this repository `git clone git@github.com:ferranriera/pauer-d7.git pauer/`
2. You have to prepare the virtualhost to point to pauer/docroot
3. Copy `/scripts/assets/info.sh.example` to `/scripts/assets/info.sh` to configure your own configuration
4. Configure `info.sh`
5. Go to scripts folder and run `./install.sh` 
6. The distro is now installed with user: admin and password:admin

* Example to configure drush aliases: https://gist.github.com/ferranriera/e2dc7193824268dc9738

## Useful commands
`./install.sh sync=1`
Do the install and then ./pauer_sync.sh 

`./update.sh modules=1 fr=1`
git master and git pull form repository
if modules = 1 will reinstall the modules specified in drush make
if fr =1 will execute a `drush fr-all -y` 


`./commit.sh fu=1`
Implement a fast commit
git add -all
git commit 
git push
And then connect to integration/content environment and execute the script `./update.sh`

if fu=1 will execute a `drush fu-all -y`

`./sync.sh`
Sync content and files between content environment to dev environment

