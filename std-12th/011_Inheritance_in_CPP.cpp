/* AIM: Write a program in C++ to implement the following class hierarchy; class student to obtain Roll Number,
Class Test to obtain marks scored in Two different subjects, class sports to obtain weight-age(marks) in sports and class
Result to calculate the marks. The program must print the roll number, individual marks obtained in two subject, sports and 
total marks.
(Class test is derived from class student,class result is derived from class Test and class Result.)
*/

#include <iostream>

using namespace std;

class student{
    private:
            int roll_no;
    public:
        void get_roll_no(int a){
            roll_no=a;
        }
        void put_roll_no(void){
            cout << "Roll No. : 0" << roll_no << endl;
        }
};

class test: public student{
    public: 
            float s1, s2;
            void get_marks(float x, float y){
                s1=x;
                s2=y;
            }
            void put_marks(void){
                cout << "Marks Obtained: \n\ts1 ="<< s1 << "\n\ts2 = " << s2 << endl;
            }
};

class sports{
    public:
            int score;
            void get_score(int s){
                score=s;
            }
            void put_score(void){
                cout << "Sports Marks: " << score <<endl;
            }
};

class result: public test,public sports{
    public:
            void display(void){
                float total = s1 + s2 + score;
                put_roll_no();
                put_marks();
                put_score();
                cout << "Total Score = " << total;
            }
};
int main()
{
    result st1;
    st1.get_roll_no(101);
    st1.get_marks(39,65);
    st1.get_score(29);
    st1.display();
    return 0;
}