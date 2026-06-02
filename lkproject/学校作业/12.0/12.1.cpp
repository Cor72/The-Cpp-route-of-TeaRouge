// 12.1 - Document类派生出Book类，增加PageCount变量
#include <iostream>
#include <string>
using namespace std;

class Document {
public:
    Document(string name) : name(name) {
        cout << "Document constructor called, name: " << name << endl;
    }
    ~Document() {
        cout << "Document destructor called, name: " << name << endl;
    }
    void print() {
        cout << "Document name: " << name << endl;
    }
protected:
    string name;
};

class Book : public Document {
public:
    Book(string name, int pageCount) : Document(name), pageCount(pageCount) {
        cout << "Book constructor called, pageCount: " << pageCount << endl;
    }
    ~Book() {
        cout << "Book destructor called" << endl;
    }
    void print() {
        cout << "Book name: " << name << ", PageCount: " << pageCount << endl;
    }
private:
    int pageCount;
};

int main() {
    Book book("C++ Programming", 350);
    book.print();
    return 0;
}
