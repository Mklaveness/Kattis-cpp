#include <iostream>
#include <string>
#include <map>
#include <sstream>

class player
{    
public:
    std::string name;
    std::map<int, std::string> team_wishes;
};

class team{
public:
    std::string teamname;
    std::map<int, std::string> player_wishes;
};


int main(){
    std::map<int, player> playerMap;
    std::map<int, team> teamMap;
    int teams, max_player, players;
    std::cin >> teams >> max_player >> players;
    std::string buffer_string;


    for(int i = 1; i <= teams; i++){
        std::getline(std::cin >> std::ws, buffer_string);
        std::stringstream ss(buffer_string);
        std::string teamnames;
        ss >> teamnames;
        teamMap[i].teamname = teamnames;

         for (int n = 1; n <= players; n++) {
            std::string playerName;
            if (!(ss >> playerName)) break;
            teamMap[i].player_wishes[n] = playerName;
        }
    }

    for(int i = 1; i <= players; i++){
        std::getline(std::cin >> std::ws, buffer_string);
        std::stringstream ss(buffer_string);
        std::string playernames;
        ss >> playernames;
        playerMap[i].name = playernames;

        for(int n = 1; n <= teams; n++){
            std::string teamnames;
            if(!(ss >> teamnames)) break;
            playerMap[i].team_wishes[n] = teamnames;
        }
    }
     
    return 0;
}
