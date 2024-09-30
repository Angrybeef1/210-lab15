// COMSC 210 | Lab 15 | Robert Stonemetz

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

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

    string getTitle() const {
        return title;
    } 
    int getYearReleased() const {
        return yearReleased;
    }
    string getScreenWriter() const {
        return screenWriter;
    }

    void print() const{
        cout << "Movie: " << title << endl;
        cout << "   Year Released: " << yearReleased << endl;
        cout << "   Screenwriter: " << screenWriter << endl << endl;
    }


};


int main(){
    vector <Movie> movies;
    ifstream inputFile ("Movies.txt");

    if (!inputFile) {
        cerr << "Error opening input file!" << endl;

        return 1;
    }

    string title;
    int year;
    string screenWriter;

    while (getline(inputFile, title) && inputFile >> year) {
        inputFile.ignore();
        getline (inputFile, screenWriter);

        Movie tempMovie (title, year, screenWriter);
        movies.push_back(tempMovie);
    }

    inputFile.close();

    cout << "Contents of the movie vector:" << endl;
    for (const auto& movie : movies) {
        movie.print();
    }

    return 0;



}