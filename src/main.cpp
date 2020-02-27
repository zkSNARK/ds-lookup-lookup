/**
 * A simple benchmark to compare some speeds of lookups in
 * vectors, map, and unsigned_map in c++.
 *
 * Also includes a probabilistic "packed" vector test to mimic
 * a scenario where users pack the most important values at the
 * beginning of the vector, but still find_if
 */


#include "structures.h"

#include <iostream>
#include <random>
#include <chrono>

using namespace test;
using namespace std::chrono;

void lookup_map(int n) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, size - 1); // define the range

  for (int i = 0; i < n; ++i) {
    const S &s = test::mp.at(test::num_to_key.at(distr(eng)));
  }
}

void lookup_umap(int n) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, size - 1); // define the range

  for (int i = 0; i < n; ++i) {
    const S &s = test::u_mp.at(test::num_to_key.at(distr(eng)));
  }
}

void lookup_vec(int n) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, size - 1); // define the range

  for (int i = 0; i < n; ++i) {
    auto const &s = find_if(test::vec.begin(), test::vec.end(), [&](const auto& p) {
      return p.first == num_to_key.at(distr(eng));
    });
  }
}

void lookup_key_only_vec(int n) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, size - 1); // define the range

  for (int i = 0; i < n; ++i) {
    auto const &s = find(test::key_only_vec.begin(), test::key_only_vec.end(), num_to_key.at(distr(eng)));
  }
}

void avg_key_only_vec_non_probabalistic_lookup(int n, double thresh) {
  const int size = num_to_key.size();

  int cross_point = (double)(size - 1) * thresh;

  std::cout << "cross point - only searching below index : " << cross_point << '\n';

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, cross_point); // define the range

  for (int i = 0; i < n; ++i) {
    auto const &s = find(test::key_only_vec.begin(), test::key_only_vec.end(), num_to_key.at(distr(eng)));
  }
}

void lookup_vec_packed(int n, int prob, double thresh) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator

  int cross_point = (double)(size - 1) * thresh;
  std::uniform_int_distribution<> dist1(0, cross_point); // define the range
  std::uniform_int_distribution<> dist2(cross_point + 1, size - 1); // define the range
  std::uniform_int_distribution<> rand_prob(0, 99);

  for (int i = 0; i < n; ++i) {
    if (rand_prob(eng) < (100 - prob)) {
      auto const &s = find_if(test::vec.begin(), test::vec.end(), [&](auto const& p) {
        return p.first == num_to_key.at(dist2(eng));
      });
    } else {
      auto const &s = find_if(test::vec.begin(), test::vec.end(), [&](auto const& p) {
        return p.first == num_to_key.at(dist1(eng));
      });
    }
  }
}

void lookup_vec_packed_non_probabalistic(int n, double thresh) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator

  int cross_point = (double)(size - 1) * thresh;
  std::uniform_int_distribution<> dist1(0, cross_point); // define the range

//  std::cout << "using only items located in first " << cross_point << " positions in vector " << '\n';

  for (int i = 0; i < n; ++i) {
    auto const &s = find_if(test::vec.begin(), test::vec.end(), [&](auto const& p) {
      return p.first == num_to_key.at(dist1(eng));
    });
  }
}

int main() {
  int iter = 10;
  int num_lookup = 10000;
  int lookup_size = test::num_to_key.size();

  // probabilistic vector based lookup controls
  double thresh = .06;
  int prob_lookup_found_in_first_thresh_places_in_vector = 80;

  if (true) // avg_map_lookup
  {
    uint64_t avg_map_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_map(num_lookup);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<microseconds>(stop - start).count();

      avg_map_lookup += duration;
    }
    avg_map_lookup /= iter;
    std::cout << "map :: num_lookup: " << num_lookup << ", map size " << lookup_size << ", avg time: " << (double)avg_map_lookup/1000 << " ms" << '\n';

  }

  if (true) // avg_umap_lookup
  {
    uint64_t avg_umap_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_umap(num_lookup);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<microseconds>(stop - start).count();

      avg_umap_lookup += duration;
    }
    avg_umap_lookup /= iter;
    std::cout << "map :: num_lookup: " << num_lookup << ", umap size " << lookup_size << ", avg time: " <<(double)avg_umap_lookup/1000.0 << " ms" << '\n';
  }

  if (true) // avg_vec_lookup
  {
    uint64_t avg_vec_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_vec(num_lookup);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<microseconds>(stop - start).count();

      avg_vec_lookup += duration;
    }
    avg_vec_lookup /= iter;
    std::cout << "vector :: num_lookup: " << num_lookup << ", vector size " << lookup_size << ", avg time: " << (double)avg_vec_lookup/1000 << " ms" << '\n';
  }

  if (true) // avg_key_only_vec_lookup
  {
    uint64_t avg_key_only_vec_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_key_only_vec(num_lookup);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<microseconds>(stop - start).count();

      avg_key_only_vec_lookup += duration;
    }
    avg_key_only_vec_lookup /= iter;
    std::cout << "key_only_vector :: num_lookup: " << num_lookup << ", vector size " << lookup_size << ", avg time: " << (double)avg_key_only_vec_lookup/1000 << " ms" << '\n';

  }

  if (true) // avg_key_only_vec_in_first_n_percent_lookup
  {
    uint64_t avg_key_only_vec_in_first_n_percent_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      avg_key_only_vec_non_probabalistic_lookup(num_lookup, thresh);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<microseconds>(stop - start).count();

      avg_key_only_vec_in_first_n_percent_lookup += duration;
    }
    avg_key_only_vec_in_first_n_percent_lookup /= iter;
    std::cout << "avg_key_only_vec_in_first_n_percent_lookup :: prob search in first " << thresh * 100
      << "% of range: 100%"
      << ", num_lookup: " << num_lookup
      << ", vector size " << lookup_size
      << ", avg time: \t" << (double)avg_key_only_vec_in_first_n_percent_lookup / 1000.0
      << " ms" << '\n';
  }

  if (true) // avg_packed_vec_lookup
  {
    uint64_t avg_packed_vec_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_vec_packed(num_lookup, prob_lookup_found_in_first_thresh_places_in_vector, thresh);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<microseconds>(stop - start).count();

      avg_packed_vec_lookup += duration;
    }
    avg_packed_vec_lookup /= iter;
    std::cout << "packed_vec :: prob search in first " << thresh * 100
      << "% of range: " << prob_lookup_found_in_first_thresh_places_in_vector
      << ", num_lookup: " << num_lookup
      << ", vector size " << lookup_size
      << ", avg time: " << (double)avg_packed_vec_lookup/1000
      << " ms" << '\n';
  }

  if (true) // avg_packed_non_prob_ved_lookup
  {
    uint64_t avg_packed_non_prob_ved_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_vec_packed_non_probabalistic(num_lookup, thresh);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<microseconds>(stop - start).count();

      avg_packed_non_prob_ved_lookup += duration;
    }
    avg_packed_non_prob_ved_lookup /= iter;
    std::cout << "packed_vec_non_probabalistic :: prob search in first " << thresh * 100
      << "% of range: 100%"
      << ", num_lookup: " << num_lookup
      << ", vector size " << lookup_size
      << ", avg time: \t" << (double)avg_packed_non_prob_ved_lookup/1000
      << " ms" << '\n';
  }


  return 0;
}