#include<fstream>
#include<iostream>
using namespace std;

int main(){
	ofstream outFile("example.txt");
	outFile<<"Hello Mansi!"<<endl;
	outFile.close();
	return 0;
}
