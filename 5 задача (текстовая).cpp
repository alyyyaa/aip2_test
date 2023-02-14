//Дан дек D и список L. Кажды исходный контейнер содержит не менее 5 элементов. Вставить перед пятым с конца элементом списка последние 5 элементов дека.
//Использовать один вызов метода insert.

#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main() {
	deque <int> deq;
	int N;
	int number;
	cout << "Введите количество элементов в деке: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> number;
		deq.push_back(number);
	}
	list <int> l;
	int K;
	cout << "Введите количество элементов в списке: ";
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> number;
		l.push_back(number);
	}

	deque <int>::iterator p = deq.end();
	deque <int>::iterator p1 = deq.end();
	
	for (int i = 0; i < 5; i++)
		p1--;

	list <int>::iterator p2 = l.end();

	for (int i = 0; i < 5; i++)
		p2--;

	l.insert(p2, p1, p);

	cout << "Конечный список: " << endl;
	list <int>::iterator begin = l.begin();
	for (begin; begin != l.end(); begin++) {
		cout << *begin << " ";
	}
}