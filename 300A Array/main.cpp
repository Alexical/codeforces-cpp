#include <cstdio>
#include <vector>

template<typename T>
T Input(const char * format)
{
    T input;
    scanf(format, &input);
    return input;
}

using namespace std;

void Solve()
{
    // The number of distinct integers
    const auto kN = Input<unsigned int>("%u");

    // The negative integers
    vector<int> vec_neg;

    // The positive integers
    vector<int> vec_pos;

    // Input integers
    for (unsigned int i = 0; i < kN; ++i)
    {
        const auto buffer = Input<int>("%d");
        if (buffer < 0)
        {
            vec_neg.push_back(buffer);
        }
        else if (buffer > 0)
        {
            vec_pos.push_back(buffer);
        }
    }

    // Negative integer iterator
    auto iter_neg = vec_neg.cbegin();

    // Print negative product set
    printf("%u %d\n", 1, *iter_neg++);

    // Print positive product set
    {
        // Number of negative integers
        const unsigned int n_neg = vec_pos.empty() ? 2 : 0;

        // Print size of set
        printf("%u", n_neg + vec_pos.size());

        // Print negative integers
        for (unsigned int i = 0; i < n_neg; ++i)
        {
            printf(" %d", *iter_neg++);
        }

        // Print positive integers
        for (const int & pos : vec_pos)
        {
            printf(" %d", pos);
        }

        putchar('\n');
    }

    // Print zero product set
    {
        // Print size of set
        printf("%u 0", distance(iter_neg, vec_neg.cend()) + 1);

        // Print remaining negative integers
        while (iter_neg != vec_neg.cend())
        {
            printf(" %d", *iter_neg++);
        }
    }
}

int main(int argc, char ** argv)
{
    if (argc == 2 && !freopen(argv[1], "r", stdin)) return 1;
    Solve();
    return 0;
}
