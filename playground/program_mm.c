#include<stdio.h>
#include<stdlib.h>
int temp1;//bss
int main(int argc, char* argv[])
{
    int test[128];//stack,uninitialized
    int temp[128]={0};//stack, initialized
    void *p;//stack
    p = malloc(128*sizeof(int)) ;//heap  
    free(p);
    return 0;
}
