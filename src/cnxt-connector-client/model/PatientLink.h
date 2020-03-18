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
 * PatientLink.h
 *
 * Represents patient related pagination links
 */

#ifndef COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_PatientLink_H_
#define COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_PatientLink_H_


#include "../ModelBase.h"

#include "PatientLink_self.h"
#include "Object.h"
#include <vector>
#include "PatientLink_patient.h"

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {


/// <summary>
/// Represents patient related pagination links
/// </summary>
class  PatientLink
    : public ModelBase
{
public:
    PatientLink();
    virtual ~PatientLink();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PatientLink members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PatientLink_self> getSelf() const;
    
    void setSelf(const std::shared_ptr<PatientLink_self>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PatientLink_patient> getPatient() const;
    bool patientIsSet() const;
    void unsetPatient();

    void setPatient(const std::shared_ptr<PatientLink_patient>& value);

    /// <summary>
    /// An array of URIs of the associated session resources
    /// </summary>
    std::vector<std::shared_ptr<Object>>& getSessions();
    bool sessionsIsSet() const;
    void unsetSessions();

    void setSessions(const std::vector<std::shared_ptr<Object>>& value);


protected:
    std::shared_ptr<PatientLink_self> m_Self;
        std::shared_ptr<PatientLink_patient> m_Patient;
    bool m_PatientIsSet;
    std::vector<std::shared_ptr<Object>> m_Sessions;
    bool m_SessionsIsSet;
};


}
}
}
}
}
}

#endif /* COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_PatientLink_H_ */
