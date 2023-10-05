#include <iostream>
using namespace std;
void calculatePoolState(int v, int p1, int p2, float h);
main(){
	int volume;
	float hrs;
	int f1;
	int f2;
	cout<<"Enter volume of the pool in liters: ";
	cin>>volume;
	cout<<"Enter flow rate of the first pipe per hour: ";
	cin>>f1;
	cout<<"Enter flow rate of the second pipe per hour: ";
	cin>>f2;
	cout<<"Enter hours that the worker is absent: ";
	cin>>hrs;
	calculatePoolState(volume,f1,f2,hrs);

}
void calculatePoolState(int v, int p1, int p2, float h)
{
	int pool=(p1+p2)*h;
	int per1=(p1*h)/pool*100;
	int per2=(p2*h)/pool*100;
	int percent=pool/10;
	string result="";
	int overflow=pool-v;
	if(pool<=v){
	cout<<"The pool is "<<percent<<"% full. Pipe 1: "<<per1<<"%. Pipe 2: "<<per2<<"%.";
	}
	if(pool>v){
	cout<<"For "<<h<<" hours, the pool overflows with "<<overflow<<" liters.";}
	
}
