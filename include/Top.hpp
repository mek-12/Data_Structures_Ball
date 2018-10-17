/**
* @file             Test.cpp
* @description      Ana islem fonksiyonlarının bulunduğu dosya
* @course           2.Öğretim B
* @assignment       1
* @date             08/10/2017
* @author           Muhammed Emin KARABOĞA - emin.karaboga@ogr.sakarya.edu.tr
*/

#ifndef TOP_HPP
#define TOP_HPP

#include <iostream>
using namespace std;

class Top
{
	private:
		int colorNumber;
	public:
		Top(int);
		int ShowColorNumber();
};

#endif