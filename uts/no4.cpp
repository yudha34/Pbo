// Anggoro Yudha Pratama 
// 20200801322 
#include<iostream>
#include<string>

using namespace std;

class nama{
	private :
		string nama1;
		string nama2;
		string nama3;
	
	public :
		void setnama(){
			string np,nt,nl;
			nama1 = np;
			nama2 = nt;
			nama3 = nl;
			cin.ignore();
			cout<<"Masukan Nama pertama  = ";cin>>nama1;
			cin.ignore();
			
			cout<<"Masukan Nama tengah   = ";cin>>nama2;
			
			cout<<"Masukan Nama terakhir = ";cin>>nama3;
			
			cin.ignore();
		}
		string getnama1(){
			return nama1;
		}
		string getnama2(){
			return nama2;
		}
		string getnama3(){
			return nama3;
		}
};

int main(){
	int pilih;
	nama w;
	menu:
		system("clear");
		cout<<"0. Keluar"<<endl;
		cout<<"1. Input "<<endl;
		cout<<"Masukan Pilihan Anda = ";cin>>pilih;
		
	if (pilih == 1){
		w.setnama();
		cout<<"Nama pertama  = "<<w.getnama1()<<endl;
		cout<<"Nama Tengaah  = "<<w.getnama2()<<endl;
		cout<<"Nama Terakhir = "<<w.getnama3()<<endl;
		
	}
	if (pilih == 0){
		system("clear");
		cout<<"Thanks";
	}
		
}