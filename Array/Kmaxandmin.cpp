#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k: ";
    cin>>k;
    sort(arr,arr+n);
    cout<<k<<" max element is: "<<arr[n-k]<<endl;
    cout<<k<<" min element is: "<<arr[k-1]<<endl;
    delete[] arr;
    return 0;
}