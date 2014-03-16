#include "all.h"
#include <stack>
void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr)
{
	if (pInputStr == NULL || lInputLen == 0 || pOutputStr == NULL)
	{
		return ;
	}
	cout << pInputStr << endl;
	char prevChar = pInputStr[0];
	long repeatCount = 1;
	long outLen = 0;
	stack<char> charStack;
	for (int i=1; i<=lInputLen; i++)
	{
		if (pInputStr[i] == prevChar)
		{
			repeatCount++;
		}
		else
		{
			if (repeatCount != 1)
			{
				while(repeatCount)
				{
					charStack.push(char(repeatCount%10+48));
					repeatCount /= 10;
				}

				while(!charStack.empty())
				{
					pOutputStr[outLen++] = charStack.top();
					charStack.pop();
				}
			}
			pOutputStr[outLen++] = prevChar;
			prevChar = pInputStr[i];
			repeatCount = 1;
		}
	}
	pOutputStr[outLen] = '\0';
}

void stringZipTest()
{
	long lInputLen = 21;
	char *pOutputStr = new char[lInputLen];
	stringZip("abbcccddddeeeeeeeeeee",lInputLen,pOutputStr);
	cout << pOutputStr << endl;
}
