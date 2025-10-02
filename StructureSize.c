#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    int j;
    float f;
};
int main()
{
    printf("Size of structre is : %d\n",sizeof(struct Demo));

    return 0;
}