
#ifndef QT_WRAP_WINDOW_H
#define QT_WRAP_WINDOW_H

//todo: everything
namespace qtw {

class Window {
public:
    Window();
    Window(const Window& other);
    Window(Window&& other) noexcept ;
    Window& operator=(const Window& other);
    Window& operator=(Window&& other) noexcept ;
    ~Window();
};

}

#endif //QT_WRAP_WINDOW_H
