# list/Makefile
#
# Makefile for list implementation and test file.
#
# Aniya Wilson

list: main.c
	gcc main.c list.c -o list -I.