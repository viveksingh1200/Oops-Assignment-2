#include<iostream>
using namespace std;
int main(){
	int r1,c1;
	cout<<"Enter number of rows of matrix 1: ";
	cin>>r1;
	cout<<"Enter number of columns of matrix 1: ";
	cin>>c1;
	cout<<"Enter matrix 1 elements:"<<endl;
	int matrix1[r1][c1];
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>matrix1[i][j];
		}
	}
	cout<<"Matrix 1 is:"<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<matrix1[i][j]<<" ";
		}
		cout<<endl;
	}
	int r2,c2;
	int sum[100][100];
	cout<<"Enter number of rows of matrix 2: ";
	cin>>r2;
	cout<<"Enter number of columns of matrix 2: ";
	cin>>c2;
	cout<<"Enter matrix 2 elements:"<<endl;
	int matrix2[r2][c2];
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cin>>matrix2[i][j];
		}
	}
	cout<<"Matrix 2 is:"<<endl;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cout<<matrix2[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	cout<<"Addition of matrices is: "<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

