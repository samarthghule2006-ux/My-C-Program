#include<stdio.h>


int main()
{
    int iNo1= 10;
    const int iNo2= 20;

    //Below line generates errors

    iNo1++;  //iNo1= iNo1 + 1;   //error
    iNo2++;  //iNo2= iNo2 + 1;  //error
    iNo2=30;


    return 0;
}