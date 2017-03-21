#include <string>
#include <iostream>
#include "Train.hpp"
using namespace std;
Train::Train(const string& dst, 
        const int kype, 
        const int plac, 
        const int gen):
    num(0),
    kype(0),
    plac(0),
    gen(0),
    time(0),
    dest(string())
{
   if(!dst.empty()){
        this->dest = string(dst);
    }
    this->kype = kype;
    this->gen = gen;
    this->plac = plac;
}

Train::Train():
    num(0),
    kype(0),
    plac(0),
    gen(0),
    time(0),
    dest(string())
{

}

void Train::set_gen(const int gen){
    this->gen = gen;
}

void Train::set_kype(const int kype){
    this->kype = kype;
}

void Train::set_plac(const int plac){
    this->plac = plac;
}

void Train::set_time(const long int time){
    this->time = time;
}


const long int Train::get_time() const{
    return this->time;
}

const int Train::get_gen_plc() const
{
    return this->gen;
}

const int Train::get_kype_plc() const
{
    return this->gen;
}

const int Train::get_plac_plc() const
{
    return this->plac;
}


const int Train::get_num() const
{
    return this->num;
}

const string& Train::get_dest() const
{
    return (this->dest);
}

void Train::set_num(const int num)
{
    this->num = num;
}

Train::~Train(){
};

void Train::set_dest(const string& dest)
{
    if(this->dest.empty())
    {
        this->dest = string(dest);
    }
    else
    {
        delete &(this->dest);
        this->dest = string(dest);
    }
}

