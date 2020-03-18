/*ORIGINAL CODE:
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *p = malloc(1);
    *p = 'a';
    char c = *p;
    printf("\n [%c]\n",c);
    free(p);
    c = *p;
    return 0;
}*/

//Once the pointer is freed allocation cannot be done.

//DEBUGGED CODE:

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *p = malloc(1);
    *p = 'a';
    char c = *p;
    printf("\n [%c]\n",c);
free(p);
return 0; }