//  header block begin

// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValuePtr is pure virtual: false
// QJsonValuePtr has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonValuePtr_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonValuePtr_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonValuePtr_t qt_meta_stringdata_MyQJsonValuePtr = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQJsonValuePtr"
  },
  "MyQJsonValuePtr"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonValuePtr[] = {
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
class Q_DECL_EXPORT MyQJsonValuePtr : public QJsonValuePtr {
public:
  virtual ~MyQJsonValuePtr() {}
// void QJsonValuePtr(const QJsonValue &)
MyQJsonValuePtr(const QJsonValue & val) : QJsonValuePtr(val) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:226
// [-2] void QJsonValuePtr(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonValuePtrC2ERK10QJsonValue(QJsonValue* val) {
  return  new QJsonValuePtr(*val);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:229
// [24] QJsonValue & operator*()
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonValuePtrdeEv(void *this_) {
  auto& rv = ((QJsonValuePtr*)this_)->operator*();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:230
// [8] QJsonValue * operator->()
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonValuePtrptEv(void *this_) {
  return (void*)((QJsonValuePtr*)this_)->operator->();
}


extern "C" Q_DECL_EXPORT
void C_ZN13QJsonValuePtrD2Ev(void *this_) {
  delete (QJsonValuePtr*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
