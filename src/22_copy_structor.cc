#include <iostream>
#include <string>

using namespace std;

class dog {
public :
	dog(){
		cout << "default structor func" << endl;
	}

	dog(int cid, string cname, int cage){
		id = cid;
		name = cname;
		age = cage;
	}

	dog(dog & d){
		id = d.id;
		name = d.name;
		age = d.age;
	}

	void print_dog(){
		cout << "id   : " << id << endl;
		cout << "name : " << name << endl;
		cout << "age  : " << age << endl;
	}

	~dog(){
		cout << "default destructor func" << endl;
	}
private :
	int id;
	string name;
	int age;
};

int main(){
	dog d1(1,"dog1", 2);
	d1.print_dog();
	dog d2(d1);
	d2.print_dog();
	dog d3 = d1;
	d3.print_dog();
}
