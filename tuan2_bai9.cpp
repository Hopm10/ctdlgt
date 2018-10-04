 #include<iostream>
 #include<cmath>
 using namespace std;
 int main(){
 	int n, j = 0;
 	cin>> n;
 	int a[n];
 	for (int i = 1; i <= sqrt(n); i++){
 		if (n % i == 0){
	 		cout<< i<< " ";
	 		a[j] = i;
	 		j++;
 		}
 	}
 	for (int i = j- 1; i >= 0; i--){
 		if (n/a[i] != sqrt(n))
 		cout<< n/a[i]<< " ";
 	}
 	return 0;
 }
