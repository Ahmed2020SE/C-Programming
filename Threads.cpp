#include<omp.h>
#include<math.h>
#include<string>
#include<string.h>
#include<fstream>
#include<iostream>
#include <iostream>
#include<Windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>		
using namespace std;
/*int main() {
	int ar[40000],sum=0,size= 40000;
	for(int i=0;i<size;i++)
	{
		ar[i] = 1;
	}
	double start = omp_get_wtime();
#pragma omp parallel num_threads(2)
	{
		int id = omp_get_thread_num();
		int Nthreads = omp_get_num_threads();
		int part = size / Nthreads;
		int s = id*part;
		int e = s + part;
		for (int i = s;i < e;i++) {
			sum += ar[i];
		}
	}
	double end = omp_get_wtime();
	cout << "Sum= " << sum << endl;
	cout << "Time= " << end - start << endl;
}*/  
/*int main() {
	double a, b, c, first, second, result;
	cout << "Enter A\nB\nC\n";
	cin >> a >> b >> c;
	double start = omp_get_wtime();
#pragma omp parallel num_threads(2)
	{
#pragma omp sections
		{
#pragma omp section
			{
				first = pow(b, 2) - (4 * a*c);
			}
#pragma omp section
			{
				second = 2 * a;
			}
		}
#pragma omp master 
		{
			 result = (-b + sqrt(first)) / second;
		}
	}
	double end = omp_get_wtime();
	cout << "Result= " << result << endl;
	cout << "Time= " << end - start << endl;
}*/
/*int main() {
	int arr[1000],search;
	for(int i=0;i<1000;i++)
	{
		arr[i] = i;
	}
	cout << "Enter the search number= ";
	cin >> search;
#pragma omp parallel
	{
		for (int i = 0;i < 1000;i++)
		{
			if (arr[i] == search)
#pragma omp critical
			{
				cout << "ID= " << omp_get_thread_num() << endl << " At index= " << i << endl;
			}
		}
	}
}*/
/*int main() {
	int y = 1000,x;
#pragma omp parallel num_threads(3)
	{
		x = omp_get_thread_num();
		int damage;
		switch (x)
		{
		case 0:damage = 1;break;
		case 1:damage = 3;break;
		case 3:damage = 5;break;
		}
		while(y>0)
		{
			y -= damage;
			cout << "Player " << x << " hits. Monster health " << y << endl;
		}
	
	}
}*/
/*long num_steps = 100000000;
#define NUM_THREADS 8
double step = 1.0 / (double)num_steps;
#define PAD 8
void main()
{
	int nthreads; double pi = 0.0;
	double sum[NUM_THREADS][PAD];
	double start = omp_get_wtime();
#pragma omp parallel
	{
		int id = omp_get_thread_num();
		int nthrds = omp_get_num_threads();
		if (id == 0) nthreads = nthrds;
		sum[id][0] = 0.0;
		for (int i = id;i< num_steps; i = i + nthrds)
		{
			double x = (i + 0.5)*step;
			sum[id][0] += 4.0 / (1.0 + x*x);
		}
		double e = omp_get_wtime();
		double time = e - start;
	}
	for (int i = 0;i<nthreads;i++)
		pi += sum[i][0] * step;
	cout << "Pi= " << pi << endl;
	
}*/
/*#define num 8
int main() {
	int arr[num];

}*/
//#include <conio.h>
//#include <windows.h>




/*int main() {
	int count = 0;
#pragma omp parallel for collapse(2)
	for (int i = 0; i<100; i++) {
		for (int j = 0; j<200; j++) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}*/
/*int main() {
	int *x, *y,*z;
	int size;
	cout << "Enter size of array ";
	cin >> size;
	x = new int[size];
	y = new int[size];
	z = new int[size];
	srand(int(time(NULL)));
	for (int i = 0;i < size;i++)
	{
		*(x + i) = rand() % 10;
		*(y + i) = rand() % 10;
		*(z + i) = rand() % 10;
	}
	for (int i = 0;i < size;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (*(x + i) == *(x + j))
				*(x + j) = (rand()%10)+1;
			if (*(y + i) == *(y + j))
				*(y + j) = (rand() % 10) + 1;
			if (*(z + i) == *(z + j))
				*(z + j) = (rand() % 10) + 1;
		}
	}
	for (int i = 0;i < size;i++)
	{
		cout << *(x + i) << " ";
	}
	cout << endl;
	for (int i = 0;i < size;i++)
	{
		cout << *(y + i) << " ";
	}
	cout << endl;
	for (int i = 0;i < size;i++)
	{
		cout << *(z + i) << " ";
	}
	cout << endl;
	int *sum;
	sum = new int[size];
	for (int i = 0;i < size;i++)
	{
		*(sum + i) = *(x + i) + *(y + i) + *(z + i);
	}
	for (int i = 0;i < size;i++)
	{
		cout<<*(sum + i) << " ";
	}
	cout << endl;
}*/
/*int main(string[]) {
	int y = 100000;
#pragma omp parallel
	{
		int id = omp_get_thread_num();
		while (y > 0) {
			if (y == 0)break;
			if (id == 1)
				y -= 1;
			if (id == 2)
				y -= 3;
			if (id == 3)
				y -= 5;
			if (id == 4)
				y -= 7;
			if (id == 5)
				y -= 9;
			if (id == 6)
				y -= 11;
			if (id == 7)
				y -= 13;
			if (id == 8)
				y -= 15;
#pragma omp critical
			cout << "ID= " << id << " Monster= " << y << endl;
		}
	}
}*/
int main() {
	int arr[] = { 10,20,30,40 };
	int sum = 0;
	for (int i : arr)
	{
		sum += i;
	}
	cout << sum << endl;

}