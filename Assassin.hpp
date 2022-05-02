#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Assassin:public Player
    {
        public:
        Assassin(const Game&,const string&);
         void income ()override
        {
            no_coins++;
        }
        void foreign_aid()override
        {
            no_coins+=2;
        }
        int coins()const override
        {
            return no_coins;
        }
        string role ()const override
        {
            return _role;
        }
        void coup(const Player&);
        
    };
}