#include<iostream>
#include<math.h>

using namespace std;

long double *MatrixRotX(long double alf, long double *XYZ)
{
	long double M[3]={XYZ[0],XYZ[1]*cos(alf)-XYZ[2]*sin(alf),XYZ[1]*sin(alf)+XYZ[2]*cos(alf)} ;
	return M ;
}

long double *MatrixRotY(long double alf, long double *XYZ)
{
	long double M[3]={XYZ[0]*cos(alf)+XYZ[2]*sin(alf),XYZ[1],-XYZ[0]*sin(alf)+XYZ[2]*cos(alf)} ;
	return M ;
}

int main()
{
	long double s[3]={0,0,1} ;
	long double* Arr=MatrixRotX(1.5, s) ;
	for(int i=0; i<3; i++)
	{
		cout<<Arr[i]<<" " ;
	}
	cout<<endl;
	long double* Arm=MatrixRotY(1.5, s) ;
	for(int i=0; i<3; i++)
	{
		cout<<Arm[i]<<" " ;
	}
	return 0 ;
}
