#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Duke:public Player
    {
        public:
        Duke(const Game&,const string&);
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
        
        void block(const Player&);
         

         void tax()
         {
            //implement later in Part B  
         }
    };
}