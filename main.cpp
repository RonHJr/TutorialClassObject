#include <iostream>
#include <string>

using namespace std;

class Brother{
public:
    void setName(string a){
        name = a;
    }
    string getName(){
        return name;
    }

    void setMajor(string b){
        major = b;
    }
    string getMajor(){
        return major;
    }

    void setHometown(string c){
        hometown = c;
    }
    string getHometown(){
        return hometown;
    }
    void setYear(int d){
        year = d;
    }
    int getYear(){
        return year;
    }
private:
    string name;
    string major;
    string hometown;
    int year;
};

int main() {

    Brother bro;

    string nme;
    cout << "Insert Brother's Name:" << flush;
    getline(cin, nme);
    bro.setName(nme);

    string maj;
    cout << "Insert Brother's Major:" << flush;
    getline(cin, maj);
    bro.setMajor(maj);

    string hom;
    cout << "Insert Brother's Hometown:" << flush;
    getline(cin, hom);
    bro.setHometown(hom);

    int yr = 0;
    cout << "Insert Brother's Grad Year:" << flush;
    cin >> yr;
    bro.setYear(yr);

    cout << "Results:" << endl << flush;
    cout << "Name ->     " << bro.getName() << flush << endl;
    cout << "Major ->    " << bro.getMajor() << flush << endl;
    cout << "Hometown -> " << bro.getHometown() << flush << endl;
    cout << "Grade ->    " << bro.getYear() << flush << endl;

    return 0;
}