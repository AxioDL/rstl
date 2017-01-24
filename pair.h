#ifndef __RSTL_PAIR_H__
#define __RSTL_PAIR_H__


namespace rstl
{
template<typename T1, typename T2>
class pair
{
    T1 _first;
    T2 _second;
public:
    pair() = default;
    pair(const T1& first, const T2& second)
        : _first(first), _second(second)
    {
    }

    const T1& first() const { return _first; }
    const T2& second() const { return _second; }
};

}

#endif //
