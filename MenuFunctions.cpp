//By David Coldeira @dcoldeira
# include <iostream>
# include <vector>
# include <string>
#include <cctype>
#include <algorithm>

using namespace std;
char letter2_menu{};

//Prototypes
void Menu_Function();
char Selection_Function();
void Switch_Fucntion();
void A_Function(vector<int>&data);
void P_Print(vector<int>&data);
void M_Function(vector<int> &data);
void S_Function(vector<int> &data);
void L_Function(vector<int> &data);
void List_Function(const vector<int> &data);

void Other_function();

int main() {

    vector<int> numbers;
    char selection{};

    do{
        Menu_Function();
        selection = Selection_Function();
        switch (selection) {
                case 'A':
                    A_Function(numbers);
                    break;
                case 'P':
                    P_Print(numbers);
                    break;
                case 'M':
                    M_Function(numbers);
                    break;
                case 'S':
                    S_Function(numbers);
                    break;
                case 'L':
                    L_Function(numbers);
                    break;
                default:
                    Other_function();
        }
    } while (selection != 'Q');
    cout << endl;
    return 0;
}

void Menu_Function(){
    cout <<"\nWelcome to the Menu Functions program  -  Please select from the menu below. " << endl;
    cout << "\nP - Print numbers " << endl;
    cout << "A - Add a numbers"  << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    //cout<<"\nPlease enter your choice: ";
}

void List_Function(const vector<int> &data) {
    cout << "[ ";
    for (auto num: data)
        cout << num << " ";
    cout << "]" << endl;
}

char Selection_Function(){
    char letter_menu;
    cout<<"\nPlease enter your choice: ";
    cin>>letter_menu;
    return toupper(letter_menu);
}

void A_Function(vector<int> &data){
    int data_item{};
    cout <<"Enter the number to be added: ";
    cin>>data_item;

    data.push_back(data_item);
    cout << "\n"<<data_item << " added" << endl;
}

void P_Print(vector<int> &data){
     if(data.size() ==0)
           cout << "\n[] - List is empty. Please add numbers" << endl;
       else
           List_Function(data);
             //cout << val << endl;
}

void M_Function(vector<int> &data){
    double total{};
    double average_data{};
    for (auto val : data){
           total += val;
       }average_data = total / data.size();
           cout  <<"\n" << "The  mean is " <<average_data << endl;
}

void S_Function(vector<int> &data){
    if (data.size() ==0){
                cout << "\nList is empty, please add some numbers! " << endl;
            }else{
                cout <<"\nThe smallest values entered was: " <<*min_element(data.begin(),data.end());
                cout <<"\n" << endl;
}
}

void L_Function(vector<int> &data){
if (data.size() ==0){
                cout << "\nList is empty, please add some numbers! " << endl;
            }else{
                cout <<"\nThe largest value entered was: " <<*max_element(data.begin(),data.end());
                cout <<"\n" << endl;
            }
}

void Other_function() {
    cout << "\nUnknown selection - try again" << endl;
}
