// Draw a sample from an exponential distribution: Inverse Transform Method

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

inline double funi_0_1(){
srand(clock());
return((double)rand()/(double)RAND_MAX);
}


int main(){

double theta = 0.3;

cout << "The sample is :"<< -(1/theta)*log(funi_0_1()) << endl;
return(0);
}


// the function funi_0_1 returns a sample from a uniform distribution U(0,1)


