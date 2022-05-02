#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;
namespace coup
{
    class Game
    {
        public:
        Game();

        vector<string> players()const;

        string turn()
        {
            return "dummy variable";//implement later in part B
        }
        

        private:
        vector<string>_players{};
        int m_numberOfPlayers{};


    };
}