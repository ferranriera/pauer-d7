Pauer Distro
============

# Instalation

## Requisites:

* Drupal 7
* Drush 7

## Instalation instructions

1. Clone this repository `git clone git@github.com:ferranriera/pauer-d7.git pauer/`
2. You have to prepare the virtualhost to point to pauer/docroot
3. Configure `pauer.info.sh` default environments (dev, int, prod)
4. Go to scripts folder and execute `./pauer_install to=dev` 
5. The distro is now installed with user: admin and password:admin

* Example to configure drush aliases: https://gist.github.com/ferranriera/e2dc7193824268dc9738

## Useful commands
`./pauer_update.sh modules=1 fr=1 to=dev`
`./pauer_commit.sh from=dev to=int`
`./pauer_sync.sh from=int to=dev`
