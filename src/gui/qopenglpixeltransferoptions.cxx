//  header block begin

// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglpixeltransferoptions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLPixelTransferOptions is pure virtual: false false
// QOpenGLPixelTransferOptions has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLPixelTransferOptions_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLPixelTransferOptions_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLPixelTransferOptions_t qt_meta_stringdata_MyQOpenGLPixelTransferOptions = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQOpenGLPixelTransferOptions"
  },
  "MyQOpenGLPixelTransferOptions"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLPixelTransferOptions[] = {
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
class Q_DECL_EXPORT MyQOpenGLPixelTransferOptions : public QOpenGLPixelTransferOptions {
public:
  virtual ~MyQOpenGLPixelTransferOptions() {}
// void QOpenGLPixelTransferOptions()
MyQOpenGLPixelTransferOptions() : QOpenGLPixelTransferOptions() {}
// void QOpenGLPixelTransferOptions(const QOpenGLPixelTransferOptions &)
MyQOpenGLPixelTransferOptions(const QOpenGLPixelTransferOptions & arg0) : QOpenGLPixelTransferOptions(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglpixeltransferoptions(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:58
// [8] QOpenGLPixelTransferOptions & operator=(QOpenGLPixelTransferOptions &&) 
// (12)qm2457036627 (38)_ZN27QOpenGLPixelTransferOptionsaSEOS_
//static
/*void qm2457036627(QOpenGLPixelTransferOptions && other)*/ {
  QOpenGLPixelTransferOptions && other =  static_cast<QOpenGLPixelTransferOptions &&>(*(QOpenGLPixelTransferOptions *)this_);
  (void) ((QOpenGLPixelTransferOptions*)this_)->operator=(other);
  // auto xptr = (QOpenGLPixelTransferOptions & (QOpenGLPixelTransferOptions::*)(QOpenGLPixelTransferOptions&&) ) &QOpenGLPixelTransferOptions::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:63
// [-2] void swap(QOpenGLPixelTransferOptions &) 
// (11)qm224229598 (41)_ZN27QOpenGLPixelTransferOptions4swapERS_
//static
/*void qm224229598(QOpenGLPixelTransferOptions & other)*/ {
  QOpenGLPixelTransferOptions & other = *(QOpenGLPixelTransferOptions *)this_;
  (void) ((QOpenGLPixelTransferOptions*)this_)->swap(other);
   auto xptr = (void (QOpenGLPixelTransferOptions::*)(QOpenGLPixelTransferOptions&) ) &QOpenGLPixelTransferOptions::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QOpenGLPixelTransferOptionsD2Ev(void *this_)*/ {
  delete (QOpenGLPixelTransferOptions*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglpixeltransferoptions
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
