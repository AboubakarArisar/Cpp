
#include <string> 
#include <iostream>
using namespace std;
struct Student 
{ 
	string name; 
	int id; 
	int mark[3]; 
};
void inputStudent(Student* ptr); 
void display(Student *ptr);
int main () 
{ 
	Student stu; 
	Student* stuPtr = &stu; 
	inputStudent(&stu);
	display(&stu); 
return 0; 
} 
void inputStudent(Student* ptr)
{
	cout<<"Enter Student Name: ";
	cin>>(*ptr).name;
	cout<<"Enter Student ID: ";
	cin>>(*ptr).id;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Subject "<<i+1<<" Marks: ";
		cin>>(*ptr).mark[i];
	}


cout<<endl;
}
void display(Student *ptr)
{
	cout<<"Student Name: "<<(*ptr).name<<endl;
	cout<<"Student ID: "<<(*ptr).id<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Subject "<<i+1<<" Marks: "<<(*ptr).mark[i]<<endl;
	}
}
