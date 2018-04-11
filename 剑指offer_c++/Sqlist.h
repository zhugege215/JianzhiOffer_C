#ifndef SQLIST_H
#define SQLIST_H

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE + 1];
	int length;
}Sqlist;

void swap(Sqlist *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

#endif // !SQLIST_H