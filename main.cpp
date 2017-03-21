#include "Train.hpp"
#include <string>
#include <iostream>
using namespace std;

const int to_X(const Train* arr, const int n, 
        const char* name)
{
    int ctr = 0;
    string dst(name);
    for(int i = 0; i<n; i++){
        if(!(dst.compare(arr[i].get_dest())))
            ctr++;
    }
    return ctr;
}

const int to_X_from_Y(const Train* arr, const int n,
        const char* name, const long int time){
    int ctr = 0;
    string dst(name);
    for(int i = 0; i<n; i++){
        if(!(dst.compare(arr[i].get_dest()))&&
                (time<=arr[i].get_time()))
            ctr++;
    }
    return ctr;
}

const int to_X_exist_gen(const Train* arr, const int n,
        const char* name){
    int ctr = 0;
    string dst(name);
    for(int i = 0; i<n; i++){
        if(!(dst.compare(arr[i].get_dest()))&&
                (arr[i].get_gen_plc()>0))
            ctr++;
    }
    return ctr;
 
}

int main(int argc, char* argv[]){
    
    Train* arr = new Train[5];
    string st("saf");
    long int time = 456;
    arr[0].set_dest(st);
    arr[0].set_time(time);

    arr[3].set_dest(st);
    arr[3].set_time(time+1);

    arr[4].set_dest(st);
    arr[4].set_gen(45);


    cout<< st << ":" << to_X(arr, 5, "saf") <<endl;
    
    cout<< st << " AND AFTER "<< time<< ":" << to_X_from_Y(arr, 5, "saf", time) <<endl;
    cout<< st << " AND EXIST GEN_PLACE:" << to_X_exist_gen(arr, 5, "saf") <<endl;
    
    delete[] arr;
   
    return 0;
}
