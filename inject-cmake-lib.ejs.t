---
inject: true
to: CMakeLists.txt
after: Controller.hpp
sh: cd build && cmake ..
---
    src/controllers/<%= name %>Controller.hpp