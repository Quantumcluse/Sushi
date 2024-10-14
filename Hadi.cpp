/*
#include <iostream>
using namespace std;
class Random_num_generator {
private:
    int id; 
public:
    Random_num_generator() : id(0) {}

    int generate_id() {
        return ++id;
    }
};
int main() {
    Random_num_generator rng;
    cout << "ID 1: " << rng.generate_id() << endl;
    cout << "ID 2: " << rng.generate_id() << endl;
    cout << "ID 3: " << rng.generate_id() << endl;
    return 0;
}



#include <iostream>
using namespace std;
class Random_num_generator {
public:
    int generate_id() {
        static int id = 0; 
        return ++id;
    }
};
int main() {
    Random_num_generator rng;
    cout << "ID 1: " << rng.generate_id() << endl;
    cout << "ID 2: " << rng.generate_id() << endl;
    cout << "ID 3: " << rng.generate_id() << endl;
    return 0;
}


//Task 2
#include <iostream>
using namespace std;
class MathUtil {
public:
    static const double PI;
    static int factorial(int n) {
        if (n < 0) {
            cout << "Invalid number" << endl;
            return -1; 
        } else if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
};
const double MathUtil::PI = 3.14;
int main() {
    int num;
    cout << "Enter a non-negative integer:";
    cin >> num;
    if (num < 0) {
        cout << "Invalid input." << endl;
        return 1;
    }
    cout << "PI: " << MathUtil::PI << endl;
    cout << "Factorial of " << num << ": " << MathUtil::factorial(num) << endl;
    return 0;
}


//Task 3
#include <iostream>
#include <string>
using namespace std;
class Product {
private:
    string name;
    double price;
public:
    Product(const string& name, double price) : name(name), price(price) {}
    const string& get_name() const {
        return name;
    }
    double get_price() const {
        return price;
    }
};
class InventoryManager {
private:
    static int total_products;
    Product* inventory[100];
public:
    InventoryManager() {
        for (int i = 0; i < 100; ++i) {
            inventory[i] = nullptr;
        }
    }
    void add_product(const Product& product) {
        for (int i = 0; i < 100; ++i) {
            if (inventory[i] == nullptr) {
                inventory[i] = new Product(product.get_name(), product.get_price());
                total_products++;
                return;
            }
        }
        cout << "Inventory is full. Cannot add more products." << endl;
    }
    void display_inventory() const {
        cout << "Inventory List:" << endl;
        for (int i = 0; i < 100; ++i) {
            if (inventory[i] != nullptr) {
                cout << "Name: " << inventory[i]->get_name() << ", Price: " << inventory[i]->get_price() << endl;
            }
        }
    }
    static int get_total_products() {
        return total_products;
    }
    const Product* search_product(const string& product_name) const {
        for (int i = 0; i < 100; ++i) {
            if (inventory[i] != nullptr && inventory[i]->get_name() == product_name) {
                return inventory[i];
            }
        }
        return nullptr; 
    }
};
int InventoryManager::total_products = 0;
int main() {
    InventoryManager manager;
    Product p1("Product 1", 8.99);
    Product p2("Product 2", 13.35);
    manager.add_product(p1);
    manager.add_product(p2);
    manager.display_inventory();
    cout << "Total Products: " << InventoryManager::get_total_products() << endl;
    const string product_name = "Product 1";
    const Product* found_product = manager.search_product(product_name);
    if (found_product != nullptr) {
        cout << "Product found: " << found_product->get_name() << ", Price: " << found_product->get_price() << endl;
    } else {
        cout << "Product not found." << endl;
    }
    return 0;
}



// implimenting Function Overloading in a code
#include<iostream>
using namespace std;
class sum
{
public:
void add(int a, int b)
{
cout << a + b;
}
void add(int a, double b)
{
cout << a + b;
}
void add(double a, int b)
{
cout << a + b;
}
void add(int a, int b, double c)
{
cout << a + b + c;
}
};
int main()
{
sum s1;
int a = 3;
int b = 3;
double c = 9.3;
s1.add(a, b);
cout << endl;
s1.add(c, a);
cout << endl;
s1.add(a, b, c);
}

#include <iostream>
using namespace std;
void print(int x) {
    cout << "Printing integer: " << x << endl;
}
void print(double x) {
    cout << "Printing double: " << x << endl;
}
int main() {
    int inum = 10;
    double dnum = 3.14;
    print(inum);   
    print(dnum);
    return 0;
}




#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base display called" << endl;
    }
};
class Derived : public Base {
public:
    void display() override {
        cout << "Derived display called" << endl;
    }
};
int main() {
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->display();
    return 0;
}

#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};
int main() {
    Circle circle;
    Square square;
    circle.draw();
    square.draw(); 
    return 0;
}



#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream filename;
filename.open("hadi.txt",ios::out);
if(!filename)
{cout<<"FILE OPENING ERROR";
return 0;
}
else
cout<<"file opened \n";
cout<<"entering data in file \n";
filename<<"joe mama\n";
filename<<"i love shifa\n";
filename.close();
return 0;
}



#include <iostream>
#include <string>

using namespace std;

class Staff {
protected:
    int code;
    string name;

public:
    Staff() : code(0), name("") {}
    Staff(int c, string n) : code(c), name(n) {}
    Staff(const Staff &s) : code(s.code), name(s.name) {}

    int getCode() const { return code; }
    void setCode(int c) { code = c; }

    string getName() const { return name; }
    void setName(string n) { name = n; }

    virtual void display() const {
        cout << "Employee Code: " << code << "\nEmployee Name: " << name << endl;
    }

    virtual ~Staff() {}
};

class Typist : public Staff {
protected:
    int typingSpeed;

public:
    Typist() : Staff(), typingSpeed(0) {}
    Typist(int c, string n, int s) : Staff(c, n), typingSpeed(s) {}
    Typist(const Typist &t) : Staff(t), typingSpeed(t.typingSpeed) {}

    int getTypingSpeed() const { return typingSpeed; }
    void setTypingSpeed(int s) { typingSpeed = s; }

    void display() const override {
        Staff::display();
        cout << "Typing Speed: " << typingSpeed << " words per minute" << endl;
    }

    virtual double calculateSalary() const = 0;
};

class PermanentTypist : public Typist {
private:
    double monthlySalary;

public:
    PermanentTypist() : Typist(), monthlySalary(0.0) {}
    PermanentTypist(int c, string n, int s, double ms) : Typist(c, n, s), monthlySalary(ms) {}
    PermanentTypist(const PermanentTypist &pt) : Typist(pt), monthlySalary(pt.monthlySalary) {}

    double getMonthlySalary() const { return monthlySalary; }
    void setMonthlySalary(double ms) { monthlySalary = ms; }

    void display() const override {
        Typist::display();
        cout << "Monthly Salary: Rs." << monthlySalary << endl;
    }

    double calculateSalary() const override {
        return monthlySalary;
    }
};

class CasualTypist : public Typist {
private:
    double hourlyWage;
    int hoursWorked;

public:
    CasualTypist() : Typist(), hourlyWage(0.0), hoursWorked(0) {}
    CasualTypist(int c, string n, int s, double hw, int hwk) : Typist(c, n, s), hourlyWage(hw), hoursWorked(hwk) {}
    CasualTypist(const CasualTypist &ct) : Typist(ct), hourlyWage(ct.hourlyWage), hoursWorked(ct.hoursWorked) {}

    double getHourlyWage() const { return hourlyWage; }
    void setHourlyWage(double hw) { hourlyWage = hw; }

    int getHoursWorked() const { return hoursWorked; }
    void setHoursWorked(int hwk) { hoursWorked = hwk; }

    void display() const override {
        Typist::display();
        cout << "Hourly Wage: Rs." << hourlyWage << "\nHours Worked: " << hoursWorked << endl;
    }

    double calculateSalary() const override {
        return hourlyWage * hoursWorked;
    }
};

class Faculty : public Staff {
private:
    string department;
    string subjectTaken;
    string researchArea;

public:
    Faculty() : Staff(), department(""), subjectTaken(""), researchArea("") {}
    Faculty(int c, string n, string d, string st, string ra) : Staff(c, n), department(d), subjectTaken(st), researchArea(ra) {}
    Faculty(const Faculty &f) : Staff(f), department(f.department), subjectTaken(f.subjectTaken), researchArea(f.researchArea) {}

    string getDepartment() const { return department; }
    void setDepartment(string d) { department = d; }

    string getSubjectTaken() const { return subjectTaken; }
    void setSubjectTaken(string st) { subjectTaken = st; }

    string getResearchArea() const { return researchArea; }
    void setResearchArea(string ra) { researchArea = ra; }

    void display() const override {
        Staff::display();
        cout << "Department: " << department
             << "\nSubject Taken: " << subjectTaken
             << "\nResearch Area: " << researchArea << endl;
    }
};

class Officer : public Staff {
private:
    string rank;
    string grade;

public:
    Officer() : Staff(), rank(""), grade("") {}
    Officer(int c, string n, string r, string g) : Staff(c, n), rank(r), grade(g) {}
    Officer(const Officer &o) : Staff(o), rank(o.rank), grade(o.grade) {}

    string getRank() const { return rank; }
    void setRank(string r) { rank = r; }

    string getGrade() const { return grade; }
    void setGrade(string g) { grade = g; }

    void display() const override {
        Staff::display();
        cout << "Rank: " << rank << "\nGrade: " << grade << endl;
    }
};

int main() {
    Staff employee1(1, "Ali Ahmed");
    Typist *typist1 = new PermanentTypist(2, "Sara Khan", 70, 30000.0);
    Typist *typist2 = new CasualTypist(3, "Ahmed Hassan", 60, 200.0, 160);
    Faculty faculty1(4, "Dr. Fatima Shah", "Computer Science", "Data Structures", "Machine Learning");
    Officer officer1(5, "Major Kamran", "Major", "A");

    cout << "Employee Details:" << endl;
    employee1.display();
    cout << endl;

    cout << "Permanent Typist Details:" << endl;
    typist1->display();
    cout << "Calculated Salary: Rs." << typist1->calculateSalary() << endl;
    cout << endl;

    cout << "Casual Typist Details:" << endl;
    typist2->display();
    cout << "Calculated Salary: Rs." << typist2->calculateSalary() << endl;
    cout << endl;

    cout << "Faculty Details:" << endl;
    faculty1.display();
    cout << endl;

    cout << "Officer Details:" << endl;
    officer1.display();
    cout << endl;

    delete typist1;
    delete typist2;

    return 0;
}

#include <iostream>
using namespace std;
class B;
class A
{
    private:
    int a;
    public:
    A():a(10)
    {
    }
    friend void fun (A,B); 
};
class B
{
    private:
    int b;
    public:
    B():b(12)
    {
    }
    friend void fun (A,B);
};
void fun(A obj1,B obj3)
{
    int c;
    c=obj1.a*obj3.b;
    cout<<c;
}
int main()
{
A obj;
B obj2;
fun(obj,obj2);
}



#include <iostream>
using namespace std;
int main()
{
int a=10;
int b=0;
int d;
try
{
    if(b==0)
    {
        throw 404;
    }
    if(b==1)
    {throw 11;}
    d=a/b;
    cout<<d;
}
catch(int e)
{ if(e==11)
   { cout<<"error 11";}

else if (e==404)
{
    cout<<"error infinity";
}}


return 0;
}


#include<iostream>
using namespace std;
#include<fstream>
#include<string>
int main()
{
	fstream file;
	string color[5];
	string color2;
	int count = 0;
	string a;
	file.open("Color.txt", ios::out | ios::in);
	cout << "Enter Color\n";
	for (int i = 0; i < 5; i++)
	{
		cin >> color[i];
		file << color[i] << endl;
	}

	file.seekg(0, ios::beg);
	cout << "Enter Another Color\n";
	cin >> color2;
	for (int i = 0; i < 5; i++)
	{
		file >> a;
		if (color2 == a)
		{
			count++;
		}
		
	
}
	if (count > 0)
	{
		cout << "Your Color Exists";
	}
	else
	{
		cout << "Nahi Hai vai";
	}
	return 0;
}




#include <iostream>
using namespace std;
class cal_age
{
    private:
    int d,m,y;
    public:
     cal_age(int dob_d, int dob_m, int dob_y): d(dob_d), m(dob_m), y(dob_y) {}
    int operator -(cal_age cd)
    {
      int ageindays = (cd.y - y) * 365 + (cd.m - m) * 30 + (cd.d - d);
        return ageindays;
    }
};
int main()
{
    cal_age dob(15,8,4);
    cal_age cd(14,5,24);
    int agedays=dob-cd;
    int years=agedays/365;
    int months=(agedays%365)/30;
    int days=(agedays%365)%30;
cout<<"Your age is= "<<days<<" Days "<<months<<" Months "<<years<<" Years ";
    return 0;
}




#include <iostream>
using namespace std;
class age{
private:
int d,m,y;
public:
age(int a,int b,int c):d(a),m(b),y(c){}
int operator -(age a)
{
    int total_days=(a.y-y)*365+(a.m-m)*30+(a.d-d);
return total_days;
}
};
int main()
{
    age dob(15,8,2004);
    age cd(6,4,2024);
int total_days=dob-cd;
int years=total_days/365;
int months=(total_days%365)/30;
int days=(total_days%365)%30;
cout<<"Your age is :"<<years<<" years "<<months<<" months "<<days<<" days ";
return 0;
}




#include<iostream>
using namespace std;
class A{
public:
int a;
int b;
A(int x,int y)
{
a=x;
b=y;
}
void display()
{
    cout<<"a="<<a;
    cout<<"\n b="<<b;    
}
};
int main()
{
    A obj(1,3);
    A obj2(obj);
obj.display();
obj2.display();
}





#include <iostream>
using namespace std;
class A
{
    public:
virtual int fun(int a,int b)=0;
};
class add:public A{
public:
int fun(int x,int y)
{
    return x+y;
}
};
class sub:public A{
public:
int fun(int x,int y)
{
    return x-y;
}
};
int main()
{
add a;
sub b;
cout<<a.fun(10,5)<<endl;
cout<<b.fun(8,16)<<endl;
return 0;
}


//DSA

// creating a node in c++
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

int main() {
    Node* head = nullptr;
    head = new Node(); 

    head->data = 1;
    head->link = nullptr;

    cout << head->data << endl;

    delete head; 
    return 0;
}


//creating a second node and linking both
#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = nullptr;
    Node* current = new Node();
    current->data = 8;
    current->next = nullptr;
    head->next = current;
    return 0;
}


// creating the 3rd node 
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node* head=new Node();
    head->data=1;
    head->next=nullptr;
    Node* current=new Node();
    current->data=8;
    current->next=nullptr;
    head->next=current;
    Node* third=new Node();
    third->data=9;
    third->next=nullptr;
    head->next->next=third;
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}


//Implimenting code to add at begining of list 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* add_at_beginning(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = nullptr;

    Node* current = new Node();
    current->data = 8;
    current->next = nullptr;
    head->next = current;

    Node* third = new Node();
    third->data = 9;
    third->next = nullptr;
    head->next->next = third;

    cout << "Initial linked list: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = add_at_beginning(head, 231189);
    cout << "After adding at the beginning: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}


*/

// Code with deletion and insertion functions
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* nextNode;

    Node(int val) {
        value = val;
        nextNode = nullptr;
    }
};

void addToFront(Node*& headNode, int val) {
    Node* newNode = new Node(val);
    newNode->nextNode = headNode;
    headNode = newNode;
}

void displayList(Node* headNode) {
    if (headNode == nullptr) {
        cout << "List is empty\n";
        return;
    }
    
    Node* currentNode = headNode;
    while (currentNode != nullptr) {
        cout << currentNode->value << " -> ";
        currentNode = currentNode->nextNode;
    }
    cout << "NULL\n";
}

void removeNodeAt(Node*& headNode, int pos) {
    if (headNode == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (pos == 1) {
        Node* nodeToDelete = headNode;
        headNode = headNode->nextNode;
        delete nodeToDelete;
        return;
    }

    Node* currentNode = headNode;
    for (int count = 1; count < pos - 1 && currentNode != nullptr; count++) {
        currentNode = currentNode->nextNode;
    }

    if (currentNode == nullptr || currentNode->nextNode == nullptr) {
        cout << "Position out of range\n";
        return;
    }

    Node* nodeToDelete = currentNode->nextNode;
    currentNode->nextNode = nodeToDelete->nextNode;
    delete nodeToDelete;
}

void removeLastNode(Node*& headNode) {
    if (headNode == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (headNode->nextNode == nullptr) {
        delete headNode;
        headNode = nullptr;
        return;
    }

    Node* currentNode = headNode;
    while (currentNode->nextNode->nextNode != nullptr) {
        currentNode = currentNode->nextNode;
    }

    delete currentNode->nextNode;
    currentNode->nextNode = nullptr;
}

void removeFirstNode(Node*& headNode) {
    if (headNode == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* nodeToDelete = headNode;
    headNode = headNode->nextNode;
    delete nodeToDelete;
}

int main() {
    Node* headNode = nullptr;
    addToFront(headNode, 2);
    addToFront(headNode, 3);
    addToFront(headNode, 1);
    addToFront(headNode, 2);
    displayList(headNode);
    
    removeNodeAt(headNode, 3);
    displayList(headNode);
    
    removeLastNode(headNode);
    displayList(headNode);
    
    removeFirstNode(headNode);
    displayList(headNode);

    return 0;
}