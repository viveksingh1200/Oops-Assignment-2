#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={67,23,64,12,45,98};
    
    sort(arr, arr + 6, greater<int>());
  
    
    cout << "\nDescending Sorted Array:\n";
    for (int i = 0; i < 6; i++)  
        cout << arr[i] << " ";
    
    return 0;
}

