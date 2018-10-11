#include <iostream>
using namespace std;
int main (){

   int grade; 
   cout << "Enter your grade:" ;
   cin >> grade; 

   if (grade>= 86){
       cout << "Grade A";
      }
      else if (grade>=72) {
          cout << "Grade B";
      }
       else if (grade>=60){
           cout << "Grade C";
       }
        else if (grade>= 50){
            cout << "Grade D";
        }
         else {
             cout << "Grade F";
         }

         return 0;




















}