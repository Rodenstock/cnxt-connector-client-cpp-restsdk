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
 * PatientResponse_allOf.h
 *
 * 
 */

#ifndef COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_PatientResponse_allOf_H_
#define COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_PatientResponse_allOf_H_


#include "../ModelBase.h"

#include "PatientLink.h"

namespace com {
namespace rodenstock {
namespace cnxt {
namespace connector {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  PatientResponse_allOf
    : public ModelBase
{
public:
    PatientResponse_allOf();
    virtual ~PatientResponse_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PatientResponse_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PatientLink> getLinks() const;
    bool linksIsSet() const;
    void unset_links();

    void setLinks(const std::shared_ptr<PatientLink>& value);


protected:
    std::shared_ptr<PatientLink> m__links;
    bool m__linksIsSet;
};


}
}
}
}
}
}

#endif /* COM_RODENSTOCK_CNXT_CONNECTOR_CLIENT_MODEL_PatientResponse_allOf_H_ */
