
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    char str[] ="1,,3,4,5";
    char *pt;
    pt = strtok (str,",");
    while (pt != NULL) {
        
        printf("%s\n", pt);
        pt = strtok (NULL, ",");
    }
    return 0;
}