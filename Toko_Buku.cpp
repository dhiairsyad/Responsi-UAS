#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <cstring>
using namespace std;
class responsi
{
public :
void input();
void proses();
void output();
private :
int stok[100],terjual[100],jmlh,tmp,d,i;
string judul[100],id[100],tmp1,penulis[100],s;
};
void responsi::input()
{
  cout<<"Masukan jumlah data buku : ";cin>>jmlh;
  for (i=0; i<jmlh; i++)
    {
      cin.ignore();
      cout<<"ID       : ";getline(cin,id[i]);
      cout<<"Judul    : ";getline(cin,judul[i]);
      cout<<"Penulis  : ";getline(cin ,penulis[i]);
      cout<<"Stok     : ";cin>>stok[i];
      cout<<"Terjual  : ";cin>>terjual[i];
      cout<<endl;
    }
}
void responsi::proses()
{
  for (int i = 1; i < jmlh; i++) 
    {
      for (int d = 0; d < jmlh - i; d++) 
      {
        if (stok[d] < stok[d + 1]) 
        {
          tmp = stok[d];
          stok[d] = stok[d + 1];
          stok[d + 1] = tmp;
          
        tmp1 = id[d];
        id[d] = id[d+ 1];
        id[d+1] = tmp1;

        tmp1 = judul[d];
        judul[d] = judul[d+ 1];
        judul[d+1] = tmp1;

        tmp1 = penulis[d];
        penulis[d] = penulis[d+ 1];
        penulis[d+1] = tmp1;

        tmp = terjual[d];
        terjual[d] = terjual[d + 1];
        terjual[d + 1] = tmp;
          
          
        }
      }
    }
  cout<<"| ID  |     Judul     |     Penulis     | Stok | Terjual |"<<endl;
   for (int i = 0; i < jmlh; i++) 
    {
      cout<<"|"<<id[i]<<"\t|\t"<<judul[i]<<"\t|\t"<<penulis[i]<<"\t|\t"<<stok[i]<<"\t|\t"<<terjual[i]<<"\t|"<<endl;
    }
}

void responsi::output()
{
  	cout << "Cari : ";
	cin.ignore();
	getline(cin,s);
	for(int i = 0; i < jmlh ; i++)
  {
		if(penulis[i] == s)
    {
      cout<<"Ditemukan : "<<endl;
      cout<<"ID      : "<<id[i]<<endl;
      cout<<"Judul   : "<<judul[i]<<endl;
	  cout<<"penulis : "<<penulis[i]<<endl;
      cout<<"Stok    : "<<stok[i]<<endl;
      cout<<"Terjual : "<<terjual[i]<<endl;
      cout<<endl;
    }
  }
}

int main ()
{
	responsi x;
	x.input();
	x.proses();
	x.output();
	return 0;
}