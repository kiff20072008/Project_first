#define SIZEOFARRAY 100

#include <stdio.h>
int bsearch(int* mass,int size, int x)// mass  - array of integer ; size - size of array  ; x - x ;
{
	for (int i = 0; i < size; i++)
		if (mass[i]>x) // is !<= x ret
			return i;
	return size; // if there no such objects 
}



int main()
{
	int size = SIZEOFARRAY;
	int arr[SIZEOFARRAY];
	int x;
	for (int i = 0; i < size; i++)
		arr[i] = i+1;
	printf("Input x:\n");
	scanf("%i",&x);
	x = bsearch(arr, size, x);
	if (x == size)
		printf("There are no x in array\n");
	else
		printf("The result  is %i \n",x);
	return 0;
}
