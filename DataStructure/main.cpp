// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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
	int i = l1.size();
	cout << l1.size() << endl;

	system("pause");
	return 0;
}

