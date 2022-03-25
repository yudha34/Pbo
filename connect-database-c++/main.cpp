#include<iostream>
#include<mysql/mysql.h>


using namespace std;
MYSQL* conn;

class db_response{
    public:
    static void connectionFunction(){
        conn = mysql_init(0);
        if (conn){
            cout<<"Database Terhubung"<<endl;
        }else{
            cout<<"Gagal menghubungkan database"<< mysql_errno(conn) <<endl;
        }
        conn = mysql_real_connect(conn, "127.0.0.1", "root", "", "db_cppmysql", 3306, NULL, 0);
        if (conn ){
            cout<<"Database terhubung ke Mysql"<< conn <<endl;
        }else{
            cout<<"Gagal terhubung ke Mysql"<<mysql_errno(conn) <<endl;
        }
    }
};

int main(){
    db_response r;
    r.connectionFunction();
}