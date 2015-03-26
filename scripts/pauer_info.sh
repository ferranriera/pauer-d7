#!/bin/bash
all_arguments=$*

arr=$(echo $all_arguments | tr " " "\n")

for x in $arr
do
    arr2=$(echo $x | tr "=" "\n")
    i=0
    for y in $arr2
        do
        i=`expr $i + 1`
        if [ "$i" == "1" ]; then
            if [ "$y" == "to" ]; then
            to_var=true
            fi
            if [ "$y" == "from" ]; then
            from_var=true
            fi
            if [ "$y" == "modules" ]; then
            modules_var=true
            fi
            if [ "$y" == "fr" ]; then
            fr_var=true
            fi
        fi
        if [ "$i" == "2" ]; then
             if [ "$to_var" == "true" ]; then
                to=$y
             fi
             if [ "$from_var" == "true" ]; then
                from=$y
             fi
             if [ "$modules_var" == "true" ]; then
                modules=$y
             fi
             if [ "$fr_var" == "true" ]; then
                fr=$y
             fi
        fi
        done
done

if [ "$to" == "dev" ]; then
	bd_user=root
	bd_pass=123
	bd_server=localhost
	bd_name=test
	alias_drush_to=@test.dev
fi
if [ "$to" == "int" ]; then
    bd_user=rootint
	bd_pass=123
	bd_server=localhost
	bd_name=pauer
	alias_drush_to=@pauer.int
	alias_ssh=ssh pauer@pauer.pauservers.com
fi
if [ "$to" == "prod" ]; then
    bd_user=rootint
	bd_pass=123
	bd_server=localhost
	bd_name=pauer
	alias_drush_to=@pauer.prod
    alias_ssh=ssh pauer@pauer.pauservers.com

fi

if [ "$from" == "dev" ]; then
	alias_drush_from=@pauer.dev
fi
if [ "$from" == "int" ]; then
	alias_drush_from=@pauer.int
	alias_ssh=ssh pauer@pauer.pauservers.com
fi
if [ "$from" == "prod" ]; then
	alias_drush_from=@pauer.prod
	alias_ssh=ssh pauer@pauer.pauservers.com
fi


distro_name=pauer
distro_make_file=pauer.make
installation_language='en'