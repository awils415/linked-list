# list/Makefile
#
# Makefile for list implementation and test file.
#
# Aniya Wilson

list: main.c
	gcc -o list main.c list.c -I.

