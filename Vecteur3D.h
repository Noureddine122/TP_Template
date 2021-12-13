//
// Created by noureddine on 12/13/21.
//

#ifndef VECTEUR3D_VECTEUR3D_H
#define VECTEUR3D_VECTEUR3D_H

#include <algorithm>
#include <iterator>
#include <iostream>

template<class T>
class Vecteur3d {
public:
    explicit Vecteur3d(int x=0, int y=0, int z=0);

    bool operator==(const Vecteur3d& v) const;
    Vecteur3d& operator*(int i) const;
    void afficher() const;
private:
    int x, y, z;
};

template<class T>
Vecteur3d<T>::Vecteur3d(int x, int y, int z):x(x), y(y), z(z){

}

template<class T>
bool Vecteur3d<T>::operator==(const Vecteur3d &v) const {
    return ((x == v.x) && (y == v.y) && (z == v.z));;
}

template<class T>
Vecteur3d<T> &Vecteur3d<T>::operator*(int i) const {
    Vecteur3d<T> v(x*i,y*i,z*i);
    return v;
}

template<class T>
void Vecteur3d<T>::afficher() const {
 std::cout << x << " " << y << " " << z << " " << std::endl;
}


#endif //VECTEUR3D_VECTEUR3D_H
