// Simulating the toss of an unbiased coin

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

int t; float y;

srand(clock());
t = rand();
y = (float)t/(float)RAND_MAX;

cout<< y << endl;

if((0 <= y) && (y <= 0.5))
cout << "Head"<<endl; 
else
cout << "Tail"<<endl;

return(0);
}
