#include<iostream>
using namespace std;
struct node {
	int data;
	node*next;
};
#define max 10000000;
struct stack{
	node*top;
	int size;
	int count;
	stack() {
		top = NULL;
		size = max;
		count = 0;
	}
	stack(int s){
		top = NULL;
		size = s;
		count = 0;
	}
	void push(int i) {
		node*temp=new node;
		temp->data = i;
		temp->next = NULL;
		if (top == NULL) {
			top = temp;
		}
		else if (top!=NULL&&count < size) {
			temp->next = top;
			top = temp;
		}
		else {
			cout << "Stack OverFlow " << endl;
		}
		count++;
	}
	int pop() {
		node*temp;
		if (top == NULL) {
			cout << "Empty stack" << endl;
			return 0;
		}
		int i = top->data;
		temp = top;
		top = top->next;
		cout << "the value that is poped = " << i<< endl;
		delete temp;
		count--;
		return i;
	}
	void print() {
		node*p = top;
		while (p != NULL) {
			cout << p->data << " ";
			p = p->next;
		}
		cout << endl;
	}
};
void imp_arr(stack s1, stack s2, int arr[]) {
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size / 2; i++) {
		arr[i] = s1.pop();
	}
	for (int i = size / 2; i < size; i++) {
		arr[i] = s2.pop();
	}
}
int main() {
	/*stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(9);
	s.push(10);
	//a
	int first = s.pop();
	s.pop();
	s.push(0);
	s.push(first);
	s.print();
	//b
	int arr[8];
	for (int i = 0; i < 8; i++) {
		arr[i] = s.pop();
	}
	s.pop();
	s.push(4);
	for (int i = 7; i >=0; i--) {
		s.push(arr[i]);
	}
	s.print();*/
	//2
	/*stack s1(5);
	s1.push(5);
	s1.push(10);
	s1.push(15);
	s1.push(20);
	s1.pop();
	s1.push(2);
	s1.push(4);
	s1.push(6);
	s1.pop();
	s1.print();*/
	system("pause");
	return 0;
}