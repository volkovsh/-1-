/* 
������ ����������
*/
#include <iostream>
#include <string>
#include <cctype>

int main()//���������� ������� main
{
    /*
    ������ ����������
    */
    std:: string v1;
    std:: string v2;
    std:: string s;
    std:: string t;
    std:: string S;
    bool validinput = false;
    setlocale(LC_ALL, "");//�������� ���������� �������� � ����������
    /*
      ����������� �������� ���������� � ��������� ��������� ������ �� ������������
      */
    while (!validinput) {
        std::cout << " ������� �������� v1 ������� ���������� (� ��/�)";
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
                std::cout << "�� ����� ������������� �����: " << v1 << "." << std::endl;
                validinput = true;
            }
            else {
                std::cout << "������.����� ����� 0.";
            }

        }
        else {
            std::cout << "������: ����� ������ ���� �������������. ���������� �����. " << std::endl;      
        }
    }
    while (!validinput) {
        std::cout << " ������� �������� v2 ������� ���������� (� ��/�)";
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
                std::cout << "�� ����� ������������� �����: " << v2 << "." << std::endl;
                validinput = true;
            }
            else {
                std::cout << "������.����� ����� 0.";
            }

        }
        else {
            std::cout << "������: ����� ������ ���� �������������. ���������� �����. " << std::endl;
        }
    }
    while (!validinput) {
        std::cout << " ������� ���������� s ����� ������������ (� ��)";
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
                std::cout << "�� ����� ������������� �����: " << s << "." << std::endl;
                validinput = true;
            }
            else {
                std::cout << "������.����� ����� 0.";
            }

        }
        else {
            std::cout << "������: ����� ������ ���� �������������. ���������� �����. " << std::endl;
        }
    }
    while (!validinput) {
        std::cout << " ������� ����� t, ����� ������� ����� ������ ���������� ����� ���� (� �)";
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
                std::cout << "�� ����� ������������� �����: " << t << "." << std::endl;
                validinput = true;
            }
            else {
                std::cout << "������.����� ����� 0.";
            }

        }
        else {
            std::cout << "������: ����� ������ ���� �������������. ���������� �����. " << std::endl;
        }
    }
    int q1 = std::stoi(v1);
    int q2 = std::stoi(v2);
    int d = std::stoi(s);
    int h = std::stoi(t);
        S = d + (q1 + q2) * h;//���������� ������� ��� ������� ���������� ����� �������� ����������
        std::cout << " ���������� ����� ������������ ����� t ����� ����� " << S << " ��"; //������� � ������� ���������
    return 0;//���������� �������
}

