// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qopenglvertexarrayobject.h
// dst-file: /src/gui/qopenglvertexarrayobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglvertexarrayobject.h>


// <= header block end

// main block begin =>
void __keep_qopenglvertexarrayobject_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLVertexArrayObject_Class_Size()
{
  return sizeof(QOpenGLVertexArrayObject);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopenglvertexarrayobject.h', line 59, column 12>
//   // proto:  GLuint QOpenGLVertexArrayObject::objectId();
// _ZNK24QOpenGLVertexArrayObject8objectIdEv objectId()
extern "C"
unsigned int
C_ZNK24QOpenGLVertexArrayObject8objectIdEv(void *qthis) {
  auto ret =
  ((QOpenGLVertexArrayObject*)qthis)->objectId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglvertexarrayobject.h', line 61, column 10>
//   // proto:  void QOpenGLVertexArrayObject::release();
// _ZN24QOpenGLVertexArrayObject7releaseEv release()
extern "C"
void
C_ZN24QOpenGLVertexArrayObject7releaseEv(void *qthis) {
  ((QOpenGLVertexArrayObject*)qthis)->release();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglvertexarrayobject.h', line 50, column 5>
//   // proto:  const QMetaObject * QOpenGLVertexArrayObject::metaObject();
// _ZNK24QOpenGLVertexArrayObject10metaObjectEv metaObject()
extern "C"
void*
C_ZNK24QOpenGLVertexArrayObject10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLVertexArrayObject*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglvertexarrayobject.h', line 53, column 14>
//   // proto:  void QOpenGLVertexArrayObject::QOpenGLVertexArrayObject(QObject * parent);
extern "C"
QOpenGLVertexArrayObject*
C_ZN24QOpenGLVertexArrayObjectC2EP7QObject(QObject * arg1) {
  auto ret = new QOpenGLVertexArrayObject(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglvertexarrayobject.h', line 60, column 10>
//   // proto:  void QOpenGLVertexArrayObject::bind();
// _ZN24QOpenGLVertexArrayObject4bindEv bind()
extern "C"
void
C_ZN24QOpenGLVertexArrayObject4bindEv(void *qthis) {
  ((QOpenGLVertexArrayObject*)qthis)->bind();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglvertexarrayobject.h', line 58, column 10>
//   // proto:  bool QOpenGLVertexArrayObject::isCreated();
// _ZNK24QOpenGLVertexArrayObject9isCreatedEv isCreated()
extern "C"
bool
C_ZNK24QOpenGLVertexArrayObject9isCreatedEv(void *qthis) {
  auto ret =
  ((QOpenGLVertexArrayObject*)qthis)->isCreated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglvertexarrayobject.h', line 57, column 10>
//   // proto:  void QOpenGLVertexArrayObject::destroy();
// _ZN24QOpenGLVertexArrayObject7destroyEv destroy()
extern "C"
void
C_ZN24QOpenGLVertexArrayObject7destroyEv(void *qthis) {
  ((QOpenGLVertexArrayObject*)qthis)->destroy();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglvertexarrayobject.h', line 56, column 10>
//   // proto:  bool QOpenGLVertexArrayObject::create();
// _ZN24QOpenGLVertexArrayObject6createEv create()
extern "C"
bool
C_ZN24QOpenGLVertexArrayObject6createEv(void *qthis) {
  auto ret =
  ((QOpenGLVertexArrayObject*)qthis)->create();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QOpenGLVertexArrayObject::~QOpenGLVertexArrayObject();
extern "C"
void C_ZN24QOpenGLVertexArrayObjectD2Ev(void *qthis) {
  delete (QOpenGLVertexArrayObject*)qthis;
}
// <= ext block end

// body block begin =>
// QOpenGLVertexArrayObject_SlotProxy here
class QOpenGLVertexArrayObject_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLVertexArrayObject_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qopenglvertexarrayobject.moc"

extern "C" {
  QOpenGLVertexArrayObject_SlotProxy* QOpenGLVertexArrayObject_SlotProxy_new()
  {
    return new QOpenGLVertexArrayObject_SlotProxy();
  }
};

// <= body block end

