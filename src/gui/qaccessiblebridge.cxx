//  header block begin

// /usr/include/qt/QtGui/qaccessiblebridge.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessiblebridge.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleBridge is pure virtual: true true
// QAccessibleBridge has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleBridge_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleBridge_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleBridge_t qt_meta_stringdata_MyQAccessibleBridge = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQAccessibleBridge"
  },
  "MyQAccessibleBridge"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleBridge[] = {
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
class Q_DECL_EXPORT MyQAccessibleBridge : public QAccessibleBridge {
public:
  virtual ~MyQAccessibleBridge() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setRootObject(QAccessibleInterface *)
  virtual void setRootObject(QAccessibleInterface * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setRootObject", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleBridge::setRootObject(arg0);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void notifyAccessibilityUpdate(QAccessibleEvent *)
  virtual void notifyAccessibilityUpdate(QAccessibleEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"notifyAccessibilityUpdate", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleBridge::notifyAccessibilityUpdate(event);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessiblebridge(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:58
// [-2] void ~QAccessibleBridge() 
// (12)qm2937663738 (26)_ZN17QAccessibleBridgeD2Ev
/*void qm2937663738 (void *this_)*/ {
  delete (QAccessibleBridge*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessiblebridge
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
