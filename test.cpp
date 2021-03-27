#include <iostream>
#include <vector>
#include <ctime>     // time()
#include <cstdlib>   // srand(), rand()
#include <algorithm> // min_element(), max_element(), sort()

using namespace std;

int main()
{
    srand(time(NULL));

    // for (int i = 0; i < 50; i++)
    // {
    //     cout << rand() % 7 + 6 << endl;
    // }

    // for (int i = 0; i < 30; i++)
    // {
    //     int randn = rand() % 100;
    //     cout << randn % (12 - 6) + 1 + 6 << endl;
    // }


    // char letters[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    //              'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
    //              'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
    //              'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    //              'v', 'w', 'x', 'y', 'z'};

    // cout << letters.size() << endl;

    // string name;
    // cout << "length = " << length << endl;

    // int letters_size = 61;

    // char letters[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    //                   'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
    //                   'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
    //                   'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    //                   'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
    //                   'y', 'z'};

    // for (int i = 0; i < length; i++)
    // {
    //     int generated = rand() % (letters_size + 1);

    //     cout << "generated = " << generated << endl;
    //     cout << "generated letter= " << letters[generated] << endl;

    //     name += letters[generated];
    // }
    // cout << "name = " << name << endl;

    char a = 'A';
    cout << (int)a << endl;
    return 0;
}