#include <iostream>
#include "add.hpp"
#include "minus.hpp"

using namespace std;

int main(){
	int a=10;
	int b=5;
    int rest1=add(a,b);
	int rest2= minus1(a,b);
	printf("a+b=%d\n",rest1);
	printf("a-b=%d\n",rest2);
	return 0;
}