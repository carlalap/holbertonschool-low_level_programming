
<h1><b> 0x18. C - Doubly linked lists </b></h1>


<b>Resources</b>

Read or watch:

<a href="https://www.youtube.com/watch?v=nquQ_fYGGA4"> Doubly Linked List in Data structures</a>


<b>Learning Objectives</b>

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>

<br>What is a doubly linked list
<br>How to use doubly linked lists
<br>Start to look for the right source of information without too much help


<b>Requirements</b>


<b>Tasks</b>

<br>0. Print list
<br>Write a function that prints all the elements of a dlistint_t list.
<br>Prototype: size_t print_dlistint(const dlistint_t *h);
<br>Return: the number of nodes

<br>1. List length
<br>Write a function that returns the number of elements in a linked dlistint_t list.
<br>Prototype: size_t dlistint_len(const dlistint_t *h);


<br>2. Add node
<br>Write a function that adds a new node at the beginning of a dlistint_t list.
<br>Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
<br>Return: the address of the new element, or NULL if it failed


<br>3. Add node at the end
<br>Write a function that adds a new node at the end of a dlistint_t list.
<br>Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
<br>Return: the address of the new element, or NULL if it failed

<br>4. Free list
<br>Write a function that frees a dlistint_t list.
<br>Prototype: void free_dlistint(dlistint_t *head);


<br>5. Get node at index
<br>Write a function that returns the nth node of a dlistint_t linked list.

<br>Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
<br>where index is the index of the node, starting from 0
<br>if the node does not exist, return NULL

<br>6. Sum list
<br>Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
<br>Prototype: int sum_dlistint(dlistint_t *head);
<br>if the list is empty, return 0


<br>7. Print list backward
<br>Write a function that prints all the elements of a dlistint_t list backward.
<br>Prototype: size_t print_dlistint_backward(const dlistint_t *h);
<br>Return: the number of nodes
<br>Format: see example

<br>8. Delete at index
<br>Write a function that deletes the node at index index of a dlistint_t linked list.
<br>Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
<br>where index is the index of the node that should be deleted. Index starts at 0
<br>Returns: 1 if it succeeded, -1 if it failed




