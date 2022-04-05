#include <iostream.h>
void	input(int  b[],int m)
{	for (int i=0;i<m;i++)
     {
        cout<<"b["<<i<<"]=";
        cin>>b[i];
     }
} 
int main ()
{
	int a[100], n, x;
	cout<<"Nhap so phan tu mang: "; cin>>n;	
	input(a,n);
	for (int i=n-1;i>=0;i--)
	 {cout<<a[i]<<"\t";
	 }
	 return 0;
	 }
