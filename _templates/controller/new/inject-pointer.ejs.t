---
inject: true
to: src/controllers/Controllers.hpp
after: ControllersVector controllers = {
---
        std::make_shared<Controllers::<%= name %>Controller>(),