//Kelompok :
//Riyan Saputra
//Anggoro Yudha Pratama
//Yudha Restu Adjie
//Restu Maulana
//Luri Sesy Apriani

#include<iostream>
#include <cstddef>
#include <vector>
#include <string>

using namespace std;

class tanaman{
	protected :
		int statustmbh; //deklarasi variabel
		int jumlahair;
		int jumlahpupuk;
	
	public :
		tanaman (){ // konstruktor untuk men set nilai 0
			statustmbh  = 0;
			jumlahair   = 0;
			jumlahpupuk = 0;
		}
		void setplant(int st,int jh,int jp){ 
			statustmbh  = st;
			jumlahair   = jh;
			jumlahpupuk = jp;
		}
		void cektumbuh(){ //fungsi untuk cek tumbuh.
			if(jumlahair >= 3 && jumlahpupuk >= 1){
				cout<<"Selamat Tanaman kamu tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"Kondisi belum memenuhi untuk tumbuh "<<endl;
				cout<<"jumlah air   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk = "<<jumlahpupuk<<endl;
			}
		}
		void tumbuh(){ //fungsi untuk menumbuhkan tanaman jika sesuai kondisi
			if(statustmbh < 4){
				jumlahair   = jumlahair - 3;
				jumlahpupuk = jumlahpupuk - 1;
				statustmbh++;
			}
		}
		void kasihair(){ //fungsi untuk menambah air
			jumlahair++;
			
		}
		void kasihpupuk(){ //fungsi untuk menambah pupuk
			jumlahpupuk++;
			
		}
		void displaytanaman(){
			cout<<"Status pertumbuhan = "<<pertumbuhan()<<endl;
			cout<<"Jumlah air   = "<<jumlahair<<endl;
			cout<<"Jumlah pupuk = "<<jumlahpupuk<<endl;
			cout<<"====================\n";
		}
		string pertumbuhan(){
			switch (statustmbh){
				case 0:
					return "Benih";
					break;
				case 1:
					return "Tunas";
					break;
				case 2:
					return "Tanaman Kecil";
					break;
				case 3:
					return "Tanaman Dewasa";
					break;
				case 4:
					return "Berbungan";
					break;
			}
			return 0;
		}
		int getstatustmbh(){
			return statustmbh;
		}
};

class anggrek : public tanaman{
    private :
        string jenis;
    
    public :
         anggrek (){
             tanaman();
             jenis = "Anggrek";
         }
    void cektumbuh(){
        if(jumlahair >= 3 && jumlahpupuk >= 2){
				cout<<"Selamat Tanaman kamu tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"Kondisi belum memenuhi untuk tumbuh "<<endl;
				cout<<"jumlah air   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk = "<<jumlahpupuk<<endl;
			}
    }
    void tumbuh(){ //fungsi untuk menumbuhkan tanaman jika sesuai kondisi
			if(statustmbh < 4){
				jumlahair   = jumlahair - 3;
				jumlahpupuk = jumlahpupuk - 2;
				statustmbh++;
			}
		}
    string getjenis(){
        return jenis;
    }
         
};

class mawar : public tanaman{
    private :
        string jenis;
    
    public :
         mawar (){
             tanaman();
             jenis = "Mawar";
         }
    void cektumbuh(){
        if(jumlahair >= 3 && jumlahpupuk >= 3){
				cout<<"Selamat Tanaman kamu tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"Kondisi belum memenuhi untuk tumbuh "<<endl;
				cout<<"jumlah air   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk = "<<jumlahpupuk<<endl;
			}
    }
    void tumbuh(){ 
			if(statustmbh < 4){
				jumlahair   = jumlahair - 3;
				jumlahpupuk = jumlahpupuk - 3;
				statustmbh++;
			}
		}
    string getjenis(){
        return jenis;
    }
         
};

class melati : public tanaman{
    private :
        string jenis;
    
    public :
         melati (){
             tanaman();
             jenis = "Melati";
         }
    void cektumbuh(){
        if(jumlahair >= 4 && jumlahpupuk >= 1){
				cout<<"Selamat Tanaman kamu tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"Kondisi belum memenuhi untuk tumbuh "<<endl;
				cout<<"jumlah air   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk = "<<jumlahpupuk<<endl;
			}
    }
    void tumbuh(){ //fungsi untuk menumbuhkan tanaman jika sesuai kondisi
			if(statustmbh < 4){
				jumlahair   = jumlahair - 4;
				jumlahpupuk = jumlahpupuk - 1;
				statustmbh++;
			}
		}
    string getjenis(){
        return jenis;
    }
         
};

class garden : public anggrek,public mawar,public melati{
	protected :
		int size;
		int ntanaman;
		string namegarden;
		int hasilpanen;
		vector<tanaman> v;
		vector<anggrek> a;
		vector<mawar> m;
		vector<melati> l;
	
	public :
		garden (){
			size     = 10;
			ntanaman = 0;
			hasilpanen = 0;
			
			
		}
	bool addanggrek(anggrek p){
		if (ntanaman < size ){
			a.push_back(p);
			v.push_back(p);
			ntanaman++;
			return true;
		}
		else{
			return false;
		}
	}
	bool addmawar(mawar p){
		if (ntanaman < size ){
			m.push_back(p);
			v.push_back(p);
			ntanaman++;
			return true;
		}
		else{
			return false;
		}
	}
	bool addmelati(melati p){
		if (ntanaman < size ){
			l.push_back(p);
			v.push_back(p);
			ntanaman++;
			return true;
		}
		else{
			return false;
		}
	}
	int harvestplan(){
		int tmpn = 0;
		int i = 0;
		while (( a.empty() != true) && (i < a.size() )){
				if(a[i].getstatustmbh() == 4){
					a.erase(a.begin());
					ntanaman --;
					tmpn ++;
					i = 0;
				}else{
					i++;
				}
			}
		while (( m.empty() != true) && (i < m.size() )){
				if(m[i].getstatustmbh() == 4){
					m.erase(m.begin());
					ntanaman --;
					tmpn ++;
					i = 0;
				}else{
					i++;
				}
			}
		while (( l.empty() != true) && (i < l.size() )){
				if(l[i].getstatustmbh() == 4){
					l.erase(l.begin());
					ntanaman --;
					tmpn ++;
					i = 0;
				}else{
					i++;
				}
			}	
			hasilpanen = hasilpanen +(tmpn*100);
			return tmpn;
	}
	void kasihairAnggrek(){
		for (int i = 0; i < a.size();i++){
			a[i].kasihair();
			a[i].cektumbuh();
		}
		
	}
	void kasihairMawar(){
		for (int i = 0; i < m.size();i++){
			m[i].kasihair();
			m[i].cektumbuh();
		}
		
	}
	void kasihairMelati(){
		for (int i = 0; i < l.size();i++){
			l[i].kasihair();
			l[i].cektumbuh();
		}
		
	}
	void kasihpupukAnggrek(){
		for (int i = 0; i < a.size();i++){
			a[i].kasihpupuk();
			a[i].cektumbuh();
		}
	}
	void kasihpupukMawar(){
		for (int i = 0; i < m.size();i++){
			m[i].kasihpupuk();
			m[i].cektumbuh();
		}
	}
	void kasihpupukMelati(){
		for (int i = 0; i < l.size();i++){
			l[i].kasihpupuk();
			l[i].cektumbuh();
		}
	}
	void displaygarden(){
		cout<<"Garden Pusing "<<endl;
		cout<<"Ada "<<ntanaman<<" Tanaman di garden"<<endl;
		cout<<"point panen anda = "<<hasilpanen<<endl;

		for (int i = 0;i < a.size();i++){
			cout<<a[i].getjenis()<<" ";
			a[i].displaytanaman();
		}
		for (int i = 0;i < m.size();i++){
			cout<<m[i].getjenis()<<" ";
			m[i].displaytanaman();
		}
		for (int i = 0;i < l.size();i++){
			cout<<l[i].getjenis()<<" ";
			l[i].displaytanaman();
		}
	}
	
};
int main(){
	//tanaman p;
	anggrek a;
	mawar m;
	melati l;
	garden g;
	
	int inp = 0;
	do{
		cout<<"\n";
		cout<<"0  Menambahkan Tanaman "<<endl;
		cout<<"1  Memberi Tanaman Air"<<endl;
		cout<<"2  Memberi Tanaman Pupuk"<<endl;
		cout<<"3  Memanen Tanaman"<<endl;
		cout<<"4  Menampilkan garden"<<endl;
		cout<<"999 Keluar"<<endl;
		cout<<"Masukan pilihan = ";cin>>inp;
		
		switch(inp){
			case 0:
				system("clear");
				int pil;
				cout<<"1.Menambahkan Anggrek"<<endl;
				cout<<"2.Menambahkan Mawar"<<endl;
				cout<<"3.Menambahkan Melati"<<endl;
				cout<<"Masukan = ";cin>>pil;
				if(pil == 1){
					g.addanggrek(a);
				}
				else if(pil == 2){
					g.addmawar(m);
				}
				else if(pil == 3){
					g.addmelati(l);
				}
				break;
			case 1:
				int pil2;
				system("clear");
				cout<<"1  Memberi anggrek air"<<endl;
				cout<<"2  Memberi Mawar air"<<endl;
				cout<<"3  Memberi Melati air"<<endl;
				cout<<"Masukan = ";cin>>pil2;
				if(pil2 == 1){
					g.kasihairAnggrek();
                    cout<<"\n";
				}
				else if(pil2 == 2){
					g.kasihairMawar();
                    cout<<"\n";
				}
				else if(pil2 == 3){
					g.kasihairMelati();
                    cout<<"\n";
				}
				break;
			case 2:
				int pil3;
				system("clear");
				cout<<"1  Memberi anggrek pupuk"<<endl;
				cout<<"2  Memberi Mawar pupuk"<<endl;
				cout<<"3  Memberi Melati pupuk"<<endl;
				cout<<"Masukan = ";cin>>pil3;
				if(pil3 == 1){
					g.kasihpupukAnggrek();
                    cout<<"\n";
				}
				else if(pil3 == 2){
					g.kasihpupukMawar();
                    cout<<"\n";
				}
				else if(pil3 == 3){
					g.kasihpupukMelati();
                    cout<<"\n";
				}
				break;
			case 3:
                system("clear");
                if(g.harvestplan() > 0){
                    cout<<"Tanaman Berhasil dipanen"<<endl;
                }else{
                    cout<<"Yaaah Belum ada tanaman yang siap dipanen"<<endl;
                }
				break;
			case 4:
				system("clear");
				g.displaygarden();
		}
	}while (inp != 999);
		
	return 0;
}