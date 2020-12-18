//  header block begin

// /usr/include/qt/QtGui/qopenglbuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglbuffer.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLBuffer is pure virtual: false false
// QOpenGLBuffer has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLBuffer_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLBuffer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLBuffer_t qt_meta_stringdata_MyQOpenGLBuffer = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQOpenGLBuffer"
  },
  "MyQOpenGLBuffer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLBuffer[] = {
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
class Q_DECL_EXPORT MyQOpenGLBuffer : public QOpenGLBuffer {
public:
  virtual ~MyQOpenGLBuffer() {}
// void QOpenGLBuffer()
MyQOpenGLBuffer() : QOpenGLBuffer() {}
// void QOpenGLBuffer(QOpenGLBuffer::Type)
MyQOpenGLBuffer(QOpenGLBuffer::Type type_) : QOpenGLBuffer(type_) {}
// void QOpenGLBuffer(const QOpenGLBuffer &)
MyQOpenGLBuffer(const QOpenGLBuffer & other) : QOpenGLBuffer(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglbuffer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:127
// [-2] void allocate(int) 
// (11)qm332305949 (29)_ZN13QOpenGLBuffer8allocateEi
//static
/*void qm332305949(int count)*/ {
  int count = *(int*)this_;
  (void) ((QOpenGLBuffer*)this_)->allocate(count);
   auto xptr = (void (QOpenGLBuffer::*)(int) ) &QOpenGLBuffer::allocate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QOpenGLBufferD2Ev(void *this_)*/ {
  delete (QOpenGLBuffer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglbuffer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
