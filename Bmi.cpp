#include "Bmi.h"

void CalBmi::setheight(float height){h=height;}
void CalBmi::setmass (float mass){m=mass;}
void CalBmi::setbmi (float bmi) {b=bmi;}
//set 變數
float CalBmi::getheight(){return h;}
float CalBmi::getmass(){return m;}
float CalBmi::getbmi(){return b;}
//get 變數
float CalBmi::Bmi()
{
getheight();
getmass();
	float B;
	B=m/(h*h/10000);//計算BMI KG/M2
	return B;
}

string CalBmi::CatG()
{
getbmi();
string g;

	if(b<15)
		g="Very severely underweight";
	else if(b<16)
		g="Severely underweight";
	else if(b<18.5)
		g="Underweight";
	else if(b<25)
		g="Normal";
	else if(b<30)
		g="Overweight";
	else if(b<35)
		g="Obese Class I(Moderately obese)";
	else if(b<40)
		g="Obese Class II(Severely obese)";
	else if(b>=40)
		g="Obese Class III(Very severely obese)";
	//根據BMI值去分類
		return g;
}





