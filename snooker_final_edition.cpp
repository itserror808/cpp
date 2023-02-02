#include<iostream>
#include<cstring>
#include<cstdlib>
#include<vector>
using namespace std ;
class player{
    private :
        char * name ;
        int player_score ;
    public :
        vector<int> list_score ;
        player(const char * name = "Player" , int player_score = 0){
            this->name = new char[strlen(name)+1];
            strcpy(this->name , name);
            this->player_score = player_score ;
        }
        friend ostream &operator << (ostream &out , const player &p){
            out << p.name << " : "<< p.player_score << endl ;
            return out ; 
        }
        friend istream &operator >> (istream &in , player &p){
            in >> p.name ;
            return in ;
        }
        void addscore(int score){
            player_score += score ;
        }
        void savescore(int score){
            list_score.push_back(score) ;
        }
        void popscore(int last_added){
            player_score -= last_added ;
        }
        char * get_name(){
            return name ;
        }
        int get_player_score(){
            return player_score ;
        }
        int get_memory(){
            return list_score.back();
        }
        ~player(){
            delete[]name;
        }
};
class ball{
    private :
        char * color ;
        int ball_score ;
    public :
        ball(const char * color = "red" , int ball_score = 1){
            this->color = new char[strlen(color)+1];
            strcpy(this->color , color);
            this->ball_score = ball_score ;
        }
        char * get_color(){
            return color; 
        }
        int get_ball_score(){
            return ball_score ;
        }
        ~ball(){
            delete[]color ;
        }

};
int main(){
    string color_potted ;
    player player1 , player2;
    system("cls");
    cout << "_____________________Snooker Game_____________________"<< endl;
    cout << "Enter your name :"<< endl ;
    cout << "Player 1 : " ;
    cin >> player1;
    cout << "Player 2 : " ;
    cin >> player2;
    ball red("red" , 1);
    ball yellow("yellow" , 2);
    ball green("green" , 3);
    ball brown("brown" , 4);
    ball blue("blue" , 5);
    ball pink("pink" , 6);
    ball black("black" , 7);
    bool running = 1 ;
    while(running){
        system("cls");
            //display score
            cout << "_____________________Snooker Game_____________________"<< endl;
            cout << player1 ;
            cout << player2 << endl ;

            cout << player1.get_name() << " : ";
            cin >> color_potted ;
            while(  color_potted != "red" &&
                    color_potted != "yellow" &&
                    color_potted != "green" &&
                    color_potted != "brown" &&
                    color_potted != "blue" &&
                    color_potted != "pink" &&
                    color_potted != "black" && 
                    color_potted != "missed" && 
                    color_potted != "finish"
            ){
                cout << "check input "<< endl ;
                cin >> color_potted ;
            }
            while(color_potted != "missed"){
                if(color_potted == red.get_color()){
                    player1.addscore(red.get_ball_score());
                    player1.savescore(red.get_ball_score());
                }else if(color_potted == yellow.get_color()){
                    player1.addscore(yellow.get_ball_score());
                    player1.savescore(yellow.get_ball_score());
                }else if(color_potted == green.get_color()){
                    player1.addscore(green.get_ball_score());
                    player1.savescore(green.get_ball_score());
                }else if(color_potted == brown.get_color()){
                    player1.addscore(brown.get_ball_score());
                    player1.savescore(brown.get_ball_score());
                }else if(color_potted == blue.get_color()){
                    player1.addscore(blue.get_ball_score());
                    player1.savescore(blue.get_ball_score());
                }else if(color_potted == pink.get_color()){
                    player1.addscore(pink.get_ball_score());
                    player1.savescore(pink.get_ball_score());
                }else if(color_potted == black.get_color()){
                    player1.addscore(black.get_ball_score());
                    player1.savescore(black.get_ball_score());
                }else if(color_potted == "missed"){
                    player1.addscore(0);
                    player1.savescore(0);
                }else if(color_potted == "undo"){
                    if(player1.list_score.size()>0){
                        player1.popscore(player1.list_score.back());
                        player1.list_score.pop_back();
                    }else{
                        player1.popscore(0);
                    }
                }else if(color_potted == "finish"){
                    break ;
                }
                system("cls");
                //display score
                cout << "_____________________Snooker Game_____________________"<< endl;
                cout << player1 ;
                cout << player2 << endl ;
                cout << player1.get_name() << " : ";
                
                cin >> color_potted ;

            }
            if(color_potted == "finish") break ;
            
        system("cls");
        //display score
            cout << "_____________________Snooker Game_____________________"<< endl;
            cout << player1 ;
            cout << player2 << endl ;
            cout << player2.get_name() << " : ";
            cin >> color_potted ;
            while(  color_potted != "red" &&
                    color_potted != "yellow" &&
                    color_potted != "green" &&
                    color_potted != "brown" &&
                    color_potted != "blue" &&
                    color_potted != "pink" &&
                    color_potted != "black" && 
                    color_potted != "missed" &&
                    color_potted != "finish"
            ){
                cout << "check input "<< endl ;
                cin >> color_potted ;
            }
            while(color_potted != "missed"){
                if(color_potted == red.get_color()){
                    player2.addscore(red.get_ball_score());
                    player2.savescore(red.get_ball_score());
                }else if(color_potted == yellow.get_color()){
                    player2.addscore(yellow.get_ball_score());
                    player2.savescore(yellow.get_ball_score());
                }else if(color_potted == green.get_color()){
                    player2.addscore(green.get_ball_score());
                    player2.savescore(green.get_ball_score());
                }else if(color_potted == brown.get_color()){
                    player2.addscore(brown.get_ball_score());
                    player2.savescore(brown.get_ball_score());
                }else if(color_potted == blue.get_color()){
                    player2.addscore(blue.get_ball_score());
                    player2.savescore(blue.get_ball_score());
                }else if(color_potted == pink.get_color()){
                    player2.addscore(pink.get_ball_score());
                    player2.savescore(pink.get_ball_score());
                }else if(color_potted == black.get_color()){
                    player2.addscore(black.get_ball_score());
                    player2.savescore(black.get_ball_score());
                }else if(color_potted == "missed"){
                    player2.addscore(0);
                    player2.savescore(0);
                }else if(color_potted == "undo"){
                    if(player2.list_score.size()>0){
                        player2.popscore(player2.list_score.back());
                        player2.list_score.pop_back();
                    }else{
                        player2.popscore(0);
                    }
                }else if(color_potted == "finish"){
                    break ;
                }
                system("cls");
                //display score
                cout << "_____________________Snooker Game_____________________"<< endl;
                cout << player1 ;
                cout << player2 << endl ;

                cout << player2.get_name() << " : ";
                
                cin >> color_potted ;
            }
            if(color_potted == "finish") break ;
    }
    cout << "_____________________Final score_____________________" << endl ;
    cout <<"    "<< player1 ;
    cout <<"    "<< player2 ;

    int max_score = max(player1.get_player_score() , player2.get_player_score());
    if(player2.get_player_score() < player1.get_player_score()){
        cout << "    ***Winner ***  "<<player1.get_name() ;
        cout << " with score : "<< max_score ;
    }else if(player2.get_player_score() == player1.get_player_score()){
        cout <<"    Match null !"<<endl ;
    }else{
        cout << "    ***Winner *** "<<player2.get_name();
        cout << " with score : "<< max_score ;
    }

    return 0;
}



