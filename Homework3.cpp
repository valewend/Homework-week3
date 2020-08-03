#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	cout<<"==========QUIZZES=========="<<endl;
	int first ,second, third, midterm, final ;
	cout<<"Enter first quizz (10) : ";
	cin>>first ;
	cout<<"Enter second quizz (10) : ";
	cin>>second ;
	cout<<"Enter third quizz (10) : ";
	cin>>third ;
	cout<<"==========MID-TERM=========="<<endl;
	cout<<"Enter mid-term (40) : ";
	cin>>midterm ;
	cout<<"==========FINAL=========="<<endl;
	cout<<"Enter final (50) : ";
	cin>>final ;
	float QuizzTotal , sum , Total ;
	sum = first + second + third ;
	QuizzTotal = sum / 3 ;
	cout<<"Quizz Total :"<<QuizzTotal<<endl;
	cout<<"Mid term : "<<midterm<<endl;
	cout<<"Final : "<< final<<endl;
	Total = QuizzTotal + midterm + final ;
	cout<<"Total ; "<< Total<<endl;
	cout<<"Our Score is "<<((Total)>=50?"PASS":"FAIL")<<endl;

	return(0);
}