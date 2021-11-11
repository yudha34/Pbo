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
		string nama4;
	
	public :
		void setnama(){
			string np,nt,nl;
			string fn;
			nama1 = np;
			nama2 = nt;
			nama3 = nl;
			nama4 = fn;
			cin.ignore();
			cout<<"Masukan Nama pertama  = ";cin>>nama1;
			cin.ignore();
			cout<<"Masukan Nama tengah   = ";cin>>nama2;
			cin.ignore();
			cout<<"Masukan Nama terakhir = ";cin>>nama3;
			cin.ignore();
			cout<<"Masukan FULL NAME     = ";getline(cin,nama4);
			
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
		string getnama4(){
			return nama4;
		}
};

int main(){
	int pilih;
	char y;
	nama w;
	menu:
		cout<<"\n";
		cout<<"0. Keluar"<<endl;
		cout<<"1. Input "<<endl;
		cout<<"Masukan Pilihan Anda = ";cin>>pilih;
		
	if (pilih == 1){
		w.setnama();
		cout<<"Nama pertama  = "<<w.getnama1()<<endl;
		cout<<"Nama Tengaah  = "<<w.getnama2()<<endl;
		cout<<"Nama Terakhir = "<<w.getnama3()<<endl;
		cout<<"FULL Name     = "<<w.getnama4()<<endl;
		
		cout<<"Ingin kembali ke menu lain?(y/n) = ";cin>>y;
		if (y == 'y'){
			goto menu;
		}
		else if(y == 'n'){
			cout<<"\n";
			cout<<"Thanks";
		}
		
	}
	if (pilih == 0){
		cout<<"\n";
		cout<<"Thanks";
	}
		
}