/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


class Album {
    public: 
        int Year;
        string BandName, AlbumTitle;
        
    Album(string BandName, string AlbumTitle, int Year){
        this-> BandName = BandName;
        this-> AlbumTitle = AlbumTitle;
        this-> Year = Year;
        cout << "Band: " << BandName << "\nAlbum: " << AlbumTitle << "\nYear: "<< Year << endl;
    }
    Album(string BandName, string AlbumTitle){
        this-> BandName = BandName;
        this-> AlbumTitle = AlbumTitle;
        cout << "Band: " << BandName << "\nAlbum: " << AlbumTitle<< endl;
    }
    Album(string BandName){
        this-> BandName = BandName;
        this-> AlbumTitle = BandName;
        cout << "Band: " << BandName << "\nAlbum: " << AlbumTitle<< endl;
    }
    void rate(int Rating){
        cout << BandName << " - " <<AlbumTitle << " Is: " << Rating << endl;
        
    }
};

int main()
{
    Album album1("Slint", "Spiderland", 1991);
    Album album2("Radiohead", "OK computer");
    Album album3("Led Zeppelin");
    album1.rate(8);
    album2.rate(10);
    album3.rate(9);
}
