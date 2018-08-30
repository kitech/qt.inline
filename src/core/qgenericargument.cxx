//  header block begin
// /usr/include/qt/QtCore/qobjectdefs.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobjectdefs.h>
#include <QtCore>
#include "callback_inherit.h"

// QGenericArgument is pure virtual: false
// QGenericArgument has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGenericArgument_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGenericArgument_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGenericArgument_t qt_meta_stringdata_MyQGenericArgument = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQGenericArgument"
  },
  "MyQGenericArgument"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGenericArgument[] = {
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
class Q_DECL_EXPORT MyQGenericArgument : public QGenericArgument {
public:
  virtual ~MyQGenericArgument() {}
// void QGenericArgument(const char *, const void *)
MyQGenericArgument(const char * aName, const void * aData) : QGenericArgument(aName, aData) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:297
// [-2] void QGenericArgument(const char *, const void *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGenericArgumentC2EPKcPKv(const char * aName, const void * aData) {
  return  new QGenericArgument(aName, aData);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:299
// [8] void * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGenericArgument4dataEv(void *this_) {
  return (void*)((QGenericArgument*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:300
// [8] const char * name()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGenericArgument4nameEv(void *this_) {
  return (void*)((QGenericArgument*)this_)->name();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QGenericArgumentD2Ev(void *this_) {
  delete (QGenericArgument*)(this_);
}
//  main block end
