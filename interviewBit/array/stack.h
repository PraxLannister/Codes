<template class T>
class Stack
{
	T *arr;
	int top;
	int size;
	int capacity;
public:
	Stack(int capacity=1)
	{
		this->capacity = capacity;
		arr = new T[capacity];
		top = -1;
	}
	Stack()
	{
		this->capacity = 1;
		arr = new T[capacity];
		top = -1;
	}
	


};