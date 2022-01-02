#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of the array:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Two pointer Approach
    int l = 0;
    int r = n-1;
    while(l<=r){
        if(arr[l]<0)
            l++;
        if(arr[r]>0)
            r--;
        else if(arr[l]>=0 && arr[r]<0)
            swap(arr[l++],arr[r--]);
    }
    //partition process
    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j)
                swap(arr[i],arr[j]);
            j++;
        }
    }
    cout<<"The resultant array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}