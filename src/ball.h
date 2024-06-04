#include <config.h>

class Vec {
    private:
    int x;
    int y;

    public:
    Vec(int d1, int d2) {
        x = d1;
        y = d2;
    }
};

class Space {
    private:
    vector<Ball> balls;
    vector<Wall> walls;

    public:

};

class Wall {
    private:
    string equation;

    private:
    public:
    Wall(const string & equationw) {
        equation = equationw;
        printf("Wall initialised: " + equation);
    };
};


// if next_position !in green_zone:
// velocity *= -1

class Ball {
    private:
    string name;
    float mass;
    Vec position;
    Vec velocity;
    // Vec accel;
    string color;
    float angle;

    float time;

    public:
    // Constructor: Name, sPosition, sVelocity, mass, color.
        Ball(const string& namep, const float & massp, const Vec & sPosition, const Vec & sVelocity, const string & colorp, const float & anglep) {
            name = namep;
            mass = massp;
            position = sPosition;
            velocity = sVelocity;
            color = colorp;
            angle = anglep;

            time = 0.0;
            printf("Particle initialized ---");
        };
    
    void iteration(const double & step, const vector<Ball> & balls, const vector<Wall> & walls) {

        time += step;
    };
};

