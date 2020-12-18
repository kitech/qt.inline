//  header block begin

// /usr/include/qt/QtGui/qopenglframebufferobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglframebufferobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLFramebufferObject is pure virtual: false false
// QOpenGLFramebufferObject has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLFramebufferObject_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLFramebufferObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLFramebufferObject_t qt_meta_stringdata_MyQOpenGLFramebufferObject = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQOpenGLFramebufferObject"
  },
  "MyQOpenGLFramebufferObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLFramebufferObject[] = {
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
class Q_DECL_EXPORT MyQOpenGLFramebufferObject : public QOpenGLFramebufferObject {
public:
  virtual ~MyQOpenGLFramebufferObject() {}
// void QOpenGLFramebufferObject(const QSize &, GLenum)
MyQOpenGLFramebufferObject(const QSize & size, GLenum target) : QOpenGLFramebufferObject(size, target) {}
// void QOpenGLFramebufferObject(int, int, GLenum)
MyQOpenGLFramebufferObject(int width, int height, GLenum target) : QOpenGLFramebufferObject(width, height, target) {}
// void QOpenGLFramebufferObject(const QSize &, QOpenGLFramebufferObject::Attachment, GLenum, GLenum)
MyQOpenGLFramebufferObject(const QSize & size, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internalFormat) : QOpenGLFramebufferObject(size, attachment, target, internalFormat) {}
// void QOpenGLFramebufferObject(int, int, QOpenGLFramebufferObject::Attachment, GLenum, GLenum)
MyQOpenGLFramebufferObject(int width, int height, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internalFormat) : QOpenGLFramebufferObject(width, height, attachment, target, internalFormat) {}
// void QOpenGLFramebufferObject(const QSize &, const QOpenGLFramebufferObjectFormat &)
MyQOpenGLFramebufferObject(const QSize & size, const QOpenGLFramebufferObjectFormat & format) : QOpenGLFramebufferObject(size, format) {}
// void QOpenGLFramebufferObject(int, int, const QOpenGLFramebufferObjectFormat &)
MyQOpenGLFramebufferObject(int width, int height, const QOpenGLFramebufferObjectFormat & format) : QOpenGLFramebufferObject(width, height, format) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglframebufferobject(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:101
// [4] int width() const
// (11)qm218357719 (38)_ZNK24QOpenGLFramebufferObject5widthEv
//static
/*void qm218357719()*/ {
  ;
  (void) ((QOpenGLFramebufferObject*)this_)->width();
   auto xptr = (int (QOpenGLFramebufferObject::*)() const ) &QOpenGLFramebufferObject::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:102
// [4] int height() const
// (12)qm1651777025 (39)_ZNK24QOpenGLFramebufferObject6heightEv
//static
/*void qm1651777025()*/ {
  ;
  (void) ((QOpenGLFramebufferObject*)this_)->height();
   auto xptr = (int (QOpenGLFramebufferObject::*)() const ) &QOpenGLFramebufferObject::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QOpenGLFramebufferObjectD2Ev(void *this_)*/ {
  delete (QOpenGLFramebufferObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglframebufferobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
