#include <iostream>

using namespace std;
int main()

{
	int ayah, ibu, anak1, anak2, bantuan1, bantuan2, bantuan3,bantuan4 ;
	
	cout <<"Umur Ayah   : " ;
	cin >>ayah;
	cout <<"Umur Ibu    : ";
	cin >>ibu;
	cout <<"Umur Anak 1 : ";
	cin >>anak1;
	cout <<"Umur Anak 2 : ";
	cin >>anak2;
	
	//ayah
	if(ayah >0 && ayah<=12){
	bantuan1 : 15000*30 ;
	}
	else if(ayah >=12 && ayah <=20){
	bantuan1 = 20000*30 ;
	}
	else if (ayah >20){
	bantuan1 = 30000*30 ;
	}
	//ibu
	if(ibu >0 && ibu <=12){
	bantuan2= 15000*30 ;
	}
	else if (ibu >=12 && ibu <=20){
	bantuan2= 20000*30 ;
	}
	else if (ibu >20){
	bantuan2 = 30000*30;
	}
	//anak1
	if (anak1 >0 && anak1<=12){
	bantuan3 = 15000*30 ;	
	}
	else if (anak1 >=12 && anak1<=20){
	bantuan3 = 20000*30 ;
	}
	else if (anak1 >20){
	bantuan3 = 30000*30;
	}
	//anak2
	if (anak2 >0 && anak2<=12){
	bantuan4 = 15000*30;	
	}
	else if (anak2 >=12 && anak2<=20){
	bantuan4 = 20000*30;
	}
	else if (anak2 >20){
	bantuan4 = 30000*30;
	}

	cout <<"Bantuan satu bulan sebesar Rp." <<bantuan1 + bantuan2 + bantuan3 + bantuan4<<endl;
	return 0; 
		
}
