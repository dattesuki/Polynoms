//
//  main.cpp
//  Polynoms
//
//  Created by Daniil Litvyakov on 13.02.2025.
//

#include <iostream>
#include <list>

const int MAX_DEG=9;

class Monom{
public:
    int degree;
    double k;
    
public:
    Monom(int _degree = 0, double _k = 0):degree(_degree),k(_k){};
    
    Monom(const Monom& m): degree(m.degree), k(m.k){};
    
    int x_deg() const{
        return degree/100;
    }
    
    int y_deg() const{
        return (degree/10)%10;
    }
    
    int z_deg() const{
        return degree%10;
    }
    
    bool is_deg_correct(){
        return ((x_deg()<=MAX_DEG)&&(y_deg()<=MAX_DEG)&&(z_deg()<=MAX_DEG));
    }
    
    Monom operator+(const Monom& m){
        Monom res(*this);
        if (degree==m.degree){
            res.k = k + m.k;
        }
        else throw std::logic_error("error");
        return res;
    }
    
    Monom operator*(const double& n){
        Monom res(*this);
        res.k *= n;
        return res;
    }
    
    Monom operator*(const Monom& m){
        Monom res(degree+m.degree,k*m.k);
        if(((x_deg() + m.x_deg())>MAX_DEG)||((y_deg() + m.y_deg())>MAX_DEG)||((z_deg() + m.z_deg())>MAX_DEG)) throw std::logic_error("error");
        return res;
    }
    
    Monom& operator=(const Monom& m){
        if(this!=&m){
            k=m.k;
            degree=m.degree;
        }
        return *this;
    }
    
    
};




class Polynom{
    std::list<Monom*> List;
public:
    Polynom():List(){
        List.push_back(new Monom);
        std::cout<<List.size();
        //циклим лист
    };
    
    ~Polynom(){
        while(List.size()!=0){
            List.pop_back();
        }
    };
    
    Polynom(const Polynom& m);
    
    /*
    
    begin(){
        return iterator(head->next);
    }
    
    end(){
        return iterator(head);
    }
    
    
    Polynom operator+(const Polynom& p){
        Polynom res();
        
        //цикл по итератору от начала до конца
        //it1 = begin,it2 =
        while((it1!=end) && (it2!=end)){
            if (it1->data.degree == it2->data.degree){
                res.insert((it1->data + it2->data),it3);
                ++it1;
                ++it2;
                ++it3;
            }
            else{
                if(it1->data.degree < it2->data.degree){
                    res.insert(it1.data);
                    ++it3;
                    ++it1;
                }
            }
        }
        if(it1==end){
            while(it2!=end) //добавляем it2
                }
        else{
            while(it1!=end) //добавляем it1
                }
    }
*/
};




//по сортированному списку идти итератором
using namespace std;
int main() {
    
    Polynom P;
    Monom A(5,10);
    Monom WW(4,20.5);
    Monom B=A*WW;
    //cout<<(B).degree<<" "<<(B).k;
    return 0;
}



