#include <iostream>
#include<istream>
#include<cmath>
using namespace std;

//Translation & scalinggs
int* ComputerGraphicstransformations(int* v, int** TheMATR){
    int* newV = new int[3];
    for(int i=0;i<3;i++){
        int element = 0;
        for(int j=0;j<3;j++){
            element += v[j] * TheMATR[j][i];
        }
        newV[i] = element;
    }
    return newV;
}

//Translation
//X as X = X + X’
//Y as Y = Y + Y’
//X’ and Y’ being the values to translate by
//      1              0        0
//     0              1        0
//  translateX    translateY   1
int** Translation(int X, int Y){
    int** TheMATR = new int *[3];
    
    TheMATR[0] = new int[3]{1, 0, 0};
    
    TheMATR[1] = new int[3]{0, 1, 0};
    
    TheMATR[2] = new int[3]{X, Y, 1};
    
    return TheMATR;
}

// scaling
//X as X = aX
//Y as Y = bY
int** Scaling(int SCX, int SCY ){
    int** TheMATR = new int *[3];
    TheMATR[0] = new int[3]{SCX, 0, 0};
    
    TheMATR[1] = new int[3]{0, SCY, 0};
    
    TheMATR[2] = new int[3]{0, 0, 1};
    
    return TheMATR;
}
//main
int main(){
    int* V = new int[3]{4, 6, 1}; 
    int* Outbut;
    // translation 
    int** Matrix = Translation(50, 17);
    Outbut = ComputerGraphicstransformations(V, Matrix);
    cout<<"1-Translation  matrix:"<<endl;
    cout<<"vertices ["<<V[0]<<", "<<V[1]<<", 1] scale by: x+50, y+17"<<endl;
    for(int k=0;k<3;k++){
        cout<<Outbut[k]<<"  ";
    }
    cout<<endl;
    //Scaling
    int** SCMatrix = Scaling(8,11);
    Outbut = ComputerGraphicstransformations(V, SCMatrix);
    cout<<"2-Scaling "<<endl;
    cout<<"vertices ["<<V[0]<<","<<V[1]<<", 1] scale by: 8x, 11y"<<endl;
    for(int k=0;k<3;k++){
        cout<<Outbut[k]<<" ";
    }
    return 0;
}