#include <iostream>
#include "heap.h"

int main() 
{
	int arr[200]{13,3231,2,98,3,13,4213,43,23,1,5,46,323,1,53143,2};
	heap a(arr, 14);
	a.add(1232423);
	for (int i = 0; i < 20; i++)std::cout << arr[i] << std::endl;
	
}