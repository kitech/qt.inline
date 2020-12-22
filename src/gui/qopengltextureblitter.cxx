//  header block begin

// /usr/include/qt/QtGui/qopengltextureblitter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengltextureblitter.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLTextureBlitter is pure virtual: false false
// QOpenGLTextureBlitter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLTextureBlitter_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLTextureBlitter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLTextureBlitter_t qt_meta_stringdata_MyQOpenGLTextureBlitter = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQOpenGLTextureBlitter"
  },
  "MyQOpenGLTextureBlitter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLTextureBlitter[] = {
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
class Q_DECL_EXPORT MyQOpenGLTextureBlitter : public QOpenGLTextureBlitter {
public:
  virtual ~MyQOpenGLTextureBlitter() {}
// void QOpenGLTextureBlitter()
MyQOpenGLTextureBlitter() : QOpenGLTextureBlitter() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopengltextureblitter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:58
// [-2] void QOpenGLTextureBlitter() 
// (12)qm1480619625 (30)_ZN21QOpenGLTextureBlitterC2Ev
/*void* qm1480619625()*/{
  ;
  this_ =  new QOpenGLTextureBlitter();
  this_ =  new MyQOpenGLTextureBlitter();
}


/*void C_ZN21QOpenGLTextureBlitterD2Ev(void *this_)*/ {
  delete (QOpenGLTextureBlitter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopengltextureblitter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
