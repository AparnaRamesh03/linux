//using valgrind
/*original code
#include <stdio.h>
int main()
{
  char *p;
  // Allocation #1 of 19 bytes
  p = (char *) malloc(19);
  // Allocation #2 of 12 bytes
  p = (char *) malloc(12);
  free(p);
  // Allocation #3 of 16 bytes
  p = (char *) malloc(16);
  return 0;
}*/

/*problem defined
It shows two errors as 3 allocations are done but only one of the memory
allocations are freed.Hence 35 bytes are lost.The second block has only been freed.
Hence free is used after each allocation is over and processed.*/

//DEBUGGED CODE:

#include <stdio.h>
int main()
{
char *p;
  // Allocation #1 of 19 bytes
  p = (char *) malloc(19);
  free(p);
  // Allocation #2 of 12 bytes
  p = (char *) malloc(12);
free(p);
  // Allocation #3 of 16 bytes
  p = (char *) malloc(16);
free(p);
  return 0;
}