#include <iostream>
using namespace std;

class person{
    int id;
    char name[100];

    public:
        void set_p ()
        {
            cout << "Enter the ID:  ";
            cin >> id;
            cout << "Enter the Name: ";
            cin >> name;

        
        }
        void display_p()
        {
            cout << endl<< "ID: "<< id<< "\nName: "<<name<< endl;


        }

};
    class student :private person 
    {
        char course[50];
        int fee;

        public:
            void set_s()
            {
                set_p();
                    cout << "Enter the course Name: ";
                    cin >> course;

                    cout<< "Enter the fee: ";
                    cin >> fee;
            }

            void display_s()
            {
                display_p();
                cout << "Course: "<< course << "\nfee: "<<fee<< endl;

            }

    };

    int main ()
    {
        student s;
        s.set_s();
        s.display_s();
        return 0;
    }
