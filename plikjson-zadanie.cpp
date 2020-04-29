#include <iostream>
#include <cstdlib>
#include <fstream>
 
using namespace std;
 
int main()
{
    int tablica[1000];
 
 	int liczba;
    string linia;
    fstream plik;
 
    plik.open("c:\\plikWejsciowy.txt",ios::in);
    
    if(plik.good() == true)
   
        while(!plik.eof())
        
            getline(plik, linia);
            cout << linia << endl;
   
    ofstream plik2;              
    plik2.open("c:\\plik.json",ios::out); 
    plik2<<" [  \n { \n \"liczba\" : \" "<<liczba ;
    plik2<<" [  \n { \n \"liczba\" : \" "<<liczba ;
    plik2<<" [  \n { \n \"liczba\" : \" "<<liczba ;
	plik2<<endl;   
 
 	const int n = 10;
 	int i;
 	int t[n];
 {
 
    for(i=0;i<n;i++)
   	plik2<<t[i];
 }
   	plik.close(); plik2.close();
 
    return 0;
}
