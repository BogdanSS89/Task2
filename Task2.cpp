#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
#pragma region Task1
class Person {
protected:
	string name;
	int age;
	char gender;
	int weight;
	static int count;
public:
	static int getCount() {
		return count;
	}
	Person() :name(), age(0), gender(), weight(0) {

	};
	Person(string n, int a, char g, int w) : name(n), age(a), gender(g), weight(w) {

	};
	void changeName();
	void changeWeight();
	void changeAge();
	void changeGender();
};


class Student : public Person
{
	int year;
public:
	Student() :Person(), year(0) {

	};
	Student(string n, int a, char g, int w, int y) : Person(n, a, g, w), year(y) {
		count++;
	}
	void incYear();
	void changeYear();
	void show() const;
};

void Person::changeName()
{
	cout << "Input name: \n";
	cin >> name;
}

void Person::changeWeight()
{
	cout << "Input weight: \n";
	cin >> weight;
}

void Person::changeAge()
{
	cout << "Input Age: \n";
	cin >> age;
}

void Person::changeGender()
{
	cout << "Input gender: " << endl;
	cin >> gender;
}


void Student::incYear()
{
	int Inc;
	cout << "Add year :\n";
	cin >> Inc;
	year += Inc;
}

void Student::changeYear()
{
	cout << "Input year: \n";
	cin >> year;
}
void Student::show() const
{
	cout << name << " , " << age << " , " << gender << " , " << weight << " , " << year << endl;
}
int Student::count = 0;

int main() {
	Student Ivan("Ivan", 24, 'M', 67, 2018);
	Student Fedor("Fedor", 23, 'M', 75, 2020);
	Student Anna("Anna", 30, 'W', 52, 2016);
	Student Unknown;
	Unknown.changeName();
	Unknown.changeAge();
	Unknown.changeGender();
	Unknown.changeWeight();
	Unknown.changeYear();
	Unknown.incYear();
	Unknown.show();

	Ivan.show();
	Fedor.show();
	Anna.show();
	cout << "total number of students: " << Student::getCount() << endl;


}
#pragma endregion


#pragma region Task2

class Fruit {
protected:
	string name;
	string color;
	Fruit() :name(), color() {

	};
	Fruit(string(n), string(c)) :name(n), color(c) {};


};
class Apple : public Fruit {
public:

	Apple(string(n), string(c)) : Fruit(n, c) {

	};
	string getName() const {
		return "Apple";
	}
	void setColor(string c) {
		color = c;
	}
	string getColor() {
		return color;
	}
};
class Banana : public Fruit {
public:
	Banana() :Fruit() {

	};
	string getName() {
		return "Banana";
	}
	string getColor() {
		return "yellow";
	}

};
class GrannySmith : public Fruit {
public:
	GrannySmith() :Fruit() {

	};

	string getName() const {
		return "GrannySmith apple";
	}
	string getColor() {
		return "green";
	}

};

int main()
{
	Apple a("n", "red");// не понял как по другому вывести с одним параметром
	Banana b;
	GrannySmith c;

	cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	return 0;
}

#pragma endregion

#pragma region Task3

//class Player;
//	void Hit();
//    void Stand();
//    void Double();
//	void Split();
//	void CheckHand();
//
//class Dealer;
//	void Distribute();
//	void Hit();
//	void CheckHand();
//
//int Deck //поле для игры, раздача карт
//int Game //инициализация игроков, определение правил игры, условия выйгрыша


#pragma endregion
