// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qopenglcontext.h
// dst-file: /src/gui/qopenglcontext.cxx
//

// header block begin =>
#include <qopenglcontext.h>

extern "C" {

// ~QOpenGLVersionProfile()
void dedtor_ZN21QOpenGLVersionProfileD0Ev(QOpenGLVersionProfile* that)
{
  QOpenGLVersionProfile* rthis = (QOpenGLVersionProfile*)that;
  delete rthis;
}

// QOpenGLVersionProfile(const class QSurfaceFormat &)
QOpenGLVersionProfile* dector_ZN21QOpenGLVersionProfileC1ERK14QSurfaceFormat(const QSurfaceFormat & format)
{
  // static_assert(sizeof(QOpenGLVersionProfile) == 32, "tyszerr");
  QOpenGLVersionProfile* rthis = new QOpenGLVersionProfile(format);
  return rthis;
}

// QOpenGLVersionProfile(const class QOpenGLVersionProfile &)
QOpenGLVersionProfile* dector_ZN21QOpenGLVersionProfileC1ERKS_(const QOpenGLVersionProfile & other)
{
  // static_assert(sizeof(QOpenGLVersionProfile) == 32, "tyszerr");
  QOpenGLVersionProfile* rthis = new QOpenGLVersionProfile(other);
  return rthis;
}

// QOpenGLVersionProfile()
QOpenGLVersionProfile* dector_ZN21QOpenGLVersionProfileC1Ev()
{
  // static_assert(sizeof(QOpenGLVersionProfile) == 32, "tyszerr");
  QOpenGLVersionProfile* rthis = new QOpenGLVersionProfile();
  return rthis;
}

// QOpenGLContext(class QObject *)
QOpenGLContext* dector_ZN14QOpenGLContextC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QOpenGLContext) == 32, "tyszerr");
  QOpenGLContext* rthis = new QOpenGLContext(parent);
  return rthis;
}

// ~QOpenGLContext()
void dedtor_ZN14QOpenGLContextD0Ev(QOpenGLContext* that)
{
  QOpenGLContext* rthis = (QOpenGLContext*)that;
  delete rthis;
}

// ~QOpenGLContextGroup()
void dedtor_ZN19QOpenGLContextGroupD0Ev(QOpenGLContextGroup* that)
{
  QOpenGLContextGroup* rthis = (QOpenGLContextGroup*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

