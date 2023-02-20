#include <stdio.h>
#include <stdlib.h>

int ebob (int sayi1, int sayi2)
{
    int a=1,i;
    if (sayi1>=sayi2)
    {
        for(i=1;i<=sayi2;i++)
        {
            if(sayi1%i==0 && sayi2%i==0)
            {
                a=i;
            }
            else
                continue;
        }
    }
    else if(sayi2>sayi1)
    {
        for(i=1;i<=sayi1;i++)
        {
            if(sayi1%i==0 && sayi2%i==0)
            {
                a=i;
            }
            else
                continue;
        }
    }

    return a;
}
int ekok(int sayi1, int sayi2)
{
    int a=1,i;
    if (sayi1>=sayi2)
    {
        if (sayi1%sayi2==0)
        {
            a=sayi1;
        }
        else
        {
            a=sayi1*sayi2;
        }
    }
    if (sayi2>sayi1)
    {
        if (sayi2%sayi1==0)
        {
            a=sayi2;
        }
        else
        {
            a=sayi1*sayi2;
        }
    }
    return a;

}

int main()
{
    printf("ebob: %d\n",ebob(40,40));
    printf("ekok: %d",ekok(5,10));
    return 0;
}
