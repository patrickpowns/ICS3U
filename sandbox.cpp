#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

void multipleAdd() {

    int x = 2;
    int y = 3;

    cout << "X = " << x << ", Y = " << y;

    x, y = 5;
    x, y += 2;

    cout << "\n(7) X = " << x << ", Y = " << y;
}

int pointers() {

    int iNum = 5;
    int *pPoint;
    pPoint = &iNum;

    cout << pPoint << endl << &pPoint << endl << *pPoint << endl;
    iNum = 7;
    cout << *pPoint << endl;

    return (0);
}

int enumerate() {

    int n;

    enum card {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, JOKER};

    card outCard = QUEEN;

    cout << outCard << endl;

    enum zoom {LOW = 1, MED = 5, HIGH = 15};

    zoom level;

    level = LOW;

    for (n = 0; n < 3; n++) {
        cout << "level " << n << ": " << level << endl;
        level;
    }

    return (0);
}

int destruct() {

    enum album {VOLUMEONE, VOLUMETWO, MEDIUM, STRIFE};

    struct song {
        char title[21];
        char artist[21];
        float length;
        int rating;
    };

    song Awesum = {"Cascade", "Homestuck", 14.3, 5};


    cout << Awesum.title << endl;
    cout << Awesum.artist << endl;
    cout << Awesum.length << endl;
    cout << Awesum.rating << endl;

    return (0);
}

int classes() {

    class entity {
    public:
        int mass;
        int size;
        float density (int mass, int size) {
            int density;
            density = size / mass;
            return (density);
        }
        int velocity;
    };

    entity hab;

    hab.mass = 500;
    hab.size = 800;

    cout << hab.density (hab.mass, hab.size);

    return (0);
}

void vectors () {

    vector <int> integers;
    vector <char> characters;
    vector <string> stringy;

//    integers.pushback (5);
//    integers.pushback (10);
//    integers.pushback (20);
//
//    characters.pushback ('a');
//    characters.pushback ('e');
//    characters.pushback ('i');
//
//    stringy.pushback ("stringys");
//    stringy.pushback ("yay!");

    int n;

    cout << "integers";

    for (n = 0; n < integers.size(); n++)
        cout << integers[n] << endl;





}

int main() {

    cout << "pointers\n\n";
    pointers();
    cout << endl;
    system ("pause");

    cout << "\nenum\n\n";
    enumerate();
    cout << endl;
    system ("pause");

    cout << "\ndestruct\n\n";
    destruct();
    cout << endl;
    system ("pause");

    cout << "\nclassy\n\ndensity: ";
    classes();
    cout << "\n\n";
    system ("pause");

    cout << "\nmultiple addition: ";
    multipleAdd();
    cout << "\n\n";
    system ("pause");

    return (0);
}
