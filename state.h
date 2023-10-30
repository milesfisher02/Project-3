#ifndef STATE_H
#define STATE_H

#include <string>

// State Class
class State {
public:
    State(const std::string& name, double energyConsumption, long long sizeOfState);

    std::string getName() const;
    double getEnergyConsumption() const;
    long long getSizeOfState() const;
    double getLandNeeded() const;

private:
    std::string m_name;
    double m_energyConsumption;
    long long m_sizeOfState;
    double m_percentageLandNeeded;
};

// Compare states by land usage
bool operator<(const State& state1, const State& state2);

#endif // STATE_H
