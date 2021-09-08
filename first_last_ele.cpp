#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of an array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"First element is: "<<arr[0]<<endl;
	cout<<"Last element is: "<<arr[n-1];
}
