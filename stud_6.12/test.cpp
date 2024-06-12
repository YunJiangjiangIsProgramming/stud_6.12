#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//
//// 检查数列是否是(i, j)-可分的
//bool isSeparable(int m, int i, int j) {
//    int n = 4 * m + 2;
//    std::vector<int> sequence(n);
//    for (int k = 0; k < n; ++k) {
//        sequence[k] = k + 1; // 假设数列从1开始
//    }
//
//    // 删除a_i和a_j
//    sequence.erase(sequence.begin() + i - 1);
//    sequence.erase(sequence.begin() + j - 1);
//
//    // 检查剩余的数列是否可以分成m组等差数列
//    int d = sequence[1] - sequence[0];
//    for (int k = 2; k < n - 2; ++k) {
//        if (sequence[k] - sequence[k - 1] != d) {
//            return false; // 如果公差不一致，则不是等差数列
//        }
//    }
//
//    // 检查是否可以将等差数列分成m组
//    for (int k = 0; k < m; ++k) {
//        int start = 4 * k;
//        int end = start + 3;
//        if (sequence[start + 1] - sequence[start] != d || sequence[end] - sequence[end - 1] != d) {
//            return false; // 如果某一组的公差不一致，则不是(i, j)-可分数列
//        }
//    }
//
//    return true; // 如果以上条件都满足，则是(i, j)-可分数列
//}
//
//int main() {
//    int m;
//    std::cout << "Enter the value of m: ";
//    std::cin >> m;
//
//    // 计算所有可能的(i, j)对，并检查哪些数列是(i, j)-可分的
//    int totalPairs = 0;
//    int separablePairs = 0;
//    for (int i = 1; i <= 6; ++i) {
//        for (int j = i; j <= 6; ++j) {
//            ++totalPairs;
//            if (isSeparable(m, i, j)) {
//                ++separablePairs;
//                std::cout << "(" << i << ", " << j << ") is a separable sequence." << std::endl;
//            }
//        }
//    }
//
//    // 计算使得数列(i, j)-可分的概率
//    double probability = static_cast<double>(separablePairs) / totalPairs;
//    std::cout << "The probability that a sequence is (i, j)-separable is: " << probability << std::endl;
//
//    return 0;
//}


#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	bool operator<(const Date& x)
//	{
//		if (_year < x._year)
//		{
//			return true;
//		}
//		else if (_year == x._year && _month < x._month)
//		{
//			return true;
//		}
//		else if (_year == x._year && _month == x._month && _day < x._day)
//		{
//			return true;
//		}
//
//		return false;
//	}
//
//	// d4 = d1
//	// d1 = d1
//	//Date& operator=(const Date& d)
//	//{
//	//	if (this != &d)
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//	}
//
//	//	return *this;
//	//}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//bool operator<(const Date& x1, const Date& x2)
//{
//	if (x1._year < x2._year)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month < x2._month)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month == x2._month && x1._day < x2._day)
//	{
//		return true;
//	}
//
//	return false;
//}


//int main()
//{
//	Date d1(2023, 4, 26);
//	Date d2(2023, 6, 21);
//
//	//d1 < d2; // 转换成operator<(d1, d2);
//	//operator<(d1, d2);
//
//	d1 < d2; // 转换成d1.operator<(d2);
//	d1.operator<(d2);
//
//	if (d1 < d2)
//	{
//
//	}
//
//	//d1 - d2;  // 有意义
//	//d1 + d2;  // 没意义
//	// 是否要重载运算符，这个运算符对这个类是否有意义
//
//	return 0;
//}


//int main()
//{
//	Date d1(2023, 4, 26);
//	Date d2(2023, 6, 21);
//	// 已经存在的两个对象之间复制拷贝        -- 运算符重载函数
//	d1 = d2;
//
//	// 用一个已经存在的对象初始化另一个对象  -- 构造函数
//	//Date d3(d1);
//
//	int i, j, k;
//	i = j = k = 0;
//
//	Date d5, d4;
//	d5 = d4 = d1;
//
//	d1 = d1;
//
//	return 0;
//}

//#include"Date.h"
//
//void TestDate1()
//{
//	Date d1(2023, 4, 26);
//	d1 += 100;
//	d1.Print();
//
//	Date d2(2023, 4, 26);
//	//Date d3(d2 + 100);
//	Date d3 = d2 + 100;
//	d2.Print();
//	d3.Print();
//
//	// 用一个已经存在的对象初始化另一个对象  -- 构造函数
//	Date d4 = d2;  // 等价于 Date d4(d2);
//
//	//已经存在的两个对象之间复制拷贝        -- 运算符重载函数
//	d4 = d1;
//
//	//int i = 0, j = 1;
//	//j += i += 10;
//}
//
//void TestDate2()
//{
//	Date d1(2023, 4, 26);
//	// 都要++，前置++返回++以后的对象，后置++返回++之前的对象
//	++d1; // d1.operator++()
//	d1++; // d1.operator++(0)
//
//	Date d2(2023, 4, 26);
//	Date d3(2023, 4, 26);
//
//	bool ret1 = d2 < d3;
//
//	int i = 1, j = 2;
//	bool ret2 = i < j;
//}
//
//void TestDate3()
//{
//	Date d1(2023, 5, 5);
//	d1 -= 50;
//	d1.Print();
//
//	Date d2(2023, 5, 5);
//	d2 -= 100;
//	d2.Print();
//
//	Date d3(2023, 5, 5);
//	d3 -= 1000;
//	d3.Print();
//
//	Date d4(2023, 5, 5);
//	d4 -= 10000;
//	d4.Print();
//}
//
//void TestDate4()
//{
//	Date d1(2023, 5, 5);
//	d1 += 100;
//	d1.Print();
//
//	Date d2(2023, 5, 5);
//	d2 += -100;
//	d2.Print();
//
//	Date d3(2023, 5, 5);
//	d3 -= -100;
//	d3.Print();
//}
//
//void TestDate5()
//{
//	Date d1(2023, 5, 5);
//	Date ret1 = d1--; // d1.operator--(&d1, 0);
//	ret1.Print();
//	d1.Print();
//
//	Date d2(2023, 5, 5);
//	Date ret2 = --d2; // d1.operator--(&d1);
//	ret2.Print();
//	d2.Print();
//}
//
//void TestDate6()
//{
//	Date d1(2023, 5, 5);
//	Date d2(1949, 10, 1);
//
//	cout << d1 - d2 << endl;
//	cout << d2 - d1 << endl;
//}
//
//void TestDate7()
//{
//	Date d1(2023, 5, 5);
//	d1 += 100;
//
//	// 流插入
//	cout << d1; // operator<<(cout, d1);
//	operator<<(cout, d1);
//
//	//d1 << cout; // d1.operator<<(cout); 
//	//d1.operator<<(cout);
//
//
//	Date d2(2023, 5, 5);
//	Date d3(1949, 10, 1);
//
//	//d1 = d2 = d3;
//
//	cout << d2 << d3 << d1;
//
//	cin >> d1 >> d2;
//	cout << d2 << d1;
//
//	//Date d4(2023, 13, 1);
//	//cout << d4;
//}
//
//void TestDate8()
//{
//	Date d1(2023, 5, 5);
//	d1.Print();
//
//	const Date d2(2023, 5, 5);
//	d2.Print();
//
//	d1 + 100;
//	d2 + 100;
//
//	d1 < d2;
//	d2 < d1;
//}
//
//int main()
//{
//	TestDate8();
//
//	return 0;
//} 
#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	bool operator<(const Date& x)
//	{
//		if (_year < x._year)
//		{
//			return true;
//		}
//		else if (_year == x._year && _month < x._month)
//		{
//			return true;
//		}
//		else if (_year == x._year && _month == x._month && _day < x._day)
//		{
//			return true;
//		}
//
//		return false;
//	}
//
//	// d4 = d1
//	// d1 = d1
//	//Date& operator=(const Date& d)
//	//{
//	//	if (this != &d)
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//	}
//
//	//	return *this;
//	//}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//bool operator<(const Date& x1, const Date& x2)
//{
//	if (x1._year < x2._year)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month < x2._month)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month == x2._month && x1._day < x2._day)
//	{
//		return true;
//	}
//
//	return false;
//}


//int main()
//{
//	Date d1(2023, 4, 26);
//	Date d2(2023, 6, 21);
//
//	//d1 < d2; // 转换成operator<(d1, d2);
//	//operator<(d1, d2);
//
//	d1 < d2; // 转换成d1.operator<(d2);
//	d1.operator<(d2);
//
//	if (d1 < d2)
//	{
//
//	}
//
//	//d1 - d2;  // 有意义
//	//d1 + d2;  // 没意义
//	// 是否要重载运算符，这个运算符对这个类是否有意义
//
//	return 0;
//}


//int main()
//{
//	Date d1(2023, 4, 26);
//	Date d2(2023, 6, 21);
//	// 已经存在的两个对象之间复制拷贝        -- 运算符重载函数
//	d1 = d2;
//
//	// 用一个已经存在的对象初始化另一个对象  -- 构造函数
//	//Date d3(d1);
//
//	int i, j, k;
//	i = j = k = 0;
//
//	Date d5, d4;
//	d5 = d4 = d1;
//
//	d1 = d1;
//
//	return 0;
//}

#include"Date.h"

void TestDate1()
{
	Date d1(2023, 4, 26);
	d1 += 100;
	d1.Print();

	Date d2(2023, 4, 26);
	//Date d3(d2 + 100);
	Date d3 = d2 + 100;
	d2.Print();
	d3.Print();

	// 用一个已经存在的对象初始化另一个对象  -- 构造函数
	Date d4 = d2;  // 等价于 Date d4(d2);

	//已经存在的两个对象之间复制拷贝        -- 运算符重载函数
	d4 = d1;

	//int i = 0, j = 1;
	//j += i += 10;
}

void TestDate2()
{
	Date d1(2023, 4, 26);
	// 都要++，前置++返回++以后的对象，后置++返回++之前的对象
	++d1; // d1.operator++()
	d1++; // d1.operator++(0)

	Date d2(2023, 4, 26);
	Date d3(2023, 4, 26);

	bool ret1 = d2 < d3;

	int i = 1, j = 2;
	bool ret2 = i < j;
}

void TestDate3()
{
	Date d1(2023, 5, 5);
	d1 -= 50;
	d1.Print();

	Date d2(2023, 5, 5);
	d2 -= 100;
	d2.Print();

	Date d3(2023, 5, 5);
	d3 -= 1000;
	d3.Print();

	Date d4(2023, 5, 5);
	d4 -= 10000;
	d4.Print();
}

void TestDate4()
{
	Date d1(2023, 5, 5);
	d1 += 100;
	d1.Print();

	Date d2(2023, 5, 5);
	d2 += -100;
	d2.Print();

	Date d3(2023, 5, 5);
	d3 -= -100;
	d3.Print();
}

void TestDate5()
{
	Date d1(2023, 5, 5);
	Date ret1 = d1--; // d1.operator--(&d1, 0);
	ret1.Print();
	d1.Print();

	Date d2(2023, 5, 5);
	Date ret2 = --d2; // d1.operator--(&d1);
	ret2.Print();
	d2.Print();
}

void TestDate6()
{
	Date d1(2023, 5, 5);
	Date d2(1949, 10, 1);

	cout << d1 - d2 << endl;
	cout << d2 - d1 << endl;
}

void TestDate7()
{
	Date d1(2023, 5, 5);
	d1 += 100;

	// 流插入
	cout << d1; // operator<<(cout, d1);
	operator<<(cout, d1);

	//d1 << cout; // d1.operator<<(cout); 
	//d1.operator<<(cout);


	Date d2(2023, 5, 5);
	Date d3(1949, 10, 1);

	//d1 = d2 = d3;

	cout << d2 << d3 << d1;

	cin >> d1 >> d2;
	cout << d2 << d1;

	//Date d4(2023, 13, 1);
	//cout << d4;
}

void TestDate8()
{
	Date d1(2023, 5, 5);
	d1.Print();

	const Date d2(2023, 5, 5);
	d2.Print();

	d1 + 100;
	d2 + 100;

	d1 < d2;
	d2 < d1;
}

int main()
{
	TestDate8();
	TestDate7();
	TestDate6();
	TestDate5();
	TestDate4();
	TestDate3();
	TestDate2();
	TestDate1();


	return 0;
}