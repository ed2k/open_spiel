// Copyright 2019 DeepMind Technologies Limited
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "open_spiel/spiel.h"
#include "open_spiel/tests/basic_tests.h"

namespace open_spiel {
namespace hex {
namespace {

namespace testing = open_spiel::testing;

void BasicHexTests() {
  testing::LoadGameTest("hex(row_size=5,col_size=5)");
  testing::NoChanceOutcomesTest(*LoadGame("hex(row_size=5,col_size=5)"));
  testing::RandomSimTest(*LoadGame("hex(row_size=5,col_size=5)"), 100);
  testing::RandomSimTest(*LoadGame("hex"), 5);
  testing::RandomSimTest(*LoadGame("hex(row_size=2,col_size=3)"), 10);
}

}  // namespace
}  // namespace hex
}  // namespace open_spiel

int main(int argc, char** argv) { open_spiel::hex::BasicHexTests(); }
