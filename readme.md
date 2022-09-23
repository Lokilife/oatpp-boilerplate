# About

This is a boilerplate made by me for my personal use, here are nothing special except for hygen.<br>
Hygen code generator that generates code from templates.
For example: `hygen controller new`. It will search for template "controller new" and add new files with default controller template.

## Current Hygen templates:

```
controllers new:
  - {NAME}Controller.hpp
  |- Inject `#include "{NAME}Controller.hpp"` to src/controllers/Controllers.hpp
  |- Inject `std::make_shared<Controllers::{NAME}Controller>(),` to src/controllers/Controllers.hpp
  |- Inject `src/controllers/<%= name %>Controller.hpp` to add_library() in CMakeLists.txt
 So it's creates controller with default template and injects paths and pointers to it in Controllers.hpp and adds a path to CMakeLists.txt.

dto new:
  - {NAME}DTO.hpp
  |- Inject `#include "{NAME}DTO.hpp"` to src/dto/DTOs.hpp
  |- Inject `src/dto/<%= name %>DTO.hpp` to add_library() in CMakeLists.txt
 Creates DTO with default template and includes it in DTOs.hpp and adds a path to CMakeLists.txt.
```

## By the way...

I'm not a C++ developer in the main (yet), so don't hit on bad solutions, or at least tell me what the problem is with the solutions used, I'll be thanful.

# License

No license, do with that repo whatever you want.
