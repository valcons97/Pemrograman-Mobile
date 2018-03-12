#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class CDatar
{
protected:
	string warna;
	double area;
public:
	CDatar(string a="",double ar=0):warna(a),area(ar)
	{}
	void setdatar(string a,double x)
	{
		warna=a;
		area=x;
	}
	void setwarna(string a)
	{
		warna=a;
	}
	void setarea(double x)
	{
		area=x;
	}
	string getwarna()
	{
		return warna;
	}
	double getarea()
	{
		return area;
	}
};

class CPersegi:public CDatar
{
protected:
	double sisi;
public:
	CPersegi(string a="",double x=0,double y=0):CDatar(a,x),sisi(y)
	{}
	void setpersegi(string a="",double y=0,double x=0)
	{
		CDatar::setdatar(a,x);
		sisi=y;
		double luas;
		luas=sisi*sisi;
		CDatar::setarea(luas);
	}
	double gets_sisi()
	{
		return sisi;
	}
	void display()
	{
		string a=CDatar::getwarna();
		cout<<"Color		: "<<a<<endl;
		cout<<"Sisi		: "<<sisi<<endl<<endl;
	}
	void displayarea()
	{
		string a=CDatar::getwarna();
		double area=CDatar::getarea();
		cout<<"Color		: "<<a<<endl;
		cout<<"Sisi		: "<<sisi<<endl;
		cout<<"Area		: "<<area<<endl<<endl;
	}
};

class CLingkaran:public CDatar
{
protected:
	double _r;
public:
	CLingkaran(string a="",double y=0,double x=0):CDatar(a,x),_r(y)
	{}
	void setlingkaran(string a="",double y=0,double x=0)
	{
		CDatar::setdatar(a,x);
		_r=y;
		double area=3.14*_r*_r;
		CDatar::setarea(area);
	}
	double get_r()
	{
		return _r;
	}
	void display()
	{
		string a=CDatar::getwarna();
		cout<<"Color		: "<<a<<endl;
		cout<<"Jari-Jari	: "<<_r<<endl<<endl;
	}
	void displayarea()
	{
		string a=CDatar::getwarna();
		double area=CDatar::getarea();
		cout<<"Color		: "<<a<<endl;
		cout<<"Jari-Jari	: "<<_r<<endl;
		cout<<"Area		: "<<area<<endl<<endl;
	}
};

class CSegitiga:public CDatar
{
protected:
	double alas,tinggi;
public:
	CSegitiga(string a="",double y=0,double z=0,double x=0):CDatar(a,x),alas(y),tinggi(z)
	{}
	void setsegitiga(string a="",double y=0,double z=0,double x=0)
	{
		CDatar::setdatar(a,x);
		alas=y;
		tinggi=z;
		double luas;
		luas=(alas*tinggi)/2;
		CDatar::setarea(luas);
	}
	double getalas()
	{
		return alas;
	}
	double gettinggi()
	{
		return tinggi;
	}
	void display()
	{
		string a=CDatar::getwarna();
		cout<<"Color		: "<<a<<endl;
		cout<<"Alas		: "<<alas<<endl;
		cout<<"Tinggi		: "<<tinggi<<endl<<endl;
	}
	void displayarea()
	{
		string a=CDatar::getwarna();
		double area=CDatar::getarea();
		cout<<"Color		: "<<a<<endl;
		cout<<"Alas		: "<<alas<<endl;
		cout<<"Tinggi		: "<<tinggi<<endl;
		cout<<"Area		: "<<area<<endl<<endl;
	}
};


void main()
{
	int a=0,b=0,c=0;
	double sisi,jari,alas,tinggi;
	int pil,pil1;
	char warna[100];
	CPersegi square[100];
	CLingkaran circle[100];
	CSegitiga triangle[100];

	do
	{
		system("CLS");
		cout<<"1. Input Data"<<endl;
		cout<<"2. Tampilkan Semua Data"<<endl;
		cout<<"3. Tampilkan Bangun Datar"<<endl;
		cout<<"4. Hitung Luas Semua Data"<<endl;
		cout<<"5. Exit"<<endl<<endl;

		cout<<"Pilihan	: ";
		cin>>pil;
		cout<<endl;

		if(pil==1)
		{
			system("CLS");
			cout<<"1. Persegi"<<endl;
			cout<<"2. Lingkaran"<<endl;
			cout<<"3. Segitiga"<<endl<<endl;
			cout<<"Pilihan	: ";
			cin>>pil1;
			cout<<endl;
			if(pil1==1)
			{
				cout<<"Input Warna	: ";
				fflush(stdin);
				gets_s(warna);
				cout<<"Input Sisi	: ";
				cin>>sisi;
				square[a].setpersegi(warna,sisi);
				a++;
			}
			else if(pil1==2)
			{
				cout<<"Input Warna	: ";
				fflush(stdin);
				gets_s(warna);
				cout<<"Input Jari-Jari	: ";
				cin>>jari;
				circle[b].setlingkaran(warna,jari);
				b++;
			}
			else if(pil1==3)
			{
				cout<<"Input Warna	: ";
				fflush(stdin);
				gets_s(warna);
				cout<<"Input Alas	: ";
				cin>>alas;
				cout<<"Input Tinggi	: ";
				cin>>tinggi;
				triangle[c].setsegitiga(warna,alas,tinggi);
				c++;
			}
		}
		else if(pil==2)
		{
			if(a!=0)
			{
				cout<<"Persegi"<<endl<<endl;
				for(int xyz=0;xyz<a;xyz++)
				{
					square[xyz].display();
				}
			}
			if(b!=0)
			{
				cout<<"Lingkaran"<<endl<<endl;
				for(int xyz=0;xyz<b;xyz++)
				{
					circle[xyz].display();
				}
			}
			if(c!=0)
			{
				cout<<"Segitiga"<<endl<<endl;
				for(int xyz=0;xyz<c;xyz++)
				{
					triangle[xyz].display();
				}
			}
			getch();
		}
		else if(pil==3)
		{
			system("CLS");
			cout<<"1. Persegi"<<endl;
			cout<<"2. Lingkaran"<<endl;
			cout<<"3. Segitiga"<<endl<<endl;
			cout<<"Pilihan	: ";
			cin>>pil1;
			cout<<endl;
			if(pil1==1)
			{
				if(a!=0)
				{
					cout<<"Persegi"<<endl<<endl;
					for(int xyz=0;xyz<a;xyz++)
					{
						square[xyz].display();
					}
				}
			}
			else if(pil1==2)
			{
				if(b!=0)
				{
					cout<<"Lingkaran"<<endl<<endl;
					for(int xyz=0;xyz<b;xyz++)
					{
						circle[xyz].display();
					}
				}
			}
			else if(pil1==3)
			{
				if(c!=0)
				{
					cout<<"Segitiga"<<endl<<endl;
					for(int xyz=0;xyz<c;xyz++)
					{
						triangle[xyz].display();
					}
				}
			}
			getch();
		}
		else if(pil==4)
		{
			if(a!=0)
			{
				cout<<"Persegi"<<endl<<endl;
				for(int xyz=0;xyz<a;xyz++)
				{
					square[xyz].displayarea();
				}
			}
			if(b!=0)
			{
				cout<<"Lingkaran"<<endl<<endl;
				for(int xyz=0;xyz<b;xyz++)
				{
					circle[xyz].displayarea();
				}
			}
			if(c!=0)
			{
				cout<<"Segitiga"<<endl<<endl;
				for(int xyz=0;xyz<c;xyz++)
				{
					triangle[xyz].displayarea();
				}
			}
			getch();
		}
	}
	while(pil!=5);

}