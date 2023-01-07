#include <iostream>
using namespace std;
int volume(int length , int width , int height);

main()
{
    int length,width,height;
    string unit;

    cout<<"enter length :";
    cin >> length;
    cout<<"enter width  :";
    cin >> width;
    cout <<"enter height :";
    cin >> height;
    cout<<"enter unit:";
    cin >> unit;
    if(unit == "centimeters")
    {
 
    int product = length * width * height;
    int volumePyramidcm = product / 3;
    int volumePyramid = volumePyramidcm * 1000000 ; 
    cout <<"volume of pyramid in cubic meters :"<< volumePyramid;
    }
    if(unit=="millimeter")
    {
    int product = length * width * height;
    int volumePyramidcm = product / 3;
    int volumePyramid = volumePyramidcm * 1000000000 ;
     cout<<"volume in cubicmeter:"<<volumePyramidcm;

    }
    if(unit =="kilometer" )
    {
    int product = length * width * height;
    int volumePyramidcm = product / 3;
    int volumePyramid = volumePyramidcm /1000000000 ;
     cout<<"volume in cubimeter:"<<volumePyramidcm;
     
    }
    if(unit == "meter")
    {
    int product = length * width * height;
    int volumePyramidcm = product / 3;
    cout<<"volume in cubic meter:"<<volumePyramidcm;

    }
}
