#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &k)
{
    int n = k.size();

    for(int i=1;i<n;i++)
    {
       int j=i-1;
       int x=k[i];

       while(j>-1 && x<k[j])
       {
          k[j+1]=k[j];
          j--;
       }

       k[j+1]=x;
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

    insertionSort(k);

    cout<<"After sorting:";

    for(int i=0;i<n;i++)
    {
        cout<<k[i]<<" ";
    }

    cout<<endl;
}
