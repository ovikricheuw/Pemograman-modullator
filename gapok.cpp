#include <iostream> 
using namespace std;

void garis();
void inputdata();
void hitunggaji();

 int main () {
 
 cout <<"=====menghitung gaji karyawan ==========" <<endl;
 cout <<"tungjangan sebesar 10 % dari gaji pokok "<<endl;
	garis();
	inputdata();
	hitunggaji();
	return 0;
}

	void garis() { 
	cout <<"====================================="<<endl;
}

void inputdata() {
char nama[20],alamat[20];
cout <<"masukan nama : ";
cin>>nama[i];
cout <<"masukan alamat : ";
cin>>alamat[i];
}

void hitunggaji(){
int gapok, tunjangan, total;
cout <<"masukan gapok : ";
cin>>gapok;
tunjangan=0.1*gapok;
total=tunjangan+gapok;
cout<<"total gaji yang diterima : "<<total;

}

	
	
	
