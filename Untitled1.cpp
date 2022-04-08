#include<iostream.h>
using namespace std;
 //dm wibu 
// Function for extended Euclidean Algorithm
void gcdExtended(int a, int b)
{
	int d,x,y;
	if(b==0){
		d=a;
		x=1;
		y=0;
		cout<<d<<x<<y;
	}
	int x2=1,x1=0,y2=0,y1=1;
	int q,r;
	while(b!=0){
		q=a/b;
		r=a-q*b;
		x=x2-q*x1;
		y=y2-q*y1;
		a=b;
		b=r;
		x2=x1;
		x1=x;
		y2=y1;
		y1=y;
	}
	d=a;
	x=x2;
	y=y2;
	cout<<d<<" "<<x<<" "<<y;
}
 /*void nghichdaozn(int a,int b){
 	int d,x,y;
	if(b==0){
		d=a;
		x=1;
		y=0;
		cout<<d<<x<<y;
	}
	int x2=1,x1=0,y2=0,y1=1;
	int q,r;
	while(b!=0){
		q=a/b;
		r=a-q*b;
		x=x2-q*x1;
		y=y2-q*y1;
		a=b;
		b=r;
		x2=x1;
		x1=x;
		y2=y1;
		y1=y;
	}
	d=a;
	x=x2;
	y=y2;
	if(d>1){
		cout<<"khong ton tai";
		else
		cout<<x;
 	
 }*/
// Driver Code
int main()
{
    int a = 4864, b = 3458;
    gcdExtended(a, b);
    
    return 0;
}