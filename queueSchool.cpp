#include<iostream>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	char arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	for(int j=1; j<=t; j++){
		for(int i=0; i<n; i++){
			if(arr[i]=='B' and arr[i+1]=='G'){
				swap(arr[i], arr[i+1]);
				i++;
			}
		}

	}
	for(int i=0; i<n; i++){
		cout << arr[i];
	}
	cout << endl;




	return 0;
}