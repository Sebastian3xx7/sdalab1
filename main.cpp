#include "TestExtins.h"
#include "TestScurt.h"
#include <iostream>
#include "Multime.h"
#include "IteratorMultime.h"
using namespace std;

//11.TAD Mulțime – reprezentare folosind un vector dinamic de elemente.

void creare(Multime& m){
    for(int i=1;i<=10;i++)
        m.adauga(i);
}


void print(Multime& m){
    IteratorMultime i=m.iterator();
    i.prim();
    while(i.valid()){
        cout<<i.element()<<" ";
        i.urmator();
    }
}

int main() {

	testAll();
	testAllExtins();
    Multime m;
    creare(m);
    print(m);
    cout << "That's all!" << endl;

}
