#ifndef Connect_hpp
#define Connect_hpp

#include <memory>
#include "oatpp/web/server/HttpRouter.hpp"

#include "AppController.hpp"

namespace Controllers
{
    typedef std::vector<std::shared_ptr<oatpp::web::server::api::ApiController>> ControllersVector;

    ControllersVector controllers = {
        std::make_shared<Controllers::AppController>(),
    };

    void connect(std::shared_ptr<oatpp::web::server::HttpRouter> &router)
    {
        for (auto &controller : controllers)
        {
            router->addController(controller);
        }
    }
}

#endif /* Connect_hpp */
