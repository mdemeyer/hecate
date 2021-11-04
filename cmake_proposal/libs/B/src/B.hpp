#pragma once

#include "IB.hpp"

class B : public IB
{
public:
    B(int some);

    int get_some() const;

private:
    int m_some;
};
