//#include<iostream>
//#include<string>
//#include<conio.h>
//#include<string.h>
//using namespace std;
//
//class CDisc
//{
//protected:
//	int harga;
//public:
//	CDisc(int x=0):harga(x)
//	{}
//	void setharga(int x)
//	{
//		harga=x;
//	}
//	int getharga()
//	{
//		return harga;
//	}
//};
//
//class CMusic:public CDisc
//{
//protected:
//	string artis;
//public:
//	CMusic(int x=0,string a=""):CDisc(x),artis(a)
//	{}
//	void setmusic(int x,string a)
//	{
//		CDisc::setharga(x);
//		artis=a;
//	}
//	string getartis()
//	{
//		return artis;
//	}
//};
//
//class CMusicI:public CMusic
//{
//protected:
//	int tahun;
//public:
//	CMusicI(int x=0,string a="",int y=0):CMusic(x,a),tahun(y)
//	{}
//	void setMusicI(int x,string a,int y)
//	{
//		CMusic::setmusic(x,a);
//		tahun=y;
//	}
//	int gettahun()
//	{
//		return tahun;
//	}
//	void display()
//	{
//		string a;
//		int harga;
//		a=CMusic::getartis();
//		harga=CMusic::getharga();
//
//		cout<<"Artis		: "<<a<<endl;
//		cout<<"Harga		: Rp. "<<harga<<endl;
//		cout<<"Tahun Rilis	: "<<tahun<<endl<<endl;
//	}
//};
//
//class CMusicM:public CMusic
//{
//protected:
//	string negara;
//public:
//	CMusicM(int x=0,string a="",string b=""):CMusic(x,a),negara(b)
//	{}
//	void setMusicM(int x,string a,string b)
//	{
//		CMusic::setmusic(x,a);
//		negara=b;
//	}
//	string getnegara()
//	{
//		return negara;
//	}
//	void display()
//	{
//		string a;
//		int harga;
//		a=CMusic::getartis();
//		harga=CMusic::getharga();
//
//		cout<<"Artis		: "<<a<<endl;
//		cout<<"Harga		: Rp. "<<harga<<endl;
//		cout<<"Negara Asal	: "<<negara<<endl<<endl;
//	}
//};
//
//class CFilm:public CDisc
//{
//protected:
//	string sutradara;
//public:
//	CFilm(int x=0,string a=""):CDisc(x),sutradara(a)
//	{}
//	void setfilm(int x,string a)
//	{
//		CDisc::setharga(x);
//		sutradara=a;
//	}
//	string getsutradara()
//	{
//		return sutradara;
//	}
//};
//
//class Cvcd:public CFilm
//{
//protected:
//	int durasi;
//public:
//	Cvcd(int x=0,string a="",int y=0):CFilm(x,a),durasi(y)
//	{}
//	void setvcd(int x,string a,int y)
//	{
//		CFilm::setfilm(x,a);
//		durasi=y;
//	}
//	int getdurasi()
//	{
//		return durasi;
//	}
//	void display()
//	{
//		string a;
//		int harga;
//		a=CFilm::getsutradara();
//		harga=CFilm::getharga();
//
//		cout<<"Sutradara	: "<<a<<endl;
//		cout<<"Harga		: Rp. "<<harga<<endl;
//		cout<<"Durasi		: "<<durasi<<endl<<endl;
//	}
//};
//
//class Cdvd:public CFilm
//{
//protected:
//	char asli;
//public:
//	Cdvd(string a="",int x=0,char b=' '):CFilm(x,a),asli(b)
//	{}
//	void setdvd(string a,int x,char b)
//	{
//		CFilm::setfilm(x,a);
//		asli=b;
//	}
//	char getasli()
//	{
//		return asli;
//	}
//	void display()
//	{
//		string a;
//		string genuine;
//		int harga;
//		a=CFilm::getsutradara();
//		harga=CFilm::getharga();
//		if(asli=='y' || asli=='Y')
//		{
//			genuine="Asli";
//		}
//		else
//		{
//			genuine="Palsu";
//		}
//
//		cout<<"Sutradara	: "<<a<<endl;
//		cout<<"Harga		: Rp. "<<harga<<endl;
//		cout<<"Genuine		: "<<genuine<<endl<<endl;
//	}
//};
//
//class Cgame:public CDisc
//{
//protected:
//	string produser;
//public:
//	Cgame(string a="",int x=0):CDisc(x),produser(a)
//	{}
//	void setgame(string a,int x)
//	{
//		CDisc::setharga(x);
//		produser=a;
//	}
//	string getproduser()
//	{
//		return produser;
//	}
//	void display()
//	{
//		string a;
//		int harga;
//		harga=CDisc::getharga();
//
//		cout<<"Produser	: "<<produser<<endl;
//		cout<<"Harga		: Rp. "<<harga<<endl<<endl;
//	}
//};
//
//class CBlank:public CDisc
//{
//protected:
//	int kapasitas;
//public:
//	CBlank(int x=0,int y=0):CDisc(x),kapasitas(y)
//	{}
//	void setblank(int x,int y)
//	{
//		CDisc::setharga(x);
//		kapasitas=y;
//	}
//	int getkapasitas()
//	{
//		return kapasitas;
//	}
//	void display()
//	{
//		int harga;
//		harga=CDisc::getharga();
//
//		cout<<"Kapasitas	: "<<kapasitas<<endl;
//		cout<<"Harga		: Rp. "<<harga<<endl<<endl;
//	}
//};
//void main()
//{
//	int a,b,c,d,e,f,pil,harga,tahun,durasi,kapasitas;
//	char artis[100],negara[100],sutradara[100],asli,produser[100];
//	CMusicI musici[100];
//	CMusicM musicm[100];
//	Cvcd vcda[100];
//	Cdvd dvda[100];
//	Cgame gamea[100];
//	CBlank blanka[100];
//	a=0,b=0,c=0,d=0,e=0,f=0;
//	do
//	{
//		system("CLS");
//		cout<<"Menu"<<endl<<endl;
//		cout<<"1.	Input Musik Indonesia"<<endl;
//		cout<<"2.	Input Musik Internasional"<<endl;
//		cout<<"3.	Input VCD"<<endl;
//		cout<<"4.	Input DVD"<<endl;
//		cout<<"5.	Input CD Game"<<endl;
//		cout<<"6.	Input Blank"<<endl;
//		cout<<"7.	Display All"<<endl;
//		cout<<"8.	Exit"<<endl<<endl;
//
//		cout<<"Pilihan	: ";
//		cin>>pil;
//		cout<<endl;
//
//		if(pil==1)
//		{
//			cout<<"Input Artis	: ";
//			fflush(stdin);
//			gets(artis);
//			cout<<"Input Harga	: ";
//			cin>>harga;
//			cout<<"Input Tahun	: ";
//			cin>>tahun;
//			musici[a].setMusicI(harga,artis,tahun);
//			a++;
//		}
//		else if(pil==2)
//		{
//			cout<<"Input Artis	: ";
//			fflush(stdin);
//			gets(artis);
//			cout<<"Input Harga	: ";
//			cin>>harga;
//			cout<<"Input Negara	: ";
//			fflush(stdin);
//			gets(negara);
//			musicm[b].setMusicM(harga,artis,negara);
//			b++;
//		}
//		else if(pil==3)
//		{
//			cout<<"Input Sutradara	: ";
//			fflush(stdin);
//			gets(sutradara);
//			cout<<"Input Harga	: ";
//			cin>>harga;
//			cout<<"Input Durasi	: ";
//			cin>>durasi;
//			vcda[c].setvcd(harga,sutradara,durasi);
//			c++;
//		}
//		else if(pil==4)
//		{
//			cout<<"Input Sutradara		: ";
//			fflush(stdin);
//			gets(sutradara);
//			cout<<"Input Harga		: ";
//			cin>>harga;
//			cout<<"Input Genuine (Y/N)	: ";
//			cin>>asli;
//			dvda[d].setdvd(sutradara,harga,asli);
//			d++;
//		}
//		else if(pil==5)
//		{
//			cout<<"Input Produser	: ";
//			fflush(stdin);
//			gets(produser);
//			cout<<"Input Harga	: ";
//			cin>>harga;
//			gamea[e].setgame(produser,harga);
//			e++;
//		}
//		else if(pil==6)
//		{
//			cout<<"Input Kapasitas	: ";
//			cin>>kapasitas;
//			cout<<"Input Harga	: ";
//			cin>>harga;
//			blanka[f].setblank(harga,kapasitas);
//			f++;
//		}
//		else if(pil==7)
//		{
//			if(a!=0)
//			{
//				cout<<"Music Indonesia"<<endl<<endl;
//				for(int xyz=0;xyz<a;xyz++)
//				{
//					musici[xyz].display();
//				}
//			}
//			if(b!=0)
//			{
//				cout<<"Music Internasional"<<endl<<endl;
//				for(int xyz=0;xyz<b;xyz++)
//				{
//					musicm[xyz].display();
//				}
//			}
//			if(c!=0)
//			{
//				cout<<"VCD"<<endl<<endl;
//				for(int xyz=0;xyz<c;xyz++)
//				{
//					vcda[xyz].display();
//				}
//			}
//			if(d!=0)
//			{
//				cout<<"DVD"<<endl<<endl;
//				for(int xyz=0;xyz<d;xyz++)
//				{
//					dvda[xyz].display();
//				}
//			}
//			if(e!=0)
//			{
//				cout<<"Game"<<endl<<endl;
//				for(int xyz=0;xyz<e;xyz++)
//				{
//					gamea[xyz].display();
//				}
//			}
//			if(f!=0)
//			{
//				cout<<"Blank"<<endl<<endl;
//				for(int xyz=0;xyz<f;xyz++)
//				{
//					blanka[xyz].display();
//				}
//			}
//			getch();
//		}
//	}
//	while(pil!=8);
//}