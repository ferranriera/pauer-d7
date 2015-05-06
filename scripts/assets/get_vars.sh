#!/bin/bash

all_arguments=$*
arguments=($all_arguments);

for ((i=0; i<${#arguments[@]}; ++i));
do
    elements=($(echo ${arguments[$i]} | tr "=" " "))

    if [ "${elements[0]}" == "modules" ]; then
        modules=${elements[1]}
    fi
    if [ "${elements[0]}" == "fr" ]; then
        fr=${elements[1]}
    fi
        if [ "${elements[0]}" == "fu" ]; then
        fu=${elements[1]}
    fi
    if [ "${elements[0]}" == "sync" ]; then
        sync=${elements[1]}
    fi
done