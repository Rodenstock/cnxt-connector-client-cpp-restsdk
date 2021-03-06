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



#include "Patient.h"

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {




Patient::Patient()
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
}

Patient::~Patient()
{
}

void Patient::validate()
{
    // TODO: implement validation
}

web::json::value Patient::toJson() const
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

    return val;
}

void Patient::fromJson(const web::json::value& val)
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

    setDateOfBirth(ModelBase::dateFromJson(val.at(utility::conversions::to_string_t("dateOfBirth"))));

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
}

void Patient::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if (m_DateOfBirth.is_initialized())
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
}

void Patient::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

    setDateOfBirth(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("dateOfBirth"))));

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
}

utility::string_t Patient::getId() const
{
    return m_Id;
}

void Patient::setId(const utility::string_t& value)
{
    m_Id = value;
    
}

utility::string_t Patient::getTitle() const
{
    return m_Title;
}

void Patient::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool Patient::titleIsSet() const
{
    return m_TitleIsSet;
}

void Patient::unsetTitle()
{
    m_TitleIsSet = false;
}

utility::string_t Patient::getFirstName() const
{
    return m_FirstName;
}

void Patient::setFirstName(const utility::string_t& value)
{
    m_FirstName = value;
    
}

utility::string_t Patient::getLastName() const
{
    return m_LastName;
}

void Patient::setLastName(const utility::string_t& value)
{
    m_LastName = value;
    
}

utility::string_t Patient::getGender() const
{
    return m_Gender;
}

void Patient::setGender(const utility::string_t& value)
{
    m_Gender = value;
    m_GenderIsSet = true;
}

bool Patient::genderIsSet() const
{
    return m_GenderIsSet;
}

void Patient::unsetGender()
{
    m_GenderIsSet = false;
}

utility::datetime Patient::getDateOfBirth() const
{
    return m_DateOfBirth;
}

void Patient::setDateOfBirth(const utility::datetime& value)
{
    m_DateOfBirth = value;
    
}

utility::string_t Patient::getLatestSessionId() const
{
    return m_LatestSessionId;
}

void Patient::setLatestSessionId(const utility::string_t& value)
{
    m_LatestSessionId = value;
    m_LatestSessionIdIsSet = true;
}

bool Patient::latestSessionIdIsSet() const
{
    return m_LatestSessionIdIsSet;
}

void Patient::unsetLatestSessionId()
{
    m_LatestSessionIdIsSet = false;
}

utility::datetime Patient::getLatestSessionUpdate() const
{
    return m_LatestSessionUpdate;
}

void Patient::setLatestSessionUpdate(const utility::datetime& value)
{
    m_LatestSessionUpdate = value;
    m_LatestSessionUpdateIsSet = true;
}

bool Patient::latestSessionUpdateIsSet() const
{
    return m_LatestSessionUpdateIsSet;
}

void Patient::unsetLatestSessionUpdate()
{
    m_LatestSessionUpdateIsSet = false;
}

std::vector<std::shared_ptr<Session>>& Patient::getSessions()
{
    return m_Sessions;
}

void Patient::setSessions(const std::vector<std::shared_ptr<Session>>& value)
{
    m_Sessions = value;
    m_SessionsIsSet = true;
}

bool Patient::sessionsIsSet() const
{
    return m_SessionsIsSet;
}

void Patient::unsetSessions()
{
    m_SessionsIsSet = false;
}

utility::datetime Patient::getCreatedAt() const
{
    return m_CreatedAt;
}

void Patient::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool Patient::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void Patient::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}

utility::datetime Patient::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void Patient::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool Patient::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void Patient::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}

}
}
}
}
}
}


