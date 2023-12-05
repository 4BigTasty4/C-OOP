#include <iostream>

using namespace std;


													//19.01.2023


//N1 Создать класс калькулятор, который будет хранить следующие методы :
//
//+-/ *
//воззведение в степень
//процент от числа
//факториал числа

//class Calculator {
//
//public:
//
//    int firsNumber;
//    int secondNumber;
//    int result;
//
//
//    int Summ(int firsNumber, int secondNumber) {
//
//       result =  firsNumber + secondNumber;
//
//       return result;
//
//    }
//
//    int Minn(int firsNumber, int secondNumber) {
//
//        result = firsNumber - secondNumber;
//
//        return result;
//
//    }
//
//    int Multiply(int firsNumber, int secondNumber) {
//
//        result = firsNumber * secondNumber;
//
//        return result;
//
//    }
//
//    int Division(int firsNumber, int secondNumber) {
//
//        result = firsNumber / secondNumber;
//
//        return result;
//
//    }
//
//    int Exponentiation(int firsNumber, int secondNumber) {
//
//        result = 1;
//
//        for (int i = 0; i < secondNumber; i++)
//        {
//            result *= firsNumber;
//        }
//
//        return result;
//
//    }
//
//    int PercentageoftheNumber(int firsNumber, int secondNumber) {
//
//        result = (firsNumber * 100) / secondNumber;
//
//        return result;
//
//    }
//
//    int Factorial(int firsNumber) {
//
//        result = 1;
//
//        for (int i = 1; i <= firsNumber; i++)
//        {
//            result *= i;
//        }
//
//        return result;
//
//    }
//
//};
//
//int main()
//{
//    
//    Calculator number = Calculator();
//
//    cout << "Hello User" << endl;
//
//    cout << "Unput Number 1: ";
//    cin >> number.firsNumber;
//
//    cout << "Unput Number 2: ";
//    cin >> number.secondNumber;
//
//    cout << endl;
//
//    cout << "Summ: ";
//    cout << number.Summ(number.firsNumber, number.secondNumber) << endl;
//    
//    cout << "Minn: ";
//    cout << number.Minn(number.firsNumber, number.secondNumber) << endl;
//    
//    cout << "Multiply: ";
//    cout << number.Multiply(number.firsNumber, number.secondNumber) << endl;
//     
//    cout << "Division: ";
//    cout << number.Division(number.firsNumber, number.secondNumber) << endl;
//     
//    cout << "Exponentiation: ";
//    cout << number.Exponentiation(number.firsNumber, number.secondNumber) << endl;
//
//    cout << "Percentage of the Number: ";
//    cout << number.PercentageoftheNumber(number.firsNumber, number.secondNumber) << "%" << endl;
//
//    cout << "Factorial: ";
//    cout << number.Factorial(number.firsNumber) << endl;
//
//}



													//21.01.2023


//N1 Создать класс калькулятор, который будет хранить следующие методы :
//
//+-/ *
//воззведение в степень
//процент от числа
//факториал числа

//class Calk {
//
//	int number;
//	int num;
//
//public:
//
//	int Plus(int number, int num) {
//
//		int result;
//
//		this->number = number;
//		this->num = num;
//
//		result = number + num;
//
//		return result;
//
//	}
//
//	int Minn(int number, int num) {
//
//		int result;
//
//		this->number = number;
//		this->num = num;
//
//		result = number - num;
//
//		return result;
//
//	}
//
//	int Multiply(int number, int num) {
//
//		int result;
//
//		this->number = number;
//		this->num = num;
//
//		result = number * num;
//
//		return result;
//
//
//	}
//
//	int Division(int number, int num) {
//
//		int result;
//
//		this->number = number;
//		this->num = num;
//
//		result = number / num;
//
//		return result;
//
//	}
//
//	int Exponentiation(int number, int num) {
//
//		int result = 1;
//
//		this->number = number;
//		this->num = num;
//		
//		for (int i = 0; i < num; i++)
//		{
//			result *= number;
//		}
//
//		return result;
//
//	}
//
//	int PercentageoftheNumber(int number, int num) {
//
//		int result;
//
//		this->number = number;
//		this->num = num;
//
//		result = (number * 100) / num;
//
//		return result;
//
//	}
//
//	int Factorial(int number) {
//
//		int result = 1;
//
//		this->number = number;
//
//		for (int i = 1; i <= number; i++)
//		{
//			result *= i;
//		}
//		return result;
//	}
//
//};
//
//int main() {
//
//	int num;
//	int number;
//	int result;
//	
//	cout << "Hello World" << endl;
//	
//	cout << "Input Number1 : ";
//	cin >> number;
//	cout << "Input Number2 : ";
//	cin >> num;
//
//	Calk calk = Calk();
//	
//	cout << endl;
//
//	cout << "Summ: ";
//	cout << calk.Plus(number, num) << endl;
//	
//	cout << "Minn: ";
//	cout << calk.Minn(number, num) << endl;
//  
//	cout << "Multiply: ";
//	cout << calk.Multiply(number, num) << endl;
//	 
//	cout << "Division: ";
//	cout << calk.Division(number,num) << endl;
//	 
//	cout << "Exponentiation: ";
//	cout << calk.Exponentiation(number,num) << endl;
//	
//	cout << "Percentage of the Number: ";
//	cout << calk.PercentageoftheNumber(number,num) << "%" << endl;
//	
//	cout << "Factorial: ";
//	cout << calk.Factorial(number) << endl;
//
//}


//template<typename T>
//class Vector {
//
//	int lenght;
//	T* arr = new T[lenght];
//	int count = 0;
//
//public:
//
//	void AddElement(T newElement, bool condition) {
//
//		T* newArr = new T[this->lenght + 1]{};
//
//		if (condition == true) {
//
//			newArr[0] = newElement;
//
//			for (int i = 1; i <= this->lenght; i++)
//			{
//				newArr[i] = arr[i - 1];
//			}
//		}
//		else
//		{
//			for (int i = 0; i < this->length; i++)
//			{
//				newArr[i] = arr[i];
//			}
//			newArr[this->lenght] = newElement;
//			this->lenght++;
//			delete[] this->arr;
//			this->arr = newArr;
//		}
//	}
//
//	void AddElement(T newElement, int index) {
//
//		T* newArr = new T[this->lenght + 1]{};
//		int i = 0;
//		while (i < index) {
//
//			newArr[i] = arr[i];
//			i++;
//
//		}
//		newArr[index] = newElement;
//		this->lenght++;
//		for (int i = index; i < this->lenght; i++)
//		{
//			newArr[i + 1] = arr[i];
//		}
//		delete[] this->arr;
//		this->arr = newArr;
//
//	}
//
//	void Show() {
//
//		for (int i = 0; i < this->lenght; i++)
//		{
//			cout << this->arr[i] << endl;
//			this->count++;
//		}
//
//	}
//
//};
//
//int main() {
//
//	Vector<int> vector = Vector<int>();
//
//	vector.AddElement(5, true);
//
//	vector.AddElement(5, 3);
//
//
//	vector.Show();
//}


//N1

//Нужно создать свой тип данных String +
//
//должна быть возможность создания объекта следующим образом
//
//String string = "qwerty";
//
//
//
//string.Replace(oldValue: "qwe", newValue : "test hello");
//String::Replace(string, oldValue: "qwe", newValue : "test hello");
//
//
//string.FirstIndex(value: 't', first : true) -> int;
//String::FirstIndex(string, value: 't', first : true) -> int;
//
//
//string.Split(separator: 't') -> char** / string[] / vector<string>;
//String::Split(string, separator: 't') -> char** / string[] / vector<string>;
//example:
//"Hello! My name is Elnur".split(' ') ->["Hello!", "My", "name", "is", "Elnur"]
//String::Split("qwerty", 'r') ->["qwe", "ty"];

//class String {
//
//	string vallue;
//
//public:
//
//	String(string vallue) {
//
//		this->vallue = vallue;
//
//		if (vallue == "qwe")
//		{
//			this->vallue = "test hello";
//		}
//		else
//			cout << "Error" << endl;
//	}
//
//	void Show() {
//
//		cout << this->vallue << endl;
//
//	}
//
//};
//
//int main() {
//	
//	string vallue = "qe";
//
//	String str = vallue;
//
//	str.Show();
//
//}


//class combathero {
//
//	int hp;
//	int defence = 30;
//	int attack = 50;
//	int health;
//	int xray;
//	int result;
//
//public:
//
//	combathero(int hp) : hp(hp) {}
//
//
//	int operator - (combathero attackScor) {
//
//		this->result = this->hp - attackScor.attack;
//
//		return this->result;
//
//	}
//
//	int operator ++ (int) {
//
//		this->result += 30;
//
//		return this->result;
//
//	}
//
//	void show() {
//
//		cout << "Scorpion: " << this->result << endl;
//
//	}
//
//};
//
//int main() {
//
//	combathero scorpion = 100;
//	combathero subzero = 90;
//
//	//scorpion - subzero;
//	scorpion++;
//
//	scorpion.show();
//
//}

//class CombatHero {
//
//	int hpScor;
//	int hpSub;
//	int defenceScor = 50;
//	int defenceSub = 30;
//	int attackScor = 70;
//	int attackSub = 50;
//	int resultScor;
//	int resultSub;
//
//public:
//
//	CombatHero(int hpScor,bool istrue ){
//	
//		istrue = (int)istrue;
//
//		this->hpScor = hpScor;
//	
//	}
//
//	CombatHero(int hpSub) {
//
//		this->hpSub = hpSub;
//
//	}
//
//	int operator - (CombatHero attackScor) {
//
//		this->resultScor = this->hpScor - attackScor.attackScor;
//
//		return this->resultScor;
//
//	}
//
//	int operator + (CombatHero attackSub) {
//
//		this->resultSub = this->hpSub - attackSub.attackSub;
//
//		return this->resultSub;
//
//	}
//
//	void Show() {
//
//		cout << "Scorpion: " << this->resultScor << endl;
//		cout << "Subzero: " << this->resultSub << endl;
//
//	}
//
//};
//
//int main() {
//
//	CombatHero scorpion = {1000,1};
//	CombatHero subzero = { 900 };
//
//	subzero - scorpion;
//
//
//
//	scorpion.Show();
//
//}

//struct CombatHero {
//
//	int hp;
//	int defence = 30;
//	int attack = 50;
//	int health;
//	int xray;
//	int result;
//
//
//	CombatHero(int HP) {
//        this->hp = HP;
//
//    }
//
//    int operator - (CombatHero attack) {
//        this->result = this->hp - attack.attack;
//        return this->result;
//    }
//
//
//    int operator ++ (int) {
//        this->result += 30;
//        return this->result;
//    }
//
//    int operator -- (int) {
//        this->result -= 20;
//        return this->result;
//    }
//
//    int operator / (CombatHero xray) {
//        this->result = this->hp - (xray.attack * 2);
//        return this->result;
//    }
//
//    void Show() {
//        cout << "Scorpion: " << this->result << endl;
//    }
//
//};
//
//
//
//int main()
//{
//
//	CombatHero Scorpion = 999;
//	CombatHero SubZero = 100;
//
//    Scorpion - SubZero;
//
//    Scorpion++;
//
//    Scorpion--;
//
//    Scorpion / SubZero;
//
//    Scorpion.Show();
//}
