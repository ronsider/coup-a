#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Ambassador.hpp"
#include "Contessa.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"

using namespace coup;

TEST_CASE("income ,coins, roles and coup"){
    Game game_1{};

    /* This player drew the "Duke" card, his name is Moshe
    and he is a player in game_1 */
    Duke duke{game_1, "Avi"};
    Assassin assassin{game_1, "Ben"};
    Ambassador ambassador{game_1, "Gadi"};
    Captain captain{game_1, "Danny"};
    Contessa contessa{game_1, "Eran"};
    
    CHECK(duke.coins()==0);
    CHECK(assassin.coins()==0);
    CHECK(ambassador.coins()==0);
    CHECK(captain.coins()==0);
    CHECK(contessa.coins()==0);

    CHECK(duke.role()=="duke");
    CHECK(assassin.role()=="assassin");
    CHECK(ambassador.role()=="ambassador");
    CHECK(captain.role()=="captain");
    CHECK(contessa.role()=="contessa");

    //deploying income:
    duke.income();
    assassin.income();
    ambassador.income();
    captain.income();
    contessa.income();

    CHECK(duke.coins()==1);
    CHECK(assassin.coins()==1);
    CHECK(ambassador.coins()==1);
    CHECK(captain.coins()==1);
    CHECK(contessa.coins()==1);

    //cant coup when there are not enough coins

    CHECK_THROWS(assassin.coup(duke));
    CHECK_THROWS(duke.coup(contessa));
    CHECK_THROWS(ambassador.coup(duke));
    CHECK_THROWS(assassin.coup(contessa));
    CHECK_THROWS(ambassador.coup(contessa));
    CHECK_THROWS(duke.coup(assassin));
    CHECK_THROWS(ambassador.coup(assassin));
 

    
}
