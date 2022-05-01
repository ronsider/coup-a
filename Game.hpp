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
        

        private:
        vector<string>_players{};
        int m_numberOfPlayers{};


    };
}