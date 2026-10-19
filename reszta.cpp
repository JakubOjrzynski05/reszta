#include<iostream>

using namespace std;

int main(){
    short nominaly[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int reszta, aktualny_nominal=0;

    cout<<"Reszta"<<std::endl;
    cout<<"Podaj kwote reszty: ";
    cin>>reszta;

    while(reszta>0){
        if(reszta>=nominaly[aktualny_nominal]){
            cout<<nominaly[aktualny_nominal]<<" ";
            reszta-=nominaly[aktualny_nominal];
        }
        else{
            aktualny_nominal++;
        }
    };
    cout<<endl<<"Reszta wydana"<<endl;

    return 0;
}