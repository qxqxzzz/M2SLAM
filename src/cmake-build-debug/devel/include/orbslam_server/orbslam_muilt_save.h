// Generated by gencpp from file orbslam_server/orbslam_muilt_save.msg
// DO NOT EDIT!


#ifndef ORBSLAM_SERVER_MESSAGE_ORBSLAM_MUILT_SAVE_H
#define ORBSLAM_SERVER_MESSAGE_ORBSLAM_MUILT_SAVE_H

#include <ros/service_traits.h>


#include <orbslam_server/orbslam_muilt_saveRequest.h>
#include <orbslam_server/orbslam_muilt_saveResponse.h>


namespace orbslam_server
{

struct orbslam_muilt_save
{

typedef orbslam_muilt_saveRequest Request;
typedef orbslam_muilt_saveResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct orbslam_muilt_save
} // namespace orbslam_server


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::orbslam_server::orbslam_muilt_save > {
  static const char* value()
  {
    return "3d892133b1c1d7447b98350f9af8811e";
  }

  static const char* value(const ::orbslam_server::orbslam_muilt_save&) { return value(); }
};

template<>
struct DataType< ::orbslam_server::orbslam_muilt_save > {
  static const char* value()
  {
    return "orbslam_server/orbslam_muilt_save";
  }

  static const char* value(const ::orbslam_server::orbslam_muilt_save&) { return value(); }
};


// service_traits::MD5Sum< ::orbslam_server::orbslam_muilt_saveRequest> should match 
// service_traits::MD5Sum< ::orbslam_server::orbslam_muilt_save > 
template<>
struct MD5Sum< ::orbslam_server::orbslam_muilt_saveRequest>
{
  static const char* value()
  {
    return MD5Sum< ::orbslam_server::orbslam_muilt_save >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_muilt_saveRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::orbslam_server::orbslam_muilt_saveRequest> should match 
// service_traits::DataType< ::orbslam_server::orbslam_muilt_save > 
template<>
struct DataType< ::orbslam_server::orbslam_muilt_saveRequest>
{
  static const char* value()
  {
    return DataType< ::orbslam_server::orbslam_muilt_save >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_muilt_saveRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::orbslam_server::orbslam_muilt_saveResponse> should match 
// service_traits::MD5Sum< ::orbslam_server::orbslam_muilt_save > 
template<>
struct MD5Sum< ::orbslam_server::orbslam_muilt_saveResponse>
{
  static const char* value()
  {
    return MD5Sum< ::orbslam_server::orbslam_muilt_save >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_muilt_saveResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::orbslam_server::orbslam_muilt_saveResponse> should match 
// service_traits::DataType< ::orbslam_server::orbslam_muilt_save > 
template<>
struct DataType< ::orbslam_server::orbslam_muilt_saveResponse>
{
  static const char* value()
  {
    return DataType< ::orbslam_server::orbslam_muilt_save >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_muilt_saveResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ORBSLAM_SERVER_MESSAGE_ORBSLAM_MUILT_SAVE_H