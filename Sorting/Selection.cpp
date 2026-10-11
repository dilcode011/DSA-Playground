#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestidx=i;      //unsorted part starting
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx=j;
            }
        }
        swap(arr[i],arr[smallestidx]);

}
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=5;
    int arr[]={1,2,4,6,8,9,0};

    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}
