
#include <iostream>

using namespace std;

void duzUcgen(int sayi)//bu d�z ��gen i�in fonksiyonumuz
{
	int yildiz = 1, bosluk = sayi - 1;//y�ld�z ve bosluk de�i�kenlerini tan�ml�yoruz
	for (int i = 0; i < sayi / 2 + 1; i++)//sat�rlar i�in for d�ng�s�
	{
		cout << endl;//bir alt sat�ra ge�er
		for (int j = 2; j < bosluk; j++)//bo�luk b�rakmak i�in for d�ng�s�
		{
			cout << " ";
		}
		for (int k = 0; k < yildiz; k++)//y�ld�z koymak i�in for d�ng�s�
		{
			cout << "*";
		}
		bosluk--;//bo�lu�u azalt�r ki bir sonraki sat�rda daha az bo�luk b�raks�n
		yildiz += 2;//y�ld�z� artt�r�r ki b�r sonraki sat�rda daha �ok y�ld�z b�raks�n

	}
}

void tersUcgen(int sayi)//bu d�z ��gen i�in fonksiyonumuz
{
	int bosluk = 0, yildiz = sayi, s = 0;//y�ld�z,bosluk ve s de�i�kenlerini tan�ml�yoruz
	while (s < sayi / 2 + 1)//sat�r i�in while d�ng�s�
	{
		int d = 0, f = 0;
		while (d < bosluk)//bo�luk b�rakmak i�in while d�ng�s�
		{
			cout << " ";
			d++;
		}
		while (f < yildiz)//y�ld�z koymak i�in while d�ng�s�
		{
			cout << "*";
			f++;
		}

		yildiz -= 2;//yildizi azalt�r ki bir sonraki sat�rda daha az yildiz b�raks�n
		bosluk++;//bo�lu�u artt�r�r ki b�r sonraki sat�rda daha �ok bo�luk b�raks�n
		s++;//sat�r say�s� i�in
		cout << endl;//bir alt sat�ra ge�er
	}
}

int main()
{
	int tercih,boyut,hak = 3;//tercih boyut ve hak de�i�kenleri
	cout << "BU ODEVDE DESEN CIZIMI YAPACAGIZ.\nSIZE PROJENIN NASIL CALISTIGINI ANLATAYIM\nODEVDE 4 BASLIK OLDUGU ICIN ONCE BUNLAR ARSINDA SECIM YAPMAMIZ GEREKIYOR\nVE SONRASINDA ISLEMLER DEVAM EDECEKTIR...\n\n\n";
	cout << "1: DUZ UCGEN\n2: TERS UCGEN\n3: ELMAS\n0: CIKIS\n";
	cin >> tercih;//kullan�c�n�n tercihini al�yoruz


	switch (tercih)//tercihi kontrol ediyoruz
	{
	case 0://0 ise ��k�� yap�yor
		return 0;
		break;
	case 1://1 ise d�zg�n ��gen �iziyor
	a:
		cout << "SEKLIN BOYUTLARINI GIRINIZ" << endl;
		cin >> boyut;//boyutu al�yor
		if (boyut <= 15 && boyut >= 3 && boyut % 2 == 1 && hak > 0)//boyutun istedi�imiz aral�kta olup olmad���n� kontrol ediyorr ve hakk� kontrol ediyor
		{
			duzUcgen(boyut);//e�er do�ru ise d�zg�n ��gen �iziyor
		}
		else//yanl��sa
		{
			hak--;//hakk� azalt�yor
			if (hak==0)//hak 0 olursa
			{
				cout << "\nHAKKINIZ KALMADI...\n";//hakk�n�z kalmad� diyor ve kapat�yor
				return 0;
			}
			goto a;//hakk� daha varsa tekrar soruyor
		}
		break;

	case 2://2 ise ters ��gen �iziyor
	b:
		cout << "SEKLIN BOYUTLARINI GIRINIZ" << endl;
		cin >> boyut;//boyutu al�yor
		if (boyut <= 15 && boyut >= 3 && boyut % 2 == 1 && hak > 0)//boyutun istedi�imiz aral�kta olup olmad���n� kontrol ediyorr ve hakk� kontrol ediyor
		{
			tersUcgen(boyut);//e�er do�ru ise ters ��gen �iziyor
		}
		else
		{
			hak--;//hakk� azalt�yor
			if (hak == 0)//hak 0 olursa
			{
				cout << "\nHAKKINIZ KALMADI...\n";//hakk�n�z kalmad� diyor ve kapat�yor
				return 0;
			}
			goto b;//hakk� daha varsa tekrar soruyor
		}
		break;

	case 3://3 ise elmas �iziyor
	c:
		cout << "SEKLIN BOYUTLARINI GIRINIZ" << endl;
		cin >> boyut;//boyutu al�yor
		if (boyut <= 15 && boyut >= 3 && boyut % 2 == 1 && hak > 0)//boyutun istedi�imiz aral�kta olup olmad���n� kontrol ediyorr ve hakk� kontrol ediyor
		{
			duzUcgen(boyut);
			cout << endl;
			tersUcgen(boyut);//e�er do�ru ise d�z ve ters ��geni alt alta �iziyor
		}
		else
		{
			hak--;//hakk� azalt�yor
			if (hak == 0)//hak 0 olursa
			{
				cout << "\nHAKKINIZ KALMADI...\n";//hakk�n�z kalmad� diyor ve kapat�yor
				return 0;
			}
			goto c;//hakk� daha varsa tekrar soruyor
		}
		break;
	default:
		break;
	}

}
