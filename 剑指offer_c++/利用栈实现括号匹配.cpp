#include <stdio.h>
#include <iostream>
#include <malloc.h>
#include <math.h>
#include <process.h>
using namespace std;
#define S_SIZE 100
#define STACKINCREAMENT 10
struct SqStack
{
	int *base;
	int *top;
	int stacksize;
};

void InitStack(SqStack &S)
{
	S.base = (int *)malloc(S_SIZE * sizeof(int));
	S.stacksize = S_SIZE;
	S.top = S.base;
}

int StackEmpty(SqStack S)
{
	if (S.base == S.top)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(SqStack &S, int e)
{
	if (S.top - S.base == S.stacksize)
	{
		S.base = (int *)realloc(S.base, (S.stacksize + STACKINCREAMENT) * sizeof(int));
		S.top = S.base + S.stacksize;
		S.stacksize += STACKINCREAMENT;
	}
	*(S.top) = e;
	S.top++;
}

void pop(SqStack &S, int &e)
{
	if (S.base != S.top)
	{
		S.top--;
		e = *S.top;
	}
}

int main()
{
	SqStack s;
	InitStack(s);
	char ch[100], *p; int e;
	p = ch;
	printf(" ‰»Î\n");
	cin.getline(ch, 99);
	while (*p)
	{
		switch (*p)
		{
		case '{':
		case '[':
		case '(':push(s, *p++); break;
		case '}':
		case ']':
		case ')':
			pop(s, e);
			if ((e == '{' && *p == '}') || (e == '[' && *p == ']') || (e == '(' && *p == ')'))
				p++;
			else 
			{
				printf("¿®∫≈≤ª∆•≈‰!"); exit(OVERFLOW);
			}
			break;
		default:
			p++;
		}
	}

	if (StackEmpty(s))
		printf("¿®∫≈∆•≈‰≥…π¶");
	else
		printf("»±…Ÿ”“¿®∫≈£°");
	printf("\n");
}