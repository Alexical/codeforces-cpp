#include <cstdint>
#include <cstdio>

template<typename T>
T Input(const char *format)
{
    T input;
    scanf(format, &input);
    return input;
}

int main(int argc, char **argv)
{
    // If specified, read input from file
    if (argc == 2 && !freopen(argv[1], "r", stdin)) return 1;

    // The total number of force vectors
    const auto n = Input<uint16_t>("%hu");

    // The net force vector
    int16_t net[3] = {0, 0, 0};

    // Apply each force vector
    for (uint16_t i = 0; i < n * 3; ++i)
    {
        // Apply the part
        net[i % 3] += Input<int16_t>("%hd");
    }

    for (uint16_t i = 0; i < 3; ++i)
    {
        if (net[i] != 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
