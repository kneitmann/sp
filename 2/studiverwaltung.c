/*
 * studiverwaltung.c
 *
 * Author: Karl Neitmann
 *
 * ????`gcc -c main.c;  gcc -c blatt.c;  gcc main.o blatt.o`
 *
 */
#include <studio.h>

node* get_ifm_students(node* nodePointer, student* studendPointer)
{
	if(nodePointer != 0 && studendPointer != 0)
	{
		/*
		* find the last not null node
		* create the new node with the last node as prev
		* add the new node as the next element of the last node
		* go back to the first node
		*/
		while(nodePointer->next != 0)
		{
			nodePointer = nodePointer->next;
		}
		node newNode
		{
			stdnt = studendPointer;
			next = 0;
			prev = nodePointer;			
		};
		nodePointer->next = newNode;
		while(nodePointer->prev != 0)
		{
			nodePointer = nodePointer->prev;
		}
	}
	else if(nodePointer == 0 && studendPointer != 0)
	{
		/*
		* build a pointer to a new node
		*/
		node newNote; 
		nodePointer = newNote* 
	}
	return stndPointer;
}
