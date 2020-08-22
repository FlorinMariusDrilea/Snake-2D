#include <iostream>
using namespace std;

// variables
bool gameOver;
const int width = 25;
const int height = 25;
int x, y, fruitX, fruitY, score;
enum directions {STOP = 0, LEFT, RIGHT, UP, DOWN};
directions dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    // clear console windows
    system("cls");
    for(int i = 0; i < width; i++) {
        cout << "#";
    }
    cout<<endl;

    for(int i = 0; i < height; i++) {
        for( int j = 0; j < width; j++) {
            if(j == 0) {
                cout <<"#";
            }
            else {
                cout <<" ";
            }
            if(j == width - 1) {
                cout<<"#";
            }
        }
        cout << endl;
    }

    for(int i = 0; i < width; i++) {
        cout << "#";
    }
    cout<<endl;
}

void Input() {

}

void Logic() {

}

int main() {
    Setup();
    while(!gameOver) {
        Draw();
        Input();
        Logic();
    }
    return 0;
}