/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int func(int i,int j)
{
    return i++*--j;
}
int main()
{
    int result = 8,loop= -3;
    while(loop++)
    {
        result=result+func(loop,loop);
    }
    printf("%d",result);
}