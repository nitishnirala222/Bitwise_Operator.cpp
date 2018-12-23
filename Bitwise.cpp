#include<iostream>
using namespace std;
int main()
{
unsigned int a=5;   //60=00111100
unsigned int b=9;  //13=00001101
int c;
c=a&b;
cout<<"Line 1-value of c is: "<<c<<endl;
c=a|b;
cout<<"Line 2-value of c is: "<<c<<endl;
c=a^b;
cout<<"Line 3-value of c is: "<<c<<endl;
c=~a;
cout<<"Line 4-value of c is: "<<c<<endl;
c=b<<1;
cout<<"Line 5-value of c is: "<<c<<endl;
c=a>>1;
cout<<"Line 6-value of c is: "<<c<<endl;
return 0;
}
