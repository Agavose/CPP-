#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <algorithm>
#include <functional>
#include <thread>
#include <numeric>

using namespace std;

/*struct*/
//void printBook(struct Books book);
//
//struct Books
//{
//	string title;
//	string author;
//	string subject;
//	int book_id;
//};
//
//int main()
//{
//	Books book1;
//	Books book2;
//
//	book1.title = "C++教程";
//	book1.author = "Runoob";
//	book1.subject = "编程语言";
//	book1.book_id = 12345;
//
//	book2.title = "CSS教程";
//	book2.author = "Runoob";
//	book2.subject = "前端技术";
//	book2.book_id = 67890;
//
//	printBook(book1);
//	printBook(book2);
//
//	struct Books* BooksPointer;
//	BooksPointer = &book1;
//	BooksPointer->book_id = 54321;
//	printBook(book1);
//}
//
//void printBook(struct Books book)
//{
//	cout << book.title << endl;
//	cout << book.author << endl;
//	cout << book.subject << endl;
//	cout << book.book_id << endl;
//}


/*class*/
//class Box
//{
//public:
//	Box() {};
//	Box(int length, int width, int hight)
//	{
//		this->length = length;
//		this->width = width;
//		this->hight = hight;
//	};
//	~Box() {};
//private:
//	int length;
//	int width;
//	int hight;
//public:
//	friend int getvolume(Box box)
//	{
//		return box.length * box.width * box.hight;
//	}
//};
//
//int main()
//{
//	Box box1(3, 5, 7);
//	cout << getvolume(box1) << endl;
//}

//class Adder
//{
//public:
//	Adder(int i = 0)
//	{
//		total = i;
//	}
//
//
//	void addNum(int number)
//	{
//		total += number;
//	}
//
//	int getTotal()
//	{
//		return total;
//	}
//private:
//	int total;
//};
//
//int main()
//{
//	Adder a;
//
//	a.addNum(10);
//	a.addNum(2);
//	a.addNum(3);
//
//	cout << "Total" << a.getTotal() << endl;
//	return 0;
//}

//class Shape
//{
//public:
//	void setWidth(int w)
//	{
//		width = w;
//	}
//	void setHeight(int h)
//	{
//		height = h;
//	}
//protected:
//	int width;
//	int height;
//};
//
//class PaintCost
//{
//public:
//	int getCost(int area)
//	{
//		return area * 70;
//	}
//};
//
//class Rectangle : public Shape, public PaintCost
//{
//public:
//	int getArea()
//	{
//		return (width * height);
//	}
//};
//
//int main(void)
//{
//	Rectangle Rect;
//	int area;
//
//	Rect.setHeight(5);
//	Rect.setWidth(7);
//
//	cout << Rect.getArea() << endl;
//	cout << Rect.getCost(Rect.getArea()) << endl;
//
//	return 0;
//}

//class Shape
//{
//protected:
//	int width, height;
//public:
//	Shape(int a = 0, int b = 0)
//	{
//		width = a;
//		height = b;
//	}
//	virtual void area()
//	{
//		cout << "Parent class area:" <<0<< endl;
//	}
//};
//
//class Rectangle :public Shape
//{
//public:
//	Rectangle(int a = 0,int b=0):Shape(a,b){}
//	void area()
//	{
//		cout << "Rectangle class area:" <<(width*height)<< endl;
//	}
//};
//
//class Triangle :public Shape
//{
//public:
//	Triangle(int a = 0, int b = 0): Shape(a, b) {}
//	void area()
//	{
//		cout << "Triangle class area:" << (width * height / 2)<< endl;
//	}
//};
//
//int main()
//{
//	Shape* shape;
//	Rectangle rec(10, 7);
//	Triangle tri(10, 3);
//
//	shape = &rec;
//
//	shape->area();
//
//	shape = &tri;
//
//	shape->area();
//	
//	return 0;
//}



/*new delete*/
//int main()
//{
//	double* pvalue = NULL;
//	pvalue = new double;
//
//	*pvalue = 33.7;
//	cout << "Value of pvalue：" << *pvalue << endl;
//
//	delete pvalue;
//
//	return 0;
//}

//int main()
//{
//	int** p;
//	int i, j;
//	
//	p = new int* [4];
//	for (i = 1; i < 4; i++)
//	{
//		p[i] = new int[8];
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if (j == 0)cout << endl;
//			cout << p[i][j] << endl;
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		delete[]p[i];
//	}
//	delete[]p;
//	return 0;
//}

//class Box
//{
//public:
//	Box()
//	{
//		cout << "construct" << endl;
//	}
//	~Box()
//	{
//		cout << "destruct" << endl;
//	}
//};
//
//int main()
//{
//	Box* myboxarry = new Box[3];
//	delete[] myboxarry;
//	return 0;
//}



/*STL*/
//int main() 
//{
//	string str1;
//	str1.assign("hello");
//	cout << str1.find("l", 0) << endl;
//	cout<<str1.replace(0,1,"x") << endl;;
//	cout << str1 << endl;
//
//	string s1 = "hello";
//	s1 += "world";
//	s1 += ':';
//	string s2 = "!!!";
//	s1 += s2;
//	cout << s1 << endl;
//
//	string s3 = "I";
//	s3.append(" love ");
//	s3.append("youahdhdjjdjdjd", 3);
//	s3.append(s1, 1, 4);
//	cout << s3 << endl;
//
//	int ret = s1.compare(s3);
//	cout << ret << endl;
//	cout << s1.insert(4, "you") << endl;
//	cout << s1.substr(1, 3) << endl;
//}

//int main()
//{
//	vector<int> v1(10, 3);
//	int a = v1.size();
//	int c = v1.capacity();
//	v1.assign(3, 1);
//	int b = v1.size();
//	int d = v1.capacity();
//	cout << a<< " " << b << endl;
//	cout << c << " " << d << endl;
//}

//int main()
//{
//	stack<int>stk1;
//	stk1.push(3);
//	cout << stk1.empty() << endl;
//	cout << stk1.size() << endl;
//
//	queue<float>que1;
//	for (int i = 1; i < 5; i++)
//	{
//		que1.push(i * 1.3);
//	}
//	cout << que1.front() << " " << que1.back() << endl;
//}

//int main()
//{
//	list<int>lst1(3, 3);
//	lst1.push_back(5);
//	lst1.push_front(1);
//	cout << lst1.front() << endl;
//}

//int main()
//{
//	set<int>st1;
//	st1.insert(5);
//	st1.insert(7);
//	st1.insert(1);
//	st1.insert(9);
//	for (set<int>::iterator it = st1.begin(); it != st1.end(); it++)
//	{
//		cout << *it << " " << endl;
//	}
//}


///*函数对象*/
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//void test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 20) << endl;
//}
//
//class MyPrint
//{
//public:
//	int count;
//	MyPrint()
//	{
//		count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		count++;
//	}
//};
//
//void test02()
//{
//	MyPrint myprint;
//	myprint("hello");
//	myprint("hellp");
//	cout << "myprint-count: " << myprint.count << endl;
//}
//
//void doprint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
//void test03()
//{
//	MyPrint myprint;
//	doprint(myprint, "hello world");
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
//
///*谓词*/
////一元谓词
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
////二元谓词
//class MyCompare
//{
//public:
//	bool operator()(int num1, int num2)
//	{
//		return num1 > num2;
//	}
//};

//int main()
//{
//	//取反
//	negate<int> n;
//	cout << n(10) << endl;
//	//加法
//	plus<int> p;
//	cout << p(2, 9) << endl;
//	return 0;
//}

//class EPrint
//{
//public:
//	void operator()(int x)
//	{
//		cout << x << endl;
//	}
//};
//
//int main()
//{
//	int v[] = { 5,3,1,8,9 };
//	vector<int>vTarget(v,v+sizeof(v)/sizeof(int));
//	for_each(vTarget.begin(), vTarget.end(), EPrint());
//}


void proc(int a)
{
	cout << "子线程，传入参数为：" << a << endl;
	cout << "子线程id：" << this_thread::get_id() << endl;
}

int main()
{
	cout << "主线程" << endl;
	int a = 9;
	thread th2(proc, a);
	cout << "主线程中显示子线程id：" << th2.get_id() << endl;
	th2.join();
	return 0;
}