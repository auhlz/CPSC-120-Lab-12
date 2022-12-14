// Alex Labitigan
// CPSC 120-12
// 2022-11-29
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 12-02
// Partners: @dianasuceli
//
// Make message
//

#include "make_message_functions.h"

#include <iomanip>
bool HasMatchingFileExtension(const std::string &file_name,
                              const std::string &extension) {
  bool result{false};
  if (file_name.size() >= extension.size() &&
      file_name.compare(file_name.size() - extension.size(), extension.size(),
                        extension) == 0) {
    result = true;
  }
  return result;
}

// Secret global variable to make the randome number generator
// predictable
std::seed_seq rng_seed{1, 2, 3, 4, 5};

// Secret global variable that is used by RandomDouble_01()
RandomNumberGenerator rng_01{0, 1, rng_seed};

// Secret global variable that is used by RandomDouble_11()
RandomNumberGenerator rng_11{-1, 1, rng_seed};

// Secret global variable that is used by CoinFlip()
RandomNumberGenerator rng_coin_flip{-1, 1, rng_seed};

// Returns a random double between o and 1

double RandomDouble01() { return rng_01.next(); }

// Returns a random double between -1 and 1
double RandomDouble11() { return rng_11.next(); }

/// Return a True or False depending on a random value.
/// Generates a random number and then decides to return True or False
bool CoinFlip() { return rng_coin_flip.next() > 0; }
