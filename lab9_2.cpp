#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double x){
char result;
    if(x > 90)
        result = 'A';
    else if(75 < x && x <= 90) 
        result = 'B';
    else if(60 < x && x <= 75) 
        result = 'C';
    else if(45 < x && x <= 60) 
        result = 'D';
    else if(x <= 45 ) 
        result = 'F';
        
    return result;
}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin, name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}