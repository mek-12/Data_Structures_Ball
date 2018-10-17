/**
* @file             Test.cpp
* @description      Ana islem fonksiyonlarının bulunduğu dosya
* @course           2.Öğretim B
* @assignment       1
* @date             08/10/2017
* @author           Muhammed Emin KARABOĞA - emin.karaboga@ogr.sakarya.edu.tr
*/

#include "Top.hpp"

Top::Top(int A){
	colorNumber = A;
}

int Top::ShowColorNumber(){
	return colorNumber;
}