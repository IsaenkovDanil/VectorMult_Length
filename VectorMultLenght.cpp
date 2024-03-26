
#include <iostream>
#include "VectorMultandLength.h"

using namespace std;




int main()

{
	setlocale(LC_ALL, "Russian");

	int size;
	while (true) {
	cout << "Введите size" << endl;
	cin >> size;
	if (!size) break;
	if( (size <2 and size<2) or (size <3 and size>3)) continue;
		
	        double arr[3] = { 0 };
			double brr[3] = { 0 };
			double crr[3] ;
			
			cout << "Введите первый вектор :  ";
			for (int i = 0; i < size; i++)
				cin >> arr[i];

			cout << endl;

			cout << "Введите второй вектор :  ";
			for (int i = 0; i < size; i++)
				cin >> brr[i];
			cout << endl;

			VectorMult(arr, brr, crr, size);
				cout << "Векторное произведение векторов :  ";
				for (int i = 0; i < 3; i++)
					cout << crr[i] << " ";
			
			cout << endl;
			cout << "Площадь параллелограмма  = ";
			cout << Squre(arr, brr, 3) << "    ";


		cout << endl << endl;	 
		}
		
	
	cout << endl;
	cout << "Приложение завершено"; cout << endl;
}