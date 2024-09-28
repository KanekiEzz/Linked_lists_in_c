# Linked Lists

## Introduction

Linked lists are one of the simplest examples of dynamic data structures that utilize pointers for their implementation. However, a good understanding of pointers is essential to grasp how linked lists work. If you are not familiar with pointers or dynamic memory allocation, it's recommended to first review those topics.

A linked list behaves similarly to an array, with the added advantage of being able to grow or shrink in size dynamically. Linked lists allow for inserting and removing elements from any point in the list.

### Advantages of Linked Lists over Arrays:
- **Dynamic resizing**: Elements can be added or removed from anywhere in the list without needing to resize an entire array.
- **No initial size requirement**: Linked lists don’t need an initial fixed size like arrays.

### Disadvantages of Linked Lists:
- **No random access**: You cannot directly access the nth element; instead, you must start from the beginning and traverse the list until reaching the desired item.
- **Memory complexity**: Linked lists require dynamic memory allocation and pointers, which makes the code more complex and increases the possibility of memory leaks or segmentation faults.
- **Higher overhead**: Each item in a linked list needs extra memory for the pointer and has less efficient memory usage compared to arrays.

## What is a Linked List?

A linked list consists of a series of dynamically allocated nodes, where each node contains:
1. **A value** (the data)
2. **A pointer** to the next node in the list

If the pointer is `NULL`, it indicates the end of the list.

A linked list is managed through a pointer variable that points to the first node in the list. If the pointer is `NULL`, it means the list is empty.

```plaintext
------------------------------              ------------------------------
|              |             |            \ |              |             |
|     DATA     |     NEXT    |--------------|     DATA     |     NEXT    |
|              |             |            / |              |             |
------------------------------              ------------------------------



typedef struct node {
    int val;
    struct node *next;
} node_t;


```c
t_list *ft_lstnew(void *content);
void print_list(t_list *head);
void add_list_first_push(t_list **head);
void add_list_end_push(t_list *head);
void remove_first_items(t_list **head);
void remove_last_items(t_list **head);
void remove_by_index(t_list **head, t_list *node_to_remove);

