/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "bbip_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace bilibili {


bbip_result::~bbip_result() throw() {
}


void bbip_result::__set_range_start(const int64_t val) {
  this->range_start = val;
}

void bbip_result::__set_range_end(const int64_t val) {
  this->range_end = val;
}

void bbip_result::__set_country(const std::string& val) {
  this->country = val;
}

void bbip_result::__set_province(const std::string& val) {
  this->province = val;
}

void bbip_result::__set_city(const std::string& val) {
  this->city = val;
}

void bbip_result::__set_district(const std::string& val) {
  this->district = val;
}

void bbip_result::__set_isp(const std::string& val) {
  this->isp = val;
}

void bbip_result::__set_type(const std::string& val) {
  this->type = val;
}

void bbip_result::__set_desc(const std::string& val) {
  this->desc = val;
}

void bbip_result::__set_lat(const double val) {
  this->lat = val;
__isset.lat = true;
}

void bbip_result::__set_lng(const double val) {
  this->lng = val;
__isset.lng = true;
}

void bbip_result::__set_cidr(const int16_t val) {
  this->cidr = val;
}

uint32_t bbip_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->range_start);
          this->__isset.range_start = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->range_end);
          this->__isset.range_end = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->country);
          this->__isset.country = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->province);
          this->__isset.province = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->city);
          this->__isset.city = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->district);
          this->__isset.district = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->isp);
          this->__isset.isp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->type);
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->desc);
          this->__isset.desc = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lat);
          this->__isset.lat = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lng);
          this->__isset.lng = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->cidr);
          this->__isset.cidr = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t bbip_result::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("bbip_result");

  xfer += oprot->writeFieldBegin("range_start", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->range_start);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("range_end", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->range_end);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("country", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->country);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("province", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->province);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("city", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->city);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("district", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->district);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("isp", ::apache::thrift::protocol::T_STRING, 7);
  xfer += oprot->writeString(this->isp);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_STRING, 8);
  xfer += oprot->writeString(this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("desc", ::apache::thrift::protocol::T_STRING, 9);
  xfer += oprot->writeString(this->desc);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.lat) {
    xfer += oprot->writeFieldBegin("lat", ::apache::thrift::protocol::T_DOUBLE, 10);
    xfer += oprot->writeDouble(this->lat);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.lng) {
    xfer += oprot->writeFieldBegin("lng", ::apache::thrift::protocol::T_DOUBLE, 11);
    xfer += oprot->writeDouble(this->lng);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("cidr", ::apache::thrift::protocol::T_I16, 12);
  xfer += oprot->writeI16(this->cidr);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(bbip_result &a, bbip_result &b) {
  using ::std::swap;
  swap(a.range_start, b.range_start);
  swap(a.range_end, b.range_end);
  swap(a.country, b.country);
  swap(a.province, b.province);
  swap(a.city, b.city);
  swap(a.district, b.district);
  swap(a.isp, b.isp);
  swap(a.type, b.type);
  swap(a.desc, b.desc);
  swap(a.lat, b.lat);
  swap(a.lng, b.lng);
  swap(a.cidr, b.cidr);
  swap(a.__isset, b.__isset);
}

bbip_result::bbip_result(const bbip_result& other0) {
  range_start = other0.range_start;
  range_end = other0.range_end;
  country = other0.country;
  province = other0.province;
  city = other0.city;
  district = other0.district;
  isp = other0.isp;
  type = other0.type;
  desc = other0.desc;
  lat = other0.lat;
  lng = other0.lng;
  cidr = other0.cidr;
  __isset = other0.__isset;
}
bbip_result& bbip_result::operator=(const bbip_result& other1) {
  range_start = other1.range_start;
  range_end = other1.range_end;
  country = other1.country;
  province = other1.province;
  city = other1.city;
  district = other1.district;
  isp = other1.isp;
  type = other1.type;
  desc = other1.desc;
  lat = other1.lat;
  lng = other1.lng;
  cidr = other1.cidr;
  __isset = other1.__isset;
  return *this;
}
void bbip_result::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "bbip_result(";
  out << "range_start=" << to_string(range_start);
  out << ", " << "range_end=" << to_string(range_end);
  out << ", " << "country=" << to_string(country);
  out << ", " << "province=" << to_string(province);
  out << ", " << "city=" << to_string(city);
  out << ", " << "district=" << to_string(district);
  out << ", " << "isp=" << to_string(isp);
  out << ", " << "type=" << to_string(type);
  out << ", " << "desc=" << to_string(desc);
  out << ", " << "lat="; (__isset.lat ? (out << to_string(lat)) : (out << "<null>"));
  out << ", " << "lng="; (__isset.lng ? (out << to_string(lng)) : (out << "<null>"));
  out << ", " << "cidr=" << to_string(cidr);
  out << ")";
}


InvalidOperation::~InvalidOperation() throw() {
}


void InvalidOperation::__set_code(const int32_t val) {
  this->code = val;
}

void InvalidOperation::__set_msg(const std::string& val) {
  this->msg = val;
}

uint32_t InvalidOperation::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->code);
          this->__isset.code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->msg);
          this->__isset.msg = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidOperation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidOperation");

  xfer += oprot->writeFieldBegin("code", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->code);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("msg", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->msg);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidOperation &a, InvalidOperation &b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.msg, b.msg);
  swap(a.__isset, b.__isset);
}

InvalidOperation::InvalidOperation(const InvalidOperation& other2) : TException() {
  code = other2.code;
  msg = other2.msg;
  __isset = other2.__isset;
}
InvalidOperation& InvalidOperation::operator=(const InvalidOperation& other3) {
  code = other3.code;
  msg = other3.msg;
  __isset = other3.__isset;
  return *this;
}
void InvalidOperation::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidOperation(";
  out << "code=" << to_string(code);
  out << ", " << "msg=" << to_string(msg);
  out << ")";
}

const char* InvalidOperation::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: InvalidOperation";
  }
}

} // namespace