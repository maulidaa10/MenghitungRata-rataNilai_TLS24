#include<iostream>
using namespace std;
int main()
{
	//deklarasi variabel biodata
	string a,b,c;
	//deklarasi variabel nilai
	int d,e,f,g,h,i,j,k,l;
	//input biodata
	cout<<"silakan isi biodata dibawah ini "<<endl;
	cout<<"\tNama Lengkap : ";
	getline (cin,a);
	cout<<"\tNIM \t: ";
	getline (cin,b);
	cout<<"\tKelas \t: ";
	getline (cin,c);
	system("cls");
	cout<<"terimakasih telah mengisi form"<<endl;
	cout<<"Berikut biodata anda"<<endl;
	cout<<"\tNama Lengkap : "<<a<<endl;
	cout<<"\tNIM \t: "<<b<<endl;
	cout<<"\tKelas \t: "<<c<<endl;
	//input data nilai
	cout<<"================================================"<<endl;
	cout<<"\tMasukkan nilai :"<<endl;
	cout<<"\tNilai TVM \t: ";
	cin>>d;
	cout<<"\tNilai KVT \t: ";
	cin>>e;
	cout<<"\tNilai FMK \t: ";
	cin>>f;
	cout<<"\tNilai ProgDas \t: ";
	cin>>g;
	cout<<"\tNilai KimDas \t: ";
	cin>>h;
	cout<<"\tNilai Matdis \t: ";
	cin>>i;
	cout<<"\tNilai FFKG \t: ";
	cin>>j;
	cout<<"\tNilai TekDig \t: ";
	cin>>k;
	cout<<"================================================="<<endl;
	//menghitung rata-rata
	l=(d+e+f+g+h+i+j+k)/8;
	cout<<"\tRata-rata Nilai : "<<l<<endl;
	//konversi nilai rata-rata angka ke nilai huruf
	if(l>100)
	cout<<"Format salah";
	else if(80.00<=l<=100)
	cout<<"\tNilai A";
	else if(77.50<=l<=79.99)
	cout<<"\tNilai A-";
	else if(75.00<=l<=77.49)
	cout<<"\tNilai A/B";
	else if(72.50<=l<=74.99)
	cout<<"\tNilai B+";
	else if(70.00<=l<=72.49)
	cout<<"\tNilai B";
	else if(67.50<=l<=69.99)
	cout<<"\tNilai B-";
	else if(65.00<=l<=66.49)
	cout<<"\tNilai B/C";
	else if(62.50<=l<=64.99)
	cout<<"\tNilai C+";
	else if(60.00<=l<=62.49)
	cout<<"\tNilai C";
	else if(55.00<=l<=59.99)
	cout<<"\tNilai C-";
	else if(50.00<=l<=54.99)
	cout<<"\tNilai C/D";
	else if(45.00<=l<=49.99)
	cout<<"\tNilai D+";
	else if(40.00<=l<=44.99)
	cout<<"\tNilai D";
	else if(l<40.00)
	cout<<"\tNilai E";
	return 0;
}
