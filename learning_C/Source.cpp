#include<iostream>
#include"Person.h"
#include<vector>
using namespace std;

int main() {
	int options;
	cout << "Enter a number 0~4 to run a program: ";
	cin >> options;
	switch (options) {
		case 0:
		{
			cout << "\n You've chosen program 0\n";

			Person Ethan{ "Ethan", 32 };
			cout << "Name: " << Ethan.getName() << endl;
			cout << "Age: " << Ethan.getAge() << endl;

			cout << "\n";

			Person Ezra{ "Ezra", 30 };
			cout << "Name: " << Ezra.getName() << endl;
			cout << "Age: " << Ezra.getAge() << endl;
			break;
		}
		case 1:
		{
			cout << "\n You've chosen program 1\n";
			int age = 0;

			cout << "enter age: ";
			cin >> age;
			break;
		}
		case 2:
		{
			cout << "\n You've chosen program 2\n";
			string name_array[]{ "Ethan", "Ezra", "Eli", "Keaja", };

			cout << name_array[0] << "\n";
			cout << name_array[3] << "\n";
			break;
		}
		case 3:
		{
			cout << "\n You've chosen program 3\n";

			string review_array[2][3]{
				{"move01", "move02", "movie03"}, //    [0],[1],[2]
				{"Okay", "Great", "Awesome"}     //[0]  {0, 1, 2}
			};									 //[1]  {0, 1, 2}

			cout << review_array[0][0];
			cout << "\n";

			vector <int> _numbers{50, 60, 70, 80};

			cout << "\n" << _numbers.at(0);
			_numbers.push_back(69); //adding to vector(4).
			cout << "\n" << _numbers.at(4);
			cout << "\nInput a number for _numbers(0): ";
			cin >> _numbers.at(0); //changing vecotr(0).
			cout << _numbers.at(0);

			cout << "\nAdd a number to _numbers ";

			int add_to_numbers;
			cin >> add_to_numbers;

			_numbers.push_back(add_to_numbers);

			cout << "\nnew number added to _numbers is: " << _numbers.at(5);
			break;
		}
		case 4:
		{
			cout << "\n You've chosen program 4\n";

			vector<vector<int>> movie_ratings
			{
				{1, 2, 3, 4},
				{ 1,2,3,4 }
			};

			cout << movie_ratings[0][0];
			cout << "\n" << movie_ratings.at(0).at(0);
			break;
		}
		default:
		{
			cout << "Number isn't 0~4";
		}
	}

	return 0;
}