/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef cassandra_TYPES_H
#define cassandra_TYPES_H

#include <Thrift.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>



namespace org { namespace apache { namespace cassandra {

enum ConsistencyLevel {
  ZERO = 0,
  ONE = 1,
  QUORUM = 2,
  DCQUORUM = 3,
  DCQUORUMSYNC = 4,
  ALL = 5,
  ANY = 6
};

class Column {
 public:

  static const char* ascii_fingerprint; // = "A0ED90CE9B69D7A0FCE24E26CAECD2AF";
  static const uint8_t binary_fingerprint[16]; // = {0xA0,0xED,0x90,0xCE,0x9B,0x69,0xD7,0xA0,0xFC,0xE2,0x4E,0x26,0xCA,0xEC,0xD2,0xAF};

  Column() : name(""), value(""), timestamp(0) {
  }

  virtual ~Column() throw() {}

  std::string name;
  std::string value;
  int64_t timestamp;

  bool operator == (const Column & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(value == rhs.value))
      return false;
    if (!(timestamp == rhs.timestamp))
      return false;
    return true;
  }
  bool operator != (const Column &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Column & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SuperColumn {
 public:

  static const char* ascii_fingerprint; // = "12D6ECAD8A5BF1EF6D95F38F15B05F96";
  static const uint8_t binary_fingerprint[16]; // = {0x12,0xD6,0xEC,0xAD,0x8A,0x5B,0xF1,0xEF,0x6D,0x95,0xF3,0x8F,0x15,0xB0,0x5F,0x96};

  SuperColumn() : name("") {
  }

  virtual ~SuperColumn() throw() {}

  std::string name;
  std::vector<Column>  columns;

  bool operator == (const SuperColumn & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(columns == rhs.columns))
      return false;
    return true;
  }
  bool operator != (const SuperColumn &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SuperColumn & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class ColumnOrSuperColumn {
 public:

  static const char* ascii_fingerprint; // = "7206AF0D50A12423508A1B450D4076B8";
  static const uint8_t binary_fingerprint[16]; // = {0x72,0x06,0xAF,0x0D,0x50,0xA1,0x24,0x23,0x50,0x8A,0x1B,0x45,0x0D,0x40,0x76,0xB8};

  ColumnOrSuperColumn() {
  }

  virtual ~ColumnOrSuperColumn() throw() {}

  Column column;
  SuperColumn super_column;

  struct __isset {
    __isset() : column(false), super_column(false) {}
    bool column;
    bool super_column;
  } __isset;

  bool operator == (const ColumnOrSuperColumn & rhs) const
  {
    if (__isset.column != rhs.__isset.column)
      return false;
    else if (__isset.column && !(column == rhs.column))
      return false;
    if (__isset.super_column != rhs.__isset.super_column)
      return false;
    else if (__isset.super_column && !(super_column == rhs.super_column))
      return false;
    return true;
  }
  bool operator != (const ColumnOrSuperColumn &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnOrSuperColumn & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class NotFoundException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  NotFoundException() {
  }

  virtual ~NotFoundException() throw() {}


  bool operator == (const NotFoundException & /* rhs */) const
  {
    return true;
  }
  bool operator != (const NotFoundException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotFoundException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class InvalidRequestException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  InvalidRequestException() : why("") {
  }

  virtual ~InvalidRequestException() throw() {}

  std::string why;

  bool operator == (const InvalidRequestException & rhs) const
  {
    if (!(why == rhs.why))
      return false;
    return true;
  }
  bool operator != (const InvalidRequestException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidRequestException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class UnavailableException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  UnavailableException() {
  }

  virtual ~UnavailableException() throw() {}


  bool operator == (const UnavailableException & /* rhs */) const
  {
    return true;
  }
  bool operator != (const UnavailableException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnavailableException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class TimedOutException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  TimedOutException() {
  }

  virtual ~TimedOutException() throw() {}


  bool operator == (const TimedOutException & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TimedOutException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TimedOutException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class AuthenticationException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  AuthenticationException() : why("") {
  }

  virtual ~AuthenticationException() throw() {}

  std::string why;

  bool operator == (const AuthenticationException & rhs) const
  {
    if (!(why == rhs.why))
      return false;
    return true;
  }
  bool operator != (const AuthenticationException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class AuthorizationException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  AuthorizationException() : why("") {
  }

  virtual ~AuthorizationException() throw() {}

  std::string why;

  bool operator == (const AuthorizationException & rhs) const
  {
    if (!(why == rhs.why))
      return false;
    return true;
  }
  bool operator != (const AuthorizationException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthorizationException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class ColumnParent {
 public:

  static const char* ascii_fingerprint; // = "0A13AE61181713A4100DFFB3EC293822";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0x13,0xAE,0x61,0x18,0x17,0x13,0xA4,0x10,0x0D,0xFF,0xB3,0xEC,0x29,0x38,0x22};

  ColumnParent() : column_family(""), super_column("") {
  }

  virtual ~ColumnParent() throw() {}

  std::string column_family;
  std::string super_column;

  struct __isset {
    __isset() : super_column(false) {}
    bool super_column;
  } __isset;

  bool operator == (const ColumnParent & rhs) const
  {
    if (!(column_family == rhs.column_family))
      return false;
    if (__isset.super_column != rhs.__isset.super_column)
      return false;
    else if (__isset.super_column && !(super_column == rhs.super_column))
      return false;
    return true;
  }
  bool operator != (const ColumnParent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnParent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class ColumnPath {
 public:

  static const char* ascii_fingerprint; // = "606212895BCF63C757913CF35AEB3462";
  static const uint8_t binary_fingerprint[16]; // = {0x60,0x62,0x12,0x89,0x5B,0xCF,0x63,0xC7,0x57,0x91,0x3C,0xF3,0x5A,0xEB,0x34,0x62};

  ColumnPath() : column_family(""), super_column(""), column("") {
  }

  virtual ~ColumnPath() throw() {}

  std::string column_family;
  std::string super_column;
  std::string column;

  struct __isset {
    __isset() : super_column(false), column(false) {}
    bool super_column;
    bool column;
  } __isset;

  bool operator == (const ColumnPath & rhs) const
  {
    if (!(column_family == rhs.column_family))
      return false;
    if (__isset.super_column != rhs.__isset.super_column)
      return false;
    else if (__isset.super_column && !(super_column == rhs.super_column))
      return false;
    if (__isset.column != rhs.__isset.column)
      return false;
    else if (__isset.column && !(column == rhs.column))
      return false;
    return true;
  }
  bool operator != (const ColumnPath &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnPath & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SliceRange {
 public:

  static const char* ascii_fingerprint; // = "184D24C9A0B8D4415E234DB649CAE740";
  static const uint8_t binary_fingerprint[16]; // = {0x18,0x4D,0x24,0xC9,0xA0,0xB8,0xD4,0x41,0x5E,0x23,0x4D,0xB6,0x49,0xCA,0xE7,0x40};

  SliceRange() : start(""), finish(""), reversed(false), count(100) {
  }

  virtual ~SliceRange() throw() {}

  std::string start;
  std::string finish;
  bool reversed;
  int32_t count;

  bool operator == (const SliceRange & rhs) const
  {
    if (!(start == rhs.start))
      return false;
    if (!(finish == rhs.finish))
      return false;
    if (!(reversed == rhs.reversed))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const SliceRange &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SliceRange & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SlicePredicate {
 public:

  static const char* ascii_fingerprint; // = "F59D1D81C17DFFAF09988BF1C9CE5E27";
  static const uint8_t binary_fingerprint[16]; // = {0xF5,0x9D,0x1D,0x81,0xC1,0x7D,0xFF,0xAF,0x09,0x98,0x8B,0xF1,0xC9,0xCE,0x5E,0x27};

  SlicePredicate() {
  }

  virtual ~SlicePredicate() throw() {}

  std::vector<std::string>  column_names;
  SliceRange slice_range;

  struct __isset {
    __isset() : column_names(false), slice_range(false) {}
    bool column_names;
    bool slice_range;
  } __isset;

  bool operator == (const SlicePredicate & rhs) const
  {
    if (__isset.column_names != rhs.__isset.column_names)
      return false;
    else if (__isset.column_names && !(column_names == rhs.column_names))
      return false;
    if (__isset.slice_range != rhs.__isset.slice_range)
      return false;
    else if (__isset.slice_range && !(slice_range == rhs.slice_range))
      return false;
    return true;
  }
  bool operator != (const SlicePredicate &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SlicePredicate & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class KeyRange {
 public:

  static const char* ascii_fingerprint; // = "8F248C09AF1EC3656ABD8565EA1F59C1";
  static const uint8_t binary_fingerprint[16]; // = {0x8F,0x24,0x8C,0x09,0xAF,0x1E,0xC3,0x65,0x6A,0xBD,0x85,0x65,0xEA,0x1F,0x59,0xC1};

  KeyRange() : start_key(""), end_key(""), start_token(""), end_token(""), count(100) {
  }

  virtual ~KeyRange() throw() {}

  std::string start_key;
  std::string end_key;
  std::string start_token;
  std::string end_token;
  int32_t count;

  struct __isset {
    __isset() : start_key(false), end_key(false), start_token(false), end_token(false) {}
    bool start_key;
    bool end_key;
    bool start_token;
    bool end_token;
  } __isset;

  bool operator == (const KeyRange & rhs) const
  {
    if (__isset.start_key != rhs.__isset.start_key)
      return false;
    else if (__isset.start_key && !(start_key == rhs.start_key))
      return false;
    if (__isset.end_key != rhs.__isset.end_key)
      return false;
    else if (__isset.end_key && !(end_key == rhs.end_key))
      return false;
    if (__isset.start_token != rhs.__isset.start_token)
      return false;
    else if (__isset.start_token && !(start_token == rhs.start_token))
      return false;
    if (__isset.end_token != rhs.__isset.end_token)
      return false;
    else if (__isset.end_token && !(end_token == rhs.end_token))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const KeyRange &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KeyRange & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class KeySlice {
 public:

  static const char* ascii_fingerprint; // = "6B9E3EBD049E17F183128B5A0F9D0AA1";
  static const uint8_t binary_fingerprint[16]; // = {0x6B,0x9E,0x3E,0xBD,0x04,0x9E,0x17,0xF1,0x83,0x12,0x8B,0x5A,0x0F,0x9D,0x0A,0xA1};

  KeySlice() : key("") {
  }

  virtual ~KeySlice() throw() {}

  std::string key;
  std::vector<ColumnOrSuperColumn>  columns;

  bool operator == (const KeySlice & rhs) const
  {
    if (!(key == rhs.key))
      return false;
    if (!(columns == rhs.columns))
      return false;
    return true;
  }
  bool operator != (const KeySlice &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KeySlice & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class Deletion {
 public:

  static const char* ascii_fingerprint; // = "1E4E5C4E0D45BE5064D14AFD23096B8B";
  static const uint8_t binary_fingerprint[16]; // = {0x1E,0x4E,0x5C,0x4E,0x0D,0x45,0xBE,0x50,0x64,0xD1,0x4A,0xFD,0x23,0x09,0x6B,0x8B};

  Deletion() : timestamp(0), super_column("") {
  }

  virtual ~Deletion() throw() {}

  int64_t timestamp;
  std::string super_column;
  SlicePredicate predicate;

  struct __isset {
    __isset() : super_column(false), predicate(false) {}
    bool super_column;
    bool predicate;
  } __isset;

  bool operator == (const Deletion & rhs) const
  {
    if (!(timestamp == rhs.timestamp))
      return false;
    if (__isset.super_column != rhs.__isset.super_column)
      return false;
    else if (__isset.super_column && !(super_column == rhs.super_column))
      return false;
    if (__isset.predicate != rhs.__isset.predicate)
      return false;
    else if (__isset.predicate && !(predicate == rhs.predicate))
      return false;
    return true;
  }
  bool operator != (const Deletion &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Deletion & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class Mutation {
 public:

  static const char* ascii_fingerprint; // = "D6D4A7E764618937E5BB0CC6336115E1";
  static const uint8_t binary_fingerprint[16]; // = {0xD6,0xD4,0xA7,0xE7,0x64,0x61,0x89,0x37,0xE5,0xBB,0x0C,0xC6,0x33,0x61,0x15,0xE1};

  Mutation() {
  }

  virtual ~Mutation() throw() {}

  ColumnOrSuperColumn column_or_supercolumn;
  Deletion deletion;

  struct __isset {
    __isset() : column_or_supercolumn(false), deletion(false) {}
    bool column_or_supercolumn;
    bool deletion;
  } __isset;

  bool operator == (const Mutation & rhs) const
  {
    if (__isset.column_or_supercolumn != rhs.__isset.column_or_supercolumn)
      return false;
    else if (__isset.column_or_supercolumn && !(column_or_supercolumn == rhs.column_or_supercolumn))
      return false;
    if (__isset.deletion != rhs.__isset.deletion)
      return false;
    else if (__isset.deletion && !(deletion == rhs.deletion))
      return false;
    return true;
  }
  bool operator != (const Mutation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Mutation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class TokenRange {
 public:

  static const char* ascii_fingerprint; // = "8E2AD6401E83558ECFD6A13D74DD0A3F";
  static const uint8_t binary_fingerprint[16]; // = {0x8E,0x2A,0xD6,0x40,0x1E,0x83,0x55,0x8E,0xCF,0xD6,0xA1,0x3D,0x74,0xDD,0x0A,0x3F};

  TokenRange() : start_token(""), end_token("") {
  }

  virtual ~TokenRange() throw() {}

  std::string start_token;
  std::string end_token;
  std::vector<std::string>  endpoints;

  bool operator == (const TokenRange & rhs) const
  {
    if (!(start_token == rhs.start_token))
      return false;
    if (!(end_token == rhs.end_token))
      return false;
    if (!(endpoints == rhs.endpoints))
      return false;
    return true;
  }
  bool operator != (const TokenRange &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TokenRange & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class AuthenticationRequest {
 public:

  static const char* ascii_fingerprint; // = "5EA2D527ECA3BA20C77AFC023EE8C05F";
  static const uint8_t binary_fingerprint[16]; // = {0x5E,0xA2,0xD5,0x27,0xEC,0xA3,0xBA,0x20,0xC7,0x7A,0xFC,0x02,0x3E,0xE8,0xC0,0x5F};

  AuthenticationRequest() {
  }

  virtual ~AuthenticationRequest() throw() {}

  std::map<std::string, std::string>  credentials;

  bool operator == (const AuthenticationRequest & rhs) const
  {
    if (!(credentials == rhs.credentials))
      return false;
    return true;
  }
  bool operator != (const AuthenticationRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

}}} // namespace

#endif
