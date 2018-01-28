//  header block begin
// /usr/include/qt/QtGui/qsurfaceformat.h
#include <qsurfaceformat.h>
#include <QtGui>

// QSurfaceFormat is pure virtual: false
//  header block end

//  main block begin

class MyQSurfaceFormat : public QSurfaceFormat {
public:
MyQSurfaceFormat() : QSurfaceFormat() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:94
// [-2] void QSurfaceFormat()
extern "C"
void* C_ZN14QSurfaceFormatC1Ev() {
  (MyQSurfaceFormat*)(0);
  return  new MyQSurfaceFormat();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:98
// [-2] void ~QSurfaceFormat()
extern "C"
void C_ZN14QSurfaceFormatD1Ev(void *this_) {
  delete (QSurfaceFormat*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:100
// [-2] void setDepthBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat18setDepthBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setDepthBufferSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:101
// [4] int depthBufferSize()
extern "C"
int C_ZNK14QSurfaceFormat15depthBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->depthBufferSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:103
// [-2] void setStencilBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat20setStencilBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setStencilBufferSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:104
// [4] int stencilBufferSize()
extern "C"
int C_ZNK14QSurfaceFormat17stencilBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->stencilBufferSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:106
// [-2] void setRedBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat16setRedBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setRedBufferSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:107
// [4] int redBufferSize()
extern "C"
int C_ZNK14QSurfaceFormat13redBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->redBufferSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:108
// [-2] void setGreenBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat18setGreenBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setGreenBufferSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:109
// [4] int greenBufferSize()
extern "C"
int C_ZNK14QSurfaceFormat15greenBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->greenBufferSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:110
// [-2] void setBlueBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat17setBlueBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setBlueBufferSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:111
// [4] int blueBufferSize()
extern "C"
int C_ZNK14QSurfaceFormat14blueBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->blueBufferSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:112
// [-2] void setAlphaBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat18setAlphaBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setAlphaBufferSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:113
// [4] int alphaBufferSize()
extern "C"
int C_ZNK14QSurfaceFormat15alphaBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->alphaBufferSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:115
// [-2] void setSamples(int)
extern "C"
void C_ZN14QSurfaceFormat10setSamplesEi(void *this_, int numSamples) {
  ((QSurfaceFormat*)this_)->setSamples(numSamples);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:116
// [4] int samples()
extern "C"
int C_ZNK14QSurfaceFormat7samplesEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->samples();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:118
// [-2] void setSwapBehavior(enum QSurfaceFormat::SwapBehavior)
extern "C"
void C_ZN14QSurfaceFormat15setSwapBehaviorENS_12SwapBehaviorE(void *this_, QSurfaceFormat::SwapBehavior behavior) {
  ((QSurfaceFormat*)this_)->setSwapBehavior(behavior);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:119
// [4] QSurfaceFormat::SwapBehavior swapBehavior()
extern "C"
QSurfaceFormat::SwapBehavior C_ZNK14QSurfaceFormat12swapBehaviorEv(void *this_) {
  return (QSurfaceFormat::SwapBehavior)((QSurfaceFormat*)this_)->swapBehavior();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:121
// [1] bool hasAlpha()
extern "C"
bool C_ZNK14QSurfaceFormat8hasAlphaEv(void *this_) {
  return (bool)((QSurfaceFormat*)this_)->hasAlpha();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:123
// [-2] void setProfile(enum QSurfaceFormat::OpenGLContextProfile)
extern "C"
void C_ZN14QSurfaceFormat10setProfileENS_20OpenGLContextProfileE(void *this_, QSurfaceFormat::OpenGLContextProfile profile) {
  ((QSurfaceFormat*)this_)->setProfile(profile);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:124
// [4] QSurfaceFormat::OpenGLContextProfile profile()
extern "C"
QSurfaceFormat::OpenGLContextProfile C_ZNK14QSurfaceFormat7profileEv(void *this_) {
  return (QSurfaceFormat::OpenGLContextProfile)((QSurfaceFormat*)this_)->profile();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:126
// [-2] void setRenderableType(enum QSurfaceFormat::RenderableType)
extern "C"
void C_ZN14QSurfaceFormat17setRenderableTypeENS_14RenderableTypeE(void *this_, QSurfaceFormat::RenderableType type) {
  ((QSurfaceFormat*)this_)->setRenderableType(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:127
// [4] QSurfaceFormat::RenderableType renderableType()
extern "C"
QSurfaceFormat::RenderableType C_ZNK14QSurfaceFormat14renderableTypeEv(void *this_) {
  return (QSurfaceFormat::RenderableType)((QSurfaceFormat*)this_)->renderableType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:129
// [-2] void setMajorVersion(int)
extern "C"
void C_ZN14QSurfaceFormat15setMajorVersionEi(void *this_, int majorVersion) {
  ((QSurfaceFormat*)this_)->setMajorVersion(majorVersion);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:130
// [4] int majorVersion()
extern "C"
int C_ZNK14QSurfaceFormat12majorVersionEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->majorVersion();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:132
// [-2] void setMinorVersion(int)
extern "C"
void C_ZN14QSurfaceFormat15setMinorVersionEi(void *this_, int minorVersion) {
  ((QSurfaceFormat*)this_)->setMinorVersion(minorVersion);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:133
// [4] int minorVersion()
extern "C"
int C_ZNK14QSurfaceFormat12minorVersionEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->minorVersion();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:136
// [-2] void setVersion(int, int)
extern "C"
void C_ZN14QSurfaceFormat10setVersionEii(void *this_, int major, int minor) {
  ((QSurfaceFormat*)this_)->setVersion(major, minor);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:138
// [1] bool stereo()
extern "C"
bool C_ZNK14QSurfaceFormat6stereoEv(void *this_) {
  return (bool)((QSurfaceFormat*)this_)->stereo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:139
// [-2] void setStereo(_Bool)
extern "C"
void C_ZN14QSurfaceFormat9setStereoEb(void *this_, bool enable) {
  ((QSurfaceFormat*)this_)->setStereo(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:147
// [-2] void setOption(enum QSurfaceFormat::FormatOption, _Bool)
extern "C"
void C_ZN14QSurfaceFormat9setOptionENS_12FormatOptionEb(void *this_, QSurfaceFormat::FormatOption option, bool on) {
  ((QSurfaceFormat*)this_)->setOption(option, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:148
// [1] bool testOption(enum QSurfaceFormat::FormatOption)
extern "C"
bool C_ZNK14QSurfaceFormat10testOptionENS_12FormatOptionE(void *this_, QSurfaceFormat::FormatOption option) {
  return (bool)((QSurfaceFormat*)this_)->testOption(option);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:149
// [4] QSurfaceFormat::FormatOptions options()
extern "C"
QSurfaceFormat::FormatOptions C_ZNK14QSurfaceFormat7optionsEv(void *this_) {
  return (QSurfaceFormat::FormatOptions)((QSurfaceFormat*)this_)->options();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:151
// [4] int swapInterval()
extern "C"
int C_ZNK14QSurfaceFormat12swapIntervalEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->swapInterval();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:152
// [-2] void setSwapInterval(int)
extern "C"
void C_ZN14QSurfaceFormat15setSwapIntervalEi(void *this_, int interval) {
  ((QSurfaceFormat*)this_)->setSwapInterval(interval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:154
// [4] QSurfaceFormat::ColorSpace colorSpace()
extern "C"
QSurfaceFormat::ColorSpace C_ZNK14QSurfaceFormat10colorSpaceEv(void *this_) {
  return (QSurfaceFormat::ColorSpace)((QSurfaceFormat*)this_)->colorSpace();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:155
// [-2] void setColorSpace(enum QSurfaceFormat::ColorSpace)
extern "C"
void C_ZN14QSurfaceFormat13setColorSpaceENS_10ColorSpaceE(void *this_, QSurfaceFormat::ColorSpace colorSpace) {
  ((QSurfaceFormat*)this_)->setColorSpace(colorSpace);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:157
// [-2] void setDefaultFormat(const class QSurfaceFormat &)
extern "C"
void C_ZN14QSurfaceFormat16setDefaultFormatERKS_(const QSurfaceFormat & format) {
  QSurfaceFormat::setDefaultFormat(format);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:158
// [8] QSurfaceFormat defaultFormat()
extern "C"
void* C_ZN14QSurfaceFormat13defaultFormatEv() {
  auto rv = QSurfaceFormat::defaultFormat();
return new QSurfaceFormat(rv);
}
//  main block end
