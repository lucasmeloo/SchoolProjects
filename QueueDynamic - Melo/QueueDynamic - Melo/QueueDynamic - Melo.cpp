// QueueDynamic - Melo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void InitQueue();
bool EnQueue(int);
int DeQueue();
void PrintQueue();
struct MyQueue
{
	int * queueAddr;
	int queueSize;
};
MyQueue Queue;
int *entranceOfQueue;
int *exitOfQueue;
void main()
{
	int choice;
	int maxChoices;
	maxChoices = 4;
	choice = 0;
	int val = 0;
	while (choice < maxChoices)
	{
		cout << "0. Initialize your Queue" << endl;
		cout << "1. Push a value in Queue - EnQueue" << endl;
		cout << "2. Pop a value from Queue - DeQueue" << endl;
		cout << "3. Print Queue" << endl;
		cout << "4: Exit The Program" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			InitQueue();
			break;
		case 1:
			cout << "Please give me an integer value to push?";
			cin >> val;
			EnQueue(val);
			break;
		case 2:
			cout << "The popped value is " << DeQueue() << endl;
			break;

		case 3:
			cout << "Content of Stack the way it is in the memory is" << endl;
			PrintQueue();
			break;

		case 4:
			return;
		}
	}

}
void InitQueue()
{
	MyQueue * queueIni = new MyQueue;
	cout << "What is your desired Stack size? " << endl;
	cin >> queueIni->queueSize;
	entranceOfQueue = queueIni->queueAddr + queueIni->queueSize;
	exitOfQueue = queueIni->queueAddr + queueIni->queueSize;
	int * currentElement;
	currentElement = queueIni->queueAddr;
	for (int i = 0; i < queueIni->queueSize; i++)
	{
		*currentElement = 0;
		currentElement++;
	}
	cout << "Your Queue is Initialized with " << queueIni->queueSize << " zeros" << endl;
}
bool EnQueue(int Value)
{
	if (entranceOfQueue == Queue.queueAddr && exitOfQueue == Queue.queueAddr + Queue.queueSize)
	{
		cout << "Stack is Full" << endl;
		return false;
	}
	*entranceOfQueue = Value;
	entranceOfQueue--;
	return true;
}
int DeQueue()
{
	int poppedValue = 0;
	if (entranceOfQueue == Queue.queueAddr + Queue.queueSize && exitOfQueue == Queue.queueAddr + Queue.queueSize)
	{
		cout << "Stack is Empty" << endl;
		return poppedValue;
	}
	poppedValue = *exitOfQueue;
	int * currentElement;
	currentElement = Queue.queueAddr + Queue.queueSize;
	while (currentElement > Queue.queueAddr)
	{
		if (*(currentElement - 1) != 0)
		{
			*currentElement = *(currentElement - 1);
			currentElement--;
		}
		else
		{
			*currentElement = 0;
			entranceOfQueue++;
			break;
		}
	}
	return poppedValue;
}
void PrintQueue()
{
	if (exitOfQueue == Queue.queueAddr + Queue.queueSize && entranceOfQueue == Queue.queueAddr + Queue.queueSize)
	{
		cout << "Queue is Empty" << endl;
		return;
	}
	int * currentElement;
	currentElement = Queue.queueAddr;
	while (currentElement <= Queue.queueAddr + Queue.queueSize)
	{
		if (*currentElement != 0)
		{
			cout << *currentElement << endl;
		}
		currentElement++;
	}
}


