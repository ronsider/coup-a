#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Ambassador:public Player
    {
        public:
        Ambassador(const Game&, const string&);
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
        

        void transfer(Player&,Player&);
    };
}