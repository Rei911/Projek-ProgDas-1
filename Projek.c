#include <stdio.h>

int main()
{
	int n;
	int m;
	int a;
	int Exit;
	int Exi;
	
	printf("Selamat datang di Tabel Periodik\n\n");
	printf("Tekan 1 untuk mengenal suatu unsur\n\n");
	printf("Tekan 2 untuk menutup tabel periodik\n\n");
	scanf("%d", &n);
	if(n==1)
	{
		printf("Tekan 3 untuk mencari unsur berdasarkan nomor atomnya\n\n");
		scanf("%d",&m);
		
		if(m==3){
			printf("Masukkan nomor atom dari unsur yang dicari :");
			scanf("%d", &a);
			
			if(a==9){
				printf("Nama : Fluorin\n");
				printf("Simbol : F\n");
				printf("Nomor Atom : 9\n");
				printf("konfigurasi elektron : 1s^2 2s^2 2p^5");
			} else if (a==17){
				printf("Nama : klorin\n");
				printf("Simbol : Cl\n");
				printf("Nomor Atom : 17\n");
				printf("konfigurasi elektron : 1s^2 2s^2 2p^6 3s^2 3p^5");
			}
		}
	}
	else if(n==2) 
	{
		printf("Apakah anda ingin keluar? (Ya/Tidak)\n");
		printf("Tekan 6 untuk Ya\n");
		printf("Tekan 7 untuk Tidak\n");
		
		scanf("%d",&Exit);
		
		if(Exit==6)
		{
			printf("Apakah anda yakin ingin keluar? (Ya/Tidak)\n");
			printf("Tekan 4 untuk Ya\n");
			printf("Tekan 5 untuk Tidak\n");
			
			scanf("%d",&Exit);
			if(Exit==4)
			{
				printf("Tabel periodik telah ditutup\n");
			}
			else if(Exit==5) 
			 {
				printf("Tabel periodik ditampilkan kembali\n");
				
				printf("Tekan 3 untuk mencari unsur berdasarkan nomor atomnya\n\n");
		scanf("%d",&m);
		
		if(m==3){
			printf("Masukkan nomor atom dari unsur yang dicari :");
			scanf("%d", &a);
			
			if(a==9){
				printf("Nama : Fluorin\n");
				printf("Simbol : F\n");
				printf("Nomor Atom : 9");
				printf("konfigurasi elektron : 1s^2 2s^2 2p^5");
			} else if (a==17){
				printf("Nama : klorin\n");
				printf("Simbol : Cl\n");
				printf("Nomor Atom : 17\n");
				printf("konfigurasi elektron : 1s^2 2s^2 2p^6 3s^2 3p^5");
				}
			} 
		}
	}else if(Exit==7) 
	{
		printf("Tabel periodik ditampilkan kembali\n");
				
				printf("Tekan 3 untuk mencari unsur berdasarkan nomor atomnya\n\n");
		scanf("%d",&m);
		
		if(m==3){
			printf("Masukkan nomor atom dari unsur yang dicari :");
			scanf("%d", &a);
			
			if(a==9){
				printf("Nama : Fluorin\n");
				printf("Simbol : F\n");
				printf("Nomor Atom : 9");
				printf("konfigurasi elektron : 1s^2 2s^2 2p^5");
			} else if (a==17){
				printf("Nama : klorin\n");
				printf("Simbol : Cl\n");
				printf("Nomor Atom : 17\n");
				printf("konfigurasi elektron : 1s^2 2s^2 2p^6 3s^2 3p^5");}
				}
			}
		}
	}



