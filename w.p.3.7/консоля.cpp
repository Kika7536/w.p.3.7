#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int day;
	string drink = "Морс";

	cout << "Введите день недели(от 1 до 7) : ";
	cin >> day;

	
		switch (day) {
		case 1:
			cout << "Меню сегодня(понедельник) :" << endl;
			cout << "Куриная ножка с пюре" << endl;
			cout << "Гороховый суп" << endl;
			cout << "Салат «Цезарь» с креветками" << endl;
			cout << drink << endl;
			break;

		case 2:
			cout << "Меню сегодня(вторник) :" << endl;
			cout << "Кура с гречей" << endl;
			cout << "Свекольник" << endl;
			cout << "Салат из помидоров" << endl;
			cout << drink << endl;
			break;

		case 3:
			cout << "Меню сегодня(среда) :" << endl;
			cout << "Макароны по-флотски" << endl;
			cout << "Борщ" << endl;
			cout << "Салат с тунцом" << endl;
			cout << drink << endl;
			break;

		case 4:
			cout << "Меню сегодня(четверг) :" << endl;
			cout << "Черная икра с хлебом моя цена" << endl;
			cout << "Черепаший суп" << endl;
			cout << "Салат из морепродуктов" << endl;
			cout << drink << endl;
			break;

		case 5:
			cout << "Меню сегодня(пятница) :" << endl;
			cout << "Стейк с картошкой" << endl;
			cout << "Харчо" << endl;
			cout << "Салат оливье" << endl;
			cout << drink << endl;
			break;

		case 6:
			cout << "Меню сегодня(суббота) :" << endl;
			cout << "Шаверма на тарелке" << endl;
			cout << "Суп \"Жри чо дают\"" << endl;
			cout << "Салат «Цезарь» с котлетками" << endl;
			cout << drink << endl;
			break;

		case 7:
			cout << "Меню сегодня(воскресенье) :" << endl;
			cout << "Хлеб с мощами животных из ноева ковчега" << endl;
			cout << "Доширак на святой воде" << endl;
			cout << "Салат из яблок с запретного дерева" << endl;
			cout << drink << endl;
			break;
		default:
			cout << "Вы ввели не то, что просила программа." << endl;
		}
	

	
}