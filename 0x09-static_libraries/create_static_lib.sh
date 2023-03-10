#!/bin/bash

gcc -c -Wall -Werror -fpic *.c && ar -rc liball.a *.o
