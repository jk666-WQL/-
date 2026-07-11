#include <stdio.h>
#include <stdlib.h>

#define ListElem int
#define MAX_LIST_LENGTH 100
 
typedef struct 
{
    ListElem List[MAX_LIST_LENGTH];
    int length;
}List;
typedef enum{
    OK=0;
    error=0;
}