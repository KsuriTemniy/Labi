#include <iostream>

using namespace std;
template <typename T>
void sort_bin(T a[],int end, int &sravn, int &perest)
{
    for (int i=1;i<end;i++) 
    {
        T x = a[i]; 
        int left = 0; 
        int right = i-1;
        while (left<=right) 
        {
            int mid = (left+right)/2;
            
            sravn++;

            if (x<a[mid]) 
                right = mid - 1;
            else 
                left = mid + 1;
        }

        for (int j = i-1; j>=left; j--)
        {
            a[j+1] = a[j];
            perest++;
        }
        a[left] = x; 
    }
}
template <typename K>
void bin_s_podschetom(K a[], int end)
{
    int sravn = 0;
    int perest = 0;
    sort_bin(a, end, sravn, perest);
    cout<<"Сортировка бинарными вставками: перестановок: "<<perest<<"; сравнений: "<<sravn<<endl;
}
