---
inject: true
to: CMakeLists.txt
after: DTO.hpp
sh: cd build && cmake ..
---
    src/dto/<%= name %>DTO.hpp