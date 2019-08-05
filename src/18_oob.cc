#include <iostream>
#include <string>

using namespace std;

class dog {
public:
	int id;
	string name;
	int age;

	dog(int cid, string cname, int cage){
		id = cid;
		name = cname;
		age = cage;
	}

	void print_dog(){
		cout << "id   : " << id   << endl;
		cout << "name : " << name << endl;
		cout << "age  : " << age  << endl;
	}

	void eat(string food){
		cout << name << " eat " << food << endl;
	}
};

int main(){
	dog d1(1, "papi", 29);
	d1.print_dog();
	d1.eat("bone");
}
