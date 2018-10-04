#include<iostream>
#include<String>
#include<cmath>
#include<algorithm>
using namespace std;

void bubble_sort (int a[], int n){
	for (int i = 0; i < n -1; i++){
		for (int j = i + 1; j< n; j++){
			if (a[i] > a[j]){		// sx tang dan
				swap(a[i], a[j]);
			}
		}
	}
}

void insert_sort (int a[], int n){
	for (int i = 1; i < n; i++){
		for (int j = i; j > 0; j--){
			if (a[j] > a[j-1]){		// sx tang dan
				swap(a[j], a[j-1]);
			}
		}
	}
}

void select_sort (int a[], int n){ 		
	int _min, j;
	for (int i = 0; i < n - 1; i++){
		_min = a[i];
		for (j = i+1; j < n; j++){
			_min = min(a[j], _min);
			if (a[i] > _min){
				_min = a[j];
				swap (a[i], a[j]);
			}
		}	
	}	
}

int main(){
	int n;
	cin>> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin>> a[i];
	}
	
	//bubble_sort (a, n);
	//insert_sort (a, n);
	select_sort (a, n);
	for (int i = 0; i < n; i++){
		cout<< a[i];
	}
	
	return 0;
}
