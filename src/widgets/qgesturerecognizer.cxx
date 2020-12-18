//  header block begin

// /usr/include/qt/QtWidgets/qgesturerecognizer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesturerecognizer.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGestureRecognizer is pure virtual: true true
// QGestureRecognizer has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGestureRecognizer_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGestureRecognizer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGestureRecognizer_t qt_meta_stringdata_MyQGestureRecognizer = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQGestureRecognizer"
  },
  "MyQGestureRecognizer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGestureRecognizer[] = {
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
class Q_DECL_EXPORT MyQGestureRecognizer : public QGestureRecognizer {
public:
  virtual ~MyQGestureRecognizer() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QGestureRecognizer::Result recognize(QGesture *, QObject *, QEvent *)
  virtual QGestureRecognizer::Result recognize(QGesture * state, QObject * watched, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"recognize", &handled, 3, (uint64_t)state, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGestureRecognizer::Result)(int)(irv);
      // Typedef Record QFlags<QGestureRecognizer::ResultFlag>
    } else {
    return (QGestureRecognizer::Result){};
  }
  }

// void QGestureRecognizer()
MyQGestureRecognizer() : QGestureRecognizer() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgesturerecognizer(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN18QGestureRecognizerD2Ev(void *this_)*/ {
  delete (QGestureRecognizer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgesturerecognizer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
