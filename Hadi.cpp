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

*/

