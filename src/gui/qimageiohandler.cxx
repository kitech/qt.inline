//  header block begin

// /usr/include/qt/QtGui/qimageiohandler.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimageiohandler.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageIOHandler is pure virtual: true true
// QImageIOHandler has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQImageIOHandler_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageIOHandler_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageIOHandler_t qt_meta_stringdata_MyQImageIOHandler = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQImageIOHandler"
  },
  "MyQImageIOHandler"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageIOHandler[] = {
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
class Q_DECL_EXPORT MyQImageIOHandler : public QImageIOHandler {
public:
  virtual ~MyQImageIOHandler() {}
// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool canRead()
  virtual bool canRead() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"canRead", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool read(QImage *)
  virtual bool read(QImage * image)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"read", &handled, 1, (uint64_t)image, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// void QImageIOHandler()
MyQImageIOHandler() : QImageIOHandler() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qimageiohandler(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN15QImageIOHandlerD2Ev(void *this_)*/ {
  delete (QImageIOHandler*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qimageiohandler
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
