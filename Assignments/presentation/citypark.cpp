#include <iostream>
#include <vector>
#include <algorithm>

struct Stone {
    int x, y, w, h;
};

int main() {
    int numStones;
    std::cin >> numStones;

    std::vector<Stone> stones(numStones);

    // Read input
    for (int i = 0; i < numStones; ++i) {
        std::cin >> stones[i].x >> stones[i].y >> stones[i].w >> stones[i].h;
    }

    int maxArea = 0;

   // Iterate through all combinations of stones
for (int i = 0; i < numStones; ++i) {
    for (int j = i + 1; j < numStones; ++j) {
        // Calculate the area of the stoned surface formed by stones i and j
        int area = (std::max(stones[i].x + stones[i].w, stones[j].x + stones[j].w) - std::min(stones[i].x, stones[j].x)) *
                   (std::max(stones[i].y + stones[i].h, stones[j].y + stones[j].h) - std::min(stones[i].y, stones[j].y));

        // Update the maximum area if the current area is larger
        maxArea = std::max(maxArea, area);
    }
}

    

    std::cout << maxArea << std::endl;

    return 0;
}
