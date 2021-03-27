#include <iostream>
#include <vector>
#include <ctime>     // time()
#include <cstdlib>   // srand(), rand()
#include <algorithm> // min_element(), max_element(), sort()

bool sort(int i, int j) { return (i < j); }

int main()
{
    std::srand(std::time(0));

    std::vector<int> x;
    int n = 10;
    for (int i = 0; i < n; ++i)
    {
        x.push_back(std::rand());
    }

    // for (std::vector<int>::iterator xi = x.begin(); xi != x.end(); xi++)
    // {
    //     std::cout << *xi << std::endl;
    // }

    // std::cout << "min value = " << *std::min_element(x.begin(), x.end()) << std::endl;
    // std::cout << "index of min value = " << std::min_element(x.begin(), x.end()) - x.begin() << std::endl;

    // std::cout << "max value = " << *std::max_element(x.begin(), x.end()) << std::endl;
    // std::cout << "index of max value = " << std::max_element(x.begin(), x.end()) - x.begin() << std::endl;

    // std::sort(x.begin(), x.end());
    // for (std::vector<int>::iterator xi = x.begin(); xi != x.end(); xi++)
    // {
    //     std::cout << *xi << std::endl;
    // }

    // std::sort(x.begin(), x.end(), sort);
    // for (std::vector<int>::iterator xi = x.begin(); xi != x.end(); xi++)
    // {
    //     std::cout << *xi << std::endl;
    // }

    return 0;
}