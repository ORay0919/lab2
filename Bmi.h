#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

class CalBmi
{
public:

void setheight(float );
void setmass (float );
void setbmi (float ); 
//set 變數
float getheight();
float getmass();
float getbmi();
//get 變數
float Bmi();

string CatG();


private:
	float b;
	float m;
	float h;
};





