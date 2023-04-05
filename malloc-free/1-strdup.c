#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
  char *ptr;
  char *qtr = &*str;
  ptr = (char*)malloc(sizeof(str));
  if (str == NULL)
    return (NULL);
  else
    
    return (qtr);
  free(ptr);
  
}
