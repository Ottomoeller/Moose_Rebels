#include <stdarg.h>
#include <setjmp.h>
#include <stdlib.h>

void mergesort(int length, int a[])
{
    sortRange(a, 0, length); 
}



void sortRange(int a[], int start, int end) 
{
    int rangeSize = end - start;
    if (rangeSize >= 2) {
	int m = (start+end)/2;
	sortRange(a, start, m);
	sortRange(a, m, end);
	mergeRange(a, start, m, end);
    }
	
}

void mergeRange(int a[], int start, int mid, int end)
{
    int rangeSize = end - start;
    int destination[rangeSize];
    int first = start;
    int second = mid;
    int copyIndex = 0;
    int i = 0;
    while (first < mid && second < end) {
	if (a[first] < a[second]) {
 	    destination[copyIndex] = a[first];
	    first++;	
	} else {
	    destination[copyIndex] = a[second];
	    second++;
	}
	copyIndex++;
    }

    while (first < mid) { 
	destination[copyIndex] = a[first];
	copyIndex++;
	first++;
    }

    while (second < end) {
	destination[copyIndex] = a[second];
   	copyIndex++;
	second++;
    }
    for (i = 0; i < rangeSize; i++) {
 	a[i+start] = destination[i];
    }
}
  

