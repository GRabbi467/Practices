#include<iostream>
using namespace std;
int main()
{
    double A,B,C;
    cin>>A>>B>>C;

    if(A >= B + C)
        cout<<" NAO FORMA TRIANGULO "<<endl;
    if(A*A == B*B + C*C)
        cout<<"TRIANGULO RETANGULO "<<endl;
    if(A*A > B*B + C*C)
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    if(A*A < B*B + C*C)
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if(A == B == C)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    if ((A==B && A!=C) || (B==C && B!= A) || (C==A && C!=B) )
        cout<<"TRIANGULO ISOSCELES";
    return 0;



}
