#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long int X,Y,Z,T,Count;
    scanf("%ld",&T);
    Count = 0;
    while(T--)
    {
        Count++;
        scanf("%ld%ld%ld",&X,&Y,&Z);
        if((X+Y)<=Z || (Y+Z)<=X || (Z+X)<=Y)
                {
                    printf("Case %ld: Invalid\n",Count);
                }
        else if((X<=0) || (Y<=0) || (Z<=0))
                {
                    printf("Case %ld: Invalid\n",Count);
                }
        else if((X==Y) && (Y==Z))
                {
                    printf("Case %ld: Equilateral\n",Count);
                }
        else if((X==Y) || (Y==Z) || (Z==X))
                {
                 printf("Case %ld: Isosceles\n",Count);
                }

        else
                {
                    printf("Case %ld: Scalene\n",Count);
                }
    }


}

