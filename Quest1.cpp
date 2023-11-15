//149035
//COURSE DBIT SEP-DEC 2023
//STRATHMORE UNIVERSITY

//A program using switch case to determine the smallest number of 3 numbers from user

//A program that generates and prints all prime numbers to a user specified limit using for loop

#include <iostream>

int main(){
    int a,b,c;
    cout<<"Enter the 3 numbers in order";

    cin>>a>>b>>c;
//use switch cases to find the smallest of 3 numbers
    switch(a){
        case 0:
        if (a<b<c)
        {
            cout<<a<<"is the smallest integer"<<endl;
        }
        break;
        case 1:
        if (b<a<c)
        {
            cout<<b<<"is the smallest integer"<<endl;
        }
        break;
        case 2:
        if (c<a<b)
        {
            cout<<c<<"is the smallest integer"<<endl;
        }
        break;
        default:
        cout<<"Invalid input"<<endl;
        break;
        }
        return 0;
        
}                   