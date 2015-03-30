#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

class CalBmi
{
public:

void setheight(float height){h=height;}
void setmass (float mass){m=mass;}
void setbmi (float bmi) {b=bmi;}
//set 變數
float getheight(){return h;}
float getmass(){return m;}
float getbmi(){return b;}
//get 變數
float Bmi()
{
getheight();
getmass();
	float B;
	B=m/(h*h/10000);//計算BMI KG/M2
	return B;
}

string CatG()
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


private:
	float h;
	float m;
	float b;
};



int main()
{
CalBmi myBmi;

ifstream infile("file.in",ios::in);
  if(!infile)
	cout<<"Failed opening!!!"<<endl;
//INPUT FILE AND CHECK

ofstream outfile("file.out",ios::out);
  if(!outfile)
	cout<<"Failed writing!!!"<<endl;
//OUTPUT FILE AND CHECK

	outfile<<"BMI"<<"        "<<"CATEGORY"<<endl;
	outfile<<"================"<<endl;


string Sheight,Smass;
while(1)
{	
getline(infile,Sheight,' ');
getline(infile,Smass,'\n');
//存取字串
	stringstream Th,Tm;
	float height,mass;
	Th<<Sheight; Th>>height;
	Tm<<Smass; Tm>>mass;//將字串改成數字使用
	if(height==0&&mass==0)
		break;	//停止條件

myBmi.setheight(height);
myBmi.setmass(mass);
myBmi.setbmi(myBmi.Bmi());

outfile<<myBmi.Bmi()<<"    "<<myBmi.CatG()<<endl;

}

infile.close();
outfile.close();
/*while(1)
{
int H,M;
infile>>H>>M;//直接存取檔案內容為數字使用!!!
if(H==0)
break;
cout<<H  <<M <<  '\n'<<endl;
}*/

}



