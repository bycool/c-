#include <iostream>

using namespace std;

struct date
{
	int year;
	int month;
	int day;
};

void init_date(struct date & d){
	cout<<"year,month,day:"<<endl;
	cin>>d.year;
	cin>>d.month;
	cin>>d.day;
}

void print_date(struct date & d){
	cout<<d.year<<" year "<<d.month<<" month "<<d.day<<" day"<<endl;
}

bool is_leap_year(struct date & d){
	bool rc = false;
	if(((d.year % 4)==0 && (d.year % 100)!=0) || (d.year % 400)== 0)
		rc = true;
	return rc;
}

class mydate {
public:
	void init_date(){
		cout<<"year,month,day:"<<endl;
		cin>>year;
		cin>>month;
		cin>>day;
	}

	void print_date(){
		cout<<year<<" year "<<month<<" month "<<day<<" day"<<endl;
	}

	bool is_leap_year(){
    	bool rc = false;
    	if(((year % 4)==0 && (year % 100)!=0) || (year % 400)== 0)
        	rc = true;
		return rc;
	}

	int get_year(){
		return year;
	}
	void set_year(int cyear){
		year = cyear;
	}
private:
	int year;
	int month;
	int day;
};


int main(){
#if 0
	struct date d;
	init_date(d);
	print_date(d);
	cout<<"is leap year: "<< is_leap_year(d)<<endl;
#endif

	mydate md;
	md.init_date();
	cout<<"md.year"<<md.get_year()<<endl;
	md.set_year(2019);
	cout<<"md.year"<<md.get_year()<<endl;
	cout<< (md.is_leap_year()?"true":"false")<< " leap year"<<endl;
	md.print_date();
}
