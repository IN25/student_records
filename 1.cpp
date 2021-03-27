#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Student
{
private:
    string name_;
    int number_;
    vector<int> grades_;
    int num_courses_;
    double average_;

    static string gen_name();
    static int gen_number();
    static int gen_grade();
    double compute_average();

public:
    inline string get_name() const { return name_; };
    inline double get_average() const { return average_; };

    Student() : name_(gen_name()), number_(gen_number()), num_courses_(5)
    {
        for (int i = 0; i < num_courses_; ++i)
        {
            grades_.push_back(gen_grade());
        }

        average_ = compute_average();
    }

    friend ostream &operator<<(ostream &os, const Student &s)
    {
        os << "Name = " << s.name_ << ", Number = " << s.number_ << ", Average = " << s.average_ << ", ";
        s.print_grades(cout);
        return os;
    }

    void print_grades(ostream &os) const
    {
        cout << "Grades: [";
        for (int i = 0; i < num_courses_; ++i)
        {
            if (i != num_courses_ - 1)
            {
                os << grades_[i] << ", ";
            }
            else
            {
                os << grades_[i];
            }
        }
        cout << "]" << endl;
    }
};

string Student::gen_name()
{
    string name;

    //generates random number between 6 and 12
    int randn = rand() % 100;
    int length = randn % (12 - 6) + 1 + 6;

    int letters_size = 61;

    char letters[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                      'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                      'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
                      'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                      'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
                      'y', 'z'};

    for (int i = 0; i < length; i++)
    {
        int generated = rand() % (letters_size + 1);
        name += letters[generated];
    }
    return name;
}

int Student::gen_number()
{
    int num = rand() % (201600000 - 201100000 + 1) + 201100000;
    return num;
}

int Student::gen_grade()
{
    int grade = rand() % (100 - 70 + 1) + 70;
    return grade;
}

double Student::compute_average()
{
    double sum;

    for (int i = 0; i < grades_.size(); i++)
    {
        sum += grades_[i];
    }
    double average = sum / grades_.size();
    return average;
}

inline bool sort_name(class Student i, class Student j) { return (i.get_name()[0] < j.get_name()[0]); };
inline bool sort_average(class Student i, class Student j) { return (i.get_average() < j.get_average()); };

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cerr << "ERROR: Invalid number of arguments. \nUsage: ./prog.out number_of_students" << endl;
        exit(1);
    }

    srand(time(NULL));



    vector<Student> students;
    int numberOfStudents = atoi(argv[1]);

    for (int i = 0; i < numberOfStudents; i++)
    {
        Student si;
        students.push_back(si);
    }



    cout << "\n\nList of students:" << endl;

    for (vector<Student>::iterator it = students.begin(); it != students.end(); it++)
    {
        cout << *it;
    }
    cout << "\n\n";



    cout << "=======Sort by name:=======" << endl;

    sort(students.begin(), students.end(), sort_name);

    for (vector<Student>::iterator it = students.begin(); it != students.end(); it++)
    {
        cout << *it;
    }
    cout << "\n\n";



    cout << "=======Sort by average:=======" << endl;

    sort(students.begin(), students.end(), sort_average);

    for (vector<Student>::iterator it = students.begin(); it != students.end(); it++)
    {
        cout << *it;
    }
    cout << "\n\n";

    

    cout << "=======Student with the highest average:=======" << endl;

    vector<double> average_of_grades;

    for (int i = 0; i < numberOfStudents; i++)
    {
        average_of_grades.push_back(students[i].get_average());
    }

    //element in a vector with the highest value
    // *max_element(average_of_grades.begin(), average_of_grades.end());

    //index of an element in a vector with the highest value
    int index = max_element(average_of_grades.begin(), average_of_grades.end()) - average_of_grades.begin();

    cout << students[index] << endl;

    return 0;
}