#include <cstdint>
#include <cstdio>
#include <cstdlib>

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

    const auto n = []
    {
        for (int16_t i = 0; i < 25; ++i)
        {
            if (Input<uint16_t>("%hu") == 1) return i;
        }
    }();

    printf("%d", abs(n % 5 - 2) + abs(n / 5 - 2));

    return 0;
}
