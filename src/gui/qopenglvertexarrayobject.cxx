//  header block begin
// since 0x050100
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglvertexarrayobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVertexArrayObject is pure virtual: false
// QOpenGLVertexArrayObject has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQOpenGLVertexArrayObject : public QOpenGLVertexArrayObject {
public:
  virtual ~MyQOpenGLVertexArrayObject() {}
// void QOpenGLVertexArrayObject(QObject *)
MyQOpenGLVertexArrayObject(QObject * parent) : QOpenGLVertexArrayObject(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QOpenGLVertexArrayObject10metaObjectEv(void *this_) {
  return (void*)((QOpenGLVertexArrayObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLVertexArrayObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLVertexArrayObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN24QOpenGLVertexArrayObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLVertexArrayObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLVertexArrayObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLVertexArrayObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLVertexArrayObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLVertexArrayObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:59
// [-2] void QOpenGLVertexArrayObject(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLVertexArrayObjectC2EP7QObject(QObject * parent) {
  return  new QOpenGLVertexArrayObject(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:60
// [-2] void ~QOpenGLVertexArrayObject()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLVertexArrayObjectD2Ev(void *this_) {
  delete (QOpenGLVertexArrayObject*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:62
// [1] bool create()
extern "C" Q_DECL_EXPORT
bool C_ZN24QOpenGLVertexArrayObject6createEv(void *this_) {
  return (bool)((QOpenGLVertexArrayObject*)this_)->create();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:63
// [-2] void destroy()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLVertexArrayObject7destroyEv(void *this_) {
  ((QOpenGLVertexArrayObject*)this_)->destroy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:64
// [1] bool isCreated()
extern "C" Q_DECL_EXPORT
bool C_ZNK24QOpenGLVertexArrayObject9isCreatedEv(void *this_) {
  return (bool)((QOpenGLVertexArrayObject*)this_)->isCreated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:65
// [4] GLuint objectId()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK24QOpenGLVertexArrayObject8objectIdEv(void *this_) {
  return (GLuint)((QOpenGLVertexArrayObject*)this_)->objectId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:66
// [-2] void bind()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLVertexArrayObject4bindEv(void *this_) {
  ((QOpenGLVertexArrayObject*)this_)->bind();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:67
// [-2] void release()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLVertexArrayObject7releaseEv(void *this_) {
  ((QOpenGLVertexArrayObject*)this_)->release();
}

//  main block end
