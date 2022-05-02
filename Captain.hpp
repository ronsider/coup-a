#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Captain:public Player
    {
        public:
        Captain(const Game&,const string&);
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
        void coup(const Player&)override
        {
            //implement later in Part B
        }
         void block(const Player&) override
         {
            //implement later in Part B 
         }

         void steal(Player&);
    };
}