#include "doctest_compatibility.h"

#include <nlohmann/json.hpp>

TEST_CASE("generatedIntegrationTest008")
{
    nlohmann::json_pointer<std::string> jp1;
    std::string t = "test";
    auto jp2 = jp1 / t;
    (void)jp2;
}
