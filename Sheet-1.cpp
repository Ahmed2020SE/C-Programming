#include <iostream>
using namespace std;

void Palindrome(int n);
bool isPrime(int n);
int max_number(int arr[],int size);
bool included(int arr[], int size, int target);
int occurence(int arr[], int size, int target);
int binarySearch(int arr[], int target, int start, int end);
void sortarr(int arr[], int size);

int main()
{
	
    return 0;
}
void Palindrome(int n) {
	int temp=n, rev=0,digit;
	while (n != 0) {
		digit = n % 10;
		rev = (rev * 10) + digit;
		n /= 10;
	}
	if (temp == rev)
		cout << "Palindrome\n";
	else
		cout << "Not Palindrome\n";
}
bool isPrime(int n) {
	for (int i = 2; i < n - 1; i++) {
		if (n%i == 0)
			return false;
		else
			return true;
	}
}
int max_number(int arr[], int size) {
	int max=0, index;
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	return index;
}
bool included(int arr[], int size, int target) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target)
			return true;
	}
	return false;
}
int occurence(int arr[], int size, int target) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == target)
			count++;
	}
	return count;
}
int binarySearch(int arr[], int target, int start, int end) {
	if (start > end)
		return -1;
	int mid = (start + end) / 2;
	if (arr[mid] < target)
		return binarySearch(arr, target, mid + 1, end);
	else if (arr[mid] > target)
		return binarySearch(arr, target, start, mid - 1);
	else
		return arr[mid];
}
void sortarr(int arr[], int size) {
	if (size == 1)
		return;
	for (int i = 0; i<size - 1; i++)
		if (arr[i] > arr[i + 1])
			swap(arr[i], arr[i + 1]);
	sortarr(arr, size - 1);
}