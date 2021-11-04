#include "B.hpp"

B::B(int some)
    : m_some(some)
{
}

int B::get_some() const
{
    return m_some;
}
