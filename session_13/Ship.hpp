//
// Created by Mia on 11/30/2022.
//

#ifndef SESSION_13_SHIP_HPP
#define SESSION_13_SHIP_HPP

#pragma once
#include "Vehicle.hpp"

namespace Entities {

    class Ship : public Vehicle {
    public:
        Ship(unsigned const& modelYear, double const& length, double const& width,
             double const& tonnage)
             : Vehicle(modelYear, length, width)
             , tonnage_{tonnage}
        {}

        void printOn(std::ostream& os) const
        {
            os << "Ship {  modelYear: " << modelYear_
               << "  length: " << length_
               << "  width: " << width_
               << "  tonnage: " << tonnage_ << " }";
        }


    private:
        double tonnage_;
    };

    inline std::ostream& operator << (std::ostream& os, Ship const& s)
    {
        s.printOn(os);
        return os;
    }

} // Entities

#endif //SESSION_13_SHIP_HPP
