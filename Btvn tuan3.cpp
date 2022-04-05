#include<iostream.h>
// Nhap tu 1 den 7 va in ra man hinh cac thu trong tuan: 1-monday,...
void bai1()
{
	int n;
	do{
		cout<<"\nNhap vao so tu 1 den 7: "<<endl;
		cin>>n;
	}while(n<1 && n>7);
	if(n==1)
	cout<<"Sunday"<<endl;
	else if(n==2)
	cout<<"Monday"<<endl;
	else if(n==3)
	cout<<"Tuesday"<<endl;
	else if(n==4)
	cout<<"Wednesday"<<endl;
	else if(n==5)
	cout<<"Thursday"<<endl;
	else if(n==6)
	cout<<"Friday"<<endl;
	else 
	cout<<"Satuday"<<endl;
}
void bai2()
{
	float n,tien;
	do{
		cout<<"\nNhap vao so KW dien: "<<endl;
		cin>>n;
	}while(n<0);
	if(n>=0&&n<=100)
	{
		tien=2000*n;
		cout<<"\nTien dien = "<<tien<<endl;
	}
	if(n>=101&&n<=200)
	{
		tien=2500*n;
		cout<<"\nTien dien = "<<tien<<endl;
	}
	if(n>300)
	{
		tien=5000*n;
		cout<<"\nTien dien = "<<tien<<endl;
	}
}
int bai3()
{
	int n, p=1;
	cout<<"\nNhap n= ";
	cin>>n;
	for(int i=1; i<=n;i++)
	{	
		p=p*(2*i);	
	}
	cout<<"\nTich P=2*4*6*...*2n là: "<<p<<endl;
	return 0;
}
int bai4()
{
	int n;
	cout<<"\nNhap chieu cao cua tam giac n= ";
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		for(int j=1;j<=n+1-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;		
	}
	return 0;
}
int main()
{
	bai1();
	bai2();
	bai3();
	bai4();
} 
