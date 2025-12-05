#include "doctest_compatibility.h"

#include <nlohmann/json.hpp>

TEST_CASE("generatedIntegrationTest009")
{
    nlohmann::json_pointer<std::string> ptr1("/foo");
    nlohmann::json_pointer<std::string> ptr2 = ptr1 / 5;
    (void)ptr2;
}
