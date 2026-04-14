namespace targets {
class Alien {
private:
    int health;
public:
    int x,y;
    Alien(int x_coordinates, int y_coordinates, int health) : x(x_coordinates), y(y_coordinates), health(3) {}
    int get_health() {
        return health;
    }
    bool hit() {
        health -= 1;
        return true;
    }
    bool is_alive() {
        if (health <= 0) {
            return false;
        }
        return true;
    }
    bool teleport(int x_new, int y_new) {
        return true;
    }
    bool collision_detection(Alien *alien, Alien *other) {
        if (alien->x == other->x && alien->y == other->y) {
            return true;
        }
        return false;
    }
};
}

