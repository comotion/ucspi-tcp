#include "byte.h"
#include "str.h"
#include "stralloc.h"

int stralloc_copys(stralloc *sa,char *s)
{
  return stralloc_copyb(sa,s,str_len(s));
}
