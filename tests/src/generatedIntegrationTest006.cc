#include "doctest_compatibility.h"

#include <nlohmann/json.hpp>

TEST_CASE("generatedIntegrationTest006")
{
    nlohmann::json_pointer<std::string> ptr1("/foo");
    nlohmann::json_pointer<std::string> ptr2("/bar");
    auto combined = ptr1 / ptr2;
    (void)combined;
}
