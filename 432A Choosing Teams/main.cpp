#include <cstdio>

template<typename T>
T Input(const char * format)
{
    T input;
    scanf(format, &input);
    return input;
}

using namespace std;

int main(int argc, char ** argv)
{
    if (argc == 2 && !freopen(argv[1], "r", stdin)) return 1;

    // Number of students
    const auto kN = Input<unsigned int>("%u");

    // The minimum number times each student must participate
    const auto kK = Input<unsigned int>("%u");

    // The number of eligible students
    const auto kE = [&]
    {
        unsigned int buffer = 0;
        for (unsigned int i = 0; i < kN; ++i)
        {
            if (Input<unsigned int>("%u") + kK <= 5) ++buffer;
        }
        return buffer;
    }();

    // Print the answer
    printf("%u", kE / 3);

    return 0;
}
