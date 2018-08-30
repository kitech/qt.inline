//  header block begin
// /usr/include/qt/QtNetwork/qhostaddress.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhostaddress.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QIPv6Address is pure virtual: false
// QIPv6Address has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQIPv6Address_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIPv6Address_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIPv6Address_t qt_meta_stringdata_MyQIPv6Address = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQIPv6Address"
  },
  "MyQIPv6Address"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIPv6Address[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQIPv6Address : public QIPv6Address {
public:
  virtual ~MyQIPv6Address() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:60
// [1] quint8 & operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QIPv6AddressixEi(void *this_, int index) {
  auto& rv = ((QIPv6Address*)this_)->operator[](index);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:61
// [1] quint8 operator[](int)
extern "C" Q_DECL_EXPORT
quint8 C_ZNK12QIPv6AddressixEi(void *this_, int index) {
  return (quint8)((QIPv6Address*)this_)->operator[](index);
}


extern "C" Q_DECL_EXPORT
void C_ZN12QIPv6AddressD2Ev(void *this_) {
  delete (QIPv6Address*)(this_);
}
//  main block end
