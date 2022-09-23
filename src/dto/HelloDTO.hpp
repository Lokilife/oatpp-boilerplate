#ifndef HelloDTO_hpp
#define HelloDTO_hpp

#include "oatpp/core/data/mapping/type/Object.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/network/Server.hpp"

namespace DTOs
{
#include OATPP_CODEGEN_BEGIN(DTO)

    class HelloDto : public oatpp::DTO
    {
        DTO_INIT(HelloDto, DTO)

        DTO_FIELD(Int32, statusCode);
        DTO_FIELD(String, message);
    };

#include OATPP_CODEGEN_END(DTO)
}

#endif
