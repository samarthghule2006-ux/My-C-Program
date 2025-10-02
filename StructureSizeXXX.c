#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    char ch1;
    char ch2;
    int j;
    float f;
};
int main()
{
    printf("Size of structre is : %d\n",sizeof(struct Demo));

    return 0;
}