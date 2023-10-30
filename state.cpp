#include "state.h"
#include <cmath>

using namespace std;

// Constructor for the State class
State::State(const string& name, double energyConsumption, long long sizeOfState)
    : m_name(name), m_energyConsumption(energyConsumption * 1e12), m_sizeOfState(sizeOfState) {
    // Number of solar panels needed
    double panelsNeeded = ceil(m_energyConsumption / 51.0);

    // Total panel area needed
    double panelArea = panelsNeeded * 18.0;

    // Percentage of land needed
    m_percentageLandNeeded = ceil((panelArea / m_sizeOfState) * 100.0);
}

// Get the name of the state
string State::getName() const
{
    return m_name;
}

// Energy consumption of the state
double State::getEnergyConsumption() const
{
    return m_energyConsumption;
}

// Size of the state
long long State::getSizeOfState() const
{
    return m_sizeOfState;
}

// Land needed for solar panels
double State::getLandNeeded() const
{
    return m_percentageLandNeeded;
}

// Compare states by land usage
bool operator<(const State& state1, const State& state2) {
    return state1.getLandNeeded() < state2.getLandNeeded();
}
