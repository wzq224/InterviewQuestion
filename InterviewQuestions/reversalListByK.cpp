#include "all.h"

NodeP createList()
{
	int arr[] = {1,2,3,4,5,6};
	int len = sizeof(arr)/sizeof(arr[0]);
	NodeP h = new Node();
	NodeP p = h;
	p->elem = arr[0];
	p->next = NULL;
	for (int i=1; i<len; i++)
	{
		NodeP tempNode = new Node();
		tempNode->elem = arr[i];
		tempNode->next = NULL;
		p->next = tempNode;
		p = p->next;
	}
	return h;
}


NodeP reversalListByK(NodeP list,int k)
{
	if(list != NULL || k != 0)
		return NULL;

	int count = 0;
	NodeP newList = list;
	
	//newList->next = NULL;
	while(list)
	{
		
		if (count == k)
		{
			count = 0;
		}
		else
		{
			NodeP temp = list;
			list = list->next;
			temp->next = newList;
			newList = temp;
			count++;
		}
	}

}