

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void selectsort(int a[100])
{
	for (int t = 0; t < 100; t++)
	{
		int smallest = a[t];
		int index = t;
		for (int j=t+1; j<100; j++)
		{
			if (a[j] < smallest)
			{
				smallest = a[j];
				index = j;
			}
		}
		swap(a[t], a[index]);
	}
}

int main() 
{
	int array[100];

	for (int i = 0; i < 100; i++)
	{
		array[i] = rand() % 130;
	}
	selectsort(array);
	for (int i = 0; i < 100; i++)
	{
		cout << array[i] << endl;
	}
}