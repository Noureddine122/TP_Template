//
// Created by noureddine on 12/13/21.
//

#ifndef VECTEUR3D_VECTEUR3D_H
#define VECTEUR3D_VECTEUR3D_H

#include <algorithm>
#include <iterator>
template<class T>
class Vecteur3d {
public:
    explicit Vecteur3d(int x=0, int y=0, int z=0);
    int get(int i) const;
    bool operator==(const Vecteur3d& v) const;
    Vecteur3d& operator*(int i) const;
private:
    int x, y, z;
};

template<class T>
Vecteur3d<T>::Vecteur3d(int x, int y, int z):x(x), y(y), z(z){

}

template<class T>
int Vecteur3d<T>::get(int i) const {
    return 0;
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


#endif //VECTEUR3D_VECTEUR3D_H
