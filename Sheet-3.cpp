#include<iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

void concatenate(node*head1, node *head2) {
	while (head1 != NULL) {
		if (head1->next = NULL) {
			head1->next = head2;
		}
		head1 = head1->next;
	}
}
void copy(node*head1, node *head2) {
	node*list = head1;
	while (list != NULL) {
		if (head2 == NULL) {
			head2 = new node;
			head2->data = list->data;
		}
		else
		{
			head2->next = new node;
			head2 = head2->next;
			head2->data = list->data;
		}
		list = list->next;
	}
}

void delete_node(node*head, node* delnode) {
	node*list;
	list = head;
	while (list != NULL) {
		if (list->next == delnode) {
			node*p = list->next;
			list->next = list->next->next;
			delete p;
			break;
		}
		list = list->next;
	}
}
node* head = NULL;
int main()
{
	node* node1 = new node, *node2 = new node, *node3 = new node;
	node*list;
	head = node1;
	node *node1a = new node;
	node1->next = node1a;
	node1a->next = node2;
	node2->next = node3;
	node3->next = NULL;
	node1->data = 1;
	node2->data = 2;
	node1a->data = 3;
	node3->data = 4;
	node*del = node1a;
	delete_node(head, del);
	list = head;
	while (list != NULL) {
		cout << list->data << endl;
		list = list->next;
	}
	while (list->next != NULL) {
		if (list->next->next = NULL) {
			node* end = list->next;
			list->next = NULL;
			end->next = head;
			head = end;
		}
	}
	while (list != NULL) {
		if (list->data = 'N') {
			node*temp = list;
			list = list->next;
			delete temp;
		}
		int smallest = list->data;
		int largest = list->data;
		int sum = 0,count=0;
		while (list != NULL) {
			if (list->data <smallest) {
				smallest=list->data;
			}
			else if (list->data > largest) {
				largest = list->data;
			}
			sum += list->data;
			count++;
			list = list->next;
		}
		int avg = sum / count;
		if (count % 2 == 0)
			cout << "List length is even" << endl;
		else
			cout << "List length is odd" << endl;
	}
	return 0;
}

