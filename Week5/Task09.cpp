#include<iostream>
using namespace std;
void timetravel(int hrs, int mins);
main(){
	cout<<"Enter Hours: ";
	int hrs;
	cin>>hrs;
	cout<<"Enter Minutes: ";
	int mins,time;
	cin>>mins;
	
	
	
	timetravel(hrs,mins);

}
void timetravel(int hrs, int mins)
{	int time;
	time=mins+15;
    int newTime=hrs+1;
	int newmins=time-60;
	if(hrs=23){
		newTime=0;
	}
	if(hrs>23)
	{hrs=0;}
	if(time>60){
 
	cout<<newTime<<":"<<newmins;}
	
	

	if(time<=60){
	cout<<hrs<<":"<<time;}
	
	}




	
	