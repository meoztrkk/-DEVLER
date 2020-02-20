
#include <iostream>

using namespace std;

void duzUcgen(int sayi)//bu düz üçgen için fonksiyonumuz
{
	int yildiz = 1, bosluk = sayi - 1;//yýldýz ve bosluk deðiþkenlerini tanýmlýyoruz
	for (int i = 0; i < sayi / 2 + 1; i++)//satýrlar için for döngüsü
	{
		cout << endl;//bir alt satýra geçer
		for (int j = 2; j < bosluk; j++)//boþluk býrakmak için for döngüsü
		{
			cout << " ";
		}
		for (int k = 0; k < yildiz; k++)//yýldýz koymak için for döngüsü
		{
			cout << "*";
		}
		bosluk--;//boþluðu azaltýr ki bir sonraki satýrda daha az boþluk býraksýn
		yildiz += 2;//yýldýzý arttýrýr ki býr sonraki satýrda daha çok yýldýz býraksýn

	}
}

void tersUcgen(int sayi)//bu düz üçgen için fonksiyonumuz
{
	int bosluk = 0, yildiz = sayi, s = 0;//yýldýz,bosluk ve s deðiþkenlerini tanýmlýyoruz
	while (s < sayi / 2 + 1)//satýr için while döngüsü
	{
		int d = 0, f = 0;
		while (d < bosluk)//boþluk býrakmak için while döngüsü
		{
			cout << " ";
			d++;
		}
		while (f < yildiz)//yýldýz koymak için while döngüsü
		{
			cout << "*";
			f++;
		}

		yildiz -= 2;//yildizi azaltýr ki bir sonraki satýrda daha az yildiz býraksýn
		bosluk++;//boþluðu arttýrýr ki býr sonraki satýrda daha çok boþluk býraksýn
		s++;//satýr sayýsý için
		cout << endl;//bir alt satýra geçer
	}
}

int main()
{
	int tercih,boyut,hak = 3;//tercih boyut ve hak deðiþkenleri
	cout << "BU ODEVDE DESEN CIZIMI YAPACAGIZ.\nSIZE PROJENIN NASIL CALISTIGINI ANLATAYIM\nODEVDE 4 BASLIK OLDUGU ICIN ONCE BUNLAR ARSINDA SECIM YAPMAMIZ GEREKIYOR\nVE SONRASINDA ISLEMLER DEVAM EDECEKTIR...\n\n\n";
	cout << "1: DUZ UCGEN\n2: TERS UCGEN\n3: ELMAS\n0: CIKIS\n";
	cin >> tercih;//kullanýcýnýn tercihini alýyoruz


	switch (tercih)//tercihi kontrol ediyoruz
	{
	case 0://0 ise çýkýþ yapýyor
		return 0;
		break;
	case 1://1 ise düzgün üçgen çiziyor
	a:
		cout << "SEKLIN BOYUTLARINI GIRINIZ" << endl;
		cin >> boyut;//boyutu alýyor
		if (boyut <= 15 && boyut >= 3 && boyut % 2 == 1 && hak > 0)//boyutun istediðimiz aralýkta olup olmadýðýný kontrol ediyorr ve hakký kontrol ediyor
		{
			duzUcgen(boyut);//eðer doðru ise düzgün üçgen çiziyor
		}
		else//yanlýþsa
		{
			hak--;//hakký azaltýyor
			if (hak==0)//hak 0 olursa
			{
				cout << "\nHAKKINIZ KALMADI...\n";//hakkýnýz kalmadý diyor ve kapatýyor
				return 0;
			}
			goto a;//hakký daha varsa tekrar soruyor
		}
		break;

	case 2://2 ise ters üçgen çiziyor
	b:
		cout << "SEKLIN BOYUTLARINI GIRINIZ" << endl;
		cin >> boyut;//boyutu alýyor
		if (boyut <= 15 && boyut >= 3 && boyut % 2 == 1 && hak > 0)//boyutun istediðimiz aralýkta olup olmadýðýný kontrol ediyorr ve hakký kontrol ediyor
		{
			tersUcgen(boyut);//eðer doðru ise ters üçgen çiziyor
		}
		else
		{
			hak--;//hakký azaltýyor
			if (hak == 0)//hak 0 olursa
			{
				cout << "\nHAKKINIZ KALMADI...\n";//hakkýnýz kalmadý diyor ve kapatýyor
				return 0;
			}
			goto b;//hakký daha varsa tekrar soruyor
		}
		break;

	case 3://3 ise elmas çiziyor
	c:
		cout << "SEKLIN BOYUTLARINI GIRINIZ" << endl;
		cin >> boyut;//boyutu alýyor
		if (boyut <= 15 && boyut >= 3 && boyut % 2 == 1 && hak > 0)//boyutun istediðimiz aralýkta olup olmadýðýný kontrol ediyorr ve hakký kontrol ediyor
		{
			duzUcgen(boyut);
			cout << endl;
			tersUcgen(boyut);//eðer doðru ise düz ve ters üçgeni alt alta çiziyor
		}
		else
		{
			hak--;//hakký azaltýyor
			if (hak == 0)//hak 0 olursa
			{
				cout << "\nHAKKINIZ KALMADI...\n";//hakkýnýz kalmadý diyor ve kapatýyor
				return 0;
			}
			goto c;//hakký daha varsa tekrar soruyor
		}
		break;
	default:
		break;
	}

}
