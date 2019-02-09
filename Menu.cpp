#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char selection{};
    vector <double>  data{};
    double num_items{};
    double average_data{};
    double total{};


   cout  << "Welcome to the menu program version 0.1 -  Please select from the menu below." << endl;

   do{

   cout << "\nP - Print numbers " << endl;
   cout << "A - Add a numbers"  << endl;
   cout << "D - Display mean of the numbers" << endl;
   cout << "S - Display the smallest number" << endl;
   cout << "L - Display the largest number" << endl;
   cout << "Q - Quit" << endl;

   cout << "\nEnter your choice: ";
   cin >> selection ;

   if (selection == 'A' || selection == 'a'){
        for (int i {}  ;  i <= num_items; ++i){
           double data_item{};
           cout <<"Enter number:  ";
           cin >> data_item;
           data.push_back(data_item);
           cout << "\n"<<data_item << " added" << endl;
           }

   }else if (selection  == 'P' || selection == 'p'){
       if(data.size() ==0)
           cout << "\nList is empty. Please add numbers" << endl;
       for (auto val : data)
             cout   << val << endl;

   } else if (selection == 'D' || selection == 'd'){
       for (auto val : data){
           total += val;
       }average_data = total / data.size();
           cout  <<"\n" << "The  mean is " <<average_data;
           cout << "\n";

    } else if (selection =='S' || selection == 's'){
            if (data.size() ==0){
                cout << "\nList is empty, please add some numbers! " << endl;
            }else{
                cout <<"\nThe smallest values entered was: " <<*min_element(data.begin(),data.end());
                cout <<"\n" << endl;
            }
    } else if (selection =='L' || selection == 'l'){
            if (data.size() ==0){
                cout << "\nList is empty, please add some numbers! " << endl;
            }else{
                cout <<"\nThe largest value entered was: " <<*max_element(data.begin(),data.end());
                cout <<"\n" << endl;
            }
    } else if (selection == 'Q' || selection == 'q'){
       cout << "\n" << "Good Bye!" << endl;

   } else{
           cout << "\n";
           cout  <<"\n"<< "Try again!"<< endl;
           cout << "\n";
      }

 }

    while(selection != 'Q' && selection != 'q');

   cout << endl;
   return 0;
}
