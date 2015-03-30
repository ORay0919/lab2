#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include "Bmi.h"

using namespace std;

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
	outfile<<"==================="<<endl;


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



