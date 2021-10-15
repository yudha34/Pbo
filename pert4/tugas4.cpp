// Anggoro Yudha Pratama
// 20200801322

#include <iostream>
using namespace std;

class umur {
	private:
		int t,s;
	
	public:
		void assign(int tahunlahir,int tahunskrg){
			t = tahunlahir;
			s = tahunskrg;
		}
		
		int usia(){
			return s - t;
		}
};

int main(){
	int d;
	umur anda;
	cout<<"Masukan tahun lahir anda = ";
	cin>>d;
	anda.assign(d,2021);
	cout<<"\nBerarti Usia kalian sekarang adalah "<<anda.usia()<<endl;
	
	return 0;
}