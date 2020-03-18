#include "StringBody.h"

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {

StringBody::StringBody( const utility::string_t& content)
    : m_Content(content)
{
}

StringBody::~StringBody()
{
}

void StringBody::writeTo( std::ostream& target )
{
    std::wstring content = m_Content.c_str();

    std::vector<char> dataBytes(content.begin(), content.end());

    std::copy(dataBytes.begin(), dataBytes.end(), std::ostreambuf_iterator<char>(target));
}

}
}
}
}
}
}
