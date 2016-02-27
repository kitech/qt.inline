// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qsurfaceformat.h
// dst-file: /src/gui/qsurfaceformat.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsurfaceformat.h>


#include <qpair.h>
// <= header block end

// main block begin =>
void __keep_qsurfaceformat_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 120, column 10>
//   // proto:  bool QSurfaceFormat::stereo();
if (true) {
  auto f = [](QSurfaceFormat flythis) {
    ((QSurfaceFormat*)0)->stereo();
    flythis.stereo();
  };
  if (f == nullptr){}
}
// _ZNK14QSurfaceFormat6stereoEv stereo()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSurfaceFormat_Class_Size()
{
  return sizeof(QSurfaceFormat);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 137, column 27>
//   // proto: static QSurfaceFormat QSurfaceFormat::defaultFormat();
// _ZN14QSurfaceFormat13defaultFormatEv defaultFormat()
extern "C"
QSurfaceFormat*
C_ZN14QSurfaceFormat13defaultFormatEv() {
  auto ret =
  QSurfaceFormat::defaultFormat();
  return new QSurfaceFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 94, column 10>
//   // proto:  void QSurfaceFormat::setAlphaBufferSize(int size);
// _ZN14QSurfaceFormat18setAlphaBufferSizeEi setAlphaBufferSize(int)
extern "C"
void
C_ZN14QSurfaceFormat18setAlphaBufferSizeEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setAlphaBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 114, column 10>
//   // proto:  void QSurfaceFormat::setMinorVersion(int minorVersion);
// _ZN14QSurfaceFormat15setMinorVersionEi setMinorVersion(int)
extern "C"
void
C_ZN14QSurfaceFormat15setMinorVersionEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setMinorVersion(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 86, column 9>
//   // proto:  int QSurfaceFormat::stencilBufferSize();
// _ZNK14QSurfaceFormat17stencilBufferSizeEv stencilBufferSize()
extern "C"
int
C_ZNK14QSurfaceFormat17stencilBufferSizeEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->stencilBufferSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 88, column 10>
//   // proto:  void QSurfaceFormat::setRedBufferSize(int size);
// _ZN14QSurfaceFormat16setRedBufferSizeEi setRedBufferSize(int)
extern "C"
void
C_ZN14QSurfaceFormat16setRedBufferSizeEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setRedBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 130, column 10>
//   // proto:  bool QSurfaceFormat::testOption(QSurfaceFormat::FormatOption option);
// _ZNK14QSurfaceFormat10testOptionENS_12FormatOptionE testOption(enum QSurfaceFormat::FormatOption)
extern "C"
bool
C_ZNK14QSurfaceFormat10testOptionENS_12FormatOptionE(void *qthis,
QSurfaceFormat::FormatOption arg1) {
  auto ret =
  ((QSurfaceFormat*)qthis)->testOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 82, column 10>
//   // proto:  void QSurfaceFormat::setDepthBufferSize(int size);
// _ZN14QSurfaceFormat18setDepthBufferSizeEi setDepthBufferSize(int)
extern "C"
void
C_ZN14QSurfaceFormat18setDepthBufferSizeEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setDepthBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 112, column 9>
//   // proto:  int QSurfaceFormat::majorVersion();
// _ZNK14QSurfaceFormat12majorVersionEv majorVersion()
extern "C"
int
C_ZNK14QSurfaceFormat12majorVersionEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->majorVersion();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 97, column 10>
//   // proto:  void QSurfaceFormat::setSamples(int numSamples);
// _ZN14QSurfaceFormat10setSamplesEi setSamples(int)
extern "C"
void
C_ZN14QSurfaceFormat10setSamplesEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setSamples(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 100, column 10>
//   // proto:  void QSurfaceFormat::setSwapBehavior(QSurfaceFormat::SwapBehavior behavior);
// _ZN14QSurfaceFormat15setSwapBehaviorENS_12SwapBehaviorE setSwapBehavior(enum QSurfaceFormat::SwapBehavior)
extern "C"
void
C_ZN14QSurfaceFormat15setSwapBehaviorENS_12SwapBehaviorE(void *qthis,
QSurfaceFormat::SwapBehavior arg1) {
  ((QSurfaceFormat*)qthis)->setSwapBehavior(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 111, column 10>
//   // proto:  void QSurfaceFormat::setMajorVersion(int majorVersion);
// _ZN14QSurfaceFormat15setMajorVersionEi setMajorVersion(int)
extern "C"
void
C_ZN14QSurfaceFormat15setMajorVersionEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setMajorVersion(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 136, column 17>
//   // proto: static void QSurfaceFormat::setDefaultFormat(const QSurfaceFormat & format);
// _ZN14QSurfaceFormat16setDefaultFormatERKS_ setDefaultFormat(const class QSurfaceFormat &)
extern "C"
void
C_ZN14QSurfaceFormat16setDefaultFormatERKS_(const QSurfaceFormat* arg1) {
  QSurfaceFormat::setDefaultFormat(*((const QSurfaceFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 91, column 9>
//   // proto:  int QSurfaceFormat::greenBufferSize();
// _ZNK14QSurfaceFormat15greenBufferSizeEv greenBufferSize()
extern "C"
int
C_ZNK14QSurfaceFormat15greenBufferSizeEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->greenBufferSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 115, column 9>
//   // proto:  int QSurfaceFormat::minorVersion();
// _ZNK14QSurfaceFormat12minorVersionEv minorVersion()
extern "C"
int
C_ZNK14QSurfaceFormat12minorVersionEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->minorVersion();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 108, column 10>
//   // proto:  void QSurfaceFormat::setRenderableType(QSurfaceFormat::RenderableType type);
// _ZN14QSurfaceFormat17setRenderableTypeENS_14RenderableTypeE setRenderableType(enum QSurfaceFormat::RenderableType)
extern "C"
void
C_ZN14QSurfaceFormat17setRenderableTypeENS_14RenderableTypeE(void *qthis,
QSurfaceFormat::RenderableType arg1) {
  ((QSurfaceFormat*)qthis)->setRenderableType(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 85, column 10>
//   // proto:  void QSurfaceFormat::setStencilBufferSize(int size);
// _ZN14QSurfaceFormat20setStencilBufferSizeEi setStencilBufferSize(int)
extern "C"
void
C_ZN14QSurfaceFormat20setStencilBufferSizeEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setStencilBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 124, column 24>
//   // proto:  void QSurfaceFormat::setOption(QSurfaceFormat::FormatOptions opt);
// _ZN14QSurfaceFormat9setOptionE6QFlagsINS_12FormatOptionEE setOption(class QSurfaceFormat::FormatOptions)
extern "C"
void
C_ZN14QSurfaceFormat9setOptionE6QFlagsINS_12FormatOptionEE(void *qthis,
QSurfaceFormat::FormatOptions* arg1) {
  ((QSurfaceFormat*)qthis)->setOption(*((QSurfaceFormat::FormatOptions*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 133, column 9>
//   // proto:  int QSurfaceFormat::swapInterval();
// _ZNK14QSurfaceFormat12swapIntervalEv swapInterval()
extern "C"
int
C_ZNK14QSurfaceFormat12swapIntervalEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->swapInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 118, column 10>
//   // proto:  void QSurfaceFormat::setVersion(int major, int minor);
// _ZN14QSurfaceFormat10setVersionEii setVersion(int, int)
extern "C"
void
C_ZN14QSurfaceFormat10setVersionEii(void *qthis,
int arg1,
int arg2) {
  ((QSurfaceFormat*)qthis)->setVersion(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 105, column 10>
//   // proto:  void QSurfaceFormat::setProfile(QSurfaceFormat::OpenGLContextProfile profile);
// _ZN14QSurfaceFormat10setProfileENS_20OpenGLContextProfileE setProfile(enum QSurfaceFormat::OpenGLContextProfile)
extern "C"
void
C_ZN14QSurfaceFormat10setProfileENS_20OpenGLContextProfileE(void *qthis,
QSurfaceFormat::OpenGLContextProfile arg1) {
  ((QSurfaceFormat*)qthis)->setProfile(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 103, column 10>
//   // proto:  bool QSurfaceFormat::hasAlpha();
// _ZNK14QSurfaceFormat8hasAlphaEv hasAlpha()
extern "C"
bool
C_ZNK14QSurfaceFormat8hasAlphaEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->hasAlpha();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 78, column 5>
//   // proto:  void QSurfaceFormat::QSurfaceFormat(const QSurfaceFormat & other);
extern "C"
QSurfaceFormat*
C_ZN14QSurfaceFormatC2ERKS_(const QSurfaceFormat* arg1) {
  auto ret = new QSurfaceFormat(*((const QSurfaceFormat*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 117, column 21>
//   // proto:  QPair<int, int> QSurfaceFormat::version();
// _ZNK14QSurfaceFormat7versionEv version()
extern "C"
QPair<int, int>*
C_ZNK14QSurfaceFormat7versionEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->version();
  return new QPair<int, int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 93, column 9>
//   // proto:  int QSurfaceFormat::blueBufferSize();
// _ZNK14QSurfaceFormat14blueBufferSizeEv blueBufferSize()
extern "C"
int
C_ZNK14QSurfaceFormat14blueBufferSizeEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->blueBufferSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 109, column 20>
//   // proto:  QSurfaceFormat::RenderableType QSurfaceFormat::renderableType();
// _ZNK14QSurfaceFormat14renderableTypeEv renderableType()
extern "C"
QSurfaceFormat::RenderableType
C_ZNK14QSurfaceFormat14renderableTypeEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->renderableType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 77, column 18>
//   // proto:  void QSurfaceFormat::QSurfaceFormat(FormatOptions options);
extern "C"
QSurfaceFormat*
C_ZN14QSurfaceFormatC2E6QFlagsINS_12FormatOptionEE(QSurfaceFormat::FormatOptions arg1) {
  auto ret = new QSurfaceFormat(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 106, column 26>
//   // proto:  QSurfaceFormat::OpenGLContextProfile QSurfaceFormat::profile();
// _ZNK14QSurfaceFormat7profileEv profile()
extern "C"
QSurfaceFormat::OpenGLContextProfile
C_ZNK14QSurfaceFormat7profileEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->profile();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 128, column 10>
//   // proto:  void QSurfaceFormat::setOptions(QSurfaceFormat::FormatOptions options);
// _ZN14QSurfaceFormat10setOptionsE6QFlagsINS_12FormatOptionEE setOptions(class QSurfaceFormat::FormatOptions)
extern "C"
void
C_ZN14QSurfaceFormat10setOptionsE6QFlagsINS_12FormatOptionEE(void *qthis,
QSurfaceFormat::FormatOptions* arg1) {
  ((QSurfaceFormat*)qthis)->setOptions(*((QSurfaceFormat::FormatOptions*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 76, column 5>
//   // proto:  void QSurfaceFormat::QSurfaceFormat();
extern "C"
QSurfaceFormat*
C_ZN14QSurfaceFormatC2Ev() {
  auto ret = new QSurfaceFormat();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 125, column 24>
//   // proto:  bool QSurfaceFormat::testOption(QSurfaceFormat::FormatOptions opt);
// _ZNK14QSurfaceFormat10testOptionE6QFlagsINS_12FormatOptionEE testOption(class QSurfaceFormat::FormatOptions)
extern "C"
bool
C_ZNK14QSurfaceFormat10testOptionE6QFlagsINS_12FormatOptionEE(void *qthis,
QSurfaceFormat::FormatOptions* arg1) {
  auto ret =
  ((QSurfaceFormat*)qthis)->testOption(*((QSurfaceFormat::FormatOptions*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 89, column 9>
//   // proto:  int QSurfaceFormat::redBufferSize();
// _ZNK14QSurfaceFormat13redBufferSizeEv redBufferSize()
extern "C"
int
C_ZNK14QSurfaceFormat13redBufferSizeEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->redBufferSize();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QSurfaceFormat::~QSurfaceFormat();
extern "C"
void C_ZN14QSurfaceFormatD2Ev(void *qthis) {
  delete (QSurfaceFormat*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 90, column 10>
//   // proto:  void QSurfaceFormat::setGreenBufferSize(int size);
// _ZN14QSurfaceFormat18setGreenBufferSizeEi setGreenBufferSize(int)
extern "C"
void
C_ZN14QSurfaceFormat18setGreenBufferSizeEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setGreenBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 98, column 9>
//   // proto:  int QSurfaceFormat::samples();
// _ZNK14QSurfaceFormat7samplesEv samples()
extern "C"
int
C_ZNK14QSurfaceFormat7samplesEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->samples();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 83, column 9>
//   // proto:  int QSurfaceFormat::depthBufferSize();
// _ZNK14QSurfaceFormat15depthBufferSizeEv depthBufferSize()
extern "C"
int
C_ZNK14QSurfaceFormat15depthBufferSizeEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->depthBufferSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 92, column 10>
//   // proto:  void QSurfaceFormat::setBlueBufferSize(int size);
// _ZN14QSurfaceFormat17setBlueBufferSizeEi setBlueBufferSize(int)
extern "C"
void
C_ZN14QSurfaceFormat17setBlueBufferSizeEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setBlueBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 95, column 9>
//   // proto:  int QSurfaceFormat::alphaBufferSize();
// _ZNK14QSurfaceFormat15alphaBufferSizeEv alphaBufferSize()
extern "C"
int
C_ZNK14QSurfaceFormat15alphaBufferSizeEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->alphaBufferSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 120, column 10>
//   // proto:  bool QSurfaceFormat::stereo();
// _ZNK14QSurfaceFormat6stereoEv stereo()
extern "C"
bool
C_ZNK14QSurfaceFormat6stereoEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->stereo();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 134, column 10>
//   // proto:  void QSurfaceFormat::setSwapInterval(int interval);
// _ZN14QSurfaceFormat15setSwapIntervalEi setSwapInterval(int)
extern "C"
void
C_ZN14QSurfaceFormat15setSwapIntervalEi(void *qthis,
int arg1) {
  ((QSurfaceFormat*)qthis)->setSwapInterval(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 129, column 10>
//   // proto:  void QSurfaceFormat::setOption(QSurfaceFormat::FormatOption option, bool on);
// _ZN14QSurfaceFormat9setOptionENS_12FormatOptionEb setOption(enum QSurfaceFormat::FormatOption, _Bool)
extern "C"
void
C_ZN14QSurfaceFormat9setOptionENS_12FormatOptionEb(void *qthis,
QSurfaceFormat::FormatOption arg1,
bool arg2) {
  ((QSurfaceFormat*)qthis)->setOption(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 131, column 35>
//   // proto:  QSurfaceFormat::FormatOptions QSurfaceFormat::options();
// _ZNK14QSurfaceFormat7optionsEv options()
extern "C"
QFlags<QSurfaceFormat::FormatOption>*
C_ZNK14QSurfaceFormat7optionsEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->options();
  return new QFlags<QSurfaceFormat::FormatOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 101, column 18>
//   // proto:  QSurfaceFormat::SwapBehavior QSurfaceFormat::swapBehavior();
// _ZNK14QSurfaceFormat12swapBehaviorEv swapBehavior()
extern "C"
QSurfaceFormat::SwapBehavior
C_ZNK14QSurfaceFormat12swapBehaviorEv(void *qthis) {
  auto ret =
  ((QSurfaceFormat*)qthis)->swapBehavior();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurfaceformat.h', line 121, column 10>
//   // proto:  void QSurfaceFormat::setStereo(bool enable);
// _ZN14QSurfaceFormat9setStereoEb setStereo(_Bool)
extern "C"
void
C_ZN14QSurfaceFormat9setStereoEb(void *qthis,
bool arg1) {
  ((QSurfaceFormat*)qthis)->setStereo(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

