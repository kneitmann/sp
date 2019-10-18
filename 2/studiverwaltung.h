/*
 * studiverwaltung.h
 *
 * Author: Karl Neitmann
 *
 *
 */
 #include "struct.h"
 #define NAME_LENGTH 30
typedef enum degree_program{IFM, ELM, PFLEGE};

typedef struct student
{
	char name[NAME_LENGTH];
	unsigned int cps;
	char degree_program[];
};

typedef struct node
{
	typedef student* stdnt;
	typedef node* next;
	typedef node* prev;	
};