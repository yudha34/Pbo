// Anggoro Yudha Pratama 
// 20200801322 
#include<iostream>

using namespace std;

int main (){
	int n,j,i,s;
	
	cout<<"Masukan Jumlah baris = ";cin>>n;
	
	for(i = 1;i<=n;i++){
		for( s = 1;s<n;s++)
		cout<<" ";
		for( j = 1;j<= i;j++)
		cout<<"*";
		cout<<"\n";
	}
	return 0;
}