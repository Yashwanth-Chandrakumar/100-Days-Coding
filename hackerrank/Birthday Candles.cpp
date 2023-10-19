#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(max==arr[i]){
            count++;
        }
    }
    cout<<count;
}
