//  header block begin

// /usr/include/qt/QtCore/qabstractnativeeventfilter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractnativeeventfilter.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractNativeEventFilter is pure virtual: true true
// QAbstractNativeEventFilter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractNativeEventFilter_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractNativeEventFilter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractNativeEventFilter_t qt_meta_stringdata_MyQAbstractNativeEventFilter = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAbstractNativeEventFilter"
  },
  "MyQAbstractNativeEventFilter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractNativeEventFilter[] = {
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
class Q_DECL_EXPORT MyQAbstractNativeEventFilter : public QAbstractNativeEventFilter {
public:
  virtual ~MyQAbstractNativeEventFilter() {}
// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool nativeEventFilter(const QByteArray &, void *, long *)
  virtual bool nativeEventFilter(const QByteArray & eventType, void * message, long * result)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nativeEventFilter", &handled, 3, (uint64_t)&eventType, (uint64_t)message, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// void QAbstractNativeEventFilter()
MyQAbstractNativeEventFilter() : QAbstractNativeEventFilter() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractnativeeventfilter(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN26QAbstractNativeEventFilterD2Ev(void *this_)*/ {
  delete (QAbstractNativeEventFilter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractnativeeventfilter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
