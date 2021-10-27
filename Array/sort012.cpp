#include<iostream>
using namespace std;
void sort012(int p[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        switch(p[mid]){
            case 0:
                swap(p[mid++],p[low++]);
                break;
            
            case 1:
                p[mid++];
                break;
            
            case 2:
                swap(p[mid],p[high--]);
                break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    cout<<"Sorted Array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}