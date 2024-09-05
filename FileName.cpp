/* 
задаем библиотеки
*/
#include <iostream>
#include <string>
#include <cctype>

int main()//подключаем функцию main
{
    /*
    задаем переменные
    */
    std:: string v1;
    std:: string v2;
    std:: string s;
    std:: string t;
    std:: string S;
    bool validinput = false;
    setlocale(LC_ALL, "");//вызываем библиотеку символов с кириллицей
    /*
      запрашиваем значения переменных и проверяем введенные данные на корректность
      */
    while (!validinput) {
        std::cout << " Введите скорость v1 первого автомобиля (в км/ч)";
        std::cin >> v1;

        bool isDigitOnly = true; 
        for (char f : v1) {
            if (!isdigit(f)) { 
                isDigitOnly = false;
            }
        }
        if (isDigitOnly) {
            int number = std::stoi(v1);
            if (number > 0)
            {
                std::cout << "Вы ввели положительное число: " << v1 << "." << std::endl;
                validinput = true;
            }
            else {
                std::cout << "Ошибка.Число равно 0.";
            }

        }
        else {
            std::cout << "Ошибка: число должно быть положительным. Попробуйте снова. " << std::endl;      
        }
    }
    while (!validinput) {
        std::cout << " Введите скорость v2 первого автомобиля (в км/ч)";
        std::cin >> v2;

        bool isDigitOnly = true;
        for (char f : v2) {
            if (!isdigit(f)) {
                isDigitOnly = false;
            }
        }
        if (isDigitOnly) {
            int number = std::stoi(v2);
            if (number > 0)
            {
                std::cout << "Вы ввели положительное число: " << v2 << "." << std::endl;
                validinput = true;
            }
            else {
                std::cout << "Ошибка.Число равно 0.";
            }

        }
        else {
            std::cout << "Ошибка: число должно быть положительным. Попробуйте снова. " << std::endl;
        }
    }
    while (!validinput) {
        std::cout << " Введите расстояние s между автомобилями (в км)";
        std::cin >> s;

        bool isDigitOnly = true;
        for (char f : s) {
            if (!isdigit(f)) {
                isDigitOnly = false;
            }
        }
        if (isDigitOnly) {
            int number = std::stoi(s);
            if (number > 0)
            {
                std::cout << "Вы ввели положительное число: " << s << "." << std::endl;
                validinput = true;
            }
            else {
                std::cout << "Ошибка.Число равно 0.";
            }

        }
        else {
            std::cout << "Ошибка: число должно быть положительным. Попробуйте снова. " << std::endl;
        }
    }
    while (!validinput) {
        std::cout << " Введите время t, через которое нужно узнать расстояние между ними (в ч)";
        std::cin >> t;

        bool isDigitOnly = true;
        for (char f : t) {
            if (!isdigit(f)) {
                isDigitOnly = false;
            }
        }
        if (isDigitOnly) {
            int number = std::stoi(t);
            if (number > 0)
            {
                std::cout << "Вы ввели положительное число: " << t << "." << std::endl;
                validinput = true;
            }
            else {
                std::cout << "Ошибка.Число равно 0.";
            }

        }
        else {
            std::cout << "Ошибка: число должно быть положительным. Попробуйте снова. " << std::endl;
        }
    }
    int q1 = std::stoi(v1);
    int q2 = std::stoi(v2);
    int d = std::stoi(s);
    int h = std::stoi(t);
        S = d + (q1 + q2) * h;//записываем формулу для расчета расстояния через заданные переменные
        std::cout << " Расстояние между автомобилями через t часов будет " << S << " км"; //выводим в консоль результат
    return 0;//возвращаем функция
}

