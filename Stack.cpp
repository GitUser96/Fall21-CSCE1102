#include "Stack.h"

Stack::Stack()
{
	top = -1;
}
bool Stack::push(char value)
{
	if (top >= (CAPACITY - 1))
		return false;
	else
	{
		top++;
		container[top] = value;
		return true;
	}
}
char Stack::pop()
{
	if (top < 0)
		return '_';
	else
	{
		char x = container[top--];
		// top--;
		return x;
	}
}
bool Stack::empty()
{
	return (top < 0);
}
void Stack::print()
{
	for (int i = 0; i <= top; i++)
		cout << container[i] << " ";
	cout << endl;
}