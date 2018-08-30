//  header block begin
// /usr/include/qt/QtCore/qbitarray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbitarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QBitRef is pure virtual: false
// QBitRef has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQBitRef_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBitRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBitRef_t qt_meta_stringdata_MyQBitRef = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQBitRef"
  },
  "MyQBitRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBitRef[] = {
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
class Q_DECL_EXPORT MyQBitRef : public QBitRef {
public:
  virtual ~MyQBitRef() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:152
// [1] bool operator!()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QBitRefntEv(void *this_) {
  return (bool)((QBitRef*)this_)->operator!();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:153
// [16] QBitRef & operator=(const QBitRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitRefaSERKS_(void *this_, QBitRef* val) {
  auto& rv = ((QBitRef*)this_)->operator=(*val);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:154
// [16] QBitRef & operator=(bool)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitRefaSEb(void *this_, bool val) {
  auto& rv = ((QBitRef*)this_)->operator=(val);
return &rv;
}


extern "C" Q_DECL_EXPORT
void C_ZN7QBitRefD2Ev(void *this_) {
  delete (QBitRef*)(this_);
}
//  main block end
