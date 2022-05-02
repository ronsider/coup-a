#pragma once
#include "Game.hpp"
#include <string>
using std::string;
namespace coup
{
    class Player
    {
        public:
        virtual void income()=0;//pure virtual function
        virtual void foreign_aid()=0;//pure virtual function
        virtual int coins ()const=0;//pure..
        virtual string role ()const=0;//pure...
        //virtual void coup(const Player&);//pure
        //virtual void block(const Player&);//pure
        protected:
        int no_coins{};
        string _role{};
    };
}