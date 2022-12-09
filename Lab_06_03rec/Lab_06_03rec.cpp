#include <iostream>
#include <time.h>

using namespace std;

void Generate(int* a, const int n, int low, int high, int i)
{
	a[i] = low + rand() % (high - low + 1);
	if (i < n - 1)
		Generate(a, n, low, high, i + 1);
}

void print(int* a, const int n, int i)
{
	cout << a[i] << " ";
	if (i < n - 1)
		print(a, n, i + 1);
}

int SumKv(int* a, const int n, int i, int sum)
{
	if (i < n)
		return sum + (a[i] * a[i]) + SumKv(a, n, i + 1, sum);
	else
		return sum;
}

template <typename T>
void GenerateT(T* arr, const int n, int low, int high, int i)
{
	arr[i] = low + rand() % (high - low + 1);
	if (i < n - 1)
		GenerateT(arr, n, low, high, i + 1);
}

template <typename T>
void printT(T* arr, const int n, int i)
{
	cout << arr[i] << " ";
	if (i < n - 1)
		printT(arr, n, i + 1);
}

template <typename T>
T SumKvT(T* arr, const int n, int i, T sum)
{
	if (i < n)
		return sum + (arr[i] * arr[i]) + SumKvT(arr, n, i + 1, sum);
	else
		return sum;
}

int main()
{
	srand(time(NULL));
	int n;
	int i = 0;
	int high = 50;
	int low = 0;
	cout << "Insert n:" << endl;
	cout << "n = "; cin >> n;


	int* a = new int[n] {};
	double* r = new double[n] {};

	Generate(a, n, low, high, i);
	cout << "a[] = { ";
	print(a, n, i);
	cout << "}" << endl;
	cout << "Sum of the elements = " << SumKv(a, n, i, 0) << endl;

	GenerateT(r, n, low, high, i);
	cout << "arr[] = { ";
	printT(r, n, i);
	cout << "}" << endl;
	cout << "Sum of the elements = " << SumKvT(r, n, i, 0.0) << endl;

	delete[] a;
	delete[] r;

	system("pause");
	return 0;
}
