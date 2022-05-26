//Klaudija Kondovska INKI829
#include <iostream>
#include <stdlib.h>
#include <time.h> // biblioteka za vreme
#include <vector> // biblioteka vektor

using namespace std;

int main()
{
    string karti [13]={"Kec","Dvojka","Trojka","Cetvorka","Petka","Sestka","Sedumka","Osumka","Devetka","Desetka","Dzandar","Kokona","Kral"};
    string tipKarti [4]= {"Detelina","List","Srce","Lokum"};
    vector<string> spilKarti; //Se formira vektor od tip string
    //Ciklusi so koi se redi spilot na karti
    for(int i=0;i<4;i++) {
        for(int j=0;j<13;j++) {
            spilKarti.push_back(karti[j]+" "+tipKarti[i]);
        }
    }
    //Naredbi so koi se mesa spilot na karti
    srand(time(NULL));
    //Deklariranje promenlivi
    int rVrednost;
    string privremena;
    for(int i=0;i<52;i++) {
        rVrednost=rand()%52;
        privremena=spilKarti[i];
        spilKarti[i]=spilKarti[rVrednost];
        spilKarti[rVrednost]=privremena;
    }
    //Pecatenje na 5 karti
    for(int i=0;i<5;i++) {
        cout<<spilKarti[i]<<endl;
    }
    return 0;
}

