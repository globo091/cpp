#ifndef DOCTOR_DATA_DOCTOR_DATA_H
#define DOCTOR_DATA_DOCTOR_DATA_H
#include <string>

namespace star_map {
    enum class System {
        Sol,
        BetaHydri,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani,
    };
}

namespace heaven {

    class Vessel {
    public:
        std::string name;
        int number;
        int generation;
        int busters;
        star_map::System current_system;

        Vessel(const std::string& arg1, int arg2)
            : name(arg1),
              number(arg2),
              busters(0),
              generation(1),
              current_system(star_map::System::Sol) {}

        Vessel(const std::string& arg1, int arg2, star_map::System sys)
            : name(arg1),
              number(arg2),
              generation(1),
              busters(0),
              current_system(sys) {}

        Vessel replicate(const std::string& new_name) {
            Vessel copy(new_name, number, current_system);
            copy.generation = generation + 1;
            return copy;
        }

        void make_buster() {
            busters++;
        }

        bool shoot_buster() {
            if (busters>0) {
                busters--;
                return true;
            }
            return false;
        }

        std::string get_older_bob(const Vessel& a, const Vessel& b) {
            if (a.number>b.number) {
                return b.name;
            }
            else {
                return a.name;
            }
        }

        bool in_the_same_system(const Vessel& a, const Vessel& b) {
            if (a.current_system==b.current_system) {
                return true;
            }
            return false;
        }
    };
}

#endif //DOCTOR_DATA_DOCTOR_DATA_H
