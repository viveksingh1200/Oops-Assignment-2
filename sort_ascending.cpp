#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={2,56,23,89,12,98};
    sort(arr , arr+6);
    for (int i = 0; i < 6; i++)  
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}  
