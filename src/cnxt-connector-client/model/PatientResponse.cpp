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



#include "PatientResponse.h"

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {




PatientResponse::PatientResponse()
{
    m_Id = utility::conversions::to_string_t("");
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_LastName = utility::conversions::to_string_t("");
    m_Gender = utility::conversions::to_string_t("");
    m_GenderIsSet = false;
    m_LatestSessionId = utility::conversions::to_string_t("");
    m_LatestSessionIdIsSet = false;
    m_LatestSessionUpdate = utility::datetime();
    m_LatestSessionUpdateIsSet = false;
    m_SessionsIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m__linksIsSet = false;
}

PatientResponse::~PatientResponse()
{
}

void PatientResponse::validate()
{
    // TODO: implement validation
}

web::json::value PatientResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    if(m_GenderIsSet)
    {
        val[utility::conversions::to_string_t("gender")] = ModelBase::toJson(m_Gender);
    }
    val[utility::conversions::to_string_t("dateOfBirth")] = ModelBase::toJson(m_DateOfBirth);
    if(m_LatestSessionIdIsSet)
    {
        val[utility::conversions::to_string_t("latestSessionId")] = ModelBase::toJson(m_LatestSessionId);
    }
    if(m_LatestSessionUpdateIsSet)
    {
        val[utility::conversions::to_string_t("latestSessionUpdate")] = ModelBase::toJson(m_LatestSessionUpdate);
    }
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
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m__linksIsSet)
    {
        val[utility::conversions::to_string_t("_links")] = ModelBase::toJson(m__links);
    }

    return val;
}

void PatientResponse::fromJson(const web::json::value& val)
{
    setId(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("id"))));
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            setTitle(ModelBase::stringFromJson(fieldValue));
        }
    }
    setFirstName(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("firstName"))));
    setLastName(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("lastName"))));
    if(val.has_field(utility::conversions::to_string_t("gender")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gender"));
        if(!fieldValue.is_null())
        {
            setGender(ModelBase::stringFromJson(fieldValue));
        }
    }

    if (val.has_field(utility::conversions::to_string_t("dateOfBirth")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dateOfBirth"));
        if (!fieldValue.is_null())
        {
            setDateOfBirth(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latestSessionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latestSessionId"));
        if(!fieldValue.is_null())
        {
            setLatestSessionId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latestSessionUpdate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latestSessionUpdate"));
        if(!fieldValue.is_null())
        {
            setLatestSessionUpdate(ModelBase::dateFromJson(fieldValue));
        }
    }
    m_Sessions.clear();
    std::vector<web::json::value> jsonArray;
    if(val.has_field(utility::conversions::to_string_t("sessions")))
    {
    for( auto& item : val.at(utility::conversions::to_string_t("sessions")).as_array() )
    {
        if(item.is_null())
        {
            m_Sessions.push_back( std::shared_ptr<Session>(nullptr) );
        }
        else
        {
            std::shared_ptr<Session> newItem(new Session());
            newItem->fromJson(item);
            m_Sessions.push_back( newItem );
        }
    }
    }

    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updatedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updatedAt"));
        if(!fieldValue.is_null())
        {
            setUpdatedAt(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("_links")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("_links"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PatientLink> newItem(new PatientLink());
            newItem->fromJson(fieldValue);
            setLinks( newItem );
        }
    }
}

void PatientResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    if(m_GenderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("gender"), m_Gender));
    }
    if(m_DateOfBirth.is_initialized())
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dateOfBirth"), m_DateOfBirth));
    }
    if(m_LatestSessionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("latestSessionId"), m_LatestSessionId));
    }
    if(m_LatestSessionUpdateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("latestSessionUpdate"), m_LatestSessionUpdate));
    }

    std::vector<web::json::value> jsonArray;
    for( auto& item : m_Sessions )
    {
        jsonArray.push_back(ModelBase::toJson(item));
    }
        
    if(jsonArray.size() > 0)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sessions"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
    }

    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, utility::conversions::to_string_t("_links."));
        }
    }
}

void PatientResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        setTitle(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("title"))));
    }
    setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName"))));
    setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName"))));
    if(multipart->hasContent(utility::conversions::to_string_t("gender")))
    {
        setGender(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("gender"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dateOfBirth")))
    {
        setDateOfBirth(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("dateOfBirth"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("latestSessionId")))
    {
        setLatestSessionId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("latestSessionId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("latestSessionUpdate")))
    {
        setLatestSessionUpdate(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("latestSessionUpdate"))));
    }

    m_Sessions.clear();
    if(multipart->hasContent(utility::conversions::to_string_t("sessions")))
    {

    web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sessions"))));
    for( auto& item : jsonArray.as_array() )
    {
        if(item.is_null())
        {
            m_Sessions.push_back( std::shared_ptr<Session>(nullptr) );
        }
        else
        {
            std::shared_ptr<Session> newItem(new Session());
            newItem->fromJson(item);
            m_Sessions.push_back( newItem );
        }
    }
    }
    
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        setCreatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updatedAt")))
    {
        setUpdatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_links")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_links")))
        {
            std::shared_ptr<PatientLink> newItem(new PatientLink());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_links."));
            setLinks( newItem );
        }
    }
}

utility::string_t PatientResponse::getId() const
{
    return m_Id;
}

void PatientResponse::setId(const utility::string_t& value)
{
    m_Id = value;
    
}

utility::string_t PatientResponse::getTitle() const
{
    return m_Title;
}

void PatientResponse::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool PatientResponse::titleIsSet() const
{
    return m_TitleIsSet;
}

void PatientResponse::unsetTitle()
{
    m_TitleIsSet = false;
}

utility::string_t PatientResponse::getFirstName() const
{
    return m_FirstName;
}

void PatientResponse::setFirstName(const utility::string_t& value)
{
    m_FirstName = value;
    
}

utility::string_t PatientResponse::getLastName() const
{
    return m_LastName;
}

void PatientResponse::setLastName(const utility::string_t& value)
{
    m_LastName = value;
    
}

utility::string_t PatientResponse::getGender() const
{
    return m_Gender;
}

void PatientResponse::setGender(const utility::string_t& value)
{
    m_Gender = value;
    m_GenderIsSet = true;
}

bool PatientResponse::genderIsSet() const
{
    return m_GenderIsSet;
}

void PatientResponse::unsetGender()
{
    m_GenderIsSet = false;
}

utility::datetime PatientResponse::getDateOfBirth() const
{
    return m_DateOfBirth;
}

void PatientResponse::setDateOfBirth(const utility::datetime& value)
{
    m_DateOfBirth = value;
    
}

utility::string_t PatientResponse::getLatestSessionId() const
{
    return m_LatestSessionId;
}

void PatientResponse::setLatestSessionId(const utility::string_t& value)
{
    m_LatestSessionId = value;
    m_LatestSessionIdIsSet = true;
}

bool PatientResponse::latestSessionIdIsSet() const
{
    return m_LatestSessionIdIsSet;
}

void PatientResponse::unsetLatestSessionId()
{
    m_LatestSessionIdIsSet = false;
}

utility::datetime PatientResponse::getLatestSessionUpdate() const
{
    return m_LatestSessionUpdate;
}

void PatientResponse::setLatestSessionUpdate(const utility::datetime& value)
{
    m_LatestSessionUpdate = value;
    m_LatestSessionUpdateIsSet = true;
}

bool PatientResponse::latestSessionUpdateIsSet() const
{
    return m_LatestSessionUpdateIsSet;
}

void PatientResponse::unsetLatestSessionUpdate()
{
    m_LatestSessionUpdateIsSet = false;
}

std::vector<std::shared_ptr<Session>>& PatientResponse::getSessions()
{
    return m_Sessions;
}

void PatientResponse::setSessions(const std::vector<std::shared_ptr<Session>>& value)
{
    m_Sessions = value;
    m_SessionsIsSet = true;
}

bool PatientResponse::sessionsIsSet() const
{
    return m_SessionsIsSet;
}

void PatientResponse::unsetSessions()
{
    m_SessionsIsSet = false;
}

utility::datetime PatientResponse::getCreatedAt() const
{
    return m_CreatedAt;
}

void PatientResponse::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool PatientResponse::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void PatientResponse::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}

utility::datetime PatientResponse::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void PatientResponse::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool PatientResponse::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void PatientResponse::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}

std::shared_ptr<PatientLink> PatientResponse::getLinks() const
{
    return m__links;
}

void PatientResponse::setLinks(const std::shared_ptr<PatientLink>& value)
{
    m__links = value;
    m__linksIsSet = true;
}

bool PatientResponse::linksIsSet() const
{
    return m__linksIsSet;
}

void PatientResponse::unset_links()
{
    m__linksIsSet = false;
}

}
}
}
}
}
}


