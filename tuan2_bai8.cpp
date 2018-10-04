#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, a[10], i = 0;
	cin>> n;
//	for (int i = 0; i < 10; i++){
//		a[i] = 0;
//	}
	while (n> 0){
		a[i] = n%2;
		n /= 2;
		i++;
	}
	for (int j = i-1; j >= 0; j--){
		cout<< a[j];
	}
	return 0;
}
