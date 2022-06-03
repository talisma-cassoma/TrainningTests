#include <iostream>
#include "op.hpp"
//#include "div.hpp"

using namespace std;

int main(){
int coef = sum(3, 2);
int prod = multip(4, 2);
int Div = div(9, 3);

cout<<"coef = "<<coef<<endl;
cout<<"produto = "<<prod<<endl;
//cout<<"divisao = "<<Div<<endl;

return 0;
}