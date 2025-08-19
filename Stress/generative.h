#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;

// Modern C++ random number generator setup
mt19937_64 gen(random_device{}());

// Helper function to generate a random number within a range [l, r]
ll rng(int l, int r)
{
    uniform_int_distribution<ll> dist(l, r);
    return dist(gen);
}

template <typename T>
T generate_number(T l, T r)
{
    return rng(l, r);
}

template <typename T>
void generate_array(T l, T r, T n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << generate_number(l, r) << " ";
    }
    std::cout << "\n";
}

template <typename T>
void generate_permutation(T l, T r)
{
    std::vector<ll> perm(r - l + 1);
    iota(perm.begin(), perm.end(), l);
    std::shuffle(perm.begin(), perm.end(), gen);

    for (auto &x : perm)
        std::cout << x << " ";

    std::cout << "\n";
}

void generate_string(int l, int r, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << char('a' + generate_number(l, r));
    }
    std::cout << "\n";
}

void generate_numeric_string(int l, int r, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << char(generate_number(l, r) + '0');
    }
    std::cout << "\n";
}

void generate_alpha_numeric_string(int nl, int nr, int cl, int cr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        int x = generate_number(0, i + 1);
        std::cout << (x & 1 ? char(generate_number(nl, nr) + '0') : char('a' + generate_number(cl, cr)));
    }
    std::cout << "\n";
}

// src - https://www.geeksforgeeks.org/random-tree-generator-using-prufer-sequence-with-examples/
void print_tree_edges(std::vector<int> &prufer, int m)
{
    int vertices = m + 2;
    std::vector<int> vertex_set(vertices);
    for (int i = 0; i < vertices; i++)
        vertex_set[i] = 0;

    for (int i = 0; i < vertices - 2; i++)
        vertex_set[prufer[i] - 1] += 1;

    int j = 0;
    for (int i = 0; i < vertices - 2; ++i)
    {
        for (j = 0; j < vertices; ++j)
        {
            if (vertex_set[j] == 0)
            {
                vertex_set[j] = -1;
                std::cout << j + 1 << " " << prufer[i] << "\n";
                vertex_set[prufer[i] - 1]--;
                break;
            }
        }
    }
    j = 0;
    for (int i = 0; i < vertices; i++)
    {
        if (vertex_set[i] == 0 && j == 0)
        {
            std::cout << i + 1 << " ", j++;
        }
        else if (vertex_set[i] == 0 && j == 1)
        {
            std::cout << i + 1 << "\n";
        }
    }
}

void generate_tree(int n)
{
    if (n == 1)
    {
        std::cout << "1\n";
        return;
    }
    else
    {
        std::cout << n << "\n";
    }
    int length = n - 2;
    std::vector<int> prufer(length);
    for (int i = 0; i < length; ++i)
    {
        prufer[i] = generate_number(0, length + 1) + 1;
    }
    print_tree_edges(prufer, length);
}

void generate_graph(int n, int m)
{
    for (int i = 0; i < m; ++i)
    {
        int u = generate_number(1, n);
        int x = u > 1 ? generate_number(1, u - 1) : 0;
        int y = u + 1 < n ? generate_number(u + 1, n) : 0;
        int z = rng(0, n);
        cout << u << " " << (z & 1 ? x : y) << "\n";
    }
}
