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

void lookup_map(map<string, test::S> mp, int n) {
  const int size = num_to_key.size();


  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, size - 1); // define the range

  for (int i = 0; i < n; ++i) {
    const S &s = test::mp.at(test::num_to_key.at(distr(eng)));
  }
}


void lookup_umap(map<string, test::S> mp, int n) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, size - 1); // define the range

  for (int i = 0; i < n; ++i) {
    const S &s = test::u_mp.at(test::num_to_key.at(distr(eng)));
  }
}


void lookup_vec(map<string, test::S> mp, int n) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, size - 1); // define the range

  for (int i = 0; i < n; ++i) {
    auto const &s = find_if(test::vec.begin(), test::vec.end(), [&](auto p) {
      return p.first == num_to_key.at(distr(eng));
    });
  }
}

void lookup_vec_packed(map<string, test::S> mp, int n, int prob, double thresh) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator

  int cross_point = (double)(size - 1) * thresh;
  std::uniform_int_distribution<> dist1(0, cross_point); // define the range
  std::uniform_int_distribution<> dist2(cross_point + 1, size - 1); // define the range
  std::uniform_int_distribution<> rand_prob(0, 99);

  for (int i = 0; i < n; ++i) {
    if (rand_prob(eng) < (100 - prob)) {
      auto const &s = find_if(test::vec.begin(), test::vec.end(), [&](auto p) {
        return p.first == num_to_key.at(dist2(eng));
      });
    } else {
      auto const &s = find_if(test::vec.begin(), test::vec.end(), [&](auto p) {
        return p.first == num_to_key.at(dist1(eng));
      });
    }
  }
}

void lookup_vec_packed_non_probabalistic(map<string, test::S> mp, int n, double thresh) {
  const int size = num_to_key.size();

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator

  int cross_point = (double)(size - 1) * thresh;
  std::uniform_int_distribution<> dist1(0, cross_point); // define the range

  std::cout << "using only items located in first " << cross_point << " positions in vector " << '\n';

  for (int i = 0; i < n; ++i) {
    auto const &s = find_if(test::vec.begin(), test::vec.end(), [&](auto p) {
      return p.first == num_to_key.at(dist1(eng));
    });
  }
}

int main() {
  int iter = 10;
  int num_lookup = 100000;
  int lookup_size = test::num_to_key.size();

  // probabilistic vector based lookup controls
  double thresh = .01;
  int prob_lookup_found_in_first_thresh_places_in_vector = 80;

  {
    uint64_t avg_map_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_map(test::mp, num_lookup);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<milliseconds>(stop - start).count();

      avg_map_lookup += duration;
    }
    avg_map_lookup /= iter;
    std::cout << "map :: num_lookup: " << num_lookup << ", map size " << lookup_size << ", avg time: " << avg_map_lookup << " ms" << '\n';

  }
  {
    uint64_t avg_umap_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_umap(test::mp, num_lookup);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<milliseconds>(stop - start).count();

      avg_umap_lookup += duration;
    }
    avg_umap_lookup /= iter;
    std::cout << "map :: num_lookup: " << num_lookup << ", umap size " << lookup_size << ", avg time: " << avg_umap_lookup << " ms" << '\n';
  }

  {
    uint64_t avg_vec_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_vec(test::mp, num_lookup);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<milliseconds>(stop - start).count();

      avg_vec_lookup += duration;
    }
    avg_vec_lookup /= iter;
    std::cout << "vector :: num_lookup: " << num_lookup << ", vector size " << lookup_size << ", avg time: " << avg_vec_lookup << " ms" << '\n';
  }

  {
    uint64_t avg_packed_ved_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_vec_packed(test::mp, num_lookup, prob_lookup_found_in_first_thresh_places_in_vector, thresh);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<milliseconds>(stop - start).count();

      avg_packed_ved_lookup += duration;
    }
    avg_packed_ved_lookup /= iter;
    std::cout << "packed_vec :: prob search in first " << thresh * 100
      << "% of range: " << prob_lookup_found_in_first_thresh_places_in_vector
      << ", num_lookup: " << num_lookup
      << ", vector size " << lookup_size
      << ", avg time: " << avg_packed_ved_lookup
      << " ms" << '\n';
  }

  {
    uint64_t avg_packed_non_prob_ved_lookup = 0;
    for (int i = 0; i < iter; ++i) {
      auto start = high_resolution_clock::now();
      lookup_vec_packed_non_probabalistic(test::mp, num_lookup, thresh);
      auto stop = high_resolution_clock::now();
      double duration = duration_cast<milliseconds>(stop - start).count();

      avg_packed_non_prob_ved_lookup += duration;
    }
    avg_packed_non_prob_ved_lookup /= iter;
    std::cout << "packed_vec_non_probabalistic :: prob search in first " << thresh * 100
      << "% of range: 100%"
      << ", num_lookup: " << num_lookup
      << ", vector size " << lookup_size
      << ", avg time: \t" << avg_packed_non_prob_ved_lookup
      << " ms" << '\n';
  }
  return 0;
}