//  header block begin
// /usr/include/qt/QtGui/qsurfaceformat.h
#include <qsurfaceformat.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qsurfaceformat.h:82
// void QSurfaceFormat()
extern "C"
void* C_ZN14QSurfaceFormatC1Ev() {
  return new QSurfaceFormat();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:83
// void QSurfaceFormat(FormatOptions)
extern "C"
void* C_ZN14QSurfaceFormatC1E6QFlagsINS_12FormatOptionEE(QFlags<QSurfaceFormat::FormatOption> options) {
  return new QSurfaceFormat(options);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:86
// void ~QSurfaceFormat()
extern "C"
void C_ZN14QSurfaceFormatD1Ev(void *this_) {
  delete (QSurfaceFormat*)(this_);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:88
// void setDepthBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat18setDepthBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setDepthBufferSize(size);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:89
// int depthBufferSize()
extern "C"
void C_ZNK14QSurfaceFormat15depthBufferSizeEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->depthBufferSize();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:91
// void setStencilBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat20setStencilBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setStencilBufferSize(size);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:92
// int stencilBufferSize()
extern "C"
void C_ZNK14QSurfaceFormat17stencilBufferSizeEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->stencilBufferSize();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:94
// void setRedBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat16setRedBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setRedBufferSize(size);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:95
// int redBufferSize()
extern "C"
void C_ZNK14QSurfaceFormat13redBufferSizeEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->redBufferSize();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:96
// void setGreenBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat18setGreenBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setGreenBufferSize(size);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:97
// int greenBufferSize()
extern "C"
void C_ZNK14QSurfaceFormat15greenBufferSizeEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->greenBufferSize();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:98
// void setBlueBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat17setBlueBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setBlueBufferSize(size);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:99
// int blueBufferSize()
extern "C"
void C_ZNK14QSurfaceFormat14blueBufferSizeEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->blueBufferSize();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:100
// void setAlphaBufferSize(int)
extern "C"
void C_ZN14QSurfaceFormat18setAlphaBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setAlphaBufferSize(size);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:101
// int alphaBufferSize()
extern "C"
void C_ZNK14QSurfaceFormat15alphaBufferSizeEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->alphaBufferSize();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:103
// void setSamples(int)
extern "C"
void C_ZN14QSurfaceFormat10setSamplesEi(void *this_, int numSamples) {
  ((QSurfaceFormat*)this_)->setSamples(numSamples);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:104
// int samples()
extern "C"
void C_ZNK14QSurfaceFormat7samplesEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->samples();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:106
// void setSwapBehavior(enum QSurfaceFormat::SwapBehavior)
extern "C"
void C_ZN14QSurfaceFormat15setSwapBehaviorENS_12SwapBehaviorE(void *this_, QSurfaceFormat::SwapBehavior behavior) {
  ((QSurfaceFormat*)this_)->setSwapBehavior(behavior);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:107
// QSurfaceFormat::SwapBehavior swapBehavior()
extern "C"
void C_ZNK14QSurfaceFormat12swapBehaviorEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->swapBehavior();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:109
// bool hasAlpha()
extern "C"
void C_ZNK14QSurfaceFormat8hasAlphaEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->hasAlpha();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:111
// void setProfile(enum QSurfaceFormat::OpenGLContextProfile)
extern "C"
void C_ZN14QSurfaceFormat10setProfileENS_20OpenGLContextProfileE(void *this_, QSurfaceFormat::OpenGLContextProfile profile) {
  ((QSurfaceFormat*)this_)->setProfile(profile);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:112
// QSurfaceFormat::OpenGLContextProfile profile()
extern "C"
void C_ZNK14QSurfaceFormat7profileEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->profile();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:114
// void setRenderableType(enum QSurfaceFormat::RenderableType)
extern "C"
void C_ZN14QSurfaceFormat17setRenderableTypeENS_14RenderableTypeE(void *this_, QSurfaceFormat::RenderableType type) {
  ((QSurfaceFormat*)this_)->setRenderableType(type);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:115
// QSurfaceFormat::RenderableType renderableType()
extern "C"
void C_ZNK14QSurfaceFormat14renderableTypeEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->renderableType();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:117
// void setMajorVersion(int)
extern "C"
void C_ZN14QSurfaceFormat15setMajorVersionEi(void *this_, int majorVersion) {
  ((QSurfaceFormat*)this_)->setMajorVersion(majorVersion);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:118
// int majorVersion()
extern "C"
void C_ZNK14QSurfaceFormat12majorVersionEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->majorVersion();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:120
// void setMinorVersion(int)
extern "C"
void C_ZN14QSurfaceFormat15setMinorVersionEi(void *this_, int minorVersion) {
  ((QSurfaceFormat*)this_)->setMinorVersion(minorVersion);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:121
// int minorVersion()
extern "C"
void C_ZNK14QSurfaceFormat12minorVersionEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->minorVersion();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:123
// QPair<int, int> version()
extern "C"
void C_ZNK14QSurfaceFormat7versionEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->version();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:124
// void setVersion(int, int)
extern "C"
void C_ZN14QSurfaceFormat10setVersionEii(void *this_, int major, int minor) {
  ((QSurfaceFormat*)this_)->setVersion(major, minor);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:126
// bool stereo()
extern "C"
void C_ZNK14QSurfaceFormat6stereoEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->stereo();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:127
// void setStereo(_Bool)
extern "C"
void C_ZN14QSurfaceFormat9setStereoEb(void *this_, bool enable) {
  ((QSurfaceFormat*)this_)->setStereo(enable);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:130
// void setOption(class QSurfaceFormat::FormatOptions)
extern "C"
void C_ZN14QSurfaceFormat9setOptionE6QFlagsINS_12FormatOptionEE(void *this_, QFlags<QSurfaceFormat::FormatOption> opt) {
  ((QSurfaceFormat*)this_)->setOption(opt);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:131
// bool testOption(class QSurfaceFormat::FormatOptions)
extern "C"
void C_ZNK14QSurfaceFormat10testOptionE6QFlagsINS_12FormatOptionEE(void *this_, QFlags<QSurfaceFormat::FormatOption> opt) {
  /*return*/ ((QSurfaceFormat*)this_)->testOption(opt);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:134
// void setOptions(class QSurfaceFormat::FormatOptions)
extern "C"
void C_ZN14QSurfaceFormat10setOptionsE6QFlagsINS_12FormatOptionEE(void *this_, QFlags<QSurfaceFormat::FormatOption> options) {
  ((QSurfaceFormat*)this_)->setOptions(options);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:135
// void setOption(enum QSurfaceFormat::FormatOption, _Bool)
extern "C"
void C_ZN14QSurfaceFormat9setOptionENS_12FormatOptionEb(void *this_, QSurfaceFormat::FormatOption option, bool on) {
  ((QSurfaceFormat*)this_)->setOption(option, on);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:136
// bool testOption(enum QSurfaceFormat::FormatOption)
extern "C"
void C_ZNK14QSurfaceFormat10testOptionENS_12FormatOptionE(void *this_, QSurfaceFormat::FormatOption option) {
  /*return*/ ((QSurfaceFormat*)this_)->testOption(option);
}
// /usr/include/qt/QtGui/qsurfaceformat.h:137
// QSurfaceFormat::FormatOptions options()
extern "C"
void C_ZNK14QSurfaceFormat7optionsEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->options();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:139
// int swapInterval()
extern "C"
void C_ZNK14QSurfaceFormat12swapIntervalEv(void *this_) {
  /*return*/ ((QSurfaceFormat*)this_)->swapInterval();
}
// /usr/include/qt/QtGui/qsurfaceformat.h:140
// void setSwapInterval(int)
extern "C"
void C_ZN14QSurfaceFormat15setSwapIntervalEi(void *this_, int interval) {
  ((QSurfaceFormat*)this_)->setSwapInterval(interval);
}
// static
// /usr/include/qt/QtGui/qsurfaceformat.h:142
// void setDefaultFormat(const class QSurfaceFormat &)
extern "C"
void C_ZN14QSurfaceFormat16setDefaultFormatERKS_(const QSurfaceFormat & format) {
  QSurfaceFormat::setDefaultFormat(format);
}
// static
// /usr/include/qt/QtGui/qsurfaceformat.h:143
// QSurfaceFormat defaultFormat()
extern "C"
void C_ZN14QSurfaceFormat13defaultFormatEv() {
  /*return*/ QSurfaceFormat::defaultFormat();
}
//  main block end
