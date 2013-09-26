We freed rev after the while loop becasue rev is being alocated space in the while loop but that space is never freed. 

Answer is another variable that is being alocated space but never freed.  The trick is we couldn't find a space in palindrome.c to free answer. So, we freed answer in plindrome_test after the test used it.  This way the space is still freed after answer was used.

