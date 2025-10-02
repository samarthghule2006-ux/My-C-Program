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
    struct Demo *p=&obj;

    p->i=11;
    p->f=90.4;
    p->j=21;

    printf("%d\n",p->i);
    printf("%d\n",p->f);
    printf("%d\n",p->j);

    return 0;
}