#include<stdio.h>

struct Demo
{
    int i;
    int j;
    float f;
};
int main()
{
    struct Demo obj;
    
    obj.i=11;
    obj.f=90.4f;
    obj.j=21;

    printf("%d\n",obj.i);   //11
    printf("%d\n",obj.f);   
    printf("%d\n",obj.j);

    return 0;
}