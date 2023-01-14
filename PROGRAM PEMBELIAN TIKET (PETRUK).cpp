#include <iostream>
using namespace std;

int waktu,umur,kelas,jmlah,harga,tiket,tujuan,pilihan;
char nama[60],ktp[30];

void utama()
{
	cout<<"==================================================="<<endl;
	cout<<"\t PROGRAM PEMBELIAN TIKET KERETA API "<<endl;
	cout<<"==================================================="<<endl;
}

void menu()
{
	cout<<"\t	Daftar Tujuan Kereta				   "<<endl;  
	cout<<"===================================================="<<endl;
	cout<<"\t1. Jakarta					"<<endl;
	cout<<"\t2. Bandung					"<<endl;
	cout<<"\t3. Madiun					"<<endl;
	cout<<"\t4. Surabaya				"<<endl;
	cout<<"\t5. Malang					"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Masukkan Pilihan Tujuan Kereta [1-5] : ";cin>>pilihan;
	cout<<endl;
}

int main()
{
	utama();
	menu();
	cout<<"\t Nama Pemesan	: ";
	cin>>nama;
	cout<<endl;
	cout<<"\t KTP	: ";
	cin>>ktp;
	cout<<endl;
	
	cout<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Waktu Keberangkatan"<<endl;  
	cout<<"----------------------------------------------------"<<endl;
	cout<<"\t1. Pagi"<<endl;
	cout<<"\t2. Siang"<<endl;
	cout<<"\t3. Malam"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Input Pilihan Waktu [1-3]	: ";cin>>waktu;
	cout<<endl;
	
	cout<<endl;
	cout<<"Masukkan Jumlah Pemesanan	: ";cin>>jmlah;
	cout<<"----------------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Kelas Kereta"<<endl;  
	cout<<"----------------------------------------------------"<<endl;
	cout<<"\t1. EKSEKUTIF"<<endl;
	cout<<"\t2. BISNIS"<<endl;
	cout<<"\t3. EKONOMI"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Masukkan Pilihan Kelas Tiket [1-3]	: ";cin>>kelas;
	cout<<endl;
		
	cout<<"===================================================="<<endl;
		{
		if (kelas==1)
		{harga=jmlah*460000;
		cout<<"Total Harga Tiket		: Rp "<<harga;}
		else if (kelas==2)
		{harga=jmlah*280000;
		cout<<"Total Harga Tiket		: Rp "<<harga;}
		else
		{harga=jmlah*180000;
		cout<<"Total Harga Tiket		: Rp "<<harga;}
		cout<<endl;
		}
		
	cout<<"\n------------------------------------------------------"<<endl;
	cout<<"Total Yang harus Dibayar         : Rp "<<harga<<endl;
	cout<<endl;
	
	
	cout<<"===================================================="<<endl;  
	cout<<"\tResi Pembelian Tiket Kereta API"<<endl;  
	cout<<"===================================================="<<endl;

	cout<<"Nama			    	: "<<nama<<endl;
	cout<<"No KTP				: "<<ktp<<endl;
	
		switch(tujuan)
		{case 1:
		 cout<<"Tujuan Kereta			: Jakarta"<<endl;
		 break;
		case 2:
		 cout<<"Tujuan Kereta			: Bandung "<<endl;
		 break;
		case 3:
		 cout<<"Tujuan Kereta			: Madiun"<<endl;
		 break;
		case 4:
		 cout<<"Tujuan Kereta			: Surabaya"<<endl;
		 break;
		case 5:
		 cout<<"Jurusan	Kereta	    	: Malang"<<endl;
		 break;
		 }
		 
		switch(kelas)
		{case 1:
		 cout<<"Kelas Kereta			: Eksekutif"<<endl;
		 break;
		case 2:
		 cout<<"Kelas Kereta			: Bisnis "<<endl;
		 break;
		 case 3:
		 cout<<"Kelas Kereta			: Ekonomi"<<endl;
		 break;}
		 
	cout<<"Jumlah Tiket Yang Dipesan	: " <<jmlah<<endl;
	
	cout<<endl;
		 switch(waktu)
		{case 1:
		 cout<<"[ Jadwal Kereta Pagi pukul 08:00 ]"<<endl;
		 break;
		case 2:
		 cout<<"[ Jadwal Kereta Siang pukul 12:00 ]"<<endl;
		 break;
		case 3:
		 cout<<"[ Jadwal Kereta Malam Pukul 20:00 ]"<<endl;
		 break;  }
		 
	cout<<endl;
	cout<<"Terima Kasih Atas Pesanannya, Semoga Perjalanan Anda Menyenangkan";
	cout<<endl;
	
	return 0;
}
