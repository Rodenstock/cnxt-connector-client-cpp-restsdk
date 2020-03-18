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

/*
 * Patient.h
 *
 * Represents a patient
 */

#ifndef COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_Patient_H_
#define COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_Patient_H_


#include "../ModelBase.h"

#include "Session.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {


/// <summary>
/// Represents a patient
/// </summary>
class  Patient
    : public ModelBase
{
public:
    Patient();
    virtual ~Patient();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Patient members

    /// <summary>
    /// ID of the patient
    /// </summary>
    utility::string_t getId() const;
    
    void setId(const utility::string_t& value);

    /// <summary>
    /// Title of the patient
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// First name of the patient
    /// </summary>
    utility::string_t getFirstName() const;
    
    void setFirstName(const utility::string_t& value);

    /// <summary>
    /// Last name of the patient
    /// </summary>
    utility::string_t getLastName() const;
    
    void setLastName(const utility::string_t& value);

    /// <summary>
    /// Gender of the patient (Supported values: Female, Male, Other, Unknown)
    /// </summary>
    utility::string_t getGender() const;
    bool genderIsSet() const;
    void unsetGender();

    void setGender(const utility::string_t& value);

    /// <summary>
    /// Date of birth of the patient
    /// </summary>
    utility::datetime getDateOfBirth() const;
    
    void setDateOfBirth(const utility::datetime& value);

    /// <summary>
    /// The id of the latest session
    /// </summary>
    utility::string_t getLatestSessionId() const;
    bool latestSessionIdIsSet() const;
    void unsetLatestSessionId();

    void setLatestSessionId(const utility::string_t& value);

    /// <summary>
    /// Date of the latest session update
    /// </summary>
    utility::datetime getLatestSessionUpdate() const;
    bool latestSessionUpdateIsSet() const;
    void unsetLatestSessionUpdate();

    void setLatestSessionUpdate(const utility::datetime& value);

    /// <summary>
    /// Assigned sessions of the patient
    /// </summary>
    std::vector<std::shared_ptr<Session>>& getSessions();
    bool sessionsIsSet() const;
    void unsetSessions();

    void setSessions(const std::vector<std::shared_ptr<Session>>& value);

    /// <summary>
    /// Date of creation of the patient
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// Date of modification of the patient
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);


protected:
    utility::string_t m_Id;
        utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_FirstName;
        utility::string_t m_LastName;
        utility::string_t m_Gender;
    bool m_GenderIsSet;
    utility::datetime m_DateOfBirth;
        utility::string_t m_LatestSessionId;
    bool m_LatestSessionIdIsSet;
    utility::datetime m_LatestSessionUpdate;
    bool m_LatestSessionUpdateIsSet;
    std::vector<std::shared_ptr<Session>> m_Sessions;
    bool m_SessionsIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
};


}
}
}
}
}
}

#endif /* COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_Patient_H_ */