// Anggoro Yudha Pratama 
// 20200801322 
#include<iostream>

using namespace std;

class matematika{
	private :
		float angka1;
		float angka2;
		float hasil;
		char operasi;
	
	public :
		
		void setaritmatika(float a,float b){
			angka1  = a;
			angka2  = b;
		}
		
		void tambah(){
			cout<<"Masukan angka 1       = ";cin>>angka1;
	    	cout<<"Masukan angka Operasi = ";cin>>operasi;
	    	cout<<"Masukan angka 2       = ";cin>>angka2;
			hasil = angka1 + angka2;
			cout<<"Hasil Penjumlahan = "<<hasil<<endl;
		}
		void kurang(){
			cout<<"Masukan angka 1       = ";cin>>angka1;
	    	cout<<"Masukan angka Operasi = ";cin>>operasi;
	    	cout<<"Masukan angka 2       = ";cin>>angka2;
			hasil = angka1 - angka2;
			cout<<"Hasil Pengurangan = "<<hasil<<endl;
		}
		void kali(){
			cout<<"Masukan angka 1       = ";cin>>angka1;
	    	cout<<"Masukan angka Operasi = ";cin>>operasi;
	    	cout<<"Masukan angka 2       = ";cin>>angka2;
			hasil = angka1 * angka2;
			cout<<"Hasil Perkalian = "<<hasil<<endl;
		}
		void bagi(){
			cout<<"Masukan angka 1       = ";cin>>angka1;
	    	cout<<"Masukan angka Operasi = ";cin>>operasi;
	    	cout<<"Masukan angka 2       = ";cin>>angka2;
			hasil = angka1 / angka2;
			cout<<"Hasil Pembagian = "<<hasil<<endl;
		}
		
		float getangka1(){
			return angka1;
		}
		float getangka2(){
			return angka2;
		}
		float gethasil(){
			return hasil;
		}
};

int main(){
	int p;
	char y;
	matematika w;
	

	menu:
		cout<<"\n";
		cout<<" 0.keluar"<<endl;
		cout<<" 1.Tambah"<<endl;
		cout<<" 2.Kurang"<<endl;
		cout<<" 3.kali  "<<endl;
		cout<<" 4.Bagi"<<endl;
		cout<<"Pilih = ";cin>>p;
	
	if(p == 1){
		w.tambah();
		cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
		if(y == 'y'){
		goto menu;	
		}
		else if(y == 'n'){
			system("clear");
			cout<<" Thanks ";
		}	
	}
	else if(p == 2){
		w.kurang();
		cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
		if(y == 'y'){
		goto menu;
		}
		else if(y == 'n'){
			system("clear");
			cout<<" Thanks ";
		}	
	}
	else if(p == 3){
		w.kali();
		cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
		if(y == 'y'){
			goto menu;
		}
		else if(y == 'n'){
			system("clear");
			cout<<" Thanks ";
		}	
	}
	else if(p == 4){
		w.bagi();
		cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
		if(y == 'y'){
			goto menu;
		}
		else if(y == 'n'){
			system("clear");
			cout<<" Thanks ";
		}	
	}
	else if(p == 0){
		system("clear");
		cout<<" Thanks ";
	}
	
}