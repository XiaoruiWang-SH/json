#include "doctest_compatibility.h"

#include <nlohmann/json.hpp>

using nlohmann::json;

TEST_CASE("generatedIntegrationTest002")
{
    json json_obj = json::object();
    json val_proxy = json_obj.get<json>();
    json::object_t::value_type kv1("key", 42);
    val_proxy += kv1;

    json json_copy(json_obj);
    json val_copy = json_copy.get<json>();
    json::object_t::value_type kv2("another_key", json_copy);
    val_copy += kv2;
}
