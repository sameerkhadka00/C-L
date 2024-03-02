#include <iostream>
#include <string>
using namespace std;

class MusicIns {
private:
    string instruments[5];

public:
    void stringInstrument() {
        instruments[0] = "Veena";
        instruments[1] = "Guitar";
        instruments[2] = "Sitar";
        instruments[3] = "Sarod";
        instruments[4] = "Mandolin";
    }

    void windInstrument() {
        instruments[0] = "Flute";
        instruments[1] = "Clarinet";
        instruments[2] = "Saxophone";
        instruments[3] = "Nadaswaram";
        instruments[4] = "Piccolo";
    }

    void percInstrument() {
        instruments[0] = "Table";
        instruments[1] = "Mridangam";
        instruments[2] = "Bongos";
        instruments[3] = "Drums";
        instruments[4] = "Tambour";
    }

    void get() {
        cout << "a. String Instruments:\n";
        for (int i = 0; i < 5; ++i) {
            cout << instruments[i] << endl;
        }
    }

    void show() {
        cout << "b. Wind Instruments:\n";
        for (int i = 0; i < 5; ++i) {
            cout << instruments[i] << endl;
        }
    }

    void display() {
        cout << "c. Percussion Instruments:\n";
        for (int i = 0; i < 5; ++i) {
            cout << instruments[i] << endl;
        }
    }
};

int main() {
    MusicIns music;

    // Initialize string instruments
    music.stringInstrument();
    cout << "String Instruments:" << endl;
    music.get();

    // Initialize wind instruments
    music.windInstrument();
    cout << "\nWind Instruments:" << endl;
    music.show();

    // Initialize percussion instruments
    music.percInstrument();
    cout << "\nPercussion Instruments:" << endl;
    music.display();

    return 0;
}
