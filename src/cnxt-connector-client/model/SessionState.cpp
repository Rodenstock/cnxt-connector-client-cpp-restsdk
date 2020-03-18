/**
 * CNXT-Connector
 * The CNXT-Connector is developed by Rodenstock GmbH to integrate data from measurement devices such as DNEye<sup>®</sup> Scanner, Rodenstock Fundus Scanner, and ImpressionIST<sup>®</sup> into 3rd party applications as well as into several applications of Rodenstock such as WinFit, Rodenstock Consulting etc. If you have any feedback then please feel free to contact us via email. Copyright © Rodenstock GmbH 2020
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: cnxt@rodenstock.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.2.3.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "SessionState.h"

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {



SessionState::SessionState()
{
}

SessionState::~SessionState()
{
}

void SessionState::validate()
{
    // TODO: implement validation
}

web::json::value SessionState::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eSessionState::SessionState_CLOSED) val = web::json::value::string(U("CLOSED"));
    if (m_value == eSessionState::SessionState_OPEN) val = web::json::value::string(U("OPEN"));
    if (m_value == eSessionState::SessionState_ORDERED) val = web::json::value::string(U("ORDERED"));
    if (m_value == eSessionState::SessionState_EXPORTED) val = web::json::value::string(U("EXPORTED"));
    if (m_value == eSessionState::SessionState_SAVED) val = web::json::value::string(U("SAVED"));

    return val;
}

void SessionState::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("CLOSED")) m_value = eSessionState::SessionState_CLOSED;
    if (s == utility::conversions::to_string_t("OPEN")) m_value = eSessionState::SessionState_OPEN;
    if (s == utility::conversions::to_string_t("ORDERED")) m_value = eSessionState::SessionState_ORDERED;
    if (s == utility::conversions::to_string_t("EXPORTED")) m_value = eSessionState::SessionState_EXPORTED;
    if (s == utility::conversions::to_string_t("SAVED")) m_value = eSessionState::SessionState_SAVED;
}

void SessionState::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eSessionState::SessionState_CLOSED) s = utility::conversions::to_string_t("CLOSED");
    if (m_value == eSessionState::SessionState_OPEN) s = utility::conversions::to_string_t("OPEN");
    if (m_value == eSessionState::SessionState_ORDERED) s = utility::conversions::to_string_t("ORDERED");
    if (m_value == eSessionState::SessionState_EXPORTED) s = utility::conversions::to_string_t("EXPORTED");
    if (m_value == eSessionState::SessionState_SAVED) s = utility::conversions::to_string_t("SAVED");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

void SessionState::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        utility::string_t s;
        s = ModelBase::stringFromHttpContent(multipart->getContent(namePrefix));
        eSessionState v;
        
        
        if (s == utility::conversions::to_string_t("CLOSED")) v = eSessionState::SessionState_CLOSED;
        if (s == utility::conversions::to_string_t("OPEN")) v = eSessionState::SessionState_OPEN;
        if (s == utility::conversions::to_string_t("ORDERED")) v = eSessionState::SessionState_ORDERED;
        if (s == utility::conversions::to_string_t("EXPORTED")) v = eSessionState::SessionState_EXPORTED;
        if (s == utility::conversions::to_string_t("SAVED")) v = eSessionState::SessionState_SAVED;

        setValue(v);
    }
}

SessionState::eSessionState SessionState::getValue() const
{
   return m_value;
}

void SessionState::setValue(SessionState::eSessionState const value)
{
   m_value = value;
}


}
}
}
}
}
}

