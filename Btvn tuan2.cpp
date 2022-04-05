#include<iostream.h>
#include<string.h>
#include<iomanip.h>

using namespace std; 

struct ngaysinh
{
	int ngay, thang, nam; 
};

class khachhang
{
private:
	char hoten[30]; 
	ngaysinh ns; 
	char cmt[10];	
	char hokhau[50];

public:

	friend ostream& operator << (ostream &os, khachhang a);
	friend istream& operator >> (istream &is, khachhang &a);
	void nhapds(khachhang a[],int &n);
	void inds(khachhang a[],int n);
	bool operator > (khachhang a);
	void sapxep(khachhang a[],int &n);
	void snthang12(khachhang a[],int n);
};

istream& operator >>(istream &is, khachhang &a)
{
	cout << " Nhap ho va ten : ";
	is.getline(a.hoten, 30);

	cout << " Nhap ngay sinh : ";
	do
	{
		is >> a.ns.ngay; 
		if (a.ns.ngay <= 0 || a.ns.ngay > 31)
		{ 
		cout << " Nhap lai di @@ : ";
			}
	} while (a.ns.ngay <= 0 || a.ns.ngay > 31);

	cout << " Nhap thang sinh : ";
	do
	{
		is >> a.ns.thang;
		if (a.ns.thang <= 0 || a.ns.thang > 12)
		{ 
		cout << " Nhap lai di @@ : ";
			}
	} while (a.ns.thang <= 0 || a.ns.thang > 12);

	cout << " Nhap nam sinh : ";
	do
	{
		is >> a.ns.nam;
		if (a.ns.nam <= 0 )
		{ 
		cout << " Nhap lai di @@ : ";
		}
	} while (a.ns.nam <= 0 );

	is.ignore();


	cout << " Nhap so chung minh thu : ";
	is.getline(a.cmt, 10);

	cout << " Nhap so ho khau : ";
	is.getline(a.hokhau, 50);	
	return is;
}

ostream& operator <<(ostream& os, khachhang a) 
{
	os	<< setw(15)<< right << a.hoten	
		<< setw(15)<< right << a.ns.ngay << setw(1) << "/" << setw(1) << a.ns.thang << setw(1) << "/" << setw(1) << a.ns.nam	
		<< setw(15)<< right << a.cmt
		<< setw(15)<< right << a.hokhau << endl;

	return os;
}

void tieude()
{
	cout<< setw(17)<< right << " Ho Ten "
		<< setw(15)<< right << " Ngay Thang Nam Sinh "
		<< setw(15)<< right << " Chung Minh Thu "
		<< setw(15)<< right << " Ho Khau "<< endl;

}

void khachhang ::inds(khachhang a[],int n)
{
	cout<<"\n\t\t Danh sach khach hang \n" ;
	tieude();
	for(int i = 0; i < n; i++)
	{
		cout <<"" ;
		cout <<a[i] ;		
	}
}

void khachhang ::nhapds(khachhang a[],int &n)
{

	for(int i = 0; i < n; i++)
	{
		cout << "\n\t\t Khach hang thu " << i + 1 << endl ;
		cin >> a[i] ;
	}	
}

bool khachhang :: operator > (khachhang a)
{
	if(strcmp(this->hoten,a.hoten)==1)
	{
		return true;
		}
	else
	{
		return false;
		}	
}

void khachhang :: sapxep(khachhang a[],int &n)
{
	khachhang tangdan;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
	 			tangdan = a[i] ;
				a[i] = a[j] ;
				a[j] = tangdan ;
				}
			}
		}
}

void khachhang ::snthang12(khachhang a[],int n)
{
	cout<<"\n\t\t Danh sach khanh hang sinh thang 12 \n";
	int dem = 0;
	for(int i = 1; i < n; i++)
		if(a[i].ns.thang == 12)
		{
			++dem;
			if(dem == 1)
			{
				tieude();;
				cout<<" ";
				cout<<a[i];
			}
		}
	if(dem == 0)
	{
		cout<<"\n\t\t khong co khanh hang sinh thang 12 \n";	
		}
}

int main()
{
	int n; 
	cout << " Nhap so luong khach hang : ";
	do
	{
		cin >> n; 
		if (n <= 0)
		{ 
		cout << " Nhap lai : ";
		}
	} while (n <= 0);

	cin.ignore();

	khachhang a[1000];
	a[n].nhapds(a,n);
	a[n].inds(a,n);
	cout << endl ;
	a[n].sapxep(a,n);
	cout << " Danh sach sap xep thu tu tang dan ho ten " ;
	a[n].inds(a,n);
	cout << endl ;
	a[n].snthang12(a,n);
	return 0;


}