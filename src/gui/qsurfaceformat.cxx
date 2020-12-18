//  header block begin

// /usr/include/qt/QtGui/qsurfaceformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsurfaceformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QSurfaceFormat is pure virtual: false false
// QSurfaceFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSurfaceFormat_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSurfaceFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSurfaceFormat_t qt_meta_stringdata_MyQSurfaceFormat = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQSurfaceFormat"
  },
  "MyQSurfaceFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSurfaceFormat[] = {
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
class Q_DECL_EXPORT MyQSurfaceFormat : public QSurfaceFormat {
public:
  virtual ~MyQSurfaceFormat() {}
// void QSurfaceFormat()
MyQSurfaceFormat() : QSurfaceFormat() {}
// void QSurfaceFormat(QSurfaceFormat::FormatOptions)
MyQSurfaceFormat(QFlags<QSurfaceFormat::FormatOption> options) : QSurfaceFormat(options) {}
// void QSurfaceFormat(const QSurfaceFormat &)
MyQSurfaceFormat(const QSurfaceFormat & other) : QSurfaceFormat(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsurfaceformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:138
// [1] bool stereo() const
// (12)qm3404121054 (29)_ZNK14QSurfaceFormat6stereoEv
//static
/*void qm3404121054()*/ {
  ;
  (void) ((QSurfaceFormat*)this_)->stereo();
   auto xptr = (bool (QSurfaceFormat::*)() const ) &QSurfaceFormat::stereo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QSurfaceFormatD2Ev(void *this_)*/ {
  delete (QSurfaceFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsurfaceformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
