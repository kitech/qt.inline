//  header block begin

// /usr/include/qt/QtMultimedia/qabstractvideofilter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideofilter.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoFilterRunnable is pure virtual: true true
// QVideoFilterRunnable has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVideoFilterRunnable_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoFilterRunnable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoFilterRunnable_t qt_meta_stringdata_MyQVideoFilterRunnable = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQVideoFilterRunnable"
  },
  "MyQVideoFilterRunnable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoFilterRunnable[] = {
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
class Q_DECL_EXPORT MyQVideoFilterRunnable : public QVideoFilterRunnable {
public:
  virtual ~MyQVideoFilterRunnable() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QVideoFrame run(QVideoFrame *, const QVideoSurfaceFormat &, QVideoFilterRunnable::RunFlags)
  virtual QVideoFrame run(QVideoFrame * input, const QVideoSurfaceFormat & surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"run", &handled, 3, (uint64_t)input, (uint64_t)&surfaceFormat, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVideoFrame){};}
    auto prv = (QVideoFrame*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVideoFrame
    } else {
    return (QVideoFrame){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideofilterrunnable(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN20QVideoFilterRunnableD2Ev(void *this_)*/ {
  delete (QVideoFilterRunnable*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideofilterrunnable
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
