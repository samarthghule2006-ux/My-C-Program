#include<stdio.h>

int main()
{
    char cValue='S';
    int iValue=11;
    float fValue=90.78f;
    double dValue=98.564323;

    printf("Size of character is: %d\n",sizeof(cValue));
    printf("Size of integer is: %d\n",sizeof(iValue));
    printf("Size of float is: %d\n",sizeof(fValue));
    printf("Size of double is: %d\n",sizeof(dValue));

    printf("Address of cValue is : %lu\n",&cValue);
    printf("Address of iValue is : %lu\n",&iValue);
    printf("Address of fValue is : %lu\n",&fValue);
    printf("Address of dValue is : %lu\n",&dValue);

    return 0;
}