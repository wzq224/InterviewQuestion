#include <iostream>
using namespace std;

#include <algorithm>

typedef struct node
{
	int elem;
	node *next;
}Node,*NodeP;

NodeP createList();

//string zip
void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr);
void stringZipTest();

//
void redWhiteBlueTest();
void redWhiteBlue(int *arr,int len);