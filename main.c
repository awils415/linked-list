#include <stdio.h>
#include "list.h"

int main() 
{
  // All tests passed test suite
  
  printf("Write your tests for your linked list implementation\n");
  
  list_t *mylist;
  
  mylist = list_alloc();

  // 0a. Check if list was created (good)
  list_print(mylist);
  printf("\n");
  // 0b. Test list_length() (good)
  printf("List length: %d\n", list_length(mylist));

  // Test for list_add_at_index() index out of range on empty list (good)
  printf("Added at index 3: 1\n");
  list_add_at_index(mylist, 1, 3);
  list_print(mylist);

  // Test for list_add_at_index() on nonempty list (good)
  printf("Added at index 1: 2\n");
  list_add_at_index(mylist, 2, 1);
  list_print(mylist);

  // 1. Test for list_add_to_back() (good)
  printf("Added to back: 1\n");
  list_add_to_back(mylist, 1);
  printf("Added to back: 2\n");
  list_add_to_back(mylist, 2);
  printf("Added to back: 3\n");
  list_add_to_back(mylist, 3);
  printf("Added to back: 4\n");
  list_add_to_back(mylist, 4);

  list_print(mylist); // 1 -> 2 -> 3 -> 4
  printf("%d\n", list_length(mylist));

  // 2. Test for list_add_to_front() (good)
  printf("Added to front: 1\n");
  list_add_to_front(mylist, 1);
  printf("Added to front: 2\n");
  list_add_to_front(mylist, 2);
  printf("Added to front: 3\n");
  list_add_to_front(mylist, 3);
  printf("Added to front: 4\n");
  list_add_to_front(mylist, 4);

  list_print(mylist); // 4 -> 3 -> 2 -> 1
  printf("List length: %d\n", list_length(mylist));

  // 3. Test for list_add_at_index() (good)
  printf("Added at index 1: 5\n");
  list_add_at_index(mylist, 5, 1);
  printf("Added at index 4: 6\n");
  list_add_at_index(mylist, 6, 4);

  list_print(mylist); // 5 -> 4 -> 3 -> 2 -> 6 -> 1
  printf("List length: %d\n", list_length(mylist));

  // 4. Test for list_remove_from_back() (good)
  printf("Removed from back: ");
  printf("%d\n", list_remove_from_back(mylist));
  list_print(mylist); // 5 -> 4 -> 3 -> 2 -> 6

  // 5. Test for list_remove_from_front() (good)
  printf("Removed from front: ");
  printf("%d\n", list_remove_from_front(mylist));
  list_print(mylist); // 5 -> 3 -> 2 -> 6

  // 6. Test for list_remove_at_index() (good)
  printf("Removed at index 2: ");
  printf("%d\n", list_remove_at_index(mylist, 2));
  list_print(mylist); // 5 -> 3 -> 6

  // 7. Test for list_is_in() (good)
  printf("4 is in the list: %s\n", list_is_in(mylist, 4) ? "true" : "false");
  printf("6 is in the list: %s\n", list_is_in(mylist, 6) ? "true" : "false");

  // 8. Test for list_get_elem_at() (good)
  printf("Element at index 2: ");
  printf("%d\n", list_get_elem_at(mylist, 2)); // 6
  printf("Element at index 5: ");
  printf("%d\n", list_get_elem_at(mylist, 5)); // -1

  // 9. Test for list_get_index_of() (good)
  printf("Index of element 3 is: ");
  printf("%d\n", list_get_index_of(mylist, 3)); // 1
  printf("Index of element 5 is: ");
  printf("%d\n", list_get_index_of(mylist, 5)); // 0

  return 0;

}

