//  header block begin

// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValueRefPtr is pure virtual: false
// QJsonValueRefPtr has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonValueRefPtr_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonValueRefPtr_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonValueRefPtr_t qt_meta_stringdata_MyQJsonValueRefPtr = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQJsonValueRefPtr"
  },
  "MyQJsonValueRefPtr"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonValueRefPtr[] = {
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
class Q_DECL_EXPORT MyQJsonValueRefPtr : public QJsonValueRefPtr {
public:
  virtual ~MyQJsonValueRefPtr() {}
// void QJsonValueRefPtr(QJsonArray *, int)
MyQJsonValueRefPtr(QJsonArray * array, int idx) : QJsonValueRefPtr(array, idx) {}
// void QJsonValueRefPtr(QJsonObject *, int)
MyQJsonValueRefPtr(QJsonObject * object, int idx) : QJsonValueRefPtr(object, idx) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:210
// [-2] void QJsonValueRefPtr(QJsonArray *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QJsonValueRefPtrC2EP10QJsonArrayi(QJsonArray * array, int idx) {
  return  new QJsonValueRefPtr(array, idx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:212
// [-2] void QJsonValueRefPtr(QJsonObject *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QJsonValueRefPtrC2EP11QJsonObjecti(QJsonObject * object, int idx) {
  return  new QJsonValueRefPtr(object, idx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:215
// [16] QJsonValueRef & operator*()
extern "C" Q_DECL_EXPORT
void* C_ZN16QJsonValueRefPtrdeEv(void *this_) {
  auto& rv = ((QJsonValueRefPtr*)this_)->operator*();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:216
// [8] QJsonValueRef * operator->()
extern "C" Q_DECL_EXPORT
void* C_ZN16QJsonValueRefPtrptEv(void *this_) {
  return (void*)((QJsonValueRefPtr*)this_)->operator->();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QJsonValueRefPtrD2Ev(void *this_) {
  delete (QJsonValueRefPtr*)(this_);
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
