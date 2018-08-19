//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qopenglcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglcontext.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLContextGroup is pure virtual: false
// QOpenGLContextGroup has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQOpenGLContextGroup : public QOpenGLContextGroup {
public:
  virtual ~MyQOpenGLContextGroup() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QOpenGLContextGroup10metaObjectEv(void *this_) {
  return (void*)((QOpenGLContextGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLContextGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLContextGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QOpenGLContextGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLContextGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLContextGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLContextGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLContextGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLContextGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:131
// [-2] void ~QOpenGLContextGroup()
extern "C" Q_DECL_EXPORT
void C_ZN19QOpenGLContextGroupD2Ev(void *this_) {
  delete (QOpenGLContextGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:133
// [-2] QList<QOpenGLContext *> shares()
extern "C" Q_DECL_EXPORT
QList<QOpenGLContext *>* C_ZNK19QOpenGLContextGroup6sharesEv(void *this_) {
  auto rv = ((QOpenGLContextGroup*)this_)->shares();
return new QList<QOpenGLContext *>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:135
// [8] QOpenGLContextGroup * currentContextGroup()
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLContextGroup19currentContextGroupEv() {
  return (void*)QOpenGLContextGroup::currentContextGroup();
}

//  main block end
