//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qsurfaceformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsurfaceformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QSurfaceFormat is pure virtual: false
// QSurfaceFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSurfaceFormat_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSurfaceFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSurfaceFormat_t qt_meta_stringdata_MyQSurfaceFormat = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQSurfaceFormat"
  },
  "MyQSurfaceFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSurfaceFormat[] = {
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
class Q_DECL_EXPORT MyQSurfaceFormat : public QSurfaceFormat {
public:
  virtual ~MyQSurfaceFormat() {}
// void QSurfaceFormat()
MyQSurfaceFormat() : QSurfaceFormat() {}
// void QSurfaceFormat(QSurfaceFormat::FormatOptions)
MyQSurfaceFormat(QFlags<QSurfaceFormat::FormatOption> options) : QSurfaceFormat(options) {}
// void QSurfaceFormat(const QSurfaceFormat &)
MyQSurfaceFormat(const QSurfaceFormat & other) : QSurfaceFormat(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:94
// [-2] void QSurfaceFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN14QSurfaceFormatC2Ev() {
  return  new QSurfaceFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:95
// [-2] void QSurfaceFormat(QSurfaceFormat::FormatOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN14QSurfaceFormatC2E6QFlagsINS_12FormatOptionEE(QFlags<QSurfaceFormat::FormatOption> options) {
  return  new QSurfaceFormat(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:96
// [-2] void QSurfaceFormat(const QSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QSurfaceFormatC2ERKS_(QSurfaceFormat* other) {
  return  new QSurfaceFormat(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:97
// [8] QSurfaceFormat & operator=(const QSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QSurfaceFormataSERKS_(void *this_, QSurfaceFormat* other) {
  auto& rv = ((QSurfaceFormat*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:98
// [-2] void ~QSurfaceFormat()
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormatD2Ev(void *this_) {
  delete (QSurfaceFormat*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:100
// [-2] void setDepthBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat18setDepthBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setDepthBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:101
// [4] int depthBufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat15depthBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->depthBufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:103
// [-2] void setStencilBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat20setStencilBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setStencilBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:104
// [4] int stencilBufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat17stencilBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->stencilBufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:106
// [-2] void setRedBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat16setRedBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setRedBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:107
// [4] int redBufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat13redBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->redBufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:108
// [-2] void setGreenBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat18setGreenBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setGreenBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:109
// [4] int greenBufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat15greenBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->greenBufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:110
// [-2] void setBlueBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat17setBlueBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setBlueBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:111
// [4] int blueBufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat14blueBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->blueBufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:112
// [-2] void setAlphaBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat18setAlphaBufferSizeEi(void *this_, int size) {
  ((QSurfaceFormat*)this_)->setAlphaBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:113
// [4] int alphaBufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat15alphaBufferSizeEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->alphaBufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:115
// [-2] void setSamples(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat10setSamplesEi(void *this_, int numSamples) {
  ((QSurfaceFormat*)this_)->setSamples(numSamples);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:116
// [4] int samples()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat7samplesEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->samples();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:118
// [-2] void setSwapBehavior(QSurfaceFormat::SwapBehavior)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat15setSwapBehaviorENS_12SwapBehaviorE(void *this_, QSurfaceFormat::SwapBehavior behavior) {
  ((QSurfaceFormat*)this_)->setSwapBehavior(behavior);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:119
// [4] QSurfaceFormat::SwapBehavior swapBehavior()
extern "C" Q_DECL_EXPORT
QSurfaceFormat::SwapBehavior C_ZNK14QSurfaceFormat12swapBehaviorEv(void *this_) {
  return (QSurfaceFormat::SwapBehavior)((QSurfaceFormat*)this_)->swapBehavior();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:121
// [1] bool hasAlpha()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QSurfaceFormat8hasAlphaEv(void *this_) {
  return (bool)((QSurfaceFormat*)this_)->hasAlpha();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:123
// [-2] void setProfile(QSurfaceFormat::OpenGLContextProfile)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat10setProfileENS_20OpenGLContextProfileE(void *this_, QSurfaceFormat::OpenGLContextProfile profile) {
  ((QSurfaceFormat*)this_)->setProfile(profile);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:124
// [4] QSurfaceFormat::OpenGLContextProfile profile()
extern "C" Q_DECL_EXPORT
QSurfaceFormat::OpenGLContextProfile C_ZNK14QSurfaceFormat7profileEv(void *this_) {
  return (QSurfaceFormat::OpenGLContextProfile)((QSurfaceFormat*)this_)->profile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:126
// [-2] void setRenderableType(QSurfaceFormat::RenderableType)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat17setRenderableTypeENS_14RenderableTypeE(void *this_, QSurfaceFormat::RenderableType type_) {
  ((QSurfaceFormat*)this_)->setRenderableType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:127
// [4] QSurfaceFormat::RenderableType renderableType()
extern "C" Q_DECL_EXPORT
QSurfaceFormat::RenderableType C_ZNK14QSurfaceFormat14renderableTypeEv(void *this_) {
  return (QSurfaceFormat::RenderableType)((QSurfaceFormat*)this_)->renderableType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:129
// [-2] void setMajorVersion(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat15setMajorVersionEi(void *this_, int majorVersion) {
  ((QSurfaceFormat*)this_)->setMajorVersion(majorVersion);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:130
// [4] int majorVersion()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat12majorVersionEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->majorVersion();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:132
// [-2] void setMinorVersion(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat15setMinorVersionEi(void *this_, int minorVersion) {
  ((QSurfaceFormat*)this_)->setMinorVersion(minorVersion);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:133
// [4] int minorVersion()
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat12minorVersionEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->minorVersion();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:135
// [8] QPair<int, int> version()
extern "C" Q_DECL_EXPORT
void C_ZNK14QSurfaceFormat7versionEv(void *this_) {
  auto rv = ((QSurfaceFormat*)this_)->version();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:136
// [-2] void setVersion(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat10setVersionEii(void *this_, int major, int minor) {
  ((QSurfaceFormat*)this_)->setVersion(major, minor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:138
// [1] bool stereo()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QSurfaceFormat6stereoEv(void *this_) {
  return (bool)((QSurfaceFormat*)this_)->stereo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:139
// [-2] void setStereo(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat9setStereoEb(void *this_, bool enable) {
  ((QSurfaceFormat*)this_)->setStereo(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:142
// [-2] void setOption(QSurfaceFormat::FormatOptions)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat9setOptionE6QFlagsINS_12FormatOptionEE(void *this_, QFlags<QSurfaceFormat::FormatOption> opt) {
  ((QSurfaceFormat*)this_)->setOption(opt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:143
// [1] bool testOption(QSurfaceFormat::FormatOptions)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QSurfaceFormat10testOptionE6QFlagsINS_12FormatOptionEE(void *this_, QFlags<QSurfaceFormat::FormatOption> opt) {
  return (bool)((QSurfaceFormat*)this_)->testOption(opt);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qsurfaceformat.h:146
// [-2] void setOptions(QSurfaceFormat::FormatOptions)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat10setOptionsE6QFlagsINS_12FormatOptionEE(void *this_, QFlags<QSurfaceFormat::FormatOption> options) {
  ((QSurfaceFormat*)this_)->setOptions(options);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:147
// [-2] void setOption(QSurfaceFormat::FormatOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat9setOptionENS_12FormatOptionEb(void *this_, QSurfaceFormat::FormatOption option, bool on) {
  ((QSurfaceFormat*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:148
// [1] bool testOption(QSurfaceFormat::FormatOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QSurfaceFormat10testOptionENS_12FormatOptionE(void *this_, QSurfaceFormat::FormatOption option) {
  return (bool)((QSurfaceFormat*)this_)->testOption(option);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qsurfaceformat.h:149
// [4] QSurfaceFormat::FormatOptions options()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
QSurfaceFormat::FormatOptions C_ZNK14QSurfaceFormat7optionsEv(void *this_) {
  return (QSurfaceFormat::FormatOptions)((QSurfaceFormat*)this_)->options();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qsurfaceformat.h:151
// [4] int swapInterval()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
int C_ZNK14QSurfaceFormat12swapIntervalEv(void *this_) {
  return (int)((QSurfaceFormat*)this_)->swapInterval();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qsurfaceformat.h:152
// [-2] void setSwapInterval(int)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat15setSwapIntervalEi(void *this_, int interval) {
  ((QSurfaceFormat*)this_)->setSwapInterval(interval);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qsurfaceformat.h:154
// [4] QSurfaceFormat::ColorSpace colorSpace()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
QSurfaceFormat::ColorSpace C_ZNK14QSurfaceFormat10colorSpaceEv(void *this_) {
  return (QSurfaceFormat::ColorSpace)((QSurfaceFormat*)this_)->colorSpace();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:155
// [-2] void setColorSpace(QSurfaceFormat::ColorSpace)
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat13setColorSpaceENS_10ColorSpaceE(void *this_, QSurfaceFormat::ColorSpace colorSpace) {
  ((QSurfaceFormat*)this_)->setColorSpace(colorSpace);
}

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qsurfaceformat.h:157
// [-2] void setDefaultFormat(const QSurfaceFormat &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN14QSurfaceFormat16setDefaultFormatERKS_(QSurfaceFormat* format) {
  QSurfaceFormat::setDefaultFormat(*format);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qsurfaceformat.h:158
// [8] QSurfaceFormat defaultFormat()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN14QSurfaceFormat13defaultFormatEv() {
  auto rv = QSurfaceFormat::defaultFormat();
return new QSurfaceFormat(rv);
}
#endif // QT_VERSION >= 0x050400

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
