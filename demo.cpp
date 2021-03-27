#include <iostream>
#include <vector>
#include <ctime>     // time()
#include <cstdlib>   // srand(), rand()
#include <algorithm> // min_element(), max_element(), sort()

using namespace std;

//we define it to sort in descending order
bool mySort(int i, int j) { return (i > j); }

int main()
{
  srand(time(0));

  //push 10 elements into empty vector
  vector<int> myVector;
  int totalElement = 10;
  for (int i = 0; i < totalElement; ++i)
  {
    myVector.push_back(rand() % 100); //%100 to make it readable (0-99)
  }

  cout << "Print all elements in the vector: \n[";
  for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
  {
    cout << *it << " | ";
  }
  cout << "]" << endl;

  // //for demo purposes
  // std::cin.get();

  //need to dereference(*) to get value
  cout << "min value = " << *min_element(myVector.begin(), myVector.end());
  cout << " at index " << min_element(myVector.begin(), myVector.end()) - myVector.begin() << endl;
  // another way to interpret the line above:
  // cout << distance(myVector.begin(), min_element(myVector.begin(), myVector.end())) << endl;

  // std::cin.get();

  cout << "max value = " << *max_element(myVector.begin(), myVector.end());
  cout << " at index " << max_element(myVector.begin(), myVector.end()) - myVector.begin() << endl;
  //keep in mind index starts from 0

  // std::cin.get();

  //using built-in sort
  cout << "built in sort" << endl;
  sort(myVector.begin(), myVector.end());
  cout << "\nSort elements in the vector using built-in: \n[";
  for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
  {
    cout << *it << ", ";
  }
  cout << "]" << endl;

  cout << myVector.begin() << endl;

  // std::cin.get();

  cout << "\nSort elements in the vector using our self defined sort (mySort): \n[";
  sort(myVector.begin(), myVector.end(), mySort);
  for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
  {
    cout << *it << " ; ";
  }
  cout << " ]\n"
       << endl;

  return 0;
}