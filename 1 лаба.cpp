#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;


/*
* 1
Необходимо реализовать функцию таким образом, чтобы она возвращала результат 
сложения двух последних знаков числах, предполагая, что знаков в числе не менее двух.
*/
int sumLastNums(int x) {
    int positiveX = abs(x);
    int lastdigit = positiveX % 10;
    int predlastdigit = (positiveX / 10) % 10;
    return predlastdigit + lastdigit;
}

/*
* 2
Необходимо реализовать функцию таким образом, чтобы она принимала число x
и возвращала true, если оно положительное.
*/

bool isPositive(int x) {
    if (x >= 0)
        return true;
    else
        return false;
}


/*
* 3
Необходимо реализовать функцию таким образом, чтобы она принимала символ x
и возвращала true, если это большая буква в диапазоне от ‘A’ до ‘Z’.
*/

bool isUpperCase(char x) {
    return (x >= 'A' and x <= 'Z');
}

/*
* 4
Необходимо реализовать функцию таким образом, чтобы она возвращала true,
если любое из принятых чисел делит другое нацело.
*/

bool isDivisor(int a, int b) {
    if (a % b == 0 or b % a == 0)
        return true;
    else
        return false;
}

/*
* 5
Необходимо реализовать функцию таким образом, чтобы она считала сумму цифр
двух чисел 	из 	разряда 	единиц. 	Выполните 	с 	его 	помощью 
последовательное сложение пяти чисел и результат выведите на экран.
*/

int lastNumSum(int a, int b) {
    return (a % 10) + (b % 10);
}

/*
Необходимо реализовать функцию таким образом, чтобы она возвращала деление x
на y, и при этом гарантировала, что не будет выкинута ошибка деления на 0. 
При делении на 0 следует вернуть из функции число 0.
*/

double safeDiv(int x, int y) {
    if (y == 0) {
        return 0;
    }
    return x * 1.0 / y;
}

/*
Необходимо реализовать функцию таким образом, чтобы она возвращала строку, 
которая включает два принятых функцией числа и корректно выставленный знак 
операции сравнения (больше, меньше, или равно).
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
Необходимо реализовать функцию таким образом, чтобы она возвращала true, 
если два любых числа (из трех принятых) можно сложить так, чтобы получить третье.
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
Необходимо реализовать функцию таким образом, чтобы она возвращала строку,
в которой сначала будет число х, а затем одно из слов:
•	год
•	года
•	лет
Слово “год” добавляется, если число х заканчивается на 1, кроме числа 11.
Слово “года” добавляется, если число х заканчивается на 2, 3 или 4, кроме чисел 12, 13, 14.
Слово “лет”добавляется во всех остальных случаях.

*/

string age(int x) {
    int lastdigit = x % 10;
    int twolastdigit = x % 100;

    if (twolastdigit >= 11 and twolastdigit <= 14) {
        return to_string(x) + " лет";
    }
    if (lastdigit == 1) {
        return to_string(x) + " год";
    }
    else if (lastdigit >= 2 and lastdigit <= 4) {
        return to_string(x) + " года";
    }
    else {
        return to_string(x) + " лет";
    }
}

/*
В качестве параметра функция принимает число x, обозначаются день недели.  
Необходимо реализовать функцию таким образом, чтобы она выводила на экран 
название переданного в него дня и всех последующих до конца недели дней. 
Если в качестве параметра передан не день (число, не в диапазоне от 1 от 7), 
то выводится текст “это не день недели”. Первый день понедельник, последний – воскресенье.
Вместо if в данной задаче используйте switch.
*/

void printDays(int x) {
    switch (x) {
    case 1:
        cout << "понедельник\nвторник\nсреда\nчетверг\nпятница\nсуббота\nвоскресенье";
        break;
    case 2:
        cout << "вторник\nсреда\nчетверг\nпятница\nсуббота\nвоскресенье";
        break;
    case 3:
        cout << "среда\nчетверг\nпятница\nсуббота\nвоскресенье";
        break;
    case 4:
        cout << "четверг\nпятница\nсуббота\nвоскресенье";
        break;
    case 5:
        cout << "пятница\nсуббота\nвоскресенье";
        break;
    case 6:
        cout << "суббота\nвоскресенье";
        break;
    case 7:
        cout << "воскресенье";
        break;
    default:
        cout << "это не день недели";
    }
}

/*
Необходимо реализовать функцию таким образом, чтобы она возвращала строку,
в которой будут записаны все числа от x до 0 (включительно).
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
Необходимо реализовать функцию таким образом, чтобы она возвращала результат
возведения x в степень y.
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
Необходимо реализовать функцию таким образом, чтобы она возвращала true,
если все знаки числа одинаковы, и false в ином случае.
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
Необходимо реализовать функцию таким образом, чтобы она выводила на экран 
треугольник из символов ‘*’ у которого х символов в высоту, а количество символов 
в ряду совпадает с номером строки.
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
Необходимо реализовать функцию таким образом, чтобы она генерировала 
случайное число от 0 до 9, далее считывала с консоли введенное пользователем число 
и выводила, угадал ли пользователь то, что было загадано, или нет. Функция запускается 
до тех пор, пока пользователь не угадает число. После этого выведите на экран количество 
попыток, которое потребовалось пользователю, чтобы угадать число.
*/

void guessGame() {
    srand(time(0));
    int secretnumber = rand() % 10;
    int number;
    int attempts = 0;

    cout << "======= угадайка =======" << endl;

    do {
        cout << "угадайте число от 0 до 9: " << endl;
        cin >> number;
        attempts++;

        if (number == secretnumber) {
            cout << "вы угадали!" << endl;
        }
        else {
            cout << "вы не угадали, попробуйте еще раз" << endl;
        }
    } while (number != secretnumber);
    cout << "вы отгадали число за " << attempts << " попыток(ки)" << endl;
}

/*
Необходимо реализовать функцию таким образом, чтобы она возвращала 
индекс последнего вхождения числа x в массив arr. Если число не входит в
массив – возвращается -1.
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
Необходимо реализовать функцию таким образом, чтобы она возвращала новый массив, 
который будет содержать все элементы массива arr, однако в позицию pos будет 
вставлено значение x.
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
Необходимо реализовать функцию таким образом, чтобы он изменял массив arr. 
После проведенных изменений массив должен быть записан задом-наперед.
*/

void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

/*
Необходимо реализовать функцию таким образом, чтобы она возвращала новый массив, 
в котором сначала идут элементы первого массива (arr1), а затем второго
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
Необходимо реализовать функцию таким образом, чтобы она возвращала новый массив,
в котором записаны все элементы массива arr кроме отрицательных.
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

// Главное меню
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (true) {
        cout << "\n" << string(50, '=') << endl;
        cout << "ВЫБЕРИТЕ НОМЕР ЗАДАЧИ (0 для выхода)" << endl;
        cout << "Доступные задачи: 1-20" << endl;

        int choice;
        cout << "Номер задачи: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Выход из программы" << endl;
            break;
        }

        switch (choice) {
        case 1: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 1 ---" << endl;
            cout << "Программа для вычисления суммы последних двух цифр числа x\n";

            int number;
            cout << "Введите целое число (не менее 2 цифр): ";
            cin >> number;

            if (abs(number) < 10) {
                cout << "Ошибка, число должно содержать не менее 2 цифр\n";
                break;
            }

            int result = sumLastNums(number);
            cout << "Результат сложения двух последних цифр числа: "
                << number << ": " << result << endl;
            break;
        }
        case 2: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 2 ---" << endl;
            cout << "положительное или отрицательное\n";

            int number;
            cout << "Введите число: ";
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
            cout << "\n--- ЗАПУСК ЗАДАЧИ 3 ---" << endl;
            char symbol;
            cout << "Введите символ: ";
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
            cout << "\n--- ЗАПУСК ЗАДАЧИ 4 ---" << endl;
            int anumber;
            int bnumber;
            cout << "Введите число <a>: ";
            cin >> anumber;
            cout << "Введите число <b>: ";
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
            cout << "\n--- ЗАПУСК ЗАДАЧИ 5 ---" << endl;
            int current, result;
            cout << "Введите 5 чисел: ";
            cin >> result;

            for (int i = 0; i < 4; i++) {
                cin >> current;
                cout << result << " + " << current << " это " << lastNumSum(result, current) << endl;
                result = lastNumSum(result, current);
            }

            cout << "Результат: " << result << endl;
            break;
        }
        case 6: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 6 ---" << endl;
            int x, y;
            cout << "Введите число x: ";
            cin >> x;
            cout << "Введите число y: ";
            cin >> y;

            cout << "Результат: " << safeDiv(x, y) << endl;
            break;
        }
        case 7: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 7 ---" << endl;
            int x, y;
            cout << "Введите число x: ";
            cin >> x;
            cout << "Введите число y: ";
            cin >> y;

            cout << "Результат: " << makeDecision(x, y) << endl;
            break;
        }
        case 8: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 8 ---" << endl;
            int x, y, z;
            cout << "Введите число x: ";
            cin >> x;
            cout << "Введите число y: ";
            cin >> y;
            cout << "Введите число z: ";
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
            cout << "\n--- ЗАПУСК ЗАДАЧИ 9 ---" << endl;
            int x;
            cout << "Введите х: ";
            cin >> x;
            cout << age(x) << endl;
            break;
        }
        case 10: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 10 ---" << endl;
            int x;
            cout << "Введите день недели (1-7): ";
            cin >> x;
            printDays(x);
            cout << endl;
            break;
        }
        case 11: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 11 ---" << endl;
            int x;
            cout << "Введите число: ";
            cin >> x;
            cout << reverseListNums(x) << endl;
            break;
        }
        case 12: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 12 ---" << endl;
            int x, y;
            cout << "Введите число x: ";
            cin >> x;
            cout << "Введите степень y: ";
            cin >> y;
            cout << x << " в степени " << y << " = " << pow(x, y) << endl;
            break;
        }
        case 13: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 13 ---" << endl;
            int x;
            cout << "Введите число: ";
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
            cout << "\n--- ЗАПУСК ЗАДАЧИ 14 ---" << endl;
            int x;
            cout << "Введите высоту треугольника: ";
            cin >> x;

            if (x < 0) {
                cout << "Число не должно быть отрицательным" << endl;
                break;
            }

            leftTriangle(x);
            break;
        }
        case 15: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 15 ---" << endl;
            guessGame();
            break;
        }
        case 16: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 16 ---" << endl;
            int size;
            cout << "Введите размер массива: ";
            cin >> size;

            if (size <= 0) {
                cout << "Некорректный ввод" << endl;
                break;
            }

            vector<int> arr(size);
            cout << "Введите " << size << " целых чисел:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            int x;
            cout << "Введите число для поиска: ";
            cin >> x;

            int res = findLast(arr.data(), size, x);
            if (res != -1) {
                cout << "Индекс последнего вхождения числа " << x << ": " << res << endl;
            }
            else {
                cout << "-1" << endl;
            }
            break;
        }
        case 17: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 17 ---" << endl;
            int size;
            cout << "Введите размер массива: ";
            cin >> size;

            if (size <= 0) {
                cout << "Некорректный ввод" << endl;
                break;
            }

            vector<int> arr(size);
            cout << "Введите " << size << " целых чисел:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            int x, pos;
            cout << "Введите число для добавления: ";
            cin >> x;
            cout << "Введите позицию для добавления (0-" << size << "): ";
            cin >> pos;

            if (pos < 0 or pos > size) {
                cout << "Некорректная позиция!" << endl;
                break;
            }

            int* result = add(arr.data(), size, x, pos);

            cout << "Исходный массив: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            cout << "После добавления " << x << " на позицию " << pos << ": ";
            for (int i = 0; i < size + 1; i++) {
                cout << result[i] << " ";
            }
            cout << endl;

            delete[] result;
            break;
        }
        case 18: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 18 ---" << endl;
            int size;
            cout << "Введите размер массива: ";
            cin >> size;

            if (size <= 0) {
                cout << "Некорректный размер массива!" << endl;
                break;
            }

            vector<int> arr(size);
            cout << "Введите " << size << " целых чисел:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            cout << "Исходный массив: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            reverse(arr.data(), size);

            cout << "Реверсированный массив: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }
        case 19: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 19 ---" << endl;
            int size1, size2;

            cout << "Введите размер первого массива: ";
            cin >> size1;
            if (size1 <= 0) {
                cout << "Некорректный размер!" << endl;
                break;
            }

            vector<int> arr1(size1);
            cout << "Введите " << size1 << " элементов первого массива:" << endl;
            for (int i = 0; i < size1; i++) {
                cin >> arr1[i];
            }

            cout << "Введите размер второго массива: ";
            cin >> size2;
            if (size2 <= 0) {
                cout << "Некорректный размер!" << endl;
                break;
            }

            vector<int> arr2(size2);
            cout << "Введите " << size2 << " элементов второго массива:" << endl;
            for (int i = 0; i < size2; i++) {
                cin >> arr2[i];
            }

            cout << "Первый массив: ";
            for (int i = 0; i < size1; i++) {
                cout << arr1[i] << " ";
            }
            cout << endl;

            cout << "Второй массив: ";
            for (int i = 0; i < size2; i++) {
                cout << arr2[i] << " ";
            }
            cout << endl;

            int* result = concat(arr1.data(), size1, arr2.data(), size2);
            int resultSize = size1 + size2;

            cout << "Объединенный массив: ";
            for (int i = 0; i < resultSize; i++) {
                cout << result[i] << " ";
            }
            cout << endl;

            delete[] result;
            break;
        }
        case 20: {
            cout << "\n--- ЗАПУСК ЗАДАЧИ 20 ---" << endl;
            int size;
            cout << "Введите размер массива: ";
            cin >> size;

            if (size <= 0) {
                cout << "Некорректный размер массива!" << endl;
                break;
            }

            vector<int> arr(size);
            cout << "Введите " << size << " целых чисел:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            cout << "Исходный массив: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            int newSize;
            int* result = deleteNegative(arr.data(), size, newSize);

            cout << "Без отрицательных элементов: ";
            for (int i = 0; i < newSize; i++) {
                cout << result[i] << " ";
            }
            cout << endl;

            delete[] result;
            break;
        }
        default:
            cout << "Задачи с таким номером не существует!" << endl;
            break;
        }
    }

    return 0;
}