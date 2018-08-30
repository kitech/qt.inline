//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qopenglbuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglbuffer.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLBuffer is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:66
// [-2] void QOpenGLBuffer()
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLBufferC2Ev() {
  return  new QOpenGLBuffer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:67
// [-2] void QOpenGLBuffer(QOpenGLBuffer::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLBufferC2ENS_4TypeE(QOpenGLBuffer::Type type_) {
  return  new QOpenGLBuffer(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:68
// [-2] void QOpenGLBuffer(const QOpenGLBuffer &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLBufferC2ERKS_(QOpenGLBuffer* other) {
  return  new QOpenGLBuffer(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:69
// [-2] void ~QOpenGLBuffer()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLBufferD2Ev(void *this_) {
  delete (QOpenGLBuffer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:71
// [8] QOpenGLBuffer & operator=(const QOpenGLBuffer &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLBufferaSERKS_(void *this_, QOpenGLBuffer* other) {
  auto& rv = ((QOpenGLBuffer*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:104
// [4] QOpenGLBuffer::Type type()
extern "C" Q_DECL_EXPORT
QOpenGLBuffer::Type C_ZNK13QOpenGLBuffer4typeEv(void *this_) {
  return (QOpenGLBuffer::Type)((QOpenGLBuffer*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:106
// [4] QOpenGLBuffer::UsagePattern usagePattern()
extern "C" Q_DECL_EXPORT
QOpenGLBuffer::UsagePattern C_ZNK13QOpenGLBuffer12usagePatternEv(void *this_) {
  return (QOpenGLBuffer::UsagePattern)((QOpenGLBuffer*)this_)->usagePattern();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:107
// [-2] void setUsagePattern(QOpenGLBuffer::UsagePattern)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLBuffer15setUsagePatternENS_12UsagePatternE(void *this_, QOpenGLBuffer::UsagePattern value) {
  ((QOpenGLBuffer*)this_)->setUsagePattern(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:109
// [1] bool create()
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLBuffer6createEv(void *this_) {
  return (bool)((QOpenGLBuffer*)this_)->create();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:110
// [1] bool isCreated()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QOpenGLBuffer9isCreatedEv(void *this_) {
  return (bool)((QOpenGLBuffer*)this_)->isCreated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:112
// [-2] void destroy()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLBuffer7destroyEv(void *this_) {
  ((QOpenGLBuffer*)this_)->destroy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:114
// [1] bool bind()
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLBuffer4bindEv(void *this_) {
  return (bool)((QOpenGLBuffer*)this_)->bind();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:115
// [-2] void release()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLBuffer7releaseEv(void *this_) {
  ((QOpenGLBuffer*)this_)->release();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:117
// [-2] void release(QOpenGLBuffer::Type)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLBuffer7releaseENS_4TypeE(QOpenGLBuffer::Type type_) {
  QOpenGLBuffer::release(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:119
// [4] GLuint bufferId()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK13QOpenGLBuffer8bufferIdEv(void *this_) {
  return (GLuint)((QOpenGLBuffer*)this_)->bufferId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:121
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK13QOpenGLBuffer4sizeEv(void *this_) {
  return (int)((QOpenGLBuffer*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:123
// [1] bool read(int, void *, int)
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLBuffer4readEiPvi(void *this_, int offset, void * data, int count) {
  return (bool)((QOpenGLBuffer*)this_)->read(offset, data, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:124
// [-2] void write(int, const void *, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLBuffer5writeEiPKvi(void *this_, int offset, const void * data, int count) {
  ((QOpenGLBuffer*)this_)->write(offset, data, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:126
// [-2] void allocate(const void *, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLBuffer8allocateEPKvi(void *this_, const void * data, int count) {
  ((QOpenGLBuffer*)this_)->allocate(data, count);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:127
// [-2] void allocate(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLBuffer8allocateEi(void *this_, int count) {
  ((QOpenGLBuffer*)this_)->allocate(count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:129
// [8] void * map(QOpenGLBuffer::Access)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLBuffer3mapENS_6AccessE(void *this_, QOpenGLBuffer::Access access) {
  return (void*)((QOpenGLBuffer*)this_)->map(access);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:130
// [8] void * mapRange(int, int, QOpenGLBuffer::RangeAccessFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLBuffer8mapRangeEii6QFlagsINS_15RangeAccessFlagEE(void *this_, int offset, int count, QFlags<QOpenGLBuffer::RangeAccessFlag> access) {
  return (void*)((QOpenGLBuffer*)this_)->mapRange(offset, count, access);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:131
// [1] bool unmap()
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLBuffer5unmapEv(void *this_) {
  return (bool)((QOpenGLBuffer*)this_)->unmap();
}

//  main block end
