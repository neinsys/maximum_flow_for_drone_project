#!/bin/sh
for f in ./*; do docker cp $f goofy_cori:/root/; done
docker exec goofy_cori make
docker exec -it goofy_cori ./$1 
docker exec goofy_cori rm -rf ./*
