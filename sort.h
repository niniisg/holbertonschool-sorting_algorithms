#ifndef SORT_H
#define SORT_H

#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
<<<<<<< HEAD
const int n;
struct listint_s *prev;
struct listint_s *next;
=======
 const int n;
 struct listint_s *prev;
 struct listint_s *next;
>>>>>>> main
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
<<<<<<< HEAD
void print_list(const listint_t *list);
=======
<<<<<<< HEAD
=======
void print_list(const listint_t *list);

>>>>>>> nissel
>>>>>>> main
#endif
