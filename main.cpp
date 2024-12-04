#include <iostream>
#include <stack>

using namespace std;

class Student
{
public:
	int days;

	Student(int days)
	{
		cout << "Constructor called" << days << endl;
		this->days = days;
	}

	Student(const Student& student)
	{
		cout << "Copy constructor called" << student.days;
		cout << endl;
		this->days;
	}

	~Student()
	{
		//cout << "Destructor called" << days << endl;
		//i know this works so I commented it out for brevity
	}
};

int main()
{
	stack<int> numbers;

	cout << "Size of stack: " << numbers.size() << endl;

	if (numbers.empty())
	{
		cout << "Stack is empty!" << endl;
	}

	numbers.push(1);
	cout << "Size of stack: " << numbers.size() << endl;

	if (!numbers.empty())
	{
		cout << "Stack not empty" << endl;
	}

	cout << "Top of stack: " << numbers.top() << endl;

	numbers.push(9); //pushes 9 to top of stack
	numbers.push(6); //pushes 6 to top of stack

	cout << endl;
	cout << "Top of stack: " << numbers.top() << endl;
	cout << "Size of stack: " << numbers.size() << endl;

	int popped_val = numbers.top(); //saves the top of the stack for later

	numbers.pop(); //removes the top of stack

	cout << endl;
	cout << "Top of stack: " << numbers.top() << endl;
	cout << "Size of stack: " << numbers.size() << endl;
	cout << "Popped value: " << popped_val << endl;

	stack<int> other_stack;

	other_stack.push(5);

	cout << "Other stack size: " << other_stack.size() << endl;

	other_stack.swap(numbers); //swamps the two stacks

	cout << endl;

	stack<Student> student_stack; //making a stack of objects

	student_stack.emplace(5); //creates an object that only exists on the stack

	cout << "Number of students: " << student_stack.size() << endl;

	student_stack.pop();

	cout << "Number of students after pop: " << student_stack.size() << endl;

	while (student_stack.size() < 5)
	{
		student_stack.emplace(5);
		cout << "Number of students in stack: " << student_stack.size() << endl;
	}
	cout << "Students added to stack";
	cout << endl;

	student_stack.emplace(5);
	cout << "Number of students: " << student_stack.size() << endl;

	if (student_stack.size() > 5)
	{
		student_stack.pop();
		cout << "Number of students after pop: " << student_stack.size() << endl;
	}

	return 0;
}