#include <iostream>
using namespace std;
float Vtax(int vehicleprice, string code);
main()
{
int vehicleprice;
string code;
cout<<"enter code m for motorcycle"<<endl;
cout<<"enter code t for truck"<<endl;
cout<<"enter code e for electric"<<endl;
cout<<"enter code s for sedan"<<endl;
cout<<"enter code v for van"<<endl;
cout<<"enter vehicle price:";
cin >> vehicleprice;
cout <<"enter code of vehicle:";
cin >> code;
float VFinal =  Vtax( vehicleprice, code);
cout <<"final price after tax:"<<VFinal;
}
float Vtax(int vehicleprice, string code)
{
if(code == "m")
{
 int taxamount = (vehicleprice*6)/100;
 int finalprice = vehicleprice + taxamount;
return finalprice;
}
if(code == "e")
{
 int taxamount = (vehicleprice*8)/100;
 int finalprice = vehicleprice + taxamount;
return finalprice;
}
if(code == "s")
{
 int taxamount = (vehicleprice*10)/100;
 int finalprice = vehicleprice + taxamount;
return finalprice;
}
if(code == "v")
{
 int taxamount = (vehicleprice*12)/100;
 int finalprice = vehicleprice + taxamount;
return finalprice;
}
if(code == "t")
{
 int taxamount = (vehicleprice*15)/100;
 int finalprice = vehicleprice + taxamount;
return finalprice;
}
 return 0;
}
