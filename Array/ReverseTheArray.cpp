#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int size,temp;
    cout<<"Enter the size of the array:";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter the element:";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < size/2; i++)
    {
        swap(arr[i],arr[size-i-1]);
    }
    cout<<"The Reversed array is: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
}