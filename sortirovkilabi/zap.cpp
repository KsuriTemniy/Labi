#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

template <typename T>
void zap(T& arr, int g, int n)
{
    switch(g)
    {
        case 1:
            for (int i = 0; i < n; i++)
            {
                arr[i]=i;
            }
            break;
        case 2:
            srand(time(NULL));
            for (int i = 0; i < n; i++)
            {
                arr[i]=rand()%n+1;
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                arr[i]=n-i;
            }
            break;
    }
}