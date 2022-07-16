// Copyright AT Computing Nijmegen/Utrecht 2013
#ifndef HEADER_ROCK_H
#define HEADER_ROCK_H

class Rock {
public:
    Rock() = default;
    Rock(Rock&&) = delete;
    Rock& operator()(Rock&&) = delete;
};
#endif
