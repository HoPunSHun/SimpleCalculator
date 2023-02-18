#include <iostream>
#include <string>

using namespace std;

bool isEnd() {

	bool end;
	char ans;
	cout << "End program?(Y/n): ";
	cin >> ans;
	if (ans == 'n') {

		end = false;

	}
	else {

		end = true;

	}

	return end;
}

float inputNumbers() {

	float number;

	cout << "Enter a number:";
	cin >> number;

	return number;
}

char inputType() {

	char type;

	cout << "Enter the type:";
	cin >> type;

	return type;

}

float outputAnswer(float num1, float num2, char type) {

	float ans;

	switch (type) {

		case '+':

			ans = num1 + num2;
			break;

		case '-':

			ans = num1 - num2;
			break;

		case '*':

			ans = num1 * num2;
			break;

		case '/':

			ans = num1 / num2;
			break;

		default:

			ans = num1;

	}

	return ans;

}

int main()
{
	bool end = false;

	float answers[10] = {0};
	int currentAns = 0;

	while (end == false) {
		
		float numbers[2];

		if (currentAns == 0) {

			numbers[0] = inputNumbers() + answers[currentAns];

		}
		else {

			numbers[0] = answers[currentAns];

		}

		currentAns = currentAns + 1;

		char type = inputType();

		numbers[1] = inputNumbers();
		
		answers[currentAns] = outputAnswer(numbers[0], numbers[1], type);

		cout  << numbers[0] << " " << type << " " << numbers[1] << " = " << answers[currentAns] << '\n';


		end = isEnd();

	}
	return 0;

}