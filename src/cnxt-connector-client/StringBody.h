/*
 * StringBody.h
 *
 * This is a String http body which can be submitted via http
 */

#ifndef COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_StringBody_H_
#define COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_StringBody_H_


#include "IHttpBody.h"

#include <vector>
#include <map>
#include <memory>

#include <cpprest/details/basic_types.h>

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {

class  StringBody
    : public IHttpBody
{
public:
    StringBody( const utility::string_t& value );
    virtual ~StringBody();

    void writeTo( std::ostream& target ) override;

protected:
    utility::string_t m_Content;
};

}
}
}
}
}
}

#endif /* COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_StringBody_H_ */
