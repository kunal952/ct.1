//kunal
//2010990404
//set no 3
//q2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;//declared n for size of array
    int target;//the value we have to look for
    cin>>n;
    cin>>target;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if(i!=j && nums[i]+nums[j]==target) {
                cout<<"pair found("<<nums[i]<<","<<nums[j]<<")";
            }
            else{
                continue;
            }

            }

    }
    cout<<"pair not found";
}
