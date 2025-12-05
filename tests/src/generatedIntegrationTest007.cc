#include "doctest_compatibility.h"

#include <nlohmann/json.hpp>

TEST_CASE("generatedIntegrationTest007")
{
    nlohmann::json_pointer<std::string> ptr1;
    nlohmann::json_pointer<std::string> ptr2;

    ptr1 /= ptr2;
}
