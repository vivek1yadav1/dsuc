#include<iostream>
using namespace std;
void chngarr(int rr[],int i,int n){
        while(i<n){
           int temp;
           temp = rr[i];
           rr[i] = rr[n];
           rr[n] = temp;
           i++;
           n--;
        }
    }
void printarr(int arr[],int c){
        for(int a=0;a<c+1;a++)
         cout<<arr[a]<<endl;
    }
int main (){
    int arr[] = {1,2,3,4,5,6};
    cout<<"array before functions"<<endl;
    for(int a=0;a<6;a++)
             cout<<arr[a]<<endl;
    chngarr(arr,0,5);
    cout<<"use of print array function after change array function"<<endl;
    printarr(arr,5);
    cout<<"array after the function"<<endl;
    for(int a=0;a<6;a++)
             cout<<arr[a]<<endl;
}