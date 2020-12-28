#include <iostream>
using namespace std;
int main()
{
	int i, no, jumlah, maksimum, minimum, total=0;
	double rata;
	
    cout << "Masukkan banyak angka : ";
    cin >> jumlah;

    int array[jumlah];

    for(i=0; i < jumlah; i++)
    {
		no = i+1;
		cout << "Angka ke-"<< no << " : ";
		cin >> array[i];
    }
    
    cout << "\n_______Hasil_______\n";
 
    cout << "Deret	         : ";
    for(i=0; i < jumlah; i++)
    {
		cout << array[i] << " ";
	}
	
    cout << "\nMaksimum         : ";
    maksimum = array[0];
    for(i=0; i < jumlah; i++) 
    {
		if (array[i] > maksimum) 
		{
			maksimum = array[i];
		}
	}
	cout << maksimum;
 
    cout << "\nMinimum	         : ";
    minimum = array[0];
    for(i=0; i < jumlah; i++) 
    {
		if (array[i] < minimum) 
		{
			minimum = array[i];
		}
	}
	cout << minimum;
	
	cout << "\nRata-rata        : ";
    for(i=0; i < jumlah; i++) 
    {
		total += array[i];
	}
	rata = ((double)total) / jumlah;
	cout << rata;
	
	cout << "\nSelisih Maksimum : ";
    cout << rata;
	
return 0;
}

