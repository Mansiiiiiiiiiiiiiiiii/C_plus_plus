#include<bits/stdc++.h>
using namespace std;

class Hero{
	private:
		int health;
	public:
		char *name;
		char level;
		
	Hero(){
		cout<<"Simple constructor called"<<endl;
		name = new char[100];
	}
	
	//Paramatrized Constructor
	Hero(int health){
		this -> health = health;
	}
	Hero(int health, char level){
		this -> level = level;
		this -> health = health;
	}
	
	//Copy constructor
	Hero(Hero &temp){
		char *ch = new char[strlen(temp.name)+1];
		strcpy(ch,temp.name);
		this->name = ch;
		
		cout<<"Copy constructor"<<endl;
		this ->health = temp.health;
		this ->level = temp.level;
	}
	
	void print(){
		cout<<endl;
		cout<<"Name: "<<this -> name<<",";
		cout<<"health"<<this->health<<",";
		cout<<"level"<<this->level<<endl;
		cout<<endl;
	}
	
	int getHealth(){
		return health;
	}
	char getLevel(){
		return level;
	}
	
	void setHealth(int h){
		health = h;
	}
	void setLevel(char ch){
		level = ch;
	}
	
	void setName(char name[]){
		strcpy(this -> name, name);
	}
	~Hero(){
		cout<<"Destructor bhai called"<<endl;
	}
};

int main(){

Hero hero1;

//Dynamic 
Hero *b = new Hero();
//manualy destructor called
delete b;	
}
