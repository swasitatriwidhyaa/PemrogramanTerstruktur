// Constructor tanpa parameter

#include<iostream>
using namespace std;

class Mahasiswa{
    	public:
    		Mahasiswa(){ // Constructor
    			cout << "Semangat Belajarnya Sita !";
			}
    		
	};
	
	int main(){
		Mahasiswa Mhs;
	}

// Constructor dengan parameter

#include<iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		Mahasiswa(string nama, string b){
			this->nama = nama;
			npm = b;
		}
};

int main(){
	Mahasiswa Mhs("Swasita","2317051018");
	
	cout << "Nama: " << Mhs.nama << endl;
	cout << "NPM: " << Mhs.npm << endl;
}
