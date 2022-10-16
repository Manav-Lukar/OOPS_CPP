//BGMI_EXAMPLE-------

#include<iostream>
using namespace std;

class Manav{
    public:
    int bullets;
    int gun;
    string level;
    int kills;

    
    int getGun(){
        return this->gun;
    }

    int getBullets(){
        return this->bullets;
    }

    int getKills(){
        return this->kills;
    }

    int setGun(int s){
        this->gun=s;
    }

    int setBullets(int b){
        this->bullets=b;
    }

    int setKills(int k){
        this ->kills=k;
    }
};

class Ansul:public Manav{
    public:
    int bandages;


void bagpack(){
    cout<<"Bagpack is full"<<endl;
}
};

int main(){
    Ansul player;
    player.setBullets(450);
    cout<<player.bullets<<endl;

    player.setGun(2);
    cout<<player.gun<<endl;

    player.setKills(7);
    cout<<player.kills<<endl;
    cout<<player.bandages<<endl;

    player.bagpack();
    return 0;
}