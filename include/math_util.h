//
// Created by croce on 07/03/2025.
//

#ifndef MATH_UTIL_H
#define MATH_UTIL_H

double calculate_tour_cost(const int* tour, long number_of_nodes, const double* edge_cost_array);

#define SWAP(a, b) do { __typeof__(a) _tmp = (a); (a) = (b); (b) = _tmp; } while (0)

#define MIN_IDX(arr, start, n) ({               \
int _min_idx = (start);                         \
for (int _i = (start) + 1; _i < (n); _i++) {    \
    if ((arr)[_i] < (arr)[_min_idx])            \
        _min_idx = _i;                          \
    }                                           \
    _min_idx;                                   \
})

#endif //MATH_UTIL_H
