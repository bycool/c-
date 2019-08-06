#include <iostream>
#include <string.h>

using namespace std;

class hero {
public:
	string name;
	int age;

	hero(string cname, int cage){
		name = cname;
		age = cage;
	}

	void printhero(){
		cout<<"hero: "<<name<<endl;
		cout<<"age : "<<age <<endl;
	}
};

int main(){
	hero s1("baopo", 39);
	s1.printhero();

	hero *s2 = new hero("longjuan",26);
	s2->printhero();
	delete(s2);
	
}
