#include "Dinky.h"
#include<iostream>
using namespace std;
Dinky::Dinky(int a,int b)
:rgvar(a),var(b)
{
  cout<<"I am  regular variable "<<rgvar<<endl;
  cout<<"I am  constant variable "<<var<<endl;
}
