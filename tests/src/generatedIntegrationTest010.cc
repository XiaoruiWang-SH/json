#include "doctest_compatibility.h"

#include <nlohmann/detail/conversions/to_chars.hpp>

TEST_CASE("generatedIntegrationTest010")
{
    using nlohmann::detail::dtoa_impl::diyfp;
    using nlohmann::detail::dtoa_impl::boundaries;

    diyfp w{0xABCDEFFEDCBA9876ULL, -60};
    diyfp minus{0xABCDEFFEDCBA9000ULL, -60};
    diyfp plus{0xABCDEFFEDCBAA000ULL, -60};
    boundaries bounds{w, minus, plus};

    auto normalizedW = diyfp::normalize(bounds.w);
    auto normalizedMinus = diyfp::normalize(bounds.minus);
    auto normalizedPlus = diyfp::normalize(bounds.plus);

    auto diffPlusMinus = diyfp::sub(normalizedPlus, normalizedMinus);
    auto product = diyfp::mul(normalizedW, diffPlusMinus);

    auto normalizedProduct = diyfp::normalize_to(product, normalizedW.e);

    (void)normalizedW;
    (void)normalizedMinus;
    (void)normalizedPlus;
    (void)diffPlusMinus;
    (void)product;
    (void)normalizedProduct;
}
