#include "doctest_compatibility.h"

#include <nlohmann/json.hpp>

TEST_CASE("generatedIntegrationTest004")
{
    nlohmann::json original = {
        {"name", "Alice"},
        {"age", 30},
        {"city", "Wonderland"}
    };

    nlohmann::json patch_doc = nlohmann::json::array({
        {{"op", "replace"}, {"path", "/age"}, {"value", 31}},
        {{"op", "replace"}, {"path", "/city"}, {"value", "Looking Glass"}},
        {{"op", "add"}, {"path", "/country"}, {"value", "Fantasy"}}
    });

    nlohmann::json updated = original.patch(patch_doc);

    (void)updated;
} 
