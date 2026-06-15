#include<iostream>
using namespace std;

template<class T>
class Stack
{
private:
	int capacity;
	int numberofelement;
	T *ptrofele;
public:
	Stack();
	Stack(int c);
	Stack(Stack &);
	~Stack();
	void push(T);
	T peek();
	T pop();
	void appendCapacity();
	int getNumberofelement(){return numberofelement;}
	bool empty()
	{return numberofelement==0;}
};

template<class T>
Stack<T>::Stack()
{ ptrofele=new T[10];
  capacity=10;
  numberofelement=0;
}

template<class T>
Stack<T>::Stack(int c)
{
  ptrofele=new T[c];
  capacity=c;
  numberofelement=0;
}

template<class T>
Stack<T>::Stack(Stack &anotherStack)  //深拷贝
{
	capacity=anotherStack.capacity;
	numberofelement=anotherStack.numberofelement;
	ptrofele=new T[capacity];
	for(int i=0;i<numberofelement;i++)
		ptrofele[i]=anotherStack.ptrofele[i];
}

template<class T>
Stack<T>::~Stack()
{
	delete []ptrofele;
}

template<class T>
void Stack<T>::appendCapacity()
{
	capacity+=10;
	T *tptr=new T[capacity];
	for(int i=0;i<numberofelement;i++)
		tptr[i]=ptrofele[i];
	delete []ptrofele;
	ptrofele=tptr;
}

template<class T>
void Stack<T>::push(T anele)
{
	if(numberofelement==capacity)  //如果栈满，则追加容量
		appendCapacity();
	ptrofele[numberofelement++]=anele;
}

template<class T>
T Stack<T>::peek()
{
	return ptrofele[numberofelement-1];
}

template<class T>
T Stack<T>::pop()
{
	return ptrofele[--numberofelement];
}

int main()
{
    Stack<int> stackofint(16);
	for(int i=0;i<10;i++)
		stackofint.push(i);	
	while(!stackofint.empty())
		cout<<stackofint.pop()<<" ";
	cout<<endl;	
	Stack<char> stackofchar;
	for(int j=65;j<=70;j++)
		stackofchar.push((char)j);	
	while(!stackofchar.empty())
		cout<<stackofchar.pop()<<" ";
	cout<<endl;
    return 0;
}