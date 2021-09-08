#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	cout<<"The elements of array are: "<<endl;
	for(int j=n;j>0;j--){
		cout<<arr[j]<<endl;
	}
}

