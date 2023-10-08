#include <noreturn/noreturn.tpp>
#undef SNNS_NORETURN_TPP
#include <noreturn/noreturn.tpp>

void test()
{
    auto const local = 7;

    auto const wrapper = snns::wrap(local);

    
}

int main()
{
    test();
}