#include<iostream>
using namespace std;

void partition(vector<int>&arr,int st,int end){
    int idx=st-1,pivot=arr[end];
    for(j=st;j<end;j++){
        if(arr[j]<=pivot){     //descending=  if(arr[j]>=pivot)
            idx++;
            swap(arr[j],arr[idx]);
        }

    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quickSort(vector<int>&arr,int st,int end){
    if(st<end){
        int pivIdx=partition(arr,st,end);
        quickSort(arr,st,pivIx-1);
        quickSort(arr,pivIdx+1,end);
    }

}
int main(){
    vector<int> arr={12,31,35,8,32,17};
    mergeSort(arr,0,arr.size()-1);

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}