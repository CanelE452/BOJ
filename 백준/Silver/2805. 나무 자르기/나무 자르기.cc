#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 1000001;
int N, M;
int trees[MAX_N];


long long woodcut(int height) {
    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        if (trees[i] > height) {
            sum += trees[i] - height;
        }
    }
    return sum;
}


int binarySearch(int target, int start, int end) {
    int result = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
        long long total = woodcut(mid);

        if (total >= target) {
            result = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        cin >> trees[i];
    }

    sort(trees, trees + N, greater<>());


    int result = binarySearch(M, 0, trees[0]);

    cout << result << "\n";

    return 0;
}
