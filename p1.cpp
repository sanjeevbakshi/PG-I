// Simulating the toss of an unbiased coin

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

int t; float y;

t = rand();
y = t/RAND_MAX;

if(0<= y <= 0.5)
cout << "Head"<<endl;
else
cout << "Tail"<<endl;

return(0);
}
