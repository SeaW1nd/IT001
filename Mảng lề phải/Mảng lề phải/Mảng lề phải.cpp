#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end(), std::greater<char>());
    do {
        std::cout << s << '\n';
    } while (std::prev_permutation(s.begin(), s.end()));
    
}
