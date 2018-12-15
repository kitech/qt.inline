//  header block begin

// /usr/include/qt/QtCore/qnamespace.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnamespace.h>
#include <QtCore>
#include "callback_inherit.h"

// QInternal is pure virtual: false
// QInternal has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQInternal_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQInternal_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQInternal_t qt_meta_stringdata_MyQInternal = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQInternal"
  },
  "MyQInternal"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQInternal[] = {
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
class Q_DECL_EXPORT MyQInternal : public QInternal {
public:
  virtual ~MyQInternal() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1821
// [1] bool registerCallback(QInternal::Callback, qInternalCallback)
extern "C" Q_DECL_EXPORT
bool C_ZN9QInternal16registerCallbackENS_8CallbackEPFbPPvE(QInternal::Callback arg0, qInternalCallback arg1) {
  return (bool)QInternal::registerCallback(arg0, arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1822
// [1] bool unregisterCallback(QInternal::Callback, qInternalCallback)
extern "C" Q_DECL_EXPORT
bool C_ZN9QInternal18unregisterCallbackENS_8CallbackEPFbPPvE(QInternal::Callback arg0, qInternalCallback arg1) {
  return (bool)QInternal::unregisterCallback(arg0, arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1823
// [1] bool activateCallbacks(QInternal::Callback, void **)
extern "C" Q_DECL_EXPORT
bool C_ZN9QInternal17activateCallbacksENS_8CallbackEPPv(QInternal::Callback arg0, void ** arg1) {
  return (bool)QInternal::activateCallbacks(arg0, arg1);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QInternalD2Ev(void *this_) {
  delete (QInternal*)(this_);
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
