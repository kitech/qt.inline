//  header block begin

// /usr/include/qt/QtGui/qiconengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qiconengine.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconEngine is pure virtual: true true
// QIconEngine has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQIconEngine_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIconEngine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIconEngine_t qt_meta_stringdata_MyQIconEngine = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQIconEngine"
  },
  "MyQIconEngine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIconEngine[] = {
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
class Q_DECL_EXPORT MyQIconEngine : public QIconEngine {
public:
  virtual ~MyQIconEngine() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void paint(QPainter *, const QRect &, QIcon::Mode, QIcon::State)
  virtual void paint(QPainter * painter, const QRect & rect, QIcon::Mode mode, QIcon::State state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paint", &handled, 4, (uint64_t)painter, (uint64_t)&rect, (uint64_t)mode, (uint64_t)state, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QIconEngine::paint(painter, rect, mode, state);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QIconEngine * clone()
  virtual QIconEngine * clone() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"clone", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QIconEngine *)(irv);
      // Pointer Pointer QIconEngine *
    } else {
    return (QIconEngine *){};
  }
  }

// void QIconEngine()
MyQIconEngine() : QIconEngine() {}
// void QIconEngine(const QIconEngine &)
MyQIconEngine(const QIconEngine & other) : QIconEngine(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qiconengine(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN11QIconEngineD2Ev(void *this_)*/ {
  delete (QIconEngine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qiconengine
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
