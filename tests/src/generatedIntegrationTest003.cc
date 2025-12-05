#include "doctest_compatibility.h"

#include <nlohmann/json.hpp>

TEST_CASE("generatedIntegrationTest003")
{
    using json = nlohmann::basic_json<>;
    json obj1 = json::object({{"key1", 1}, {"key2", 2}});
    json obj2 = json::object({{"key3", 3}, {"key4", 4}});
    json obj_copy = obj1;
    auto first = obj2.cbegin();
    auto last = obj2.cend();
    obj_copy.insert(first, last);
}
