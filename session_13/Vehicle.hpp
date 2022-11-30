//
// Created by Mia on 11/30/2022.
//

#ifndef SESSION_13_VEHICLE_HPP
#define SESSION_13_VEHICLE_HPP

#include <vector>
#include <iosfwd>
#include <memory>
#include <ostream>

namespace Entities {

    // abstract type
    class Vehicle {
    public:
        Vehicle(unsigned const &modelYear, double const &length, double const &width)
                : modelYear_{modelYear}, length_{length}, width_{width}
        {}

        virtual ~Vehicle() {}
        virtual void printOn(std::ostream& os) const = 0;

    protected:
        unsigned modelYear_;
        double length_;
        double width_;
    };

    inline std::ostream& operator<<(std::ostream& os, Vehicle const& p)
    {
        p.printOn(os);
        return os;
    }

    using VehiclePtr = std::unique_ptr< Vehicle >;
    using Container = std::vector< std::unique_ptr< Vehicle > >;

} // Entities

#endif //SESSION_13_VEHICLE_HPP
