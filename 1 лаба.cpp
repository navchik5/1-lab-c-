#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;


/*
* 1
���������� ����������� ������� ����� �������, ����� ��� ���������� ��������� 
�������� ���� ��������� ������ ������, �����������, ��� ������ � ����� �� ����� ����.
*/
int sumLastNums(int x) {
    int positiveX = abs(x);
    int lastdigit = positiveX % 10;
    int predlastdigit = (positiveX / 10) % 10;
    return predlastdigit + lastdigit;
}

/*
* 2
���������� ����������� ������� ����� �������, ����� ��� ��������� ����� x
� ���������� true, ���� ��� �������������.
*/

bool isPositive(int x) {
    if (x >= 0)
        return true;
    else
        return false;
}


/*
* 3
���������� ����������� ������� ����� �������, ����� ��� ��������� ������ x
� ���������� true, ���� ��� ������� ����� � ��������� �� �A� �� �Z�.
*/

bool isUpperCase(char x) {
    return (x >= 'A' and x <= 'Z');
}

/*
* 4
���������� ����������� ������� ����� �������, ����� ��� ���������� true,
���� ����� �� �������� ����� ����� ������ ������.
*/

bool isDivisor(int a, int b) {
    if (a % b == 0 or b % a == 0)
        return true;
    else
        return false;
}

/*
* 5
���������� ����������� ������� ����� �������, ����� ��� ������� ����� ����
���� ����� 	�� 	������� 	������. 	��������� 	� 	��� 	������� 
���������������� �������� ���� ����� � ��������� �������� �� �����.
*/

int lastNumSum(int a, int b) {
    return (a % 10) + (b % 10);
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� ������� x
�� y, � ��� ���� �������������, ��� �� ����� �������� ������ ������� �� 0. 
��� ������� �� 0 ������� ������� �� ������� ����� 0.
*/

double safeDiv(int x, int y) {
    if (y == 0) {
        return 0;
    }
    return x * 1.0 / y;
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� ������, 
������� �������� ��� �������� �������� ����� � ��������� ������������ ���� 
�������� ��������� (������, ������, ��� �����).
*/

string makeDecision(int x, int y) {
    if (x > y) {
        return to_string(x) + " > " + to_string(y);
    }
    else if (x < y) {
        return to_string(x) + " < " + to_string(y);
    }
    else {
        return to_string(x) + " == " + to_string(y);
    }
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� true, 
���� ��� ����� ����� (�� ���� ��������) ����� ������� ���, ����� �������� ������.
*/

bool sum3(int x, int y, int z) {
    if (x + y == z) {
        return true;
    }
    if (x + z == y) {
        return true;
    }
    if (y + z == x) {
        return true;
    }
    else {
        return false;
    }
}


/*
���������� ����������� ������� ����� �������, ����� ��� ���������� ������,
� ������� ������� ����� ����� �, � ����� ���� �� ����:
�	���
�	����
�	���
����� ���� �����������, ���� ����� � ������������� �� 1, ����� ����� 11.
����� ������ �����������, ���� ����� � ������������� �� 2, 3 ��� 4, ����� ����� 12, 13, 14.
����� ��������������� �� ���� ��������� �������.

*/

string age(int x) {
    int lastdigit = x % 10;
    int twolastdigit = x % 100;

    if (twolastdigit >= 11 and twolastdigit <= 14) {
        return to_string(x) + " ���";
    }
    if (lastdigit == 1) {
        return to_string(x) + " ���";
    }
    else if (lastdigit >= 2 and lastdigit <= 4) {
        return to_string(x) + " ����";
    }
    else {
        return to_string(x) + " ���";
    }
}

/*
� �������� ��������� ������� ��������� ����� x, ������������ ���� ������.  
���������� ����������� ������� ����� �������, ����� ��� �������� �� ����� 
�������� ����������� � ���� ��� � ���� ����������� �� ����� ������ ����. 
���� � �������� ��������� ������� �� ���� (�����, �� � ��������� �� 1 �� 7), 
�� ��������� ����� ���� �� ���� ������. ������ ���� �����������, ��������� � �����������.
������ if � ������ ������ ����������� switch.
*/

void printDays(int x) {
    switch (x) {
    case 1:
        cout << "�����������\n�������\n�����\n�������\n�������\n�������\n�����������";
        break;
    case 2:
        cout << "�������\n�����\n�������\n�������\n�������\n�����������";
        break;
    case 3:
        cout << "�����\n�������\n�������\n�������\n�����������";
        break;
    case 4:
        cout << "�������\n�������\n�������\n�����������";
        break;
    case 5:
        cout << "�������\n�������\n�����������";
        break;
    case 6:
        cout << "�������\n�����������";
        break;
    case 7:
        cout << "�����������";
        break;
    default:
        cout << "��� �� ���� ������";
    }
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� ������,
� ������� ����� �������� ��� ����� �� x �� 0 (������������).
*/

string reverseListNums(int x) 
{
    if (x < 0) 
    {
        return "0";
    }

    string result = "";
    for (int i = x; i >= 0; i--) 
    {
        result += to_string(i);
        if (i > 0) 
        {
            result += " ";
        }
    }
    return result;
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� ���������
���������� x � ������� y.
*/

int pow(int x, int y) {
    if (y == 0) {
        return 1;
    }
    if (y < 0) {
        return 0;
    }

    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� true,
���� ��� ����� ����� ���������, � false � ���� ������.
*/

bool equalNum(int x) {
    if (x < 10) {
        return true;
    }

    int lastdigit = x % 10;
    x = x / 10;
    while (x > 0) {
        int currentdigit = x % 10;
        if (currentdigit != lastdigit) {
            return false;
        }
        x = x / 10;
    }
    return true;
}

/*
���������� ����������� ������� ����� �������, ����� ��� �������� �� ����� 
����������� �� �������� �*� � �������� � �������� � ������, � ���������� �������� 
� ���� ��������� � ������� ������.
*/

void leftTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


/*
���������� ����������� ������� ����� �������, ����� ��� ������������ 
��������� ����� �� 0 �� 9, ����� ��������� � ������� ��������� ������������� ����� 
� ��������, ������ �� ������������ ��, ��� ���� ��������, ��� ���. ������� ����������� 
�� ��� ���, ���� ������������ �� ������� �����. ����� ����� �������� �� ����� ���������� 
�������, ������� ������������� ������������, ����� ������� �����.
*/

void guessGame() {
    srand(time(0));
    int secretnumber = rand() % 10;
    int number;
    int attempts = 0;

    cout << "======= �������� =======" << endl;

    do {
        cout << "�������� ����� �� 0 �� 9: " << endl;
        cin >> number;
        attempts++;

        if (number == secretnumber) {
            cout << "�� �������!" << endl;
        }
        else {
            cout << "�� �� �������, ���������� ��� ���" << endl;
        }
    } while (number != secretnumber);
    cout << "�� �������� ����� �� " << attempts << " �������(��)" << endl;
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� 
������ ���������� ��������� ����� x � ������ arr. ���� ����� �� ������ �
������ � ������������ -1.
*/

int findLast(int arr[], int size, int x) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� ����� ������, 
������� ����� ��������� ��� �������� ������� arr, ������ � ������� pos ����� 
��������� �������� x.
*/

int* add(int arr[], int size, int x, int pos) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < pos; i++) {
        newArr[i] = arr[i];
    }
    newArr[pos] = x;
    for (int i = pos; i < size; i++) {
        newArr[i + 1] = arr[i];
    }
    return newArr;
}

/*
���������� ����������� ������� ����� �������, ����� �� ������� ������ arr. 
����� ����������� ��������� ������ ������ ���� ������� �����-�������.
*/

void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� ����� ������, 
� ������� ������� ���� �������� ������� ������� (arr1), � ����� �������
(arr2).
*/

int* concat(int arr1[], int size1, int arr2[], int size2) {
    int* newArr = new int[size1 + size2];
    for (int i = 0; i < size1; i++) {
        newArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        newArr[size1 + i] = arr2[i];
    }
    return newArr;
}

/*
���������� ����������� ������� ����� �������, ����� ��� ���������� ����� ������,
� ������� �������� ��� �������� ������� arr ����� �������������.
*/

int* deleteNegative(int arr[], int size, int& newSize) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            count++;
        }
    }
    newSize = count;
    int* newArr = new int[count];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            newArr[index] = arr[i];
            index++;
        }
    }
    return newArr;
}

// ������� ����
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (true) {
        cout << "\n" << string(50, '=') << endl;
        cout << "�������� ����� ������ (0 ��� ������)" << endl;
        cout << "��������� ������: 1-20" << endl;

        int choice;
        cout << "����� ������: ";
        cin >> choice;

        if (choice == 0) {
            cout << "����� �� ���������" << endl;
            break;
        }

        switch (choice) {
        case 1: {
            cout << "\n--- ������ ������ 1 ---" << endl;
            cout << "��������� ��� ���������� ����� ��������� ���� ���� ����� x\n";

            int number;
            cout << "������� ����� ����� (�� ����� 2 ����): ";
            cin >> number;

            if (abs(number) < 10) {
                cout << "������, ����� ������ ��������� �� ����� 2 ����\n";
                break;
            }

            int result = sumLastNums(number);
            cout << "��������� �������� ���� ��������� ���� �����: "
                << number << ": " << result << endl;
            break;
        }
        case 2: {
            cout << "\n--- ������ ������ 2 ---" << endl;
            cout << "������������� ��� �������������\n";

            int number;
            cout << "������� �����: ";
            cin >> number;

            if (isPositive(number)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
            break;
        }
        case 3: {
            cout << "\n--- ������ ������ 3 ---" << endl;
            char symbol;
            cout << "������� ������: ";
            cin >> symbol;

            if (isUpperCase(symbol)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
            break;
        }
        case 4: {
            cout << "\n--- ������ ������ 4 ---" << endl;
            int anumber;
            int bnumber;
            cout << "������� ����� <a>: ";
            cin >> anumber;
            cout << "������� ����� <b>: ";
            cin >> bnumber;

            if (isDivisor(anumber, bnumber)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
            break;
        }
        case 5: {
            cout << "\n--- ������ ������ 5 ---" << endl;
            int current, result;
            cout << "������� 5 �����: ";
            cin >> result;

            for (int i = 0; i < 4; i++) {
                cin >> current;
                cout << result << " + " << current << " ��� " << lastNumSum(result, current) << endl;
                result = lastNumSum(result, current);
            }

            cout << "���������: " << result << endl;
            break;
        }
        case 6: {
            cout << "\n--- ������ ������ 6 ---" << endl;
            int x, y;
            cout << "������� ����� x: ";
            cin >> x;
            cout << "������� ����� y: ";
            cin >> y;

            cout << "���������: " << safeDiv(x, y) << endl;
            break;
        }
        case 7: {
            cout << "\n--- ������ ������ 7 ---" << endl;
            int x, y;
            cout << "������� ����� x: ";
            cin >> x;
            cout << "������� ����� y: ";
            cin >> y;

            cout << "���������: " << makeDecision(x, y) << endl;
            break;
        }
        case 8: {
            cout << "\n--- ������ ������ 8 ---" << endl;
            int x, y, z;
            cout << "������� ����� x: ";
            cin >> x;
            cout << "������� ����� y: ";
            cin >> y;
            cout << "������� ����� z: ";
            cin >> z;

            if (sum3(x, y, z)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
            break;
        }
        case 9: {
            cout << "\n--- ������ ������ 9 ---" << endl;
            int x;
            cout << "������� �: ";
            cin >> x;
            cout << age(x) << endl;
            break;
        }
        case 10: {
            cout << "\n--- ������ ������ 10 ---" << endl;
            int x;
            cout << "������� ���� ������ (1-7): ";
            cin >> x;
            printDays(x);
            cout << endl;
            break;
        }
        case 11: {
            cout << "\n--- ������ ������ 11 ---" << endl;
            int x;
            cout << "������� �����: ";
            cin >> x;
            cout << reverseListNums(x) << endl;
            break;
        }
        case 12: {
            cout << "\n--- ������ ������ 12 ---" << endl;
            int x, y;
            cout << "������� ����� x: ";
            cin >> x;
            cout << "������� ������� y: ";
            cin >> y;
            cout << x << " � ������� " << y << " = " << pow(x, y) << endl;
            break;
        }
        case 13: {
            cout << "\n--- ������ ������ 13 ---" << endl;
            int x;
            cout << "������� �����: ";
            cin >> x;

            if (equalNum(x)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
            break;
        }
        case 14: {
            cout << "\n--- ������ ������ 14 ---" << endl;
            int x;
            cout << "������� ������ ������������: ";
            cin >> x;

            if (x < 0) {
                cout << "����� �� ������ ���� �������������" << endl;
                break;
            }

            leftTriangle(x);
            break;
        }
        case 15: {
            cout << "\n--- ������ ������ 15 ---" << endl;
            guessGame();
            break;
        }
        case 16: {
            cout << "\n--- ������ ������ 16 ---" << endl;
            int size;
            cout << "������� ������ �������: ";
            cin >> size;

            if (size <= 0) {
                cout << "������������ ����" << endl;
                break;
            }

            vector<int> arr(size);
            cout << "������� " << size << " ����� �����:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            int x;
            cout << "������� ����� ��� ������: ";
            cin >> x;

            int res = findLast(arr.data(), size, x);
            if (res != -1) {
                cout << "������ ���������� ��������� ����� " << x << ": " << res << endl;
            }
            else {
                cout << "-1" << endl;
            }
            break;
        }
        case 17: {
            cout << "\n--- ������ ������ 17 ---" << endl;
            int size;
            cout << "������� ������ �������: ";
            cin >> size;

            if (size <= 0) {
                cout << "������������ ����" << endl;
                break;
            }

            vector<int> arr(size);
            cout << "������� " << size << " ����� �����:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            int x, pos;
            cout << "������� ����� ��� ����������: ";
            cin >> x;
            cout << "������� ������� ��� ���������� (0-" << size << "): ";
            cin >> pos;

            if (pos < 0 or pos > size) {
                cout << "������������ �������!" << endl;
                break;
            }

            int* result = add(arr.data(), size, x, pos);

            cout << "�������� ������: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            cout << "����� ���������� " << x << " �� ������� " << pos << ": ";
            for (int i = 0; i < size + 1; i++) {
                cout << result[i] << " ";
            }
            cout << endl;

            delete[] result;
            break;
        }
        case 18: {
            cout << "\n--- ������ ������ 18 ---" << endl;
            int size;
            cout << "������� ������ �������: ";
            cin >> size;

            if (size <= 0) {
                cout << "������������ ������ �������!" << endl;
                break;
            }

            vector<int> arr(size);
            cout << "������� " << size << " ����� �����:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            cout << "�������� ������: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            reverse(arr.data(), size);

            cout << "��������������� ������: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }
        case 19: {
            cout << "\n--- ������ ������ 19 ---" << endl;
            int size1, size2;

            cout << "������� ������ ������� �������: ";
            cin >> size1;
            if (size1 <= 0) {
                cout << "������������ ������!" << endl;
                break;
            }

            vector<int> arr1(size1);
            cout << "������� " << size1 << " ��������� ������� �������:" << endl;
            for (int i = 0; i < size1; i++) {
                cin >> arr1[i];
            }

            cout << "������� ������ ������� �������: ";
            cin >> size2;
            if (size2 <= 0) {
                cout << "������������ ������!" << endl;
                break;
            }

            vector<int> arr2(size2);
            cout << "������� " << size2 << " ��������� ������� �������:" << endl;
            for (int i = 0; i < size2; i++) {
                cin >> arr2[i];
            }

            cout << "������ ������: ";
            for (int i = 0; i < size1; i++) {
                cout << arr1[i] << " ";
            }
            cout << endl;

            cout << "������ ������: ";
            for (int i = 0; i < size2; i++) {
                cout << arr2[i] << " ";
            }
            cout << endl;

            int* result = concat(arr1.data(), size1, arr2.data(), size2);
            int resultSize = size1 + size2;

            cout << "������������ ������: ";
            for (int i = 0; i < resultSize; i++) {
                cout << result[i] << " ";
            }
            cout << endl;

            delete[] result;
            break;
        }
        case 20: {
            cout << "\n--- ������ ������ 20 ---" << endl;
            int size;
            cout << "������� ������ �������: ";
            cin >> size;

            if (size <= 0) {
                cout << "������������ ������ �������!" << endl;
                break;
            }

            vector<int> arr(size);
            cout << "������� " << size << " ����� �����:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            cout << "�������� ������: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            int newSize;
            int* result = deleteNegative(arr.data(), size, newSize);

            cout << "��� ������������� ���������: ";
            for (int i = 0; i < newSize; i++) {
                cout << result[i] << " ";
            }
            cout << endl;

            delete[] result;
            break;
        }
        default:
            cout << "������ � ����� ������� �� ����������!" << endl;
            break;
        }
    }

    return 0;
}