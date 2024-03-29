#include "lists.h"
/**
* add_node - adds a new node at the beginning
* of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: address of the head.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newlist;
size_t nel;
newlist = malloc(sizeof(list_t));
if (newlist == NULL)
return (NULL);
newlist->str = strdup(str);
for (nel = 0; str[nel]; nel++)
;
newlist->len = nel;
newlist->next = *head;
*head = newlist;
return (*head);
}
