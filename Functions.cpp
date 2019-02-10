//By David Coldeira

#include <iostream>

//Prototypes that should be in a .hh file
void menu_options();
double calc_area_circle(double);
double  calc_vol_cylinder(double radius, double height);
void area_circle();
void volumen_cylinder();
void area_square();
void volumen_cube();
void area_rectangle();


using namespace std;

const double pi{3.14159};

int main()
{
      for (;;){
        menu_options();
      }
  return 0;
}

double calc_area_circle(double radius) {
  return  pi * radius*radius;
}

double  calc_vol_cylinder(double radius, double height) {
  calc_area_circle(radius) * height;
}

double calc_area_square(double side){
  return side*side;
}

double calc_vol_cube(double edge){
   return edge*edge*edge;
}

double calc_area_rectangle(double length, double width){
   return length*width;
}

void menu_options(){

  char option{};

  cout << "\nWhat would you like to calculate? "<< endl;
  cout << "\n1 - Area of a circle"<< endl;
  cout << "2 - Volumen of a cylinder"<< endl;
  cout << "3 - Area of a square"<< endl;
  cout << "4 - Area of a rectangle"<< endl;
  cout << "5 - Volume of a cube"<< endl;
  cout << "Q - Quit"<< endl;


  cout << "\nEnter your choice: ";
  cin >> option;

  if (option == '1'){
     area_circle();

  }else if (option == '2'){
    volumen_cylinder();

  }else if (option == '3'){
    area_square();

  }else if (option == '4'){
    area_rectangle();

  }else if (option == '5'){
    volumen_cube();

  }else if (option == 'Q' || option == 'q'){
    cout << "\n" << "Good Bye!" << endl;
      exit(0);

  }else {
    cout << "\n";
    cout << "\nInvalid option, please try again! "<< endl;

   }

   cout << endl;


}

void area_circle(){
    double radius{};
    cout <<"\nEnter the radius of the circle: ";
    cin >> radius;
        if (cin.fail()) {
            cin.clear();
 }
            cout << "==============================================="<< endl;
            cout <<"The area of a circle with radius " << radius <<" is " << calc_area_circle(radius) << endl;
            cout << "==============================================="<< endl;
       }

void volumen_cylinder(){
    double radius{};
    double height{};
    cout <<"\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout <<"and the height: ";
    cin  >> height;
        if (cin.fail()) {
            cin.clear();
}
    cout << "=================================================================="<< endl;
    cout << "The volumen of the cylinder with radius " << radius << " and height " << height<< " is " << calc_vol_cylinder(radius, height) << endl;
    cout << "=================================================================="<< endl;

}

void area_square(){
    double side{};
    cout <<"\nEnter the side length of the square: ";
    cin >> side;
        if (cin.fail()) {
            cin.clear();
}
    cout << "=============================================="<< endl;
    cout << "The area of a square with side lengths "<< side << " is " << calc_area_square(side) << endl;
    cout << "=============================================="<< endl;

}

void area_rectangle(){
    double length{};
    double width{};
    cout <<"\nEnter the width of the rectangle: ";
    cin >> width;
        if (cin.fail()) {
            cin.clear();
}
    cout <<"and the length: ";
    cin >> length;
        if (cin.fail()) {
            cin.clear();
  }
    cout << "========================================================"<< endl;
    cout << "The area of a rectangle with length "<< length << " and width " << width << " is " << calc_area_rectangle(length, width) << endl;
    cout << "========================================================"<< endl;


}

void volumen_cube(){
    double edge{};
    //double edge{};
    cout <<"\nEnter the side length of the square: ";
    cin >> edge;
        if (cin.fail()) {
            cin.clear();
}
    cout << "========================================"<< endl;
    cout << "The volume of a cube with edges "<< edge << " is " << calc_vol_cube(edge) << endl;
    cout << "========================================"<< endl;

}
