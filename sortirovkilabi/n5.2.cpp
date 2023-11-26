#include<iostream>
#include"kviksort.h"
#include"binvstsort.h"
#include"zap.h"
#define tip int 
using namespace std;


int main()
{   
    setlocale(LC_ALL, "Russian");
    cout<<"Как заполнить? 1-возрастание, 2-случайно, 3-убывание"<<endl;
    int g = 0;
    cin>>g;
    if (!(g>0 and g<4))
    {
        cout<<'zanonovo'<<endl;
        return 1;
    }
    
    int n;
    cout<<"Введите размер массива"<<endl;
    cin>>n;
    tip *arr = new tip[n];
    tip *brr = new tip[n];

    zap(arr, g, n);

    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
    kviksort_s_podschetom(arr, 0, 10);
    for (int i = 0; i < 14; i++)
        cout<<arr[i]<<endl;
    
    cout<<"*********************"<<endl;

    bin_s_podschetom(brr, 11);
    for (int i = 0; i < 14; i++)
        cout<<brr[i]<<endl;
    delete[] arr;
    delete[] brr;
    return 0;
}