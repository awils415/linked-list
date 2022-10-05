#include <stdio.h>
#include "list.h"

int main() 
{
  printf("Write your Tests for your linked list implementation\n");
  
  list_t *mylist;
  
  mylist = list_alloc();

  printf("Added to front: 1\n");
  list_add_to_front(mylist, 1);
  printf("Added to back: 2\n");
  list_add_to_back(mylist, 2);
  printf("Added to back: 3\n");
  list_add_to_back(mylist, 3);
  printf("Added to front: 4\n");
  list_add_to_front(mylist, 4);

  list_print(mylist); // 4 -> 1 -> 2 -> 3 

  return 0;

 
}
