// list/list.c
// 
// Implementation for linked list.
//
// Aniya Wilson

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

list_t *list_alloc() {
  list_t* list = (list_t*) malloc(sizeof(list_t));
  list->head = NULL;
  return list;
}

node_t *node_alloc(elem val) {
  node_t* new_node = (node_t*) malloc(sizeof(node_t));
  new_node->value = val;
  new_node->next = NULL;
  return new_node;
}

void list_free(list_t *l) {
  node_t* curr;
	while (head != NULL) {
		curr = head;
		head = head->next;
  	free(curr);
	}
}

/*
void node_free(node_t *n) {

  free(n);
}
*/


void list_print(list_t *l) {
  //use current pointer to track node currently printing
  node_t * curr = l->head;

  //set current pointer to next node, print again, until end of list reached (next->NULL)
  while (curr != NULL) {
    printf("%d ", curr->val);
    curr = curr->next;
  }
  printf("List is empty.")
}

int list_length(list_t *l) {
  //intialize length
  int length = 0;
  //use current pointer to track node currently printing
  node_t * curr = l->head;

  //set current pointer to next node, add 1 to length, until end of list reached (next->NULL)
  while (curr != NULL) {
    length += 1;
    curr = curr->next;;
  }
  return length
}

void list_add_to_back(list_t *l, elem value) {
  node_t * curr = head;
  while (curr->next != NULL) {
    curr = curr->next;
  }

  curr->next = (node_t *) malloc(sizeof(node_t));
  curr->next->value = value;
  curr->next->next = NULL;
}

void list_add_to_front(list_t *l, elem value) {
  //create new iteam and set its value
  node_t * new_node;
  new_node = (node_t *) malloc(sizeof(node_t));
  //link new item to point to head of the list
  new_node->value = value;
  new_node->next = *head;
  //set head of list to be new item
  *head = new_node;
}

void list_add_at_index(list_t *l, elem value, int index) {
  int i = 0;
  int retval = -1;
  list_t * curr = *l;
  list_t * temp = NULL;

  if (n == 0) {
    return pop(l);
  }

  for (i = 0; i < n-1; i++) {
    if (curr->next == NULL) {
      return -1;
    }
    curr = curr->next;
  }

  if (curr->next == NULL) {
    return -1;
  }

  temp = curr->next;
  retval = temp->value;
  curr->next = temp->next;
  free(temp);

  return retval;
}

elem list_remove_from_back(list_t *l) {
  int retval = 0;
  //if only one item in list, remove it
  if (head->next == NULL) {
    retval = head->val;
    free(head);
    return retval;
  }

  //move to second to last node
  node_t * curr = head;
  while (curr->next->next != NULL) {
    curr = curr->next;
  }

  //current points to second to last item, remove curr->next 
  retval = curr->next->val;
  free(curr->next);
  curr->next = NULL;
  return retval;
}

elem list_remove_from_front(list_t *l) {
  int retval = -1;
  node_t * next_node = NULL;

  if (*head == NULL) {
    return -1;
  }
  //save next item head points to
  next_node = (*head)->next;
  retval = (*head)->val;
  //free head item
  free(*head);
  //set head to next item stored
  *head = next_node;

  return retval;
}

/*
elem list_remove_at_index(list_t *l, int index) {
  //iterate to node before to be deleted node
  int i = 0;
  int retval = -1;
  //save node to be deleted to temp pointer
  //set previous node's next pointer to node after to be deleted node
  //delete node using temp pointer
}
*/

/*
bool list_is_in(list_t *l, elem value) {

}

elem list_get_elem_at(list_t *l, int index) {

}

int list_get_index_of(list_t *l, elem value) {

}
*/

