#include <cstdint>
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

    const auto kN = Input<uint16_t>("%hu");
    const auto kT = Input<uint16_t>("%hu");

    char * const s = new char[kN + 1];
    scanf("%s", s);

    for (uint16_t t = 0; t < kT; ++t)
    {
        for (uint16_t n = 0; n + 1 < kN; ++n)
        {
            if (s[n] == 'B' && s[n + 1] == 'G')
            {
                s[n] = 'G';
                s[n + 1] = 'B';
                ++n;
            }
        }
    }

    puts(s);

    delete[] s;
    return 0;
}
