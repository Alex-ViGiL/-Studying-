#include <iostream>
#include <string>
using namespace std;

class Students {

private:

	int scores[5];
	float average_ball;
	string name;
	string last_name;

public :
	
	void set_name(string student_name)
	{
		name = student_name;
	
	}
	string get_name()
	{
		return name;
	}

	void set_last_name(string last_name_students)
	{
	
		last_name = last_name_students;
	}
	string get_last_name()
	{
		return last_name;
	}

	void set_scores(int students_scores[])
	{
	
		for (int i = 0; i < 5;++i) {
		
			scores[i] = students_scores[i];

		}
	
	}

	void set_average_ball(float ball) 
	{
		average_ball = ball;
	}

	float get_average_ball()
	{
		return average_ball;
	}




};



int main(){

	Students student;

	string name;
	string last_name;

		cout << "Name : ";
		getline(cin, name);
		
		cout << "Last name : ";
		getline(cin, last_name);

		student.set_name(name);
		student.set_last_name(last_name);

		int scores[5];
		int sum = 0;

		for (int i = 0; i < 5;++i) {

			cout << "Score " << i + 1 << ": ";
			cin >> scores[i];
			sum += scores[i];
;		
		}

		student.set_scores(scores);

		float average_ball = sum / 5.0;

			student.set_average_ball(average_ball);


			cout << "Average ball for " << student.get_name() << " "
	<< student.get_last_name() << " is "
				<< student.get_average_ball() <<endl;
}