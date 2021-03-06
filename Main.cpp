#include "Stack.h"

// Tracing this code will help you understand stacks.
int main()
{
	Stack s1, s2;
	char alphabet = 'a';
	for (int i = 1; i <= 26; i++)
	{
		s1.push(alphabet);
		alphabet++;
	}
	while (!s1.empty())
	{
		s2.push(s1.pop());
	}
	cout << "Printing in reverse order:" << endl;
	s2.print();
	system("pause");
	return 0;
}