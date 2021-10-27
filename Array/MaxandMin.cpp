#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *p = new int[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int min = p[0],max = p[0];
    for(int i=1;i<n;i++){
        if(p[i]<min){
            min = p[i];
        }
        else if(p[i]>max){
            max = p[i];
        }
    }
    cout<<"The maximum element is: "<<max<<endl;
    cout<<"The minimum element is: "<<min<<endl;
    delete[] p;
    return 0;
}