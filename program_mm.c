#include<stdio.h>
#include<stdlib.h>
int temp1;
int main(int argc, char* argv[])
{
    int test[128];
    int temp[128]={0};
    void *p;
    p = malloc(128*sizeof(int)) ;  
    free(p);
    return 0;
}
