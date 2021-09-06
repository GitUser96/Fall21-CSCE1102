#include <iostream>
using namespace std;
const int CAPACITY = 100;

class Stack
{
private:
	int top;
	char container[CAPACITY];
public:
	Stack();
	bool push(char);
	char pop(); // deleting
	bool empty();
	void print();
};