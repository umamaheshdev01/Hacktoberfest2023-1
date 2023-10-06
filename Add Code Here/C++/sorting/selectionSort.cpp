#include <bits/stdc++.h>
using namespace std;

void selectionSort(std::vector<int> &k) {
    int n = k.size();
    
    for (int i = 0; i < n - 1; ++i) {
        
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (k[j] < k[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            std::swap(k[i], k[minIndex]);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the  size of array:";
    cin>>n;

    cout<<"Enter the elements:";
    vector<int> k(n);

    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }

    selectionSort(k);

    cout<<"After sorting:";

    for(int i=0;i<n;i++)
    {
        cout<<k[i]<<" ";
    }

    cout<<endl;
}
