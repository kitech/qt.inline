//  header block begin

// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlpropertyvaluesource.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlPropertyValueSource is pure virtual: true true
// QQmlPropertyValueSource has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlPropertyValueSource_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlPropertyValueSource_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlPropertyValueSource_t qt_meta_stringdata_MyQQmlPropertyValueSource = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQQmlPropertyValueSource"
  },
  "MyQQmlPropertyValueSource"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlPropertyValueSource[] = {
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
class Q_DECL_EXPORT MyQQmlPropertyValueSource : public QQmlPropertyValueSource {
public:
  virtual ~MyQQmlPropertyValueSource() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setTarget(const QQmlProperty &)
  virtual void setTarget(const QQmlProperty & arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setTarget", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlPropertyValueSource::setTarget(arg0);
  }
  }

// void QQmlPropertyValueSource()
MyQQmlPropertyValueSource() : QQmlPropertyValueSource() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlpropertyvaluesource(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN23QQmlPropertyValueSourceD2Ev(void *this_)*/ {
  delete (QQmlPropertyValueSource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlpropertyvaluesource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
