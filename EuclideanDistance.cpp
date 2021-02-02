#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 float Euclidean(int x1, int y1, int x2, int y2){
     float D= sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
    // float D = ((x2-x1)^2+(y2-y1)^2)^(1/2);
     cout<<"Distance Between Two Points is : "<<D;
     return 0.00;
 }
 int main(){
     int x1,y1,x2,y2;
 cout<<"Welcome To My Program\n\n";
 cout<<"Enter The Coordinates Of First Point:\n";
 cout<<"x1\n";
 cin>>x1;
 cout<<"y1\n";
 cin>>y1;
 cout<<"Enter The Coordinates Of Second Point:\n";
 cout<<"x2\n";
 cin>>x2;
 cout<<"y2\n";
 cin>>y2;
 Euclidean(x1,y1,x2,y2);
 }

