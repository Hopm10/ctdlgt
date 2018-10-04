#include<iostream>
using namespace std;
int main(){
	int count = 0, n;
	cin>> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin>> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+i; j< n; j++){
			if (a[i] == a[j])
			count ++;
		}
	}
	cout<< count;
	return 0;
}
