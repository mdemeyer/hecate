#pragma once

class IB
{
public:
    virtual ~IB() = default;

    virtual int get_some() const = 0;
};
