// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "..\DinamicLib\Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian");   // задаём русский текст
	system("chcp 1251");            // настраиваем кодировку консоли
	std::system("cls");

	
	Leaver lv;
	std::string userName;
	std::cout << "Введите имя: "; std::cin >> userName;
	std::cout << lv.leave(userName) << std::endl;

	system("pause"); // Команда задержки экрана

	return 0;
}