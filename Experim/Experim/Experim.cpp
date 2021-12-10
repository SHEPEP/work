// Experim.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


class Field
{
public:
    Field();
    char arr[50][25];
    int GetRow()const;
    int GetColum()const;

private:
    void Initalize();
    int row;
    int col;

};

Field::Field()
    : row(50), col(25)
{
    Initalize();
}

int Field::GetColum()const
{
    return col;
}

int Field::GetRow()const
{
    return row;
}

void Field::Initalize()
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr[i][j] = '`';
        }
    }
}

void main()
{
    Field arrayField;

    cout << "Enter row (x)" << endl;
    int x;
    cin >> x;

    cout << "Enter colum (y)" << endl;
    int y;
    cin >> y;
    arrayField.arr[--x][--y] = '#';
    for (int i = 0; i < arrayField.GetColum(); i++)
    {
        for (int j = 0; j < arrayField.GetRow(); j++)
        {
            cout << arrayField.arr[i][j];
        }
        cout << endl;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
