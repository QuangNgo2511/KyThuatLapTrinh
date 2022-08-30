#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

struct Point{
	float x;
	float y;
};

void NhapDiem(Point &p){
	cout<<"Nhap hoanh do x:";
	cin>>p.x;
	
	cout<<"Nhap tung do y:";
	cin>>p.y;
}

void InDiem(Point p){
	cout<<"x: "<<p.x<<" ;y: "<<p.y<<endl;
}

void NhapDSDiem(Point p[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		NhapDiem(p[i]);
	}
}

void InDSDiem(Point p[], int n)
{
	for(int i = 0; i < n; i++)
	{
		InDiem(p[i]);
	}
}


float tinhKCDiem(Point d1, Point d2){
	return (double (sqrt(pow((d1.x - d2.x),2)+ pow((d1.y - d2.y),2))));
}

void DiemGanNhat(Point p[], int n){

	int vtD1 = 0, vtD2 = 1;
	float min = 999999;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(tinhKCDiem(p[i],p[j]) < min)
			{
				vtD1 = i;
				vtD2 = j;
				min = tinhKCDiem(p[i],p[j]);
			}
		}
	}
	
	cout<<"Diem gan nhau nhat: \n";
	InDiem(p[vtD1]);
	InDiem(p[vtD2]);	
}
void GhiFile(Point p[], int n){
	ofstream ofs("points.txt");
    if(!ofs){
        cerr << "Error: file not opened." << endl;
        return;
    }
    ofs<<n<<endl;
    for (int i = 0; i <n; i++) {
        ofs << p[i].x << ' ' <<  p[i].y<< endl;
    }
    ofs.close();
}

void DocFile(Point p[], int &n){
	ifstream ifs("points.txt");
    if(!ifs){
        cerr << "Error: file not opened." << endl;
        return;
    }
	ifs >> n;
   	
    for (int i = 0; i <n; i++) {
        ifs >> p[i].x ;
        ifs >> p[i].y ;
    }
}

void XoaPT(Point p[], int &n, int vT)
{
	for (int i = vT; i < n; i++)
	{
		p[i].x = p[i+1].x;
		p[i].y = p[i+1].y;
	}
	n--;
}

void xoaTrung(Point p[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n ; j++)
		{
			if(p[i].x == p[j].x && p[i].y == p[j].y)
			{XoaPT(p,n,j);
			j--;}
		}
	}
}

int main()
{
	Point p[100];
	int n;	
	cout<<"Nhap so diem n: ";
	cin>>n;
	cout<<"Nhap DS Diem: "<<endl;
	NhapDSDiem(p,n);
	GhiFile(p,n);
	DocFile(p,n);
	cout<<"In DS Diem: "<<endl;
	InDSDiem(p,n);
	DiemGanNhat(p, n);
	cout<<endl;
	
	cout<<"Xoa phan tu trung: \n";	
	xoaTrung(p,n);
	InDSDiem(p,n);
	return 0;
}
