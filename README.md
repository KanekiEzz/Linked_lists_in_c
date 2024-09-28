# Linked Lists

## Introduction

Linked lists are one of the simplest examples of dynamic data structures that utilize **pointers** for their implementation. A solid understanding of pointers is essential to grasp how linked lists work. If you're not familiar with pointers or dynamic memory allocation, it's advisable to review those topics first.

Linked lists behave similarly to arrays, but with the added advantage of dynamic size. Unlike arrays, they allow for **inserting** and **removing** elements from anywhere in the list, without the need for resizing.

### Advantages of Linked Lists over Arrays
- **Dynamic Resizing**: Elements can be added or removed from anywhere in the list without having to resize the entire array.
- **No Initial Size Requirement**: Linked lists don’t need to be declared with a fixed size, making them more flexible for dynamic data.

### Disadvantages of Linked Lists
- **No Random Access**: You cannot directly access an nth element; you must traverse the list from the beginning until you reach the desired element.
- **Memory Complexity**: Linked lists require dynamic memory allocation and pointers, which makes the code more complex and prone to issues like memory leaks or segmentation faults.
- **Higher Overhead**: Each node in the list requires extra memory to store the pointer, making linked lists less memory-efficient than arrays.

---

## What is a Linked List?

A **linked list** consists of a series of **nodes** that are dynamically allocated in memory. Each node contains:
1. **Data**: The actual value stored in the node.
2. **A Pointer**: A reference (or pointer) to the next node in the list.

If the pointer is `NULL`, it indicates the end of the list. 

A linked list is typically managed through a pointer that points to the **first node** in the list (often called the "head"). If this pointer is `NULL`, it means the list is empty.

### Linked List Structure


```plaintext
------------------------------              ------------------------------
|              |             |            \ |              |             |
|     DATA     |     NEXT    |--------------|     DATA     |     NEXT    |
|              |             |            / |              |             |
------------------------------              ------------------------------
````


````c
typedef struct node {
    int val;
    struct node *next;
} node_t;


**Common Operations in Linked Lists**
Here are some common functions used to manage and manipulate a linked list:

// Function to create a new node in the list
t_list *ft_lstnew(void *content);

// Function to print the entire linked list
void print_list(t_list *head);

// Function to add a node to the front of the list (push)
void add_list_first_push(t_list **head);

// Function to add a node to the end of the list (push)
void add_list_end_push(t_list *head);

// Function to remove the first node from the list
void remove_first_items(t_list **head);

// Function to remove the last node from the list
void remove_last_items(t_list **head);

// Function to remove a node by index
void remove_by_index(t_list **head, t_list *node_to_remove);
````
