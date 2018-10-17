/**
* @file             Test.cpp
* @description      Ana islem fonksiyonlarının bulunduğu dosya
* @course           2.Öğretim B
* @assignment       1
* @date             08/10/2017
* @author           Muhammed Emin KARABOĞA - emin.karaboga@ogr.sakarya.edu.tr
*/


#include "Top.hpp"
#include <windows.h>

int main(int argc, char const *argv[])
{
	int boyut;

	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	/*Create array length*/
	do{
	cout<<"Dizi Boyutu: "<<endl;
	cin>>boyut;
	
	if(boyut <= 0)
		cout<<"0 dan buyuk bir deger girin."<<endl;
		cin.get();
		system("cls");
	}while(boyut <= 0);

	Top *A[boyut];
	system("cls");
	/*end*/

	/*Create new object in heap*/
	int colorRndNum;
	for (int i = 0; i < boyut; ++i)
	{
		colorRndNum = i + 1;
		A[i] = new Top(colorRndNum);
		/* code */

	}

	cout<<"Dizi basariyla olusturuldu."<<endl;
	//end


	/****************MENU*****************/
	int deger;
	Top *p;
	do
	{
		cout<<"1.Diziyi Ters Cevir"<<endl;
		cout<<"2.Diziyi Yazdir"<<endl;
		cout<<"Cikis"<<endl;
		cout<<">>";
		system("pause");
		cin>>deger;

		if(deger==1)	{
			/*Change of pointer*/

			for (int i = 0; i < (int)(boyut/2); ++i)
			{

				/* code */
				p=A[i];
				A[i]=A[boyut -i-1];
				A[boyut -i -1]=p;
			}
			cout<<"Dizi ters cevirildi."<<endl;
		}
		else if(deger==2)
		{
			/*display from console screen*/
			cout<<"Dizideki toplar: "<<endl;
			for (int i = 0; i < boyut; ++i)
			{
				SetConsoleTextAttribute(hConsole,15);//color reset

				cout<<"["<<i<<"]->";
				SetConsoleTextAttribute(hConsole,A[i]->ShowColorNumber());
				cout<<A[i]<<endl;

				/* code */
			}
			SetConsoleTextAttribute(hConsole,15);
			cout<<"Dizi basariyla yazdirildi"<<endl;

		}
		else if (deger==3)
		{
			break;
		}
		else{
			cout<<"Yanlis deger girdiniz.Tekrar deneyiniz.Devam etmek icin herhangi bir tusa basiniz."<<endl;
		}
		cin.get();
		/* code */
	} while (deger != 3);
	/*************end***************/


	/*delete object in to heap*/
	for (int i = 0; i < boyut; ++i)
	{
		/* code */
		delete A[i];
	}
	/*end*/
	return 0;
}