#include <cstdio>

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

    return 0;
}
