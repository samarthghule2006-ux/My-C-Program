#include<stdio.h>

struct Demo
{
    int i;
    char ch1;
    int j;
    char ch2;
    float f;
};
int main()
{
    printf("Size of structre is : %d\n",sizeof(struct Demo));

    return 0;
}