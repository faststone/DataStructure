// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <iostream>
#include <string>
#include <vector>
#include "myStack.cpp"
#include "myVector.cpp"
#include "ListNode.cpp"
#include "myList.cpp"
using namespace std;
 
 

int main()
{
	vector<string> v = { "a", "b", "c", "d", "e", "f" };
 	myVector<string> v1;
	myList<string> l1;
	l1.insertAsFirst("a");
	l1.insertAsFirst("b");
	cout << l1.size() << endl;

	system("pause");
	return 0;
}

