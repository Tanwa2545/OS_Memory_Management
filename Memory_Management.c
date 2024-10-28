#include <stdio.h>
#include <stdlib.h>

int global_var1 = 1;
int global_var2 = 2;
int global_var3 = 3;
int global_var4 = 4;
int global_var5 = 5;

int stack(int x, int count) {
  if (x == 0) return 0;
  printf("Address of local_var %d: is at %p\n", count, &x);
  stack(x-1, count+1);
}

int main() {
    
    printf("\nGlobal Variable Allocation\n");
    printf("Address of global_var 1: %p\n", &global_var1);
    printf("Address of global_var 2: %p\n", &global_var2);
    printf("Address of global_var 3: %p\n", &global_var3);
    printf("Address of global_var 4: %p\n", &global_var4);
    printf("Address of global_var 5: %p\n", &global_var5);

    printf("\nHeap Allocation\n");
    int* heap_var1 = (int*)malloc(sizeof(int));
    int* heap_var2 = (int*)malloc(sizeof(int));
    int* heap_var3 = (int*)malloc(sizeof(int));
    int* heap_var4 = (int*)malloc(sizeof(int));
    int* heap_var5 = (int*)malloc(sizeof(int));

    printf("Address of heap_var 1 : %p\n", heap_var1);
    printf("Address of heap_var 2 : %p\n", heap_var2);
    printf("Address of heap_var 3 : %p\n", heap_var3);
    printf("Address of heap_var 4 : %p\n", heap_var4);
    printf("Address of heap_var 5 : %p\n", heap_var5);

    printf("\nStack Allocation\n");
    stack(5,1);

    free(heap_var1);
    free(heap_var2);
    free(heap_var3);
    free(heap_var4);
    free(heap_var5);

    return 0;
}