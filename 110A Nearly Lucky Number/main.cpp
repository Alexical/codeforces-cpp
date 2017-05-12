#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    if (argc == 2 && !freopen(argv[1], "r", stdin)) return 1;

    // The number n
    const auto kN = []
    {
        string buffer;
        getline(cin, buffer);
        return buffer;
    }();

    // The number of lucky digits in n
    const auto kL = count_if(kN.begin(), kN.end(), [](const char & c)
    {
        return c == '4' || c == '7';
    });

    // Print the answer
    puts(kL == 4 || kL == 7 ? "YES" : "NO");

    return 0;
}
