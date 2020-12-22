//  header block begin

// /usr/include/qt/QtCore/qrunnable.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrunnable.h>
#include <QtCore>
#include "callback_inherit.h"

// QRunnable is pure virtual: true true
// QRunnable has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRunnable_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRunnable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRunnable_t qt_meta_stringdata_MyQRunnable = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQRunnable"
  },
  "MyQRunnable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRunnable[] = {
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
class Q_DECL_EXPORT MyQRunnable : public QRunnable {
public:
  virtual ~MyQRunnable() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void run()
  virtual void run()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"run", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRunnable::run();
  }
  }

// void QRunnable()
MyQRunnable() : QRunnable() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrunnable(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:65
// [1] bool autoDelete() const
// (12)qm2304629770 (28)_ZNK9QRunnable10autoDeleteEv
//static
/*void qm2304629770()*/ {
  ;
  (void) ((QRunnable*)this_)->autoDelete();
   auto xptr = (bool (QRunnable::*)() const ) &QRunnable::autoDelete;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:66
// [-2] void setAutoDelete(bool) 
// (12)qm2495779977 (30)_ZN9QRunnable13setAutoDeleteEb
//static
/*void qm2495779977(bool _autoDelete)*/ {
  bool _autoDelete = *(bool*)this_;
  (void) ((QRunnable*)this_)->setAutoDelete(_autoDelete);
   auto xptr = (void (QRunnable::*)(bool) ) &QRunnable::setAutoDelete;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QRunnableD2Ev(void *this_)*/ {
  delete (QRunnable*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrunnable
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
