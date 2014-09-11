// Tossing a coin n times

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

int t, Trials; float y;

cout << "\n Number of Trials: " ;

cin >> Trials;

for (int i = 0; i < Trials ; i = i+1)
{
 
srand(clock());
t = rand();
y = (float)t/(float)RAND_MAX;

//cout<< y << endl;

if((0 <= y) && (y <= 0.5))
cout << "Head"<<endl; 
else
cout << "Tail"<<endl;

}

return(0);
}
