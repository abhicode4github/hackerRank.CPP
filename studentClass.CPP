Input Format

Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format

The code provided by HackerRank will use your class members to set and then get the elements of the Student class.


/// SOLUTION PROGRAM   

#include <iostream>
#include <sstream>

using namespace std;

class Student
{

    private:
    int age;
    string fname;
    string lname;
    int std;
    
    public:
    
    void set_age(int Age)
    {
        age=Age;
    }
    int get_age()
    {
        return age;
    }
    
    void set_first_name(string first_name)
    {
        fname=first_name;
    }
    string get_first_name()
    {
        return fname;
    }
    
    void set_last_name(string last_name)
    {
        lname=last_name;
    }
    string get_last_name()
    {
        return lname;
    }
    
    void set_standard(int standard)
    {
        std=standard;
    }
    int get_standard()
    {
        return std;
    }
    
    string to_string()
    {
        stringstream ss;
        char ch=',';
        ss<<age<<ch<<fname<<ch<<lname<<ch<<std;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
