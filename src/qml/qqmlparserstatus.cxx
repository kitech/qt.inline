//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qqmlparserstatus.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlparserstatus.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlParserStatus is pure virtual: true
// QQmlParserStatus has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlParserStatus_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlParserStatus_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlParserStatus_t qt_meta_stringdata_MyQQmlParserStatus = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQQmlParserStatus"
  },
  "MyQQmlParserStatus"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlParserStatus[] = {
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
class Q_DECL_EXPORT MyQQmlParserStatus : public QQmlParserStatus {
public:
  virtual ~MyQQmlParserStatus() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void classBegin()
  virtual void classBegin()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"classBegin", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlParserStatus::classBegin();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void componentComplete()
  virtual void componentComplete()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"componentComplete", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlParserStatus::componentComplete();
  }
  }

// void QQmlParserStatus()
MyQQmlParserStatus() : QQmlParserStatus() {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:55
// [-2] void classBegin()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:56
// [-2] void componentComplete()
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:52
// [-2] void QQmlParserStatus()
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlParserStatusC2Ev() {
  return 0; // new QQmlParserStatus();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:53
// [-2] void ~QQmlParserStatus()
extern "C" Q_DECL_EXPORT
void C_ZN16QQmlParserStatusD2Ev(void *this_) {
  delete (QQmlParserStatus*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:55
// [-2] void classBegin()
extern "C" Q_DECL_EXPORT
void C_ZN16QQmlParserStatus10classBeginEv(void *this_) {
  ((QQmlParserStatus*)this_)->classBegin();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlparserstatus.h:56
// [-2] void componentComplete()
extern "C" Q_DECL_EXPORT
void C_ZN16QQmlParserStatus17componentCompleteEv(void *this_) {
  ((QQmlParserStatus*)this_)->componentComplete();
}

//  main block end
