#pragma once

#include <vislib.hpp>
#include <Arduino.h>

namespace vislib::binds::arduino {

using port_t = uint8_t;

bool InterruptPortChecker(port_t port) {
    return digitalRead(port);
}

util::Error InterruptPortInitializer(port_t port) {
    pinMode(port, INPUT);
    return {};
}

using CallbackTable = CallbackTable<port_t>;

};
