#include <bits/stdc++.h>
using namespace std;

int minCost(int arr[],int n){
        int cost=0;
        priority_queue<int,vector<int>,greater<int>>minheap;
        for(int i=0;i<n;i++){
                minheap.push(arr[i]);
        }
        while(minheap.size()>=2){
                int first=minheap.top();
                minheap.pop();
                int second=minheap.top();
                minheap.pop();
                
                cost=cost+first+second;
                minheap.push(first+second);
        }
        return cost;
}


int main() 
{ 
    int arr[] = { 4, 3, 2, 6 }; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    cout << "Total cost for connecting ropes is "
         << minCost(arr, size); 
    return 0; 
} 

