//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qopenglframebufferobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglframebufferobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLFramebufferObjectFormat is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:157
// [-2] void QOpenGLFramebufferObjectFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN30QOpenGLFramebufferObjectFormatC2Ev() {
  return  new QOpenGLFramebufferObjectFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:158
// [-2] void QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN30QOpenGLFramebufferObjectFormatC2ERKS_(QOpenGLFramebufferObjectFormat* other) {
  return  new QOpenGLFramebufferObjectFormat(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:159
// [8] QOpenGLFramebufferObjectFormat & operator=(const QOpenGLFramebufferObjectFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN30QOpenGLFramebufferObjectFormataSERKS_(void *this_, QOpenGLFramebufferObjectFormat* other) {
  auto& rv = ((QOpenGLFramebufferObjectFormat*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:160
// [-2] void ~QOpenGLFramebufferObjectFormat()
extern "C" Q_DECL_EXPORT
void C_ZN30QOpenGLFramebufferObjectFormatD2Ev(void *this_) {
  delete (QOpenGLFramebufferObjectFormat*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:162
// [-2] void setSamples(int)
extern "C" Q_DECL_EXPORT
void C_ZN30QOpenGLFramebufferObjectFormat10setSamplesEi(void *this_, int samples) {
  ((QOpenGLFramebufferObjectFormat*)this_)->setSamples(samples);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:163
// [4] int samples()
extern "C" Q_DECL_EXPORT
int C_ZNK30QOpenGLFramebufferObjectFormat7samplesEv(void *this_) {
  return (int)((QOpenGLFramebufferObjectFormat*)this_)->samples();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:165
// [-2] void setMipmap(bool)
extern "C" Q_DECL_EXPORT
void C_ZN30QOpenGLFramebufferObjectFormat9setMipmapEb(void *this_, bool enabled) {
  ((QOpenGLFramebufferObjectFormat*)this_)->setMipmap(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:166
// [1] bool mipmap()
extern "C" Q_DECL_EXPORT
bool C_ZNK30QOpenGLFramebufferObjectFormat6mipmapEv(void *this_) {
  return (bool)((QOpenGLFramebufferObjectFormat*)this_)->mipmap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:168
// [-2] void setAttachment(QOpenGLFramebufferObject::Attachment)
extern "C" Q_DECL_EXPORT
void C_ZN30QOpenGLFramebufferObjectFormat13setAttachmentEN24QOpenGLFramebufferObject10AttachmentE(void *this_, QOpenGLFramebufferObject::Attachment attachment) {
  ((QOpenGLFramebufferObjectFormat*)this_)->setAttachment(attachment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:169
// [4] QOpenGLFramebufferObject::Attachment attachment()
extern "C" Q_DECL_EXPORT
QOpenGLFramebufferObject::Attachment C_ZNK30QOpenGLFramebufferObjectFormat10attachmentEv(void *this_) {
  return (QOpenGLFramebufferObject::Attachment)((QOpenGLFramebufferObjectFormat*)this_)->attachment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:171
// [-2] void setTextureTarget(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN30QOpenGLFramebufferObjectFormat16setTextureTargetEj(void *this_, GLenum target) {
  ((QOpenGLFramebufferObjectFormat*)this_)->setTextureTarget(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:172
// [4] GLenum textureTarget()
extern "C" Q_DECL_EXPORT
GLenum C_ZNK30QOpenGLFramebufferObjectFormat13textureTargetEv(void *this_) {
  return (GLenum)((QOpenGLFramebufferObjectFormat*)this_)->textureTarget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:174
// [-2] void setInternalTextureFormat(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN30QOpenGLFramebufferObjectFormat24setInternalTextureFormatEj(void *this_, GLenum internalTextureFormat) {
  ((QOpenGLFramebufferObjectFormat*)this_)->setInternalTextureFormat(internalTextureFormat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:175
// [4] GLenum internalTextureFormat()
extern "C" Q_DECL_EXPORT
GLenum C_ZNK30QOpenGLFramebufferObjectFormat21internalTextureFormatEv(void *this_) {
  return (GLenum)((QOpenGLFramebufferObjectFormat*)this_)->internalTextureFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:177
// [1] bool operator==(const QOpenGLFramebufferObjectFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK30QOpenGLFramebufferObjectFormateqERKS_(void *this_, QOpenGLFramebufferObjectFormat* other) {
  return (bool)((QOpenGLFramebufferObjectFormat*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:178
// [1] bool operator!=(const QOpenGLFramebufferObjectFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK30QOpenGLFramebufferObjectFormatneERKS_(void *this_, QOpenGLFramebufferObjectFormat* other) {
  return (bool)((QOpenGLFramebufferObjectFormat*)this_)->operator!=(*other);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
