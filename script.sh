#!/bin/sh
for f in ./*; do docker cp $f goofy_cori:/root/; done
if docker exec goofy_cori make; then
    docker exec -it goofy_cori ./$1 
fi
#docker exec goofy_cori rm -rf ./*
