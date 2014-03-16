#include "all.h"


const int RED = 0;
const int WHITE = 1;
const int BLUE = 2;

void redWhiteBlue(int *arr,int len)
{
	int redPos = 0;
	int currentPos = 0;
	int bluePos = len-1;
	while (currentPos <= bluePos)
	{
		if (arr[currentPos] == RED)
		{
			swap(arr[currentPos++],arr[redPos++]);
		}
		else if (arr[currentPos] == WHITE)
		{
			currentPos++;
		}
		else
		{
			swap(arr[currentPos],arr[bluePos--]);
		}
	}
}

void redWhiteBlueTest()
{
	int arr[] = {1,2,1,0,2,1,0,2,1,2,0,2,1,2,1,0};
	redWhiteBlue(arr,16);
	for (int i=0; i<16; i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
}