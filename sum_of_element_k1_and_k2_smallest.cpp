#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[],int n,int k){

        priority_queue<int>maxheap;
        for(int i=0;i<n;i++){
                maxheap.push(arr[i]);
                if(maxheap.size()>k){
                        maxheap.pop();
                }
        }
        return maxheap.top();
}


int main() 
{ 
    int arr[] = { 1, 3, 12, 5 ,15,11}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k1=3;
    int k2=6; 
    int kth1=kthsmallest(arr,n,k1);
    int kth2=kthsmallest(arr,n,k2);
        int sum=0;
        for(int i=0;i<n;i++){
                if(arr[i]>kth1 && arr[i]<kth2){
                        sum+=arr[i];
                }
        }
        cout<<sum;

//     cout<<"kTh smallest element is "<<kth1<<" "<<kth2;
    return 0; 
} 

