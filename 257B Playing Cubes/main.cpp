#include <cstdio>
#include <algorithm>

using namespace std;

template<typename T>
T Input(const char * format)
{
    T input;
    scanf(format, &input);
    return input;
}

int main(int argc, char ** argv)
{
    if (argc == 2 && !freopen(argv[1], "r", stdin)) return 1;

    // The number of red cubes
    const auto kN = Input<int>("%d");

    // The number of blue cubes
    const auto kM = Input<int>("%d");

    // The maximum number of red-blue pairs
    const auto kP = min(kN, kM);

    // The number of unpaired cubes
    const auto kU = abs(kN - kM);

    // Petya's score (number of same color pairs)
    const auto kPetya = kP + kU - 1;

    // Vasya's score (number of different color pairs)
    const auto kVasya = kP;

    // Print the answer
    printf("%d %d", kPetya, kVasya);

    return 0;
}
