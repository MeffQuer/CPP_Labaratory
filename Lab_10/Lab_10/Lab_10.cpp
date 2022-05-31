#include <iostream>
using namespace std;

struct cmd {
	int a;
};

struct Spisok {
	cmd d;
	Spisok *next;
};


void printSpisok(Spisok* u) {

	if (u != NULL)

	{

		Spisok* p = u;

		cout << "Kolcevoj Spisok:" << endl;
		cout << p->d.a << endl;
		p = p->next;

		while (p) {
			cout << p->d.a << endl;
			p = p->next;
		}
	}
	else
		cout << "Spisok pust." << endl;
}

void Delete(Spisok** u, int x) {

	if (*u == 0) { // исходный список пуст - удалять нечего!

		return;
	}

	Spisok* t = *u;

	if (t->d.a == x) { // исходный список не пуст -

	// удаляется начало
		*u = t->next;
		delete t;
		return;
	}

	Spisok* t1 = t->next;

	while (t1) {
		if (t1->d.a == x) {
			t->next = t1->next;
			delete t1;
			return;
		}
		t = t1;
		t1 = t1->next;
	}
}


int main()
{

	setlocale(LC_ALL, "rus");
	cmd ball;
	Spisok* u = NULL;
	u = new Spisok;
	cout << "Введите 1-ое значение 3\n";
	//cin >> ball.a;
	u->d.a = 3;
	u->next = NULL;
	Spisok* x;
	x = u; // последний эл. совпадает с началом.
	x->next = new Spisok;
	x = x->next;
	cout << "Введите 2-ое значение 5\n";
	//cin >> ball.b;
	x->d.a = 5;
	x->next = NULL;
	int x1 = 5;
	printSpisok(u);
	Delete(&u, x1);
	printSpisok(u);
	
	return 0;
}