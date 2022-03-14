#include "Multime.h"
#include "IteratorMultime.h"

#include <iostream>

Multime::Multime() {
    /* de adaugat */
    //setam capacitatea
    this->cp=1;

    //alocam spatiu de memorare pt vector
    e=new TElem[cp];

    //setam numarul de elemente
    this->n=0;

}


bool Multime::adauga(TElem elem) {
    /* de adaugat */
    if(n==cp)
        redim();
    if(!cauta(elem)){
        this->e[n++]=elem;
        return true;
    }else{
        return false;
    }

}


bool Multime::sterge(TElem elem) {
    /* de adaugat */
    int gasit=0, i=0;
    while(i<n && gasit==0){
        if(e[i]==elem){
            gasit=1;
            for(int j=i,j<n-1,j++)
                e[j]=e[j+1];
            n--
            return true;
        }else{
            i++;
        }
    }
    return false;
}


bool Multime::cauta(TElem elem) const {
    /* de adaugat */
    for (int i=0;i<n;i++)
        if(e[i]==elem)
            return true;
    return false;
}


int Multime::dim() const {
    /* de adaugat */
    return n;
}

bool Multime::vida() const {
    /* de adaugat */
    if(dim()==0)
        return true;
    return false;
}


Multime::~Multime() {
    /* de adaugat */
    delete[] e;
}



IteratorMultime Multime::iterator() const {
    return IteratorMultime(*this);
}