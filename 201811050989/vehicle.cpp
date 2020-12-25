#include<iostream>
#include <stdlib.h>
#include <string>
#include<iomanip>
using namespace std;
//汽车类
class vehicle
{
public:
	vehicle(int elem_wheels,int elem_weight);
	void get1();
protected:
	int wheels;//轮子数
	int weight;//重量
};


vehicle::vehicle(int elem_wheels,int elem_weight)
{
	wheels=elem_wheels;
	weight=elem_weight;
}

void vehicle::get1()
{
	cout<<"wheels:"<<wheels<<endl;
	cout<<"weight:"<<weight<<endl;
}


//私有派生类小车类
class car:private vehicle
{
private:
	int passenger_load;//载人数
	int payload;//载重量
public:
	car(int elem_wheels,int elem_weight,int elem_passenger_load,int payload);
	void get2();

};

car::car(int elem_wheels,int elem_weight,int elem_passenger_load,int elem_payload):vehicle(elem_wheels,elem_weight)//
{
	passenger_load=elem_passenger_load;
	payload=elem_payload;
}

void car::get2()
{
    cout<<"car:"<<endl;
	vehicle::get1();//访问基类公有成员函数
	cout<<"passenger_load"<<passenger_load<<endl;
	cout<<"payload="<<payload<<endl;

}


//私有派生类货车类
class truck:private vehicle
{
private:
	int passenger_load;//载人数
public:
	truck(int elem_wheels,int elem_weight,int elem_passenger_load);
    void get3();
	
};

truck::truck(int elem_wheels,int elem_weight,int elem_passenger_load):vehicle(elem_wheels,elem_weight)
{
	passenger_load=elem_passenger_load;
}

void truck::get3()
{
    cout<<"truck:"<<endl;
	vehicle::get1();//访问基类公有成员函数
	cout<<"passenger_load="<<passenger_load<<endl;
}

void main()
{
	car a(4,100,4,50);
	a.get2();

	truck b(8,500,2);
	b.get3();

}

