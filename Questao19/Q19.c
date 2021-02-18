#include "gc.h"
#include <assert.h>
#include <stdio.h>

int main()
{
  int i;

  GC_INIT();	
  for (i = 0; i < 1000000; ++i)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     if (i % 100000 == 0)
       printf("Tamanho do Heap = %d\n", GC_get_heap_size());
   }
  return 0;
}