#include <iostream>
using namespace std;

int Nhap()
{
	int x;
	do
	{
		cin>>x;
		if(x<1)
			cout<<"Nhap sai, yeu cau nhap lai!";
	}while(x<1);
	return x;
}

float Tinh(int n)
{
	float s=0, t=0;
	for(int i=1; i<=n; i++)
	{
		t=t+i;
		s=s+(float)1/t;
	}
	return s;
}

int main()
{
	int n; 
	cout<<"Nhap so nguyen n: ";
	n=Nhap();
	cout<<"Ket qua la: "<< Tinh(n);
	cout<<endl;
}
