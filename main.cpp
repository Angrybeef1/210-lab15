// COMSC 210 | Lab 15 | Robert Stonemetz

#include <iostream>

using namespace std;

class Movie {
    private:
    string title;
    int yearReleased;
    string screenWriter;

    public:
    //constructors

    Movie() : yearReleased(0) {}
    Movie (string t, int y, string sw) : title(t), yearReleased(y), screenWriter(sw) {}

    //setters
    void setTitle(const string& t){title = t;}
    void setYearReleased(int y) {yearReleased = y;}
    void setScreenWriter(const string& sw){screenWriter = sw;}

    //getters

    string getTitle(); 
    int getYearReleased();
    string getScreenWriter();

    void print() const{
        cout << "Movie: " << title << endl;
        cout << " Year Released: " << yearReleased << endl;
        cout << " Screenwriter: " << screenWriter << endl << endl;
    }


}


int main(){
    vector <Movie> movies;



}