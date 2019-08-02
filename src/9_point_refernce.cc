#include <iostream>
#include <cstdlib>

using namespace std;


struct teacher {
	int id;
	int age;
};


int get_teacher(struct teacher * & t){
	t = (struct teacher*)malloc(sizeof(struct teacher));
	t->id = 1;
	t->age = 2;
	return 0;
}

int free_teacher(struct teacher * &t){
	if(t==NULL) return 1;
	cout<<t->id<<" "<<t->age<<endl;
	free(t);
	t = NULL;
}

int main(){
	struct teacher* tt = NULL;
	get_teacher(tt);
	cout<<tt->id<<" "<<tt->age<<endl;
	free_teacher(tt);
	return 0;
}


