//  header block begin
// /usr/include/qt/QtQml/qqmlengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlImageProviderBase is pure virtual: true
// QQmlImageProviderBase has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlImageProviderBase_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlImageProviderBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlImageProviderBase_t qt_meta_stringdata_MyQQmlImageProviderBase = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQQmlImageProviderBase"
  },
  "MyQQmlImageProviderBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlImageProviderBase[] = {
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
class Q_DECL_EXPORT MyQQmlImageProviderBase : public QQmlImageProviderBase {
public:
  virtual ~MyQQmlImageProviderBase() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QQmlImageProviderBase::ImageType imageType()
  virtual QQmlImageProviderBase::ImageType imageType() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imageType", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QQmlImageProviderBase::ImageType)(int)(irv);
      // Enum Enum QQmlImageProviderBase::ImageType
    } else {
    return (QQmlImageProviderBase::ImageType){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QQmlImageProviderBase::Flags flags()
  virtual QQmlImageProviderBase::Flags flags() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"flags", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QQmlImageProviderBase::Flags)(int)(irv);
      // Typedef Record QFlags<QQmlImageProviderBase::Flag>
    } else {
    return (QQmlImageProviderBase::Flags){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:74
// [4] QQmlImageProviderBase::ImageType imageType()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:75
// [4] QQmlImageProviderBase::Flags flags()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:72
// [-2] void ~QQmlImageProviderBase()
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlImageProviderBaseD2Ev(void *this_) {
  delete (QQmlImageProviderBase*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:74
// [4] QQmlImageProviderBase::ImageType imageType()
extern "C" Q_DECL_EXPORT
QQmlImageProviderBase::ImageType C_ZNK21QQmlImageProviderBase9imageTypeEv(void *this_) {
  return (QQmlImageProviderBase::ImageType)((QQmlImageProviderBase*)this_)->imageType();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:75
// [4] QQmlImageProviderBase::Flags flags()
extern "C" Q_DECL_EXPORT
QQmlImageProviderBase::Flags* C_ZNK21QQmlImageProviderBase5flagsEv(void *this_) {
  auto rv = ((QQmlImageProviderBase*)this_)->flags();
return new QQmlImageProviderBase::Flags(rv);
}

//  main block end
