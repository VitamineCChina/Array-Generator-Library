/*
    * array_generator.h
    * created on: 2025-03-23
    * by: Stone Wei
    * license: MIT
    * version: 1.0
    * description: A lightweight C++ library for generating arrays.
    * usage:
        * range: generate a range of numbers.
        * filter: filter elements in an array.
        * map: apply a function to all elements in an array.
        * reduce: reduce an array to a single value.
        * zip: combine two arrays into a single array.
        * enumerate: add an index to each element in an array.
        * all: check if all elements in an array are true.
        * any: check if any element in an array is true.
        * sorted: sort an array.
        * reversed: reverse an array.
        * sum: sum all elements in an array.
        * max: find the maximum element in an array.
        * min: find the minimum element in an array.
*/
#pragma once
#ifndef ARRAY_GENERATOR_H
#define ARRAY_GENERATOR_H
#include <vector>
namespace array_generator {
    //range
    template <typename T1, typename T2>
    std::vector<T1> range(T1 start, T1 end, T2 step) {
        std::vector<T1> v;
        for (T1 i = start; i < end; i += step) {
            v.push_back(i);
        }
        return v;
    }
    //filter
    template <typename F, typename T>
    std::vector<T> filter(F f, std::vector<T> v) {
        std::vector<T> res;
        for (const auto& i : v) {
            if (f(i)) {
                res.push_back(i);
            }
        }
        return res;
    }
    //map
    template <typename F, typename T>
    std::vector<T> map(F f, std::vector<T> v) {
        std::vector<T> res;
        for (const auto& i : v) {
            res.push_back(f(i));
        }
        return res;
    }
    //reduce
    template <typename F, typename T>
    T reduce(F f, std::vector<T> v) {
        T res = v[0];
        for (int i = 1; i < v.size(); i++) {
            res = f(res, v[i]);
        }
        return res;
    }
    //zip
    template <typename T1, typename T2>
    std::vector<std::pair<T1, T2>> zip(std::vector<T1> v1, std::vector<T2> v2) {
        std::vector<std::pair<T1, T2>> res;
        for (int i = 0; i < v1.size(); i++) {
            res.push_back(std::make_pair(v1[i], v2[i]));
        }
        return res;
    }
    //enumerate
    template <typename T>
    std::vector<std::pair<int, T>> enumerate(std::vector<T> v) {
        std::vector<std::pair<int, T>> res;
        for (int i = 0; i < v.size(); i++) {
            res.push_back(std::make_pair(i, v[i]));
        }
        return res;
    }
    //all
    template <typename T>
    bool all(std::vector<T> v) {
        for (const auto& i : v) {
            if (!i) {
                return false;
            }
        }
        return true;
    }
    //any
    template <typename T>
    bool any(std::vector<T> v) {
        for (const auto& i : v) {
            if (i) {
                return true;
            }
        }
        return false;
    }
    //sorted
    template <typename T>
    std::vector<T> sorted(std::vector<T> v) {
        std::sort(v.begin(), v.end());
        return v;
    }
    //reversed
    template <typename T>
    std::vector<T> reversed(std::vector<T> v) {
        std::reverse(v.begin(), v.end());
        return v;
    }
    //sum
    template <typename T>
    T sum(std::vector<T> v) {
        T res = 0;
        for (const auto& i : v) {
            res += i;
        }
        return res;
    }
    //max
    template <typename T>
    T max(std::vector<T> v) {
        T res = v[0];
        for (const auto& i : v) {
            if (i > res) {
                res = i;
            }
        }
        return res;
    }
    //min
    template <typename T>
    T min(std::vector<T> v) {
        T res = v[0];
        for (const auto& i : v) {
            if (i < res) {
                res = i;
            }
        }
        return res;
    }
}
#endif
