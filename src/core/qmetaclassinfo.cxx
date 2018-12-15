//  header block begin

// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaClassInfo is pure virtual: false
// QMetaClassInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMetaClassInfo_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMetaClassInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMetaClassInfo_t qt_meta_stringdata_MyQMetaClassInfo = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQMetaClassInfo"
  },
  "MyQMetaClassInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMetaClassInfo[] = {
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
class Q_DECL_EXPORT MyQMetaClassInfo : public QMetaClassInfo {
public:
  virtual ~MyQMetaClassInfo() {}
// void QMetaClassInfo()
MyQMetaClassInfo() : QMetaClassInfo() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:304
// [-2] void QMetaClassInfo()
extern "C" Q_DECL_EXPORT
void* C_ZN14QMetaClassInfoC2Ev() {
  return  new QMetaClassInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:305
// [8] const char * name()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMetaClassInfo4nameEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->name();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:306
// [8] const char * value()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMetaClassInfo5valueEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->value();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:307
// [8] const QMetaObject * enclosingMetaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMetaClassInfo19enclosingMetaObjectEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->enclosingMetaObject();
}


extern "C" Q_DECL_EXPORT
void C_ZN14QMetaClassInfoD2Ev(void *this_) {
  delete (QMetaClassInfo*)(this_);
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
