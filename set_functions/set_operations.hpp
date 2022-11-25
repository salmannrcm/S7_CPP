

#include <set>


template<class  T>
std::set<T> operator+(std::set<T> s1, std::set<T> s2)
{

    std::set<T> tempo = s1;

    for (const auto& elt : s2){
        tempo.insert(elt);
    }

    return tempo;
}

template<class  T>
std::set<T> operator-(std::set<T> s1, std::set<T> s2)
{

    std::set<T> tempo = s1;
    for (const auto& elt : s2){
        if(tempo.find(elt)!= s2.end()){
            tempo.erase(elt);
        }
    }
    return tempo;
}

template<class  T>
std::set<T> operator*(std::set<T> s1, std::set<T> s2)
{
    std::set<T> tempo;
    for(const auto& i : s1){
        for(const auto& j : s2){
            tempo.insert(i + j);
        }
    }
    return tempo;
}

template<class  T>
std::set<T> operator^(std::set<T> s1, std::set<T> s2)
{
    std::set<T> tempo;


}
