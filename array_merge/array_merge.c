#include <stdarg.h>
#include <setjmp.h>
#include <stdlib.h>
#include "mergesort.c"

int* array_merge(int num_arrays, int* sizes, int** values){
  int k = 0;
  int i = 0;
  int j = 0;
  int m = 0;
  int f = 0;
  int sizeCount = 1;
  int uniqueValues[sizeCount];
  uniqueValues[0] = -1;

 for ( m; m < num_arrays; m++) {
     sizeCount += sizes[m];
  }

  for ( i; i < num_arrays; i++ ) {
    for ( j; j < sizes[i]; j++) {
       for( f; f < sizeCount; f++ ) {
          if ( uniqueValues[f] == values[j] ) {
                  break;
          } else {
              uniqueValues[k+1] = values[j];
              k++;
           }
       }
    }
  }
 
  mergesort(sizeCount, uniqueValues);
  uniqueValues[0] = k;
  return uniqueValues;
   

}
