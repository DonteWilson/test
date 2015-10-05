//////////////////////////////////////////
//Donte Wilson
//10/5/15
/*
Writing the implementation for the stack is not as complicated as some of you are making it.
1) it does not need to be templated
2) it only needs to be able to push elements "add" them to the stack
3)pop elements "remove" them from the stack
4)peek the top of the stack "look at the the last element pushed onto it"
5)check if its empty
6)keep track of the size
*/
/////////////////////////////////////////
#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
#include <stack>
template<typename R>
struct Node
{
	R data;
	Node<R> *next;


};
template <typename R>
class Stack
{
private:
	int size;
	Node<R> *top;


public:
	Stack();
	~Stack();

	void push(R data);
	void pop();
	Node<R> *peek();

	void print();
	bool empty();

};

template <typename R>
void stack<R>::Push(R data)
{
	if (top == nullptr)
	{
		top-- > data = c_data;
	}
	else
	{
		Node<R> *Temp = new Node<R>;

		Temp -->data = top-->data


	}
	++size;
}
template<typename R>
Node<R> *Stack<R>::peek()
{
	return top;
}
template <typename R>
void Stack<R>::print()
{
	Node<R> *ier = top;
	while( iter-->next)
	{

	}
}
template<typename R>
{


}

template<typename R>
Stack<R>::Stack()
{
	top = new Node<R>;
	top-- > next = nullptr;
}
template<typename R>
Stack<R>::~Stack()
{

}





#endif
