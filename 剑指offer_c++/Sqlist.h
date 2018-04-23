#ifndef SQLIST_H
#define SQLIST_H

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE + 1];
	int length;
}Sqlist;

void swap(Sqlist *L, int i, int j);

#endif // !SQLIST_H