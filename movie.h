/**
 * @file movie.h
 * @author
 * Hayden Lauritzen (haydenlauritzen@gmail.com)
 * your name (you@domain.com)
 * your name (you@domain.com)
 * @brief Header file for Movie
 * @date 2022-05-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 // #TODO figure out how to make pure virtual? 
 // cant instaniate movie object in a log if its pure virtual see storeinventory.h:40

#pragma once

#include <string>

class Movie{
protected:

    const static char genre; // type of movie
    int stock; // quanty of movie in stock
    std::string director; // director of movie
    std::string title; // title of movie
    int year; // year released of movie

    // simulate virtual const static behavior
    virtual char type() { return genre; }

public:

    virtual ~Movie();
    Movie();

    virtual bool operator<(const Movie&);
    virtual bool operator==(const Movie&);

};