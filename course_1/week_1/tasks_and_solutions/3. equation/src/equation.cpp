//Given coefficients A,B,C of the equation Ax^2 + Bx + C = 0 find two roots of the equation
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //Initializing all necessary numbers
    float a, b, c;
    float root_1, root_2;
    float d;
    cin>>a>>b>>c;

    //Counting discriminant
    d = b*b - 4*a*c;

    //Check case when we've got zero coeffs
    if(a==0 && b==0){
        return 0;
    }
    //Finding roots

    //Case when we've got bx+c=0
    if (a == 0){
        root_1 = -c/b;
        cout<<root_1;
        return 0;
    }
    else{
        //If we have solution in real numbers
        if (d >= 0 || (b==0 && a<0)){
            root_1 = (-b + sqrt(d))/(2*a);
            root_2 = (-b - sqrt(d))/(2*a);
        }
        else{
            return 0;
        }
    }

    //Determining unique roots
    if (root_1 == root_2){
        cout<<root_1;
    }
    else {
        cout<<root_1<<" "<<root_2;
    }

    return 0;
}