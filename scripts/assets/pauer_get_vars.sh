#!/bin/bash

all_arguments=$*
arguments=($all_arguments);

for ((i=0; i<${#arguments[@]}; ++i));
do
    elements=($(echo ${arguments[$i]} | tr "=" " "))

    if [ "${elements[0]}" == "from" ]; then
        from=${elements[1]}
    fi
    if [ "${elements[0]}" == "to" ]; then
        to=${elements[1]}
    fi
    if [ "${elements[0]}" == "module" ]; then
        module=${elements[1]}
    fi
    if [ "${elements[0]}" == "auto" ]; then
        auto=${elements[1]}
    fi
    if [ "${elements[0]}" == "fr" ]; then
        fr=${elements[1]}
    fi
        if [ "${elements[0]}" == "fu" ]; then
        fu=${elements[1]}
    fi
done