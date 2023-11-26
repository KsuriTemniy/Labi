#include <iostream>

using namespace std;

template <typename T>
int partition(T a[], int start, int end, int &sravn, int &perest)
{
    T pivot = a[end];

    int pIndex = start;
 
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            sravn+=1;
            perest+=1;

            T temp = a[i];
            a[i] = a[pIndex];
            a[pIndex] = temp;

            pIndex++;
        }
    }
    perest+=1;

    T temp = a[pIndex];
    a[pIndex] = a[end];
    a[end] = temp;

    return pIndex;
}
template <typename K>
void kviksort(K a[], int start, int end, int &sravn, int &perest)
{
    sravn+=1;

    if (start >= end) 
        return;    
    int pIndex = partition(a, start, end, sravn, perest);

    kviksort(a, start, pIndex - 1, sravn, perest);
    kviksort(a, pIndex + 1, end, sravn, perest);
}
template <typename M>
void kviksort_s_podschetom(M a[], int start, int end)

{
    int sravn = 0;
    int perest = 0;
    kviksort(a, start, end, sravn, perest);
    cout<<"Быстрая сортировка: перестановок: "<<perest<<"; сравнений: "<<sravn<<endl;
}
