// b013 評語重排.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Node {
public:
	int element;
	Node* next;		//boundle a element and a next_node_vector
};

class List {
public:
	List() {
		first = NULL;
		size = 0;	//remember the list_size
	}
	void pushAt(int index, int _element) {	//will change the member function,don't use "const"
		if (index == 0)
			pushFront(_element);
		else {
			Node* before = first;	//the beginning is at first node
			for (int i = 1; i < index; i++)
				before = before->next;
			push(before, _element);		//call the other function
		}
	}
	void pushFront(int _element) {		//put in a front
		Node* p = new Node;			//make a data structure
		p->element = _element;		//and put the element in it
		p->next = first;
		first = p;
		size++;		//remember the size
	}
	void printOut() const {		//print out every element
		Node* p = first;
		while (p != NULL) {
			cout << p->element << " -> ";
			p = p->next;
		}
		cout << "NULL" << endl;
	}
	bool isEmpty() const {		//CONST:not to change anythong
		return (size == 0);		//and ask if it is empty
	}

protected:
	void push(Node* before, int _element) {
		Node* p = new Node;
		p->element = _element;
		p->next = before->next;		//P's next is BEFORE's next
		before->next = p;		//give the content to BEFORE's next
		size++;
	}

	Node* first;
	int size;
};

int main()
{
	List myList;

	myList.pushFront(1);
	myList.pushFront(2);
	myList.pushFront(3);
	myList.pushFront(4);
	myList.pushFront(5);

	myList.pushAt(2, 999);

	myList.printOut();

	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
