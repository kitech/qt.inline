//  header block begin
// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVersionFunctionsBackend is pure virtual: false
// QOpenGLVersionFunctionsBackend has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQOpenGLVersionFunctionsBackend : public QOpenGLVersionFunctionsBackend {
public:
  virtual ~MyQOpenGLVersionFunctionsBackend() {}
// void QOpenGLVersionFunctionsBackend(QOpenGLContext *)
MyQOpenGLVersionFunctionsBackend(QOpenGLContext * ctx) : QOpenGLVersionFunctionsBackend(ctx) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:171
// [-2] void QOpenGLVersionFunctionsBackend(QOpenGLContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN30QOpenGLVersionFunctionsBackendC2EP14QOpenGLContext(QOpenGLContext * ctx) {
  return  new QOpenGLVersionFunctionsBackend(ctx);
}


extern "C" Q_DECL_EXPORT
void C_ZN30QOpenGLVersionFunctionsBackendD2Ev(void *this_) {
  delete (QOpenGLVersionFunctionsBackend*)(this_);
}
//  main block end
