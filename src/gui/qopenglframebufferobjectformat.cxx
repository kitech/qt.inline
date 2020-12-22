//  header block begin

// /usr/include/qt/QtGui/qopenglframebufferobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglframebufferobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLFramebufferObjectFormat is pure virtual: false false
// QOpenGLFramebufferObjectFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLFramebufferObjectFormat_t {
  QByteArrayData data[1];
  char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLFramebufferObjectFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLFramebufferObjectFormat_t qt_meta_stringdata_MyQOpenGLFramebufferObjectFormat = {
   {
  QT_MOC_LITERAL(0, 0, 32), // "MyQOpenGLFramebufferObjectFormat"
  },
  "MyQOpenGLFramebufferObjectFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLFramebufferObjectFormat[] = {
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
class Q_DECL_EXPORT MyQOpenGLFramebufferObjectFormat : public QOpenGLFramebufferObjectFormat {
public:
  virtual ~MyQOpenGLFramebufferObjectFormat() {}
// void QOpenGLFramebufferObjectFormat()
MyQOpenGLFramebufferObjectFormat() : QOpenGLFramebufferObjectFormat() {}
// void QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat &)
MyQOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat & other) : QOpenGLFramebufferObjectFormat(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglframebufferobjectformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:167
// [-2] void QOpenGLFramebufferObjectFormat() 
// (12)qm2099681631 (39)_ZN30QOpenGLFramebufferObjectFormatC2Ev
/*void* qm2099681631()*/{
  ;
  this_ =  new QOpenGLFramebufferObjectFormat();
  this_ =  new MyQOpenGLFramebufferObjectFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:168
// [-2] void QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat &) 
// (12)qm3555859702 (42)_ZN30QOpenGLFramebufferObjectFormatC2ERKS_
/*void* qm3555859702(const QOpenGLFramebufferObjectFormat & other)*/{
  const QOpenGLFramebufferObjectFormat & other = *(const QOpenGLFramebufferObjectFormat *)this_;
  this_ =  new QOpenGLFramebufferObjectFormat(other);
  this_ =  new MyQOpenGLFramebufferObjectFormat(other);
}


/*void C_ZN30QOpenGLFramebufferObjectFormatD2Ev(void *this_)*/ {
  delete (QOpenGLFramebufferObjectFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglframebufferobjectformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
