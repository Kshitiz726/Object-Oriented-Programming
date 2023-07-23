#include <iostream>
#include <string>
#include <list>
using namespace std;

class youtube{
    public:
    string Name;
    int subscribers;

    youtube(string a, int b)
    {
        Name = a;
        subscribers = b;
    }
};
class Mycollection{
    public:
    list<youtube>mychannels;

    void operator+=(youtube& channel){
        this->mychannels.push_back(channel);
}


};
ostream& operator<<(ostream& COUT, youtube& L){
    COUT << "Name: " <<L.Name << endl;
    COUT << "Subscribers: " <<L.subscribers <<endl;
    return COUT;
}


ostream& operator << (ostream& COUT , Mycollection mycollection){
    for(youtube:mycollection.mychannels)
}
int main(void)
{
    youtube l = youtube("kshitiz", 100);
    youtube l2 = youtube("kristina", 500);
    Mycollection mycollection;
    mycollection += l;



   

}