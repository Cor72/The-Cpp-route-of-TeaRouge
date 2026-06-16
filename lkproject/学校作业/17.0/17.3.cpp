#include<iostream>
using namespace std;
class teacher {
public:
	teacher(double b, double t, double a) :basic(b), tuitionfee(t), allowance(a) {}
	virtual double salary() {
		return this->basic + this->tuitionfee + this->allowance;
	}
protected:
	//基本工资
	double basic;
	//课时费
	double tuitionfee;
	//津贴
	double allowance;
};
//讲师
class lecturer :public teacher {
public:
	lecturer(double b, double t, double a) :teacher(b, t, a) {}
	double salary() {
		return this->basic + this->tuitionfee + this->allowance;
	}
};
//副教授
class associateprof :public teacher {
public:
	associateprof(double b, double t, double a) :teacher(b, t, a) {}
	double salary() {
		return this->basic + this->tuitionfee + this->allowance;
	}
};
//教授
class fullprof :public teacher {
public:
	fullprof(double b, double t, double a) :teacher(b, t, a) {}
	double salary() {
		return this->basic + this->tuitionfee + this->allowance;
	}
};
int main() {
	teacher* t;
	lecturer l(800, 40, 1300);
	t = &l;
	cout <<"教师工资"<< t->salary() << endl;
	associateprof a(900, 45, 1800);
	t = &a;
	cout <<"副教授工资："<< t->salary() << endl;
	fullprof f(1000, 50, 2300);
	t = &f;
	cout <<"教授工资："<< t->salary() << endl;
}
