#include <stdlib.h>
#include <string.h>

#include "disemvowel.h"

char* disemvowel(char* str) {
  int stringLength;
  stringLength = strlen(str);
  char* noVowel = calloc(stringLength, sizeof(char));
  int i, len;
  int j = 0;
  int k = 0;
  char* vowels = calloc(11, sizeof(char));

  vowels[0] = 'a';
  vowels[1] = 'e';
  vowels[2] = 'i';
  vowels[3] = 'o';
  vowels[4] = 'u';
  vowels[5] = 'A';
  vowels[6] = 'E';
  vowels[7] = 'I';
  vowels[8] = 'O';
  vowels[9] = 'U';
  vowels[10] = '\0';

  len = strlen(vowels);
  if (stringLength == 0) {
    return "";
  }


  while (j < stringLength) {
    for (i=0; i<len; i++) {
      if (!(str[j] == vowels[i])) {
	     noVowel[k] = str[j];
	     k++;
	     break;
      } 
    }
    j++;
  }
  free(vowels);



  return noVowel;
}
