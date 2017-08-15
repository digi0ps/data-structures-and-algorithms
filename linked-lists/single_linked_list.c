#include <stdio.h>
#include <stdlib.h>

/*
------------------
Singly linked list
------------------

Operations:

- Display aka Traverse
- Modify node
- Insert at head (first in)
- Insert at last (last in)
- Insert at middle
- Delete at head (first out)
- Delete at last (last out)
- Delete at middle 

Data Structures and operations to implement

- Stack (Insert at head/Delete at head)
- Queue(Insert at last/Delete at head)

*/

typedef struct NODE {
  // Data is assumed to be unique
  int data;
  struct NODE *next;
}node;

void display(node* beg){
  // beg = beginning = the node to begin with
  node *curr = beg;
  while (curr!=NULL){
    printf("%d -> ", curr->data);
    curr = curr->next;
  }
}

void modify(){
  printf("\nEnter the data you want to modify: ");
  int data;
  scanf("%d", &data);
  node *curr = head;
  while (curr!=NULL){
    if (curr->data==data){
      printf("Data found. Enter new data: ");
      int new_data;
      scanf("%d", &new_data);
      curr->data = new_data;
    }
  }
}

// Utility functions to prevent repeated code [optional]
int get_data(){
  printf("Enter new data: ");
  int data;
  scanf("%d", &data);
  return data;
}

node* allocate_node(){
  node *newnode = (node *)malloc(sizeof(node));
  return newnode;
}

// Insert operations

void insert_at_head(){
  node *newnode = allocate_node();
  newnode->data = get_data();
  newnode->next = head;
  if (head==NULL)
    last = newnode;
  head = newnode->next;
  
}


void insert_at_last(){
  node *newnode = allocate_node();
  newnode->data = get_data();
  newnode->next = last;
  if(last==NULL)
    head = newnode;
  last=newnode;
}

void insert_at_last(){
  printf("Enter new data: ");
  int data;
  scanf("%d", &data);
  
}

void insert_at_middle(){
  printf("Enter new data: ");
  int data;
  scanf("%d", &data);
  
}

int main(){
  node *head, *last;
  return 0;
}
