#include<stdio.h>
int binsearch(int x, int v[], int n)
{
        int low,high,mid;
        low = 0;
        high = n-1;
        while (low <= high) {
                mid = ( low+high)/2;
                if (x<v[mid])
                        high = mid -1;
                else if ( x > v[mid] )
                        low = mid + 1;
                else
                        return mid;
                }
        return -1;
        }
int main() {
        int v[6] = {1,3,5,6,89,35};
        int x= 10;
        printf("%d",binsearch(x,v,6));
        }
        
        

