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
 * SessionFilter.h
 *
 * Represents a patient filter for querying sessions.
 */

#ifndef COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_SessionFilter_H_
#define COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_SessionFilter_H_


#include "../ModelBase.h"

#include "SessionState.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {


/// <summary>
/// Represents a patient filter for querying sessions.
/// </summary>
class  SessionFilter
    : public ModelBase
{
public:
    SessionFilter();
    virtual ~SessionFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SessionFilter members

    /// <summary>
    /// Used for finding sessions by external ID, which is assigned to the session in a 3rd party application
    /// </summary>
    utility::string_t getExternalId() const;
    bool externalIdIsSet() const;
    void unsetExternalId();

    void setExternalId(const utility::string_t& value);

    /// <summary>
    /// Used for finding sessions whose date of creation is after the specified date time
    /// </summary>
    utility::datetime getCreatedAfter() const;
    bool createdAfterIsSet() const;
    void unsetCreatedAfter();

    void setCreatedAfter(const utility::datetime& value);

    /// <summary>
    /// Used for finding sessions whose date of modification is after the specified date time
    /// </summary>
    utility::datetime getUpdatedAfter() const;
    bool updatedAfterIsSet() const;
    void unsetUpdatedAfter();

    void setUpdatedAfter(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SessionState> getState() const;
    bool stateIsSet() const;
    void unsetState();

    void setState(const std::shared_ptr<SessionState>& value);


protected:
    utility::string_t m_ExternalId;
    bool m_ExternalIdIsSet;
    utility::datetime m_CreatedAfter;
    bool m_CreatedAfterIsSet;
    utility::datetime m_UpdatedAfter;
    bool m_UpdatedAfterIsSet;
    std::shared_ptr<SessionState> m_State;
    bool m_StateIsSet;
};


}
}
}
}
}
}

#endif /* COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_SessionFilter_H_ */
