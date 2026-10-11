#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        curr=arr[i];
        prev=i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;   //placing current element in its correct position
    }
}

int main(){
    int n=5;
    int arr[]={2,3,8,5,9};
    InsertionSort(arr,n);
    printArray(arr,n)
    return 0;
}