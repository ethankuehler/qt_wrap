

#include <cstdio>
#include "Window.h"

namespace qtw {

Window::Window() {

}

Window::Window(const Window &other) {

}

Window::Window(Window &&other) noexcept {

}

Window &Window::operator=(const Window &other) {
    return *this;
}

Window &Window::operator=(Window &&other) noexcept {
    return *this;
}

Window::~Window() {

}

}