#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char s[100];
    cout<<"enter your name"<<endl;
    cin.getline(s,100);
    ofstream moifile("hello.txt");//by default opens the file
    //moifile.open("hello.txt");
    moifile<<s;
    moifile.close();


}