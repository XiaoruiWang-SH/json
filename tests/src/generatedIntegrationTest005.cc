
#include "doctest_compatibility.h"

#include <nlohmann/json.hpp>
#include <nlohmann/detail/input/input_adapters.hpp>

using nlohmann::json;

TEST_CASE("generatedIntegrationTest005")
{
    const wchar_t test_str[] = L"[1,2,3]";
    const std::size_t len = sizeof(test_str) / sizeof(test_str[0]);

    nlohmann::detail::iterator_input_adapter<const wchar_t*> base_adapter(
        test_str, test_str + len);
    nlohmann::detail::wide_string_input_adapter<decltype(base_adapter), wchar_t> wide_adapter(
        base_adapter);

    std::string json_text;
    while (true)
    {
        auto c = wide_adapter.get_character();
        if (c == std::char_traits<char>::eof())
        {
            break;
        }
        json_text.push_back(static_cast<char>(c));
        if (json_text.size() >= sizeof(test_str) * 4)
        {
            break; // safety break to avoid infinite loop if any
        }
    }

    auto j = json::parse(json_text);
    auto arr = json::array();

    for (const auto& el : j)
    {
        arr.push_back(el);
    }
}
