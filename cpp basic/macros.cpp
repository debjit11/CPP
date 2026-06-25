#include <iostream>
using namespace std ;


#define PI 3.141594653  //This creates a macro constant.
#define Maxx(x,y) (x > y ? x : y)

float CircleArea(float r){
    return PI * r * r;
}
float CircleParimeter(float r){
    return 2*PI * r; // Whenever the compiler sees PI, it replaces it with 3.14159465
}

void fun1 (){
    int x = 4;
    int y = 5;
    int c = Maxx(x,y);
    cout << c << endl;

}
int main(){
    cout << CircleArea(45.4) << endl;
    fun1();
    return 0 ;
}
