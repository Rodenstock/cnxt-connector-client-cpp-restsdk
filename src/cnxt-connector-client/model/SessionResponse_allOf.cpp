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



#include "SessionResponse_allOf.h"

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {




SessionResponse_allOf::SessionResponse_allOf()
{
    m__linksIsSet = false;
}

SessionResponse_allOf::~SessionResponse_allOf()
{
}

void SessionResponse_allOf::validate()
{
    // TODO: implement validation
}

web::json::value SessionResponse_allOf::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__linksIsSet)
    {
        val[utility::conversions::to_string_t("_links")] = ModelBase::toJson(m__links);
    }

    return val;
}

void SessionResponse_allOf::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_links")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("_links"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SessionLink> newItem(new SessionLink());
            newItem->fromJson(fieldValue);
            setLinks( newItem );
        }
    }
}

void SessionResponse_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, utility::conversions::to_string_t("_links."));
        }
    }
}

void SessionResponse_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("_links")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_links")))
        {
            std::shared_ptr<SessionLink> newItem(new SessionLink());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_links."));
            setLinks( newItem );
        }
    }
}

std::shared_ptr<SessionLink> SessionResponse_allOf::getLinks() const
{
    return m__links;
}

void SessionResponse_allOf::setLinks(const std::shared_ptr<SessionLink>& value)
{
    m__links = value;
    m__linksIsSet = true;
}

bool SessionResponse_allOf::linksIsSet() const
{
    return m__linksIsSet;
}

void SessionResponse_allOf::unset_links()
{
    m__linksIsSet = false;
}

}
}
}
}
}
}


