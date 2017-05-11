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

    const auto kN = Input<unsigned int>("%u");
    const auto kM = Input<unsigned int>("%u");

    int * q = new int[kN];
    for (unsigned int n = 0; n < kN; ++n)
    {
        q[n] = Input<int>("%d");
    }

    unsigned int n = 0;
    unsigned int r = kN;
    while (true) {
        if (q[n] > 0)
        {
            if (q[n] <= kM) --r;
            q[n] -= kM;
        }
        if (r == 0) break;
        n = (n + 1) % kN;
    }

    printf("%u", n + 1);
    delete[] q;
    return 0;
}
