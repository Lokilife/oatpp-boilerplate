---
to: src/controllers/<%= name %>Controller.hpp
---

#ifndef <%= name %>Controller_hpp
#define <%= name %>Controller_hpp

#include "dto/DTOs.hpp"

#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "oatpp/web/server/HttpRouter.hpp"

namespace Controllers
{
#include OATPP_CODEGEN_BEGIN(ApiController) ///< Begin Codegen

    /**
     * Sample Api Controller.
     */
    class <%= name %>Controller : public oatpp::web::server::api::ApiController
    {
    public:
        /**
         * Constructor with object mapper.
         * @param objectMapper - default object mapper used to serialize/deserialize DTOs.
         */
        <%= name %>Controller(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
            : oatpp::web::server::api::ApiController(objectMapper)
        {
        }

    public:
        ENDPOINT("GET", "/hello", root)
        {
            auto dto = MessageDto::createShared();
            dto->statusCode = 200;
            dto->message = "Hello World!";
            return createDtoResponse(Status::CODE_200, dto);
        }

        // TODO Insert Your endpoints here !!!
    };

#include OATPP_CODEGEN_END(ApiController) ///< End Codegen
}

#endif /* <%= name %>Controller_hpp */
