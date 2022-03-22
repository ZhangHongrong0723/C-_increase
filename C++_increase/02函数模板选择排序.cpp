#include<iostream >
using namespace std;

//º¯ÊýÄ£°å
template <typename T>
void selectSort(T &arr,int smax) 
{
	for (int i = 0; i < smax; i++) 
	{
		int min = i;
		for (int j = i + 1; j < smax; j++) 
		{
			if (arr[j] < arr[min]) 
			{
				min = j;
			}
		}
		if (i != min) {
			swap(arr[i], arr[min]);
		}
	}
}
template <typename T>
void swap(T &a,T&b) {
	T temp = a;
	a = b;
	b = temp;

}
template <typename T>
void shuchu(T &arr,int smx) {
	for (int i = 0; i < smx; i++) {
		cout << arr[i] << "\t";
		
	}
}
int main2() {
	int arr1[] = { 11,55,2,8,57,90 };
	int arrsmax = sizeof(arr1) / sizeof(arr1[0]);
	selectSort(arr1, arrsmax);
	shuchu(arr1, arrsmax);
	cout << endl;
	double arr2[] = {12.3,4.5,6.1,99.6,83.6};
	int arr2smax = sizeof(arr2) / sizeof(arr2[0]);
	selectSort(arr2, arr2smax);
	shuchu(arr2, arr2smax);
	return 0;
}