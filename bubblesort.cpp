#include<iostream>
#include<array>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sortting(int arr[],int size){
    for(int i = 0;i<size - 1;i++){
        for(int j = 0;j<size - 1 -i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printSorted(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[10]={6,8,4,9,5,90,36,75,2,64};
int size = 10;
cout<<"original array: "<<endl;
printSorted(arr,size);
cout<<"sorted array: "<<endl;
sortting(arr,size);
printSorted(arr,size);
return 0;
}