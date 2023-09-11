#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int mx = INT_MIN;
    // // complexity of this code is O(n*k)
    // for (int i = 0; i <= n - k; i++) // i want to go till n-k because if i go till n then i will get out of bound
    // {
    //     int s = 0;
    //     for (int j = i; j < i + k; j++)
    //     {
    //         s += arr[j];
    //     }
    //     mx = max(mx, s);
    // }
    // cout << mx << endl;
    int i = 0, j = 0, s = 0; // i is start and j is end
    while(j<n){
        s+=arr[j];
        if(j<k-1){ //is it hitting the window size
            j++;
        }
        else{
            mx = max(mx,s);
            s-=arr[i];
            i++;
            j++;
        }
    }
    cout<<mx<<endl;
}