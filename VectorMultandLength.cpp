#include<cmath>
#include "VectorMultandLength.h"
void	VectorMult(double M1[3], double M2[3], double VM[3], int n)
{
	VM[0] = M1[1] * M2[2] - (M1[2] * M2[1]);

	VM[1] = (-1) * (M1[0] * M2[2]) + M1[2] * M2[0];

	VM[2] = M1[0] * M2[1] - (M1[1] * M2[0]);

}
double Scalar(double M1[3], double M2[3], int n)
{
	double S = 0;
	for (int i = 0; i < 3; i++)
	{
		S += M1[i] * M2[i];
	}
	return S;
}

double Length(double* M1, int n)
{
	return sqrt(Scalar(M1, M1, n));
}

double Squre(double M1[3], double M2[3], int n)
{
	double  VM[3]; 
	VectorMult(M1, M2,VM ,n);
	
	return Length(VM,n);

}


