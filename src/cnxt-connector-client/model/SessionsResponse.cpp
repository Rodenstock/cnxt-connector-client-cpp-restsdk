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



#include "SessionsResponse.h"

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {




SessionsResponse::SessionsResponse()
{
    m_SessionsIsSet = false;
    m__linksIsSet = false;
    m_PageInfoIsSet = false;
}

SessionsResponse::~SessionsResponse()
{
}

void SessionsResponse::validate()
{
    // TODO: implement validation
}

web::json::value SessionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Sessions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("sessions")] = web::json::value::array(jsonArray);
        }
    }
    if(m__linksIsSet)
    {
        val[utility::conversions::to_string_t("_links")] = ModelBase::toJson(m__links);
    }
    if(m_PageInfoIsSet)
    {
        val[utility::conversions::to_string_t("pageInfo")] = ModelBase::toJson(m_PageInfo);
    }

    return val;
}

void SessionsResponse::fromJson(const web::json::value& val)
{
    {
        m_Sessions.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("sessions")))
        {
        for( auto& item : val.at(utility::conversions::to_string_t("sessions")).as_array() )
        {
            if(item.is_null())
            {
                m_Sessions.push_back( std::shared_ptr<SessionResponse>(nullptr) );
            }
            else
            {
                std::shared_ptr<SessionResponse> newItem(new SessionResponse());
                newItem->fromJson(item);
                m_Sessions.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("_links")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("_links"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PaginationLink> newItem(new PaginationLink());
            newItem->fromJson(fieldValue);
            setLinks( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageInfo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageInfo"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PageInfo> newItem(new PageInfo());
            newItem->fromJson(fieldValue);
            setPageInfo( newItem );
        }
    }
}

void SessionsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Sessions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sessions"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, utility::conversions::to_string_t("_links."));
        }
    }
    if(m_PageInfoIsSet)
    {
        if (m_PageInfo.get())
        {
            m_PageInfo->toMultipart(multipart, utility::conversions::to_string_t("pageInfo."));
        }
    }
}

void SessionsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Sessions.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("sessions")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sessions"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Sessions.push_back( std::shared_ptr<SessionResponse>(nullptr) );
            }
            else
            {
                std::shared_ptr<SessionResponse> newItem(new SessionResponse());
                newItem->fromJson(item);
                m_Sessions.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_links")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_links")))
        {
            std::shared_ptr<PaginationLink> newItem(new PaginationLink());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_links."));
            setLinks( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pageInfo")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("pageInfo")))
        {
            std::shared_ptr<PageInfo> newItem(new PageInfo());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("pageInfo."));
            setPageInfo( newItem );
        }
    }
}

std::vector<std::shared_ptr<SessionResponse>>& SessionsResponse::getSessions()
{
    return m_Sessions;
}

void SessionsResponse::setSessions(const std::vector<std::shared_ptr<SessionResponse>>& value)
{
    m_Sessions = value;
    m_SessionsIsSet = true;
}

bool SessionsResponse::sessionsIsSet() const
{
    return m_SessionsIsSet;
}

void SessionsResponse::unsetSessions()
{
    m_SessionsIsSet = false;
}

std::shared_ptr<PaginationLink> SessionsResponse::getLinks() const
{
    return m__links;
}

void SessionsResponse::setLinks(const std::shared_ptr<PaginationLink>& value)
{
    m__links = value;
    m__linksIsSet = true;
}

bool SessionsResponse::linksIsSet() const
{
    return m__linksIsSet;
}

void SessionsResponse::unset_links()
{
    m__linksIsSet = false;
}

std::shared_ptr<PageInfo> SessionsResponse::getPageInfo() const
{
    return m_PageInfo;
}

void SessionsResponse::setPageInfo(const std::shared_ptr<PageInfo>& value)
{
    m_PageInfo = value;
    m_PageInfoIsSet = true;
}

bool SessionsResponse::pageInfoIsSet() const
{
    return m_PageInfoIsSet;
}

void SessionsResponse::unsetPageInfo()
{
    m_PageInfoIsSet = false;
}

}
}
}
}
}
}


