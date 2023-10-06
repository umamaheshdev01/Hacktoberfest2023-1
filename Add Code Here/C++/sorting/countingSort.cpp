#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &k) {
    if (k.empty()) {
        return;
    }

    int max_value = *max_element(k.begin(), k.end());
    int min_value = *min_element(k.begin(), k.end());

    int range = max_value - min_value + 1;

    vector<int> count(range, 0);
    vector<int> output(k.size());

    for (int i = 0; i < k.size(); ++i) {
        count[k[i] - min_value]++;
    }

    for (int i = 1; i < range; ++i) {
        count[i] += count[i - 1];
    }

    for (int i = k.size() - 1; i >= 0; --i) {
        output[count[k[i] - min_value] - 1] = k[i];
        count[k[i] - min_value]--;
    }

    for (int i = 0; i < k.size(); ++i) {
        k[i] = output[i];
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

    countingSort(k);

    cout<<"After sorting:";

    for(int i=0;i<n;i++)
    {
        cout<<k[i]<<" ";
    }

    cout<<endl;
}
