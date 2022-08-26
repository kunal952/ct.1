//kunal ranaut
//roll no
//set no
//Q1
#include <bits/stdc++.h>
using namespace std;
//function for checking large no between smaller no
void rearrange(int arr[], int n)
{
int temp[n];
int small = 0, large = n - 1;
int flag = true;
for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];

        flag = !flag;
    }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}
int main()
{
    int t;
    cin>>t;
    int arr[t] ;
    //creating array
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
//this was original array
    cout << "Original Array"<<"";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
   rearrange(arr, n);
//this was new array
    cout << "Modified Array"<<"";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
