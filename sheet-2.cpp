#include <iostream>
using namespace std;
//Q1 a)
struct record {
	int loop;
	char word[5];
	float sum;
};
//Q1 e)
struct time {
	int min;
	int hour;
};
struct date {
	int day;
	int month;
	int year;
};
struct birthdays
{
	time btime;
	date bdate;
};
//Q2
struct realtype {
	int left;
	int right;
};
void input(realtype num) {
	cout << "Enter left number: " << endl;
	cin >> num.left;
	cout << "Enter right number: " << endl;
	cin >> num.right;
	cout << num.left << "." << num.right << endl;
}
realtype add(realtype num1, realtype num2) {
	realtype num3;
	num3.left = num1.left + num2.left;
	num3.right = num1.right + num2.right;
	return num3;
}
realtype subtract(realtype num1, realtype num2) {
	realtype num3;
	num3.left = num1.left - num2.left;
	num3.right = num1.right - num2.right;
	if (num3.right < 0) {
		if (num3.left < 0)
			return num3;
		else
		{
			num3.left = -num3.left;
			return num3;
		}
	}
	return num3;
}
realtype multiply(realtype num1, realtype num2) {
	realtype num3;
	num3.left = num1.left * num2.left;
	num3.right = num1.right * num2.right;
	return num3;
}
//Coding 1.
int countEven(const int* a, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 0)
			count++;
	}
	return count;
}
//Coding 2.
int myStrLen(const char* c) {
	int size = sizeof(c) / sizeof(c[0]);
	return size;
}
//Coding 3.
double *array_max(double arr[], int size) {
	if (size == 0)
		return NULL;
	double *p;
	double *max = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > *max)
		{
			max =&arr[i];
		}
	}
	p = max;
	return p;
}
//Coding 7.
int * sort_arr_asc(int arr[], int size) {
	if (size == 1)
		return;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
	return arr;
}
int * sort_arr_des(int arr[], int size) {
	if (size == 1)
		return;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);
		}
	}
	return arr;
}
int main()
{
	//Part-1 Question 1 b) c) d)
	/*record sample;
	sample.loop = 10;
	for (int i = 0; i < 5; i++)
		cout << sample.word[i] << endl;*/
	//Part-2 Q2
	//1.b
	//2.b
	//3.a
	//4.a
	//5.b
	//6.c
	//7.b
	//8.b
	//9.c
	//10.c
	//11.a
	//Coding 5.
	int n;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		arr[i] = n;
	}
	for (int i = 0; i < 5; i++)
		cout << arr[i] <<" ";
	cout << endl;
	//Coding 6.
	int *p = &arr[4];
	for (int i = 0; i < 5; i++) {
		cout << *p << " ";
		p--;
	}
	cout << endl;
    return 0;
}

