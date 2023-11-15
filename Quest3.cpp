//149035
//COURSE DBIT SEP-DEC 2023
//STRATHMORE UNIVERSITY

//A program that allows the user to login using user name and password
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    string password;

    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;

    if (username == "admin" && password == "<PASSWORD>")
    {
        cout << "Login Successful. Welcome to my simple App. Select an action to perform:" << endl;
        cout << "1. Go to About Us Page" << endl;
        cout << "2. Go to Services Page" << endl;
        cout << "3. Go to Full Profile" << endl;
        cout << "4. Logout" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "About Us Page" << endl;
                cout<<username<<"is a student of DBIT in semester 3"<<endl;
                cout<<"The best part of DBIT is the consistent challenge that DBIT presents to me to learn new things"<<endl;
                break;
            case 2:
                cout << "Services Page" << endl;
                //information on what one can do for money
                cout<<"You can work at the cafeteria and apply for jobs next monday"<<endl;
                cout<<"You can work in the library as an assistant starting next friday"<<endl;

                return choice;
                break;
            case 3:
                cout << "Full Profile" << endl;
                cout<<"Name:"<<username<<endl;
                cout<<"Email:"<<username<<"@gmail.com"<<endl;
                cout<<username<<"is a student of DBIT in semester 3"<<endl;
                string fullName,yearOBirth,country,citizenship,university,course,unitName,hobbies;
                cout<<"Enter your full name: \n";cin>>fullName;
                cout<<"Enter your year of birth: \n";cin>>yearOBirth;
                cout<<"Enter your country: \n";cin>>country;
                cout<<"Enter your citizenship: \n";cin>>citizenship;
                cout<<"Enter your university: \n";cin>>university;
                cout<<"Enter your course: \n";cin>>course;
                cout<<"Enter your unit name: \n";cin>>unitName;
                cout<<"Enter your hobbies: \n";cin>>hobbies;

                cout<<"My name is "<<fullName<<endl;
                cout<<"My year of birth is "<<yearOBirth<<endl;
                cout<<"My country is "<<country<<endl;
                cout<<"My citizenship is "<<citizenship<<endl;
                cout<<"My university is "<<university<<endl;
                cout<<"My course is "<<course<<endl;
                return choice;
                break;
            case 4:
                cout << "Logout Successful" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
                return int(main);
                break;
        }
    
    }
    else
    {
        cout << "Login again" << endl;
    }

    return 0;
}