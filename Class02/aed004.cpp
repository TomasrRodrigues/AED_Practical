#include <iostream>
#include <cmath>

using namespace std;

pair<int, int> find_coordinates(int N) {
    if (N == 1)
        return {0, 0};
    
    // Find the layer k such that the number N is in the range of this layer
    long long k = ceil((sqrt(N) - 1) / 2);
    
    // The maximum number in this layer is (2k + 1)^2
    long long max_in_layer = (2 * k + 1) * (2 * k + 1);
    long long min_in_layer = (2 * k - 1) * (2 * k - 1) + 1;
    
    // Layer k forms a square, we need to find the position of N within this square
    long long side_len = 2 * k;  // Length of the side of the square at layer k
    
    // Four edges of the square, moving clockwise:
    // Top edge: from (k, -k) to (-k, -k)
    // Left edge: from (-k, -k) to (-k, k)
    // Bottom edge: from (-k, k) to (k, k)
    // Right edge: from (k, k) to (k, -k)
    
    if (N >= max_in_layer - side_len) {  // Top edge
        return {k - (max_in_layer - N), -k};
    } else if (N >= max_in_layer - 2 * side_len) {  // Left edge
        return {-k, -k + (max_in_layer - side_len - N)};
    } else if (N >= max_in_layer - 3 * side_len) {  // Bottom edge
        return {-k + (max_in_layer - 2 * side_len - N), k};
    } else {  // Right edge
        return {k, k - (max_in_layer - 3 * side_len - N)};
    }
}

int main() {
    int N;
    cin >> N;

    pair<int, int> coords = find_coordinates(N);
    cout << "(" << coords.first << "," << coords.second << ")" << endl;

    return 0;
}
