#include <iostream>
#include <map>
#include <set>
using namespace std;


												//19.01.2023

//struct Person {
//public:
//	char name[30];
//	char surname[30];
//
//private:
//	int age;
//	bool isMarried = false;
//	double money;
//};
//
//class Animal {
//	bool isPet;
//public:
//	char name[20];
//	int age;
//};

//int main()
//{
//	
//	/*Animal animal = Animal();
//	strcpy_s(animal.name, "Rijik");
//	animal.age = 18;
//	
//
//
//
//	Person p = Person();
//	p.name;
//	p.surname;
//
//	
//	Person p = Person();
//	strcpy_s(p.name, "Bob");
//	strcpy_s(p.surname, "Marley");
//	p.age = 80;
//	p.money = 123123.45;
//	cout << sizeof(Person) << endl;*/
//	
//}

//class Person {
//private:
//	char login[20];
//	char password[20];
//
//public:
//	void Method() {
//		Person p = Person();
//		strcpy_s(p.login, "qwerty");
//		strcpy_s(p.password, "Secert12345");
//	}
//
//	template<typename T>
//	void TemplateMethod(T num) {
//		cout << sizeof(T) << endl;
//	}
//
//	int ReturnRandomNumber() {
//		srand(time(0));
//		return rand();
//	}
//};
//
//int main()
//{
//	Person p = Person();
//	p.Method();
//
//	int result = p.ReturnRandomNumber();
//
//	//p.TemplateMethod("qwerty");
//	//p.TemplateMethod(123);
//}

//class Person {
//public:
//
//	char name[30];
//	char surname[30];
//
//private:
//	int age;
//	bool isMarry = false;
//	double money;
//};
//
//int main() {
//
//	Person p = Person();
//	strcpy_s(p.name, "Bob");
//	strcpy_s(p.surname, "Marley");
//	p.age = 30;
//	p.money = 123456;
//
//	Person* a = new Person();
//
//	strcpy_s(a->name, "Bob");
//	strcpy_s(a->surname, "Marley");
//	a->age = 30;
//	a->money = 123456;
//
//	cout << sizeof(Person) << endl;
//
//}

//class Animal {
//
//	char name[30];
//	bool ispet = false;
//	int age;
//
//};
//
//int main() {
//
//	Animal animal = Animal();
//
//}

//class Login {
//
//	string pasword = "Unknow";
//
//public:
//
//	string name = "Unknow";
//	string surname = "Unknow";
//
//};

//class MyClass {
//	char name[30];
//	char surname[30];
//public:
//
//	void Method() {
//		MyClass p = MyClass();
//		strcpy_s(p.name, "Bob");
//		strcpy_s(p.surname, "Marley");
//	}
//
//	template<typename T>
//	void Func(T num) {
//
//		cout << sizeoff(T) << endl;
//
//	}
//
//	int ReturnRand() {
//
//		srand(time(0));
//
//		return rand();
//
//	}
//
//
//};
//
//int main() {
//
//	MyClass obj = MyClass();
//	obj.Method();
//	/*obj.Func("qwerty");
//	obj.Func(123);*/
//
//	int result = obj.ReturnRand();
//
//	cout << result << endl;
//
//}

													//21.01.2023
//
//class Person{
//
//	string name = "Unknow";
//	int age = 56;
//
//public:
//
//	void Init(string name1,int age) {
//
//		this->name = name;
//		this->age = age;
//
//	}
//
//	void Show() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Age: " << this->age << endl;
//
//	}
//
//};
//
//int main() {
//
//	Person person = Person();
//
//	person.Init("Alakbar",67);
//
//	person.Show();
//}


//class Car {
//private:
//    double speed;
//
//public:
//    void Method() {
//        // 1 (edit another object)
//        Car car = Car();
//        car.speed = 123;
//
//        // 2 (edit caller object)
//        this->speed = 123;
//    }
//};

//class Person {
//public:
//    string name;
//    int age;
//
//    void Method() {
//        Person person = Person();
//        person.name = "Bob";
//        person.age = 15;
//    }
//
//    void InitializePerson(string name, int age) {
//        this->name = name;
//        this->age = age;
//    }
//
//    void SayHi() {
//        cout << "Person: \"Hello!\"" << endl;
//    }
//};

//struct Product {
//private:
//    double amount = 0;
//    string name = "Unknown";
//
//public:
//    void Show(Product* This) {
//        cout << "name: " << This->name << endl;
//        cout << "amount: " << This->amount << "$" << endl;
//    }
//
//    void Init(string name, double amount) {
//        this->name = name;
//        this->amount = amount;
//    }
//
//    void Show() {
//        cout << "name: " << this->name << endl;
//        cout << "amount: " << this->amount << "$" << endl;
//    }
//};

//class Person {
//
//    string name = "Unknow";
//    string surname = "Unknow";
//    int age = 0;
//
//public:
//
//    void Personolization(string name, string surname,int age) {
//
//        this->name = name;
//        this->surname = surname;
//        this->age = age;
//
//    }
//
//    void Show() {
//
//        cout << "Name: " << this->name << endl;
//        cout << "Surname: " << this->surname << endl;
//        cout << "Age: " << this->age << endl;
//    }
//
//};

//
//int main()
//{
//
//    string name;
//    string surname;
//    int age;
//
//    cout << "Hello World" << endl;
//
//    cout << "Input Name: ";
//    cin >> name;
//    cout << "Input Surname: ";
//    cin >> surname;
//    cout << "Input Age: ";
//    cin >> age;
//
//
//    Person person = Person();
//
//    person.Show();
//
//    person.Personolization(name,surname,age);
//
//    person.Show();
//
//
//
//    product product;
//
//    product.init("test", 0.1);
//    product.init("one", 2);
//    product.show();
//
//
//    
//    Product product;
//    product.Show();
//    Product::Show(&product);
//    
//
//
//
//    Person person = Person();
//    person.InitializePerson("Bob", 15);
//    cout << "name: " << person.name << endl;
//    cout << "age: " << person.age << endl;
//
//
//
//    Person person = Person();
//    person.Method();
//    cout << "name: " << person.name << endl;
//    cout << "age: " << person.age << endl;
//}


//class Person {
//public:
//	string name;
//	int age;
//
//	void InitializePerson(string name,int age,Person& person) {
//
//		person.name = name;
//		person.age = age;
//
//	}
//
//	void SatHello() {
//
//		cout << "Hello User" << endl;
//
//	}
//
//};
//
//
//int main() {
//
//	/*Person person = Person();
//
//	person.SatHello();*/
//
//	
//	Person person = Person();
//
//	person.InitializePerson("Bob", 18,person);
//
//	cout << person.name << endl;
//	cout << person.age << endl;
//
//}

//class Person {
//public:
//	string name;
//	int age;
//
//	void InitializePerson(string name, int age) {
//
//		cout << (this->name = name) << endl;
//		cout << (this->age = age) << endl;
//
//	}
//
//	void SatHello() {
//
//		cout << "Hello User" << endl;
//
//	}
//
//};
//
//
//int main() {
//
//	/*Person person = Person();
//
//	person.SatHello();*/
//
//
//	Person person = Person();
//
//	/*person.name = "Bob";
//	person.age = 18;*/
//
//	person.InitializePerson("Bob",18);
//
//}

//struct Product {
//private:
//	double amount = 0;
//	string name = "Unknown";
//public:
//	void Show() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Amount: " << this->amount << endl;
//	}
//
//};
//
//int main() {
//
//	Product product = Product();
//
//	product.Show();
//
//}

//struct Product {
//private:
//	string name = "Unknow";
//	string pasword = "None";
//public:
//
//	void Init(string name, string pasword) {
//
//		this->name = name;
//		this->pasword = pasword;
//	}
//
//	void Show() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Pasword: " << this->pasword << endl;
//		
//	}
//
//};
//
//int main() {
//
//	Product product = Product();
//
//	product.Init("Bob", "BobBobik123");
//
//	product.Show();
//
//}


												//22.01.2023
												
//
//enum STATUS {
//
//	active,
//	blocked,
//	deleted
//
//};
//
//class Contact {
//
//	int age = 0;
//	STATUS status = STATUS::active;
//
//public:
//
//	string name;
//	string phoneNumber;
//	string gmail;
//
//	string GetStatusStr(int value) {
//
//		switch (value)
//		{
//		case active:
//			return "Active" ;
//		case blocked:
//			return "Blocked" ;
//		case deleted:
//			return "Deleted";
//		default:
//			return "Unknow";
//		}
//
//	}
//
//	void Show() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Age: " << this->age << endl;
//		cout << "Phone Number: " << this->phoneNumber << endl;
//		cout << "Gmail: " << this->gmail << endl;
//		cout << "Status: " << GetStatusStr(this->status) << endl;
//	}
//
//	int GetAge() {
//
//		return this->age;
//
//	}
//
//	void SetAge(int age) {
//
//		if (age >= 0 && age <= 120)
//		{
//			this->age = age;
//		}
//
//		else {
//
//			throw (string)"Incorect Age!";
//
//		}
//
//	}
//
//	int GetStatus() {
//
//		return this->status;
//
//	}
//
//	void SetStatus(STATUS status) {
//
//		if (STATUS::active <= status && STATUS::deleted >= status)
//		{
//			this->status = status;
//		}
//
//		else {
//
//			throw (string)"Incorect Status!";
//
//		}
//	}
//
//};
//
//int main() {
//
//	try
//	{
//		Contact contact = Contact();
//		contact.name = "Axmed";
//		contact.phoneNumber = "+994 55 555 55 55";
//		contact.gmail = "axmed@gmail.com";
//
//		int age;
//		int status;
//
//		cout << "Status: ";
//		cin >> status;
//
//		contact.SetStatus(STATUS::active);
//
//		cout << "Age: ";
//		cin >> age;
//
//		contact.SetAge(age);
//		cout << endl;
//		contact.Show();
//	}
//	catch (string message)
//	{
//		cout << "Error " << message << endl;
//	}
//
//	
//
//
//}

//class Person {
//
//	string name = "Unknow";
//	int age;
//
//public:
//
//	string GetName() {
//
//		return this->name;
//
//	}
//
//	void SetName(string name) {
//
//		if (this->name.length() == 0 )
//		{
//			throw string("Name Can Not Be Empty!");
//		}
//
//		for (int i = 0; i < name.length(); i++)
//		{
//			char symbol = toupper(name[i]);
//			if (symbol < 65 || symbol > 90)
//			{
//				throw (string) "Error";
//			}
//		}
//
//		this->name = name;
//
//
//	}
//
//};
//
//int main() {
//
//	try
//	{
//		Person person = Person();
//
//		person.SetName("");
//		cout << person.GetName() << endl;
//	}
//	catch (string message)
//	{
//		cout << message << endl;
//	}
//	
//}

//enum STATUS {
//
//	active,
//	blocked,
//	deleted
//
//};
//
//string GetStaus(STATUS status) {
//
//	switch (status)
//	{
//	case active:
//		return "Active";
//	case blocked:
//		return "Blocked";
//	case deleted:
//		return "Deleted";
//	default:
//		break;
//	}
//
//}
//
//class Contact {
//
//	int age = 0;
//
//	STATUS status = STATUS::active;
//
//public:
//
//	string name;
//	string PhoneNumber;
//	string mail;
//
//	bool isActive;
//	
//	int GetAge() {
//
//		return this->age;
//
//	}
//
//	void SetAge(int age) {
//
//		if (age >= 0 && age <= 130)
//			this->age = age;
//		else
//			throw string("ERROR");
//
//	}
//
//	STATUS GetStatus() {
//
//		return this->status;
//
//	}
//
//	void SetStaus(STATUS status) {
//
//		if (STATUS::active <= status && status<= STATUS::deleted)
//			this->status = status;
//	}
//
//	void Show() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Age: " << this->age << endl;
//		cout << "Phone Number: " << this->PhoneNumber << endl;
//		cout << "Gmail: " << this->mail << endl;
//		cout << "Status: " << GetStaus(this->status) << endl;
//
//	}
//
//};
//
//int main() {
//
//	try
//	{
//		int status;
//		int age;
//
//		Contact contact = Contact();
//		contact.name = "Eldaniz";
//		contact.PhoneNumber = "+994 51 630 85 85";
//
//		contact.mail = "elish@gmail.com";
//		contact.isActive = STATUS::active;
//
//		cout << "Input Age: ";
//		cin >> age;
//
//		cout << "Input Status: ";
//		cin >> status;
//
//		contact.SetAge(age);
//
//		contact.SetStaus(STATUS(status));
//
//		contact.Show();
//	}
//	catch (string(message))
//	{
//		cout << message << endl;
//	}
//
//	
//}

//class InstaRegister {
//
//	int age = 0;
//	string number = "Unknown";
//	string pasword = "Unknown";
//
//public:
//
//	string name = "Unknown";
//
//	int GetAge() {
//		return this->age;
//	}
//
//	void SetAge(int age) {
//
//		if (age >= 18) {
//			this->age = age;
//		}
//	}
//	
//	string GetNumber() {
//		return this->number;
//	}
//
//	void SetNumber(string number) {
//
//		if (number.substr(0, 4) == "+994") {
//			this->number = number;
//		}
//	}
//
//	string getPasword() {
//		return this->pasword;
//	}
//
//	void SetPasword(string pasword) {
//
//		if (pasword.length() > 6)
//			this->pasword = pasword;
//	}
//
//	void Show() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Age: " << this->age << endl;
//		cout << "Number: " << this->number << endl;
//		cout << "Pasword: " << this->pasword << endl;
//
//	}
//
//};
//
//int main() {
//
//	InstaRegister info = InstaRegister();
//
//	string name;
//	string pasword;
//	string number;
//
//	int age;
//
//	cout << "Hello User" << endl;
//	cout << "Register Your Name: ";
//	cin >> name;
//	cout << "Input Your Age: ";
//	cin >> age;
//	cout << "Input Your Nubmer: ";
//	cin >> number;
//	cout << "Input Your Pasword: ";
//	cin >> pasword;
//
//	info.name = name;
//
//	info.SetAge(age);
//
//	info.SetNumber(number);
//
//	info.SetPasword(pasword);
//
//	info.Show();
//
//}

//class Person {
//
//	int age;
//
//	string name = "Unknown";
//
//public:
//
//	string GetName() {
//
//		return this->name;
//
//	}
//
//	void SetName(string name) {
//
//		if (name.length() == 0) {
//			throw (string)"Error";
//		}
//
//		for (int i = 0; i < name.length(); i++)
//		{
//			char currentSymbol = toupper(name[i]);
//			
//			if (currentSymbol < 65 || currentSymbol > 90) {
//				throw string("Error");
//			}
//		}
//	
//			this->name = name;
//	}
//
//};
//
//int main() {
//
//	Person obj = Person();
//
//	obj.SetName("Elnur1");
//	cout << obj.GetName() << endl;
//
//}

	
													//26.01.2023

//class Test {
//public:
//	int num;
//
//	Test() {
//
//		cout << "CTOR" << endl;
//
//	}
//
//};
//
//int main() {
//
//	Test num = Test();
//
//	num.num = 123;
//	cout << num.num << endl;
//
//}


//class Person {
//public:
//	string name;
//	string surname;
//	int age;
//
//	Person() {
//
//		this->name = "Unknown";
//		this->surname = "Unknown";
//		this->age = -1;
//
//	}
//
//	Person(string name,string surname,int age) {
//
//		this->name = name;
//		this->surname = surname;
//		this->age = age;
//
//	}
//
//	void ShowInfo() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Surname: " << this->surname << endl;
//		cout << "Age: " << this->age << endl;
//
//	}
//
//};
//
//class Product {
//public:
//	int num = 123;
//
//	Product() {
//
//		cout << this->num << endl;
//
//	}
//
//};
//
//int main() {
//
//	/*Person p = Person();
//	p.ShowInfo();*/
//
//	/*Person().ShowInfo();
//	Person("Sadiq", "Samadov", 17).ShowInfo();*/
//
//	Product p = Product();
//
//	
//
//}



										//26.01.2023


//class Person
//{
//
//	string name;
//	int age;
//
//
//public:
//
//	void ShowPersonInfo() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Name: " << this->age << endl;
//	}
//
//	int getAge() const{
//
//		this->age = 1233;
//
//		return this->age;
//
//	}
//
//
//	void SetAge() {
//
//		this->age = age;
//
//	}
//
//};


//class Person {
//
//	string name;
//	int age;
//public:
//
//	Person(string name, int age) {
//
//		this->name = name;
//		this->age = age;
//
//	}
//
//	Person(string name) {
//
//		this->name = name;
//		this->age = -1;
//	}
//
//	explicit Person(int age) {
//
//		this->name = "Unknown";
//		this->age = age;
//	}
//
//	void Show() {
//
//		cout << "Naem: " << this->name << endl;
//		cout << "Age: " << this->age << endl;
//	}
//
//};
//
//int main() {
//
//	/*Person p = Person("Bob",45);*/
//
//	Person p = string("Akper");
//
//	Person p1 = 25;
//
//	p.Show();
//
//}


									//29.01.2023

//
//class User {
//
//	string username;
//	string userpasword;
//
//public:
//
//	User(string name, string pasword) {
//
//		this->username = name;
//		this->userpasword = pasword;
//
//	}
//
//	bool Login(string name, string pasword) {
//
//		return this->username == name && this->userpasword = pasword;
//
//	}
//
//};



									//05.02.2023

//
//class Person {
//
//public:
//
//	const int adultyear;
//	char* name;
//	char* surname;
//	int age;
//
//	Person(char* name,char* surname,int age) : age(age), adultyear(18) {
//		cout << "CTOR" << endl;
//		this->name = name;
//
//	}
//
//	void Show() {
//
//		cout << "Name: " << this->name << endl;
//		cout << "Age: " << this->age << endl;
//	}
//
//	~Person()
//	{
//		cout << "DTOR" << endl;
//
//		delete[] this->name;
//		delete[] this->surname;
//
//	}
//
//};
//
//
//int main() {
//
//	while(true)
//	{
//		char* name = new char[10] {'e', 'm', 'i', 'l'};
//		char* surname = new char[10] {'e', 'm', 'i', 'l', 'i' };
//		/*Person p = Person(name,surname, 20);
//		p.Show();*/
//
//		Person* p = new Person(name, surname, 20);
//		p->Show();
//
//	}
//}



									//07.02.2023
//
//struct User {
//
//	string name;
//	string surname;
//	DateTime Birthdate;
//
//	User(string name, string surname, DateTime birtdate) {
//
//		this->name = name;
//		this->surname = surname;
//		this->Birthdate = birtdate;
//
//	}
//
//	int GateAge() {
//
//		DateTime now = DateTime::Now();
//
//		int years = now.GetYear() - this->Birthdate.GetYear();
//
//		if (now.GetMonth() > this->Birthdate.GetMonth()) {
//
//			years--;
//
//		}
//		else if (now.GetMonth() == this->Birthdate.GetMonth()) {
//
//			if (now.GetMonth() < this->Birthdate.GetMonth()) {
//
//				years--;
//
//			}
//
//		}
//
//		return years;
//
//	}
//
//};
//
//
//class DateTime {
//
//	int year = 1;
//	int month = 1;
//	int day = 1;
//
//public:
//
//	int	GetYear() {
//
//		return this->year;
//
//	}
//
//	void SetDay(int day) {
//
//		bool isLeapYear = this->year % 4 == 0 && this->year % 100 != 0;
//		int feburaryDaysCount = (isLeapYear ? 29 : 28);
//
//		int monthLimit[12] = { 31,feburaryDaysCount,31,30,31,30,31,31,30,31,30,31 };
//
//		int maxDays = monthLimit[this->month - 1];
//
//		if (1 <= day && day <= 30)
//			this->day = day;
//		else
//			throw string("Incorrect Day Value");
//	}
//	int GetDay() {
//
//		return this->day;
//
//	}
//
//	void SetMonth(int month) {
//
//		if (1 <= month && month <= 12)
//			this->month = month;
//		else
//			throw string("Incorrect Month Value");
//	}
//	int GetMonth() {
//
//		return this->month;
//
//	}
//
//
//	DateTime(int year, int month, int day) : year(year){
//	
//		this->SetMonth(month);
//		this->SetDay(day);
//
//	}
//
//	DateTime(){}
//
//	static DateTime Now() {
//
//		time_t t = time(0);
//		tm* now = localtime(&t);
//
//		return DateTime(now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
//
//	}
//
//	void Show() {
//
//		printf("%d.%d.%d\n",this->day,this->month,this->year);
//
//	}
//
//};
//
//int main() {
//
//	try
//	{
//		
//		User user = User("Elnur", "Mammadov", DateTime(2004, 1, 30));
//		cout << user.GateAge() << endl;
//
//		DateTime datetime = DateTime(1993, 2, 8);
//		datetime.Show();
//	}
//	catch (string message)
//	{
//		cout << message << endl;
//
//	}
//	
//}


                                //09.02.2023

//enum Currencies {
//
//	azn,euro,ust,rubl
//
//};
//
//string CurrenciesStr[4]{ " azn"," euro"," usd"," rubl" };
//
//enum CardType {
//
//	visa,mastercard
//
//};
//
//string CardTypesStr[2]{ " visa"," mastercard" };
//
//
//class BankCard {
//
//	double balance = 0;
//	string pan;
//	string cvv;
//	Currencies currency = Currencies::azn;
//	CardType cardtype = CardType::visa;
//	bool is3DSecured = false;
//
//	void ShowMaskedCvv() const {
//
//		cout << "CVV: ";
//		for (int i = 0; i < this->cvv.length(); i++)
//		{
//
//			cout << "*";
//
//		}
//
//		cout << endl;
//
//	}
//
//	void ShowMaskedPan() const {
//
//		cout << "PAN: ";
//
//		for (int i = 0; i < this->pan.length(); i++)
//		{
//
//			if (i < 4) {
//
//				cout << this->pan[i];
//
//			}
//			else {
//
//				cout << "*";
//
//			}
//			if ((i + 1) % 4 == 0)
//				cout << " ";
//		}
//
//		cout << endl;
//
//	}
//
//public:
//
//	BankCard(string pan, string cvv) {
//
//		this->pan = pan;
//		this->cvv = cvv;
//
//	}
//
//	void AddMoney(const double moneyToAdd) {
//
//		this->balance += moneyToAdd;
//
//	}
//
//	void Info() const {
//
//		cout << "Balance: " << this->balance << CurrenciesStr[this->currency] << endl;
//		cout << "Card Type: " << this->cardtype << CardTypesStr[this->cardtype] << endl;
//
//		cout << "- - - - - - - - - - - - - -" << endl;
//
//		this->ShowMaskedPan();
//		this->ShowMaskedCvv();
//
//	}
//
//	void operator += (double moneyToAdd) {
//
//		this->balance += moneyToAdd;
//
//	}
//
//	void operator -= (double moneyToRemove) {
//
//		this->balance -= moneyToRemove;
//
//	}
//
//};
//
//int main() {
//
//	BankCard card = BankCard("1233123312331233", "777");
//
//	card += 20;
//	
//	card.Info();
//
//}

//class Practic {
//
//	int num = 0;
//
//public:
//
//	void Show() {
//
//		cout << this->num << endl;
//
//	}
//
//	bool operator += (int num) {
//
//		if (num <= 0)
//			return false;
//		this->num += num;
//
//	}
//
//};
//
//int main() {
//
//	Practic practic = Practic();
//
//	practic.operator+=(-30);
//
//	practic.Show();
//
//}

//class Int{
//
//	int value;
//
//public:
//
//	Int(int value) {
//
//		this->value = value;
//
//	}
//
//	int GetValue() {
//
//		return this->value;
//
//	}
//
//	Int operator += (int num) {
//
//		this->value += num;
//		return *this;
//
//	}
//
//	Int operator + (int num) {
//
//		Int result = Int(this->value + num);
//
//		this->value + num;
//		return result;
//
//	}
//
//};
//
//int main() {
//
//	Int num = 5;
//
//	Int result = num + 5;
//
//	cout << result.GetValue() << endl;
//
//}



											//12.02.2023


//class User {
//
//	string name;
//	string surname;
//	int age;
//
//public:
//
//	friend ostream& operator<<(ostream& cout, User user);
//
//	User(string name, string surname, int age) : name(name), surname(surname), age(age){}
//
//};
//
//ostream& operator<<(ostream& cout, User user) {
//
//	cout << user.name << endl;
//	cout << user.surname << endl;
//	cout << user.age << endl;
//
//
//	return cout;
//
//}
//
//int main() {
//
//	User user = { "Bob","Brown",23 };
//
//	cout << user << endl;
//
//}


//class Student {
//
//	string name = "Vova";
//	string surname = "Vovan";
//	vector<int> marks;
//
//public:
//
//	friend ostream& operator << (ostream& cout, Student student);
//
//	Student(string name, string surname, vector<int> marks) :name(name), surname(surname),marks(marks){}
//
//};
//
//ostream& operator << (ostream& cout, Student student) {
//
//	cout << "Student" << endl;
//
//	cout << "Name: " << student.name << endl;
//	cout << "Surname: " << student.surname << endl;
//	cout << "Marks: [";
//
//	for (int i = 0; i <= 3; i++)
//	{
//		cout << student.marks[i];
//		if (i == 3)
//		{
//			cout << "";
//		}
//		else
//			cout << " ,";
//		
//	}
//
//	cout << "]";
//
//	return cout;
//}
//
//int main() {
//
//	Student std = { "Vova","Vovan",{1,2,3,4} };
//
//	cout << std << endl;
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
//	vector.AddElement(5, true);
//	vector.AddElement(5, true);
//	vector.AddElement(5, 3);
//
//
//	vector.Show();
//}

//class User {
//public:
//	string email;
//	string name;
//	int age;
//
//	User(string email, string name, int age) : email(email), name(name), age(age){}
//
//};
//
//ostream& operator << (ostream& out, User user) {
//
//	out << user.email << " " << user.name << " " << user.age << " " << "Years old" << endl;
//
//	return out;
//
//}

//int main() {
//
//	/*set<int> nums = set<int>();
//
//	nums.insert(1);
//	nums.insert(11);
//	nums.insert(334);
//	nums.insert(4);
//
//	for (int num : nums)
//	{
//		cout << num << endl;
//	}*/
//
//	/*set<string> names = set<string>();
//
//	names.insert("eldaniz");
//	names.insert("tarana");
//
//	for (auto name : names)
//	{
//		cout << name << endl;
//	}*/
//
//	/*map<int, string> dict = map<int, string>();
//
//	pair<int, string> pair1 = pair<int, string>(3, "aaa");
//	pair<int, string> pair2 = pair<int, string>(1, "bbb");
//	pair<int, string> pair3 = pair<int, string>(5, "ccc");
//
//	dict.insert(pair1);
//	dict.insert(pair2);
//	dict.insert(pair3);
//
//	for (auto item : dict)
//	{
//		cout << item.first << " - " << item.second << endl;
//	}*/
//
//	map<string, user> dict = map<string, user>();
//
//	user user1 = user("bobmarley@gmail.com", "bob", 56);
//	user user2 = user("anna@gmail.com", "anna", 56);
//	user user3 = user("akmed@gmail.com", "alip", 56);
//
//	dict.insert(pair<string, user>(user1.email,user1));
//	dict.insert(pair<string, user>(user2.email,user2));
//	dict.insert(pair<string, user>(user3.email,user3));
//
//	for (auto keyvaluepair : dict)
//	{
//		cout << keyvaluepair.first << " - " << keyvaluepair.second << endl;
//	}
//
//}


//class Person {
//
//public:
//
//	string Id;
//	string name;
//	int age;
//
//	Person(string Id,string name,int age) : Id(Id), name(name), age(age) {}
//
//};
//
//ostream& operator << (ostream& cout, Person person) {
//
//	cout << person.Id << " " << person.name << " " << person.age << endl;
//
//	return cout;
//}
//
//int main() {
//
//	map<string, Person> std = map<string, Person>();
//
//	Person user = Person("1234", "Axmed", 34);
//	Person user1 = Person("4585", "Oleq", 15);
//	Person user2 = Person("111", "Anna", 25);
//
//	std.insert(pair<string, Person>(user.Id,user));
//	std.insert(pair<string, Person>(user1.Id, user1));
//	std.insert(pair<string, Person>(user2.Id, user2));
//
//	for (auto all : std)
//	{
//		cout << all.first << " - " << all.second << endl;
//	}
//
//}

//class User {
//
//	static int idCounter;
//
//public:
//	string email;
//	string name;
//	int age;
//	int id;
//
//	User(string email,string name,int age):email(email), name(name), age(age){
//	
//		this->id = idCounter++;
//	
//	}
//
//};
//
//int User::idCounter = 1;
//
//ostream& operator << (ostream& cout, User user) {
//
//	cout << user.email << "; " << user.name << " " << user.age << "years old" << endl;
//
//	return cout;
//
//}

//void UserId(map<int, User>& users) {
//
//
//
//}

//int main() {

	/*set<int> nums = set<int>();

	nums.insert(11);
	nums.insert(12);
	nums.insert(52);
	nums.insert(8);

	for (auto temp : nums) {

		cout << temp << endl;

	}*/


	/*set<string> names = set<string>();

	names.insert("Oleg");
	names.insert("Bony");
	names.insert("Arif");
	names.insert("Dodi");

	for (auto list : names)
	{
		cout << list << endl;
	}*/

	/*set<User> users = set<User>();

	User user = User("Test",18);
	User user1 = User("Test", 25);
	User user2 = User("Test", 5);

	users.insert(user);
	users.insert(user1);
	users.insert(user2);

	for (auto list : users)
	{
		cout << list.name << endl;
	}*/

	/*map<int, string> dict = map<int, string>();

	pair<int, string> pair1 = pair<int, string>(3,"test");
	pair<int, string> pair2 = pair<int, string>(1, "salam");
	pair<int, string> pair3 = pair<int, string>(5, "qwerty");

	dict.insert(pair1);
	dict.insert(pair2);
	dict.insert(pair3);

	for (auto item : dict)
	{
		cout << item.first << " - " << item.second << endl;
	}*/


	/*map<int, User> dict = map<int,User>();

	User user = User("Bob", 56);
	User user1 = User("Ann", 30);
	User user2 = User("Victor", 28);*/

	/*pair<string, User> pair = pair<string, User>(user.email, user);

	dict.insert(pair);*/

	/*dict.insert(pair<int, User>(user.id, user));
	dict.insert(pair<int, User>(user1.id, user1));
	dict.insert(pair<int, User>(user2.id, user2));

	for (auto lists : dict)
	{
		cout << lists.first << " - " << lists.second << endl;
	}*/

//}

//class User {
//
//	static int count;
//
//public:
//
//	string name;
//	int id;
//	int age;
//
//	User(string name, int age) : name(name),age(age){
//	
//		this->id = count++;
//	
//	}
//
//};
//
//int User::count = 1;
//
//
//ostream& operator << (ostream& cout, User user) {
//
//	cout << "- " << user.name << " " << user.age << endl;
//
//	return cout;
//
//}
//
//void AddUserId(map<int, User>& user) {
//
//	string name;
//	int age;
//
//	cout << "Input Name: ";
//	cin >> name;
//	cout << "Input Age: ";
//	cin >> age;
//
//	User newuser = User(name,age);
//
//	user.insert(pair<int, User>(newuser.id,newuser));
//
//}
//
//int main() {
//
//	map<int, User> users = map<int, User>();
//
//	AddUserId(users);
//
//	/*User person = User("Bob", 45);
//	User person1 = User("Bob3", 45);
//	User person2 = User("Bob2", 45);
//	User person3 = User("Bob1", 45);
//
//	users.insert(pair<int, User>(person.id, person));
//	users.insert(pair<int, User>(person1.id, person1));
//	users.insert(pair<int, User>(person2.id, person2));
//	users.insert(pair<int, User>(person3.id, person3));*/
//
//	for (auto item : users)
//	{
//
//		cout << item.first << " " << item.second << endl;
//
//	}
//
//};

//class Person {
//
//	static int count;
//
//public:
//
//	string name;
//	int age;
//	int id;
//
//	Person(string name, int age) :name(name), age(age) {
//
//		this->id = count++;
//
//	}
//
//};
//
//int Person::count = 1;
//
//void AddUserId(map<int, Person>& users) {
//	
//	string name;
//	int age;
//
//	cout << "Input Name: ";
//	cin >> name;
//	cout << "Input Age: ";
//	cin >> age;
//	
//	Person newUser = Person(name, age);
//
//	users.insert(pair<int, Person>(newUser.id, newUser));
//
//}
//
//ostream& operator << (ostream& cout, Person user) {
//
//	cout << "- " << user.name << " " << user.age << endl;
//
//	return cout;
//
//}
//
//int main() {
//
//	map<int, Person> users = map<int, Person>();
//
//	AddUserId(users);
//
//	for (auto item : users) {
//
//		cout << item.first << " " << item.second << endl;
//
//	}
//
//} 
//
//enum Gender{
//	male,female,unknown,oter,none
//};
//
// //Base Class
//
//class Animal {
//public:
//
//	string name;
//	int age;
//	Gender gender;
//
//	void Say() {
//
//		cout << "..." << endl;
//
//	}
//
//};
//
//class Cat : public Animal {
//
//public:
//
//	bool isPet;
//
//	Cat() {
//
//		
//
//	}
//
//	void AskFood() {
//
//		cout << "MEOW MEOW NIGGA" << endl;
//
//	}
//
//
//};
//
//int main() {
//
//	Cat cat = Cat();
//
//	
//
//}

struct A{

	int field;
	
	A() {

		this.

	}

	void Func() {



	}

protected:

	int field2;

	void Func2() {



	}

private:

	int field3;

	void Func3() {


	}

};

class B : public A {

public:

	B() {

		this->field;
		this->Func();

		this->field2;
		this->Func2();

	}

};

int main() {

	A a = A();

	a.

}