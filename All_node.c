#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
  void *content;
  struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
  t_list *_ptr_new_node;

  if (!(_ptr_new_node = (t_list *)malloc(sizeof(t_list))))
    return NULL;
  _ptr_new_node->content = content;
  _ptr_new_node->next = NULL;

  return _ptr_new_node;
}

void print_list(t_list * head) {
  int i = 0;
    t_list * current = head;

    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        i++;
        current = current->next;
    }
    printf("Total items: %d", i);
}

void add_list_first_push(t_list **head)
{
  void *val = "k1";
  t_list *node_node = malloc(sizeof(t_list));

  node_node->content = val;
  node_node->next = *head;
  *head = node_node;
}

void add_list_end_push(t_list *head)
{
  void *val = "k";
  t_list *curr = head;

  while (curr->next != NULL)
  {
    curr = curr->next;
  }

  curr->next = malloc(sizeof(t_list));
  curr->next->content = val;
  curr->next->next = NULL;
}

void remove_first_items(t_list **head)
{
  if (*head == NULL)
    return;
  t_list *remove_node = *head;
  *head = (*head)->next;
  free(remove_node);
}

void remove_last_items(t_list **head)
{
  if ((*head)->next == NULL)// if there's only one items in the list
  {
    free(*head);
    *head = NULL;
    return;
  }

  t_list *curr = *head;
  while (curr->next->next != NULL)
  {
    curr = curr->next;
  }
  free(curr->next);
  curr->next = NULL;
}

void remove_by_index(t_list **head, t_list *node_to_remove)
{
  t_list *curr = *head;

  if (curr == node_to_remove)
  {
    *head = curr->next;
    free(curr);
    return;
  }

  while (curr->next!= NULL)
  {
    if (curr->next == node_to_remove)
    {
      t_list *temp = curr->next;
      curr->next = curr->next->next;
      free(temp);
      return;
    }
    curr = curr->next;
  }
}


int main()
{
  // add new list
  t_list *node1 = ft_lstnew("node1");
  t_list *node2 = ft_lstnew("node2kaneki");
  t_list *node3 = ft_lstnew("node3");

  node1->next = node2;
  node2->next = node3;

  // add in list new nod
  add_list_first_push(&node1);

  // add in last item new node
  add_list_end_push(node1);

  //remove fisrt node // means that add_list_first_push is remove
  remove_first_items(&node1);

  // remove last node // means that add_list_end_push is remove
  remove_last_items(&node1);

  // removoving a specific item remove node2;
  remove_by_index(&node1, node2);

  // print all list node
  print_list(node1);

  // just free node
  while (node1 != NULL)
  {
    t_list *temp = node1;
    node1 = node1->next;
    free(temp);
  }
  return 0;
}