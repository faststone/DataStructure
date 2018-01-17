// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
#include <string>
#include <vector>
#include "myStack.cpp"
#include "myVector.cpp"
#include "ListNode.cpp"
#include "myList.cpp"
#include "myQueue.cpp"
using namespace std;

template <typename T>
class MyPrint
{
public:
	void operator()(T e)
	{
		cout << e << " ";
	}
};
 

int main()
{
	vector<string> v = { "a", "b", "c", "d", "e", "f" };

	myQueue<string> q1;
	q1.enQueue("a");
	q1.enQueue("b");
	q1.enQueue("c");
	q1.enQueue("d");
	q1.enQueue("e");
	q1.enQueue("f");

	MyPrint<std::string> visit;
	q1.travser(visit);
	q1.dequeue();
	q1.dequeue();
	q1.dequeue();
	q1.travser(visit);
	system("pause");
	return 0;
}

