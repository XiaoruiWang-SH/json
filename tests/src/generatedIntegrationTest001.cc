#include "doctest_compatibility.h"

#define JSON_TESTS_PRIVATE
#include <nlohmann/json.hpp>

using nlohmann::json;

TEST_CASE("generatedIntegrationTest001")
{
    json::data d_null{json::value_t::null};

    json j_null(json::value_t::null);
    json::data d_array(3, j_null);
    d_array.m_value.array->clear();

    json::data d_float(json::value_t::number_float);
    d_float.m_value = json::json_value(3.14);
}
