#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int result[2];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    for (int i=0;i<size;i++){
        int temp=target-arr[i];
        for(int j=0;j<size;j++){
            if(i!=j ){
                if(temp==arr[j]){
                    result[0]=j;
                    result[1]=i;
                }
            }
        }
    }
    cout<<result[0]<<","<<result[1];
    
}