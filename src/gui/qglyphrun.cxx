//  header block begin

// /usr/include/qt/QtGui/qglyphrun.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qglyphrun.h>
#include <QtGui>
#include "callback_inherit.h"

// QGlyphRun is pure virtual: false false
// QGlyphRun has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGlyphRun_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGlyphRun_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGlyphRun_t qt_meta_stringdata_MyQGlyphRun = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQGlyphRun"
  },
  "MyQGlyphRun"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGlyphRun[] = {
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
class Q_DECL_EXPORT MyQGlyphRun : public QGlyphRun {
public:
  virtual ~MyQGlyphRun() {}
// void QGlyphRun()
MyQGlyphRun() : QGlyphRun() {}
// void QGlyphRun(const QGlyphRun &)
MyQGlyphRun(const QGlyphRun & other) : QGlyphRun(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qglyphrun(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:69
// [8] QGlyphRun & operator=(QGlyphRun &&) 
// (11)qm286364463 (19)_ZN9QGlyphRunaSEOS_
//static
/*void qm286364463(QGlyphRun && other)*/ {
  QGlyphRun && other =  static_cast<QGlyphRun &&>(*(QGlyphRun *)this_);
  (void) ((QGlyphRun*)this_)->operator=(other);
  // auto xptr = (QGlyphRun & (QGlyphRun::*)(QGlyphRun&&) ) &QGlyphRun::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:73
// [-2] void swap(QGlyphRun &) 
// (12)qm2212154788 (22)_ZN9QGlyphRun4swapERS_
//static
/*void qm2212154788(QGlyphRun & other)*/ {
  QGlyphRun & other = *(QGlyphRun *)this_;
  (void) ((QGlyphRun*)this_)->swap(other);
   auto xptr = (void (QGlyphRun::*)(QGlyphRun&) ) &QGlyphRun::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:91
// [1] bool operator!=(const QGlyphRun &) const
// (11)qm840245464 (21)_ZNK9QGlyphRunneERKS_
//static
/*void qm840245464(const QGlyphRun & other)*/ {
  const QGlyphRun & other = *(const QGlyphRun *)this_;
  (void) ((QGlyphRun*)this_)->operator!=(other);
  // auto xptr = (bool (QGlyphRun::*)(QGlyphRun const&) const ) &QGlyphRun::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QGlyphRunD2Ev(void *this_)*/ {
  delete (QGlyphRun*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qglyphrun
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
