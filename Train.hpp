#ifndef TRAIN_TRAIN_HPP
#define TRAIN_TRAIN_HPP
#include <string>
using namespace std;
class Train
{
    public:
        Train(const Train& rhs);
        Train();
        Train(const string& dest, 
        const int kype, 
        const int plac, 
        const int gen);

        ~Train();

        const int get_num() const;
        const string& get_dest() const;

        void set_num(const int num);
        void set_dest(const string& dest);
        void set_gen(const int gen);
        void set_kype(const int kype);
        void set_plac(const int plac);
        void set_time(const long int time);

        const long int get_time() const;
        const int get_gen_plc() const;
        const int get_kype_plc() const;
        const int get_plac_plc() const;
    private:
        string dest;
        int num;
        long int time;
        
        int gen;
        int kype;
        int plac;

};
#endif
