/*
* 얕은 복사 : 데이터의 값을 그대로 다른 변수에 가져오는 것. 크기가 작을 때 사용
* 깊은 복사 : 
*/

#include "person.h"

void Person::Clone(const Person& other)
{
	age = other.age; // 얕은 복사
	name = new char[strlen(other.name) + 1]; // 새로운 메모리 공간 생성
	strcpy(name, other.name);
}

void Person::Show() const
{
	cout << "나이 :" << age << endl;
	cout << "이름 :" << name << endl;
}
