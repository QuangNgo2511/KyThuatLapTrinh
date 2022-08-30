#include <iostream>
using namespace std;

int SoViTrung(int n, int k, int h)
{
	if(h == 0) return n;
	return k * SoViTrung(n, k, h-1);
}
int main()
{
	int n=2, k=2, h=5;
	cout << SoViTrung(n,k,h) << endl;
	return 0;
}
