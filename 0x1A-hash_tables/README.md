
<h1><b> 0x1A. C - Hash tables </b></h1>


<b>Resources</b>

Read or watch:

<a href="https://www.youtube.com/watch?v=MfhjkfocRR0"> What is a HashTable Data Structure - Introduction to Hash Tables , Part 0 </a>
<br><a href="https://en.wikipedia.org/wiki/Hash_function"> Hash function </a>
<br><a href="https://en.wikipedia.org/wiki/Hash_table"> Hash table </a>


<b>Learning Objectives</b>

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>

<br>What is a hash function
<br>What makes a good hash function
<br>What is a hash table, how do they work and how to use them
<br>What is a collision and what are the main ways of dealing with collisions in the context of a hash table
<br>What are the advantages and drawbacks of using hash tables
<br>What are the most common use cases of hash tables


<b>Requirements</b>

<br>Allowed editors: vi, vim, emacs
<br>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
<br>All your files should end with a new line
<br>A README.md file, at the root of the folder of the project is mandatory
<br>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
<br>You are not allowed to use global variables
<br>No more than 5 functions per file
<br>You are allowed to use the C standard library
<br>The prototypes of all your functions should be included in your header file called hash_tables.h
<br>Don’t forget to push your header file
<br>All your header files should be include guarded


<b>More Info</b>

<b>Data Structures</b>

Please use these data structures for this project:

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;



<b>Tasks</b>

<br>0. >>> ht = {}

<br>Write a function that creates a hash table.
<br>Prototype: hash_table_t *hash_table_create(unsigned long int size);
<br>where size is the size of the array
<br>Returns a pointer to the newly created hash table
<br>If something went wrong, your function should return NULL


<br>1. djb2

<br>Write a hash function implementing the djb2 algorithm.
<br>Prototype: unsigned long int hash_djb2(const unsigned char *str);
<br>You are allowed to copy and paste the function from this page

<br>2. key -> index

<br>Write a function that gives you the index of a key.
<br>Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
-where key is the key
-and size is the size of the array of the hash table
<br>This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
You will have to use this hash function for all the next tasks


<br>3. >>> ht['betty'] = 'cool'

<br>Write a function that adds an element to the hash table.
<br>Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
-Where ht is the hash table you want to add or update the key/value to
-key is the key. key can not be an empty string
-and value is the value associated with the key. value must be duplicated. value can be an empty string
<br>Returns: 1 if it succeeded, 0 otherwise
<br>In case of collision, add the new node at the beginning of the list


<br>4. >>> ht['betty']

<br>Write a function that retrieves a value associated with a key.
<br>Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
-where ht is the hash table you want to look into
-and key is the key you are looking for
<br>Returns the value associated with the element, or NULL if key couldn’t be found

<br>5. >>> print(ht)

<br>Write a function that prints a hash table.
<br>Prototype: void hash_table_print(const hash_table_t *ht);
-where ht is the hash table
<br>You should print the key/value in the order that they appear in the array of hash table
-Order: array, list
<br>Format: see example
<br>If ht is NULL, don’t print anything

<br>6. >>> del ht

<br>Write a function that deletes a hash table.
<br>Prototype: void hash_table_delete(hash_table_t *ht);
-where ht is the hash table



