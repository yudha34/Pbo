//Anggoro Yudha P.
//20200801322
#include<iostream>
#include <cstddef>
#include <vector>
#include <string>

using namespace std;

class book{
	private :
		string name;
		int size;
	
	public :
		
		book (){
			book :: name = "Buku tulis";
			book :: size = 2;
		}
		string getname(){
			return name;
		}
		int getsize(){
			return size;
		}

};

class bigbook{
	private :
		string name;
		int size;
	
	public :
		
		bigbook (){
			bigbook :: name = "Buku paket";
			bigbook :: size = 4;
		}
		string getname(){
			return name;
		}
		int getsize(){
			return size;
		}

};

class laptop{
	private :
		string name;
		int size;
	
	public :
		
		laptop (){
			laptop :: name = "Laptop Lenovo";
			laptop :: size = 10;
		
		}
		string getname(){
			return name;
		}
		int getsize(){
			return size;
		}

};

class bag : public book,public bigbook,public laptop{
	private :
		int item;
		int sizetas;
		int jumlahsize;
		int batassize;
		vector<book> b;
		vector<bigbook> k;
		vector<laptop> l;
	
	public :
		bag (){
			bag :: item  = 0;
			bag :: jumlahsize  = 0;
			bag :: sizetas = 20;
			bag :: batassize = 20;
		}
		bool addbuku (book p){
			if (jumlahsize < sizetas ){
				b.push_back(p);
				item ++;
				jumlahsize = jumlahsize + p.getsize();
				batassize  = batassize - p.getsize();
				return true;
			}
			else{
				cout<<"Tas terlalu penuh / berat"<<endl;
				return false;
			}
			
		}
		bool addbukupaket (bigbook p){
			if (jumlahsize < sizetas ){
				k.push_back(p);
				item ++;
				jumlahsize = jumlahsize + p.getsize();
				batassize  = batassize - p.getsize();
				return true;
			}
			else{
				cout<<"Tas terlalu penuh / berat"<<endl;
				return false;		
			}
		}
		bool addlaptop (laptop p){
			if (jumlahsize < sizetas ){
				l.push_back(p);
				item ++;
				jumlahsize = jumlahsize + p.getsize();
				batassize  = batassize - p.getsize();
				return true;
			}
			else{
				cout<<"Tas terlalu penuh / berat"<<endl;
			    return false;
			}
		}
		void ambilbuku(){
			if (b.empty() != true){
				b.erase(b.begin());
				item --;
				jumlahsize = jumlahsize - book :: getsize();
				batassize  = batassize +  book ::getsize();
			}
			else {
				cout<<"Tidak ada buku tulis di tas"<<endl;
			}
		}
		void ambilbukupaket(){
			if (k.empty() != true){
				k.erase(k.begin());
				item --;
				jumlahsize = jumlahsize - bigbook :: getsize();
				batassize  = batassize + bigbook ::getsize();
			}
			else {
				cout<<"Tidak ada buku tulis di tas"<<endl;
			}
		}
		void ambillaptop(){
			if (l.empty() != true){
				l.erase(l.begin());
				item--;
				jumlahsize = jumlahsize - laptop :: getsize();
				batassize  = batassize + laptop ::getsize();
			}
			else {
				cout<<"Tidak ada buku tulis di tas"<<endl;
			}
		}
		void displaybag(){
			cout<<"Menampilkan item didalam tas"<<endl;
			cout<<"Jumlah size yang terpakai = "<<jumlahsize<<endl;
			cout<<"Sisa Size yang tersisa    = "<<batassize<<endl;
			cout<<"Di dalam tas terdapat "<<item<<" item \n\n";
			
			for (int i=0;i<b.size();i++){
				cout<<b[i].getname()<<endl;
			}
			for (int i=0;i<k.size();i++){
				cout<<k[i].getname()<<endl;
			}
			for (int i=0;i<l.size();i++){
				cout<<l[i].getname()<<endl;
			}
		}
};

int main(){
	book s;
	bigbook q;
	laptop r;
	bag tas;
	
	int inp = 0;
	do{
		cout<<"\n";
		cout<<"0   Menambahkan item ke tas "<<endl;
		cout<<"1   Mengambil item di tas "<<endl;
		cout<<"2   Menampilkan item di tas"<<endl;
		cout<<"999 Keluar"<<endl;
		cout<<"Masukan pilihan = ";cin>>inp;
		
		switch(inp){
			case 0:
				system("clear");
				int pil;
				cout<<"1.Menambahkan buku tulis"<<endl;
				cout<<"2.Menambahkan buku paket"<<endl;
				cout<<"3.Menambahkan laptop"<<endl;
				cout<<"Masukan = ";cin>>pil;
				
				if(pil == 1){
					tas.addbuku(s);
				}
				else if(pil == 2){
					tas.addbukupaket(q);
				}
				else if(pil == 3){
					tas.addlaptop(r);
				}
				break;
			case 1:
				int pil2;
				system("clear");
				cout<<"1  Mengambil buku tulis"<<endl;
				cout<<"2  Mengambil buku paket"<<endl;
				cout<<"3  Mengambil laptop"<<endl;
				cout<<"Masukan = ";cin>>pil2;
				if(pil2 == 1){
					tas.ambilbuku();
				}
				else if(pil2 == 2){
					tas.ambilbukupaket();
				}
				else if(pil2 == 3){
					tas.ambillaptop();
				}
				break;
			case 2:
				system("clear");
				tas.displaybag();
		}
	}while (inp != 999);
	
}