#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float pecahan, vround, vceil, vfloor, vtrunc;
	
	cout << "Masukkan Bilangan Pecahan :";
	cin >> pecahan;
	
	vround = round(pecahan);
	vceil = ceil(pecahan);
	vfloor = floor(pecahan);
	vtrunc = trunc(pecahan);
	
cout << "Hasil Pembulatan Round: " << vround << endl;
cout << "Hasil Pembulatan Ceil: " << vceil << endl;
cout << "Hasil Pembulatan Floor: " << vfloor << endl;
cout << "Hasil Pembulatan Trunc: " << vtrunc << endl;

system ("PAUSE");
return 0;
}
