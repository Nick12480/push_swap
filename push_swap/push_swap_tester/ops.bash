#!/bin/bash

for i in {0..10}
do
    for x in {0..5}
    do
        timeout 1s ./ops_tester $i $x
    done
done