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

    for (unsigned int i = 0; i < 8; ++i)
    {
        char a = Input<char>(" %c");
        for (unsigned int j = 0; j < 7; ++j)
        {
            char b = Input<char>("%c");
            if (b == a)
            {
                puts("NO");
                return 0;
            }
            else
            {
                a = b;
            }
        }
    }
    puts("YES");
    return 0;
}
