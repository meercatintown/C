//
// Created by Mia on 11/30/2022.
//

#ifndef SESSION_13_LORRY_HPP
#define SESSION_13_LORRY_HPP

#include "Vehicle.hpp"

namespace Entities {

    class Lorry : public Vehicle {
    public:
        Lorry(unsigned const& modelYear, double const& length, double const& width,
              double const& height, double const& weight)
              : Vehicle(modelYear, length, width)
              , height_{height}
              , weight_{weight}
        {}

        void printOn(std::ostream& os) const
        {
            os  << "Lorry { modelYear: " << modelYear_
                << " length: " << length_
                << " width: " << width_
                << " height: " << height_
                << " weight: " << weight_ << " }";
        }

    private:
        double height_;
        double weight_;
    };

    inline std::ostream& operator<<(std::ostream& os, Lorry const& e)
    {
        e.printOn(os);
        return os;
    }

} // Entities

#endif //SESSION_13_LORRY_HPP
