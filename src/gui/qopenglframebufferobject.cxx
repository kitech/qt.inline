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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:78
// [-2] void QOpenGLFramebufferObject(const QSize &, GLenum) 
// (12)qm1883888886 (41)_ZN24QOpenGLFramebufferObjectC2ERK5QSizej
/*void* qm1883888886(const QSize & size, unsigned int target)*/{
  const QSize & size = *(const QSize *)this_; unsigned int target = *(unsigned int*)this_;
  this_ =  new QOpenGLFramebufferObject(size, target);
  this_ =  new MyQOpenGLFramebufferObject(size, target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:79
// [-2] void QOpenGLFramebufferObject(int, int, GLenum) 
// (12)qm2235667608 (35)_ZN24QOpenGLFramebufferObjectC2Eiij
/*void* qm2235667608(int width, int height, unsigned int target)*/{
  int width = *(int*)this_; int height = *(int*)this_; unsigned int target = *(unsigned int*)this_;
  this_ =  new QOpenGLFramebufferObject(width, height, target);
  this_ =  new MyQOpenGLFramebufferObject(width, height, target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:81
// [-2] void QOpenGLFramebufferObject(const QSize &, QOpenGLFramebufferObject::Attachment, GLenum, GLenum) 
// (12)qm1737719895 (58)_ZN24QOpenGLFramebufferObjectC2ERK5QSizeNS_10AttachmentEjj
/*void* qm1737719895(const QSize & size, QOpenGLFramebufferObject::Attachment attachment, unsigned int target, unsigned int internalFormat)*/{
  const QSize & size = *(const QSize *)this_; QOpenGLFramebufferObject::Attachment attachment = *(QOpenGLFramebufferObject::Attachment*)this_; unsigned int target = *(unsigned int*)this_; unsigned int internalFormat = *(unsigned int*)this_;
  this_ =  new QOpenGLFramebufferObject(size, attachment, target, internalFormat);
  this_ =  new MyQOpenGLFramebufferObject(size, attachment, target, internalFormat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:83
// [-2] void QOpenGLFramebufferObject(int, int, QOpenGLFramebufferObject::Attachment, GLenum, GLenum) 
// (11)qm705280055 (52)_ZN24QOpenGLFramebufferObjectC2EiiNS_10AttachmentEjj
/*void* qm705280055(int width, int height, QOpenGLFramebufferObject::Attachment attachment, unsigned int target, unsigned int internalFormat)*/{
  int width = *(int*)this_; int height = *(int*)this_; QOpenGLFramebufferObject::Attachment attachment = *(QOpenGLFramebufferObject::Attachment*)this_; unsigned int target = *(unsigned int*)this_; unsigned int internalFormat = *(unsigned int*)this_;
  this_ =  new QOpenGLFramebufferObject(width, height, attachment, target, internalFormat);
  this_ =  new MyQOpenGLFramebufferObject(width, height, attachment, target, internalFormat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:86
// [-2] void QOpenGLFramebufferObject(const QSize &, const QOpenGLFramebufferObjectFormat &) 
// (12)qm2927061286 (74)_ZN24QOpenGLFramebufferObjectC2ERK5QSizeRK30QOpenGLFramebufferObjectFormat
/*void* qm2927061286(const QSize & size, const QOpenGLFramebufferObjectFormat & format)*/{
  const QSize & size = *(const QSize *)this_; const QOpenGLFramebufferObjectFormat & format = *(const QOpenGLFramebufferObjectFormat *)this_;
  this_ =  new QOpenGLFramebufferObject(size, format);
  this_ =  new MyQOpenGLFramebufferObject(size, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:87
// [-2] void QOpenGLFramebufferObject(int, int, const QOpenGLFramebufferObjectFormat &) 
// (12)qm1498378551 (68)_ZN24QOpenGLFramebufferObjectC2EiiRK30QOpenGLFramebufferObjectFormat
/*void* qm1498378551(int width, int height, const QOpenGLFramebufferObjectFormat & format)*/{
  int width = *(int*)this_; int height = *(int*)this_; const QOpenGLFramebufferObjectFormat & format = *(const QOpenGLFramebufferObjectFormat *)this_;
  this_ =  new QOpenGLFramebufferObject(width, height, format);
  this_ =  new MyQOpenGLFramebufferObject(width, height, format);
}

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
