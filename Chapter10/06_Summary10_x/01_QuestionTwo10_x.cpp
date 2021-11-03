#include <iterator>
#include <iostream>

#include <string>
#include <vector>

struct Student
{
    std::string name{};
    int grade{};
};

int getNumberOfStudents()
{
    int amount_of_students{};
    do
    {
        std::cout << "Enter amount of Students to be created: ";
        std::cin >> amount_of_students;
    } while (amount_of_students <= 0);
    return amount_of_students;
}

std::vector<Student> getStudents(int amount)
{
    std::vector<Student> my_class(amount);
    for (auto &student : my_class)
    {
        std::cout << "Enter name: ";
        std::cin >> student.name;
        std::cout << "Enter grade: ";
        std::cin >> student.grade;
    }
    return my_class;
}

bool compareStudents(const Student &a, const Student &b)
{
    return (a.grade > b.grade);
}

int main()
{
    int my_classsize{getNumberOfStudents()};
    auto my_class{getStudents(my_classsize)};

    std::sort(my_class.begin(), my_class.end(), compareStudents);

    for (auto &student : my_class)
    {
        std::cout << student.name << " has a grade of: " << student.grade << "\n";
    }

    return 0;
}