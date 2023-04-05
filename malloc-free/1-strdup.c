#include "main.h"
#include <stdlib>

char *_strdup(char *str)
{
  char *ptr;
  char *qtr;
 if (size == NULL)
   return (NULL);
  ptr = (char*)malloc(sizeof(str));
  if (str == NULL)
    return (NULL);
  else
     qtr = &str;
    return (qtr);
  free(ptr);
  
}
