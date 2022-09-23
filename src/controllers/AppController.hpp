#ifndef AppController_hpp
#define AppController_hpp

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
    class AppController : public oatpp::web::server::api::ApiController
    {
    public:
        /**
         * Constructor with object mapper.
         * @param objectMapper - default object mapper used to serialize/deserialize DTOs.
         */
        AppController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
            : oatpp::web::server::api::ApiController(objectMapper)
        {
        }

    public:
        ENDPOINT("GET", "/hello", root)
        {
            auto dto = DTOs::MessageDto::createShared();
            dto->statusCode = 200;
            dto->message = "Hello World!";
            return createDtoResponse(Status::CODE_200, dto);
        }

        // TODO Insert Your endpoints here !!!
    };

#include OATPP_CODEGEN_END(ApiController) ///< End Codegen
}

#endif /* AppController_hpp */
