#!/bin/bash

rm -rf ./bin

mkdir ./bin

gcc dog.c -o ./bin/dog
gcc mirror.c -o ./bin/mirror
gcc rp.c -o ./bin/rp
gcc tp.c -o ./bin/tp
gcc del.c -o ./bin/del
gcc mk.c -o ./bin/mk
