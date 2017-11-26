//#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
//#include <windows.h>
#include <cstring>

using namespace std;
int main()
{
    int i = 0, k = 0;
    //double p;
    double h = 0; //счет слов с удвонной глассной
    char r;
    string bufer;
    string slovo;
    vector <string> str;
    setlocale(LC_ALL, "");

    cout << "vvedite stroku" << endl;


    while (i != 1) {
        cin >> slovo;//ввод слова
        if (slovo == "stop") { i = 1; }
        else { str.push_back(slovo); }
    }

    for (double z = 0; z < str.size(); z++)
    {
                bufer = str[z];
        for (double j = 0; j < bufer.size() - 1; j++)
        {
                if (bufer[z] == bufer[z + 1])
            {	// форма записи оператора множественного выбора switch
                r = bufer[z];
                cout << endl << r << endl;
                switch (r)
                {
                case 'a':
                {
                    h++;
                    break;
                }
                case 'e':
                {
                    h++;
                    break;
                }
                case 'y':
                {
                    h++;
                    break;
                }
                case 'u':
                {
                    h++;
                    break;
                }
                case 'i':
                {
                    h++;
                    break;
                }
                case 'o':
                {
                    h++;
                    break;
                }

                default:
                {
                    break;
                }
                }
                break;

            }
        }
    }

        double x = h / str.size() * 100;
        cout << "1= " << i << endl;
        cout << "2= " << k << endl;
       // cout << "3= " << p << endl;
        cout << "4= " << h << endl;



        cout << "procent= " << x << endl;


        cout << "Result: \n" << endl;
        for (double xe = 0; xe < str.size(); xe++)
        {
            cout << str[xe] << endl;
        }
        int m;
        cin >> m;
        return 0;

}
