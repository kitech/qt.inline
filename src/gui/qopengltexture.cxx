// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qopengltexture.h
// dst-file: /src/gui/qopengltexture.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopengltexture.h>


#include <qpair.h>
#include <qcolor.h>
// <= header block end

// main block begin =>
void __keep_qopengltexture_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLTexture_Class_Size()
{
  return sizeof(QOpenGLTexture);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 377, column 19>
//   // proto: static GLuint QOpenGLTexture::boundTextureId(QOpenGLTexture::BindingTarget target);
// _ZN14QOpenGLTexture14boundTextureIdENS_13BindingTargetE boundTextureId(enum QOpenGLTexture::BindingTarget)
extern "C"
unsigned int
C_ZN14QOpenGLTexture14boundTextureIdENS_13BindingTargetE(QOpenGLTexture::BindingTarget arg1) {
  auto ret =
  QOpenGLTexture::boundTextureId(arg1);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 370, column 10>
//   // proto:  void QOpenGLTexture::bind();
// _ZN14QOpenGLTexture4bindEv bind()
extern "C"
void
C_ZN14QOpenGLTexture4bindEv(void *qthis) {
  ((QOpenGLTexture*)qthis)->bind();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 535, column 10>
//   // proto:  void QOpenGLTexture::setWrapMode(QOpenGLTexture::WrapMode mode);
// _ZN14QOpenGLTexture11setWrapModeENS_8WrapModeE setWrapMode(enum QOpenGLTexture::WrapMode)
extern "C"
void
C_ZN14QOpenGLTexture11setWrapModeENS_8WrapModeE(void *qthis,
QOpenGLTexture::WrapMode arg1) {
  ((QOpenGLTexture*)qthis)->setWrapMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 395, column 10>
//   // proto:  void QOpenGLTexture::setFixedSamplePositions(bool fixed);
// _ZN14QOpenGLTexture23setFixedSamplePositionsEb setFixedSamplePositions(_Bool)
extern "C"
void
C_ZN14QOpenGLTexture23setFixedSamplePositionsEb(void *qthis,
bool arg1) {
  ((QOpenGLTexture*)qthis)->setFixedSamplePositions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 378, column 19>
//   // proto: static GLuint QOpenGLTexture::boundTextureId(uint unit, QOpenGLTexture::BindingTarget target);
// _ZN14QOpenGLTexture14boundTextureIdEjNS_13BindingTargetE boundTextureId(uint, enum QOpenGLTexture::BindingTarget)
extern "C"
unsigned int
C_ZN14QOpenGLTexture14boundTextureIdEjNS_13BindingTargetE(uint arg1,
QOpenGLTexture::BindingTarget arg2) {
  auto ret =
  QOpenGLTexture::boundTextureId(arg1,
arg2);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 385, column 9>
//   // proto:  int QOpenGLTexture::height();
// _ZNK14QOpenGLTexture6heightEv height()
extern "C"
int
C_ZNK14QOpenGLTexture6heightEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->height();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 381, column 10>
//   // proto:  void QOpenGLTexture::setFormat(QOpenGLTexture::TextureFormat format);
// _ZN14QOpenGLTexture9setFormatENS_13TextureFormatE setFormat(enum QOpenGLTexture::TextureFormat)
extern "C"
void
C_ZN14QOpenGLTexture9setFormatENS_13TextureFormatE(void *qthis,
QOpenGLTexture::TextureFormat arg1) {
  ((QOpenGLTexture*)qthis)->setFormat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 513, column 20>
//   // proto:  QOpenGLTexture::ComparisonMode QOpenGLTexture::comparisonMode();
// _ZNK14QOpenGLTexture14comparisonModeEv comparisonMode()
extern "C"
QOpenGLTexture::ComparisonMode
C_ZNK14QOpenGLTexture14comparisonModeEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->comparisonMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 475, column 10>
//   // proto:  bool QOpenGLTexture::isAutoMipMapGenerationEnabled();
// _ZNK14QOpenGLTexture29isAutoMipMapGenerationEnabledEv isAutoMipMapGenerationEnabled()
extern "C"
bool
C_ZNK14QOpenGLTexture29isAutoMipMapGenerationEnabledEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->isAutoMipMapGenerationEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 458, column 10>
//   // proto:  void QOpenGLTexture::setCompressedData(int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture17setCompressedDataEiPKvPK27QOpenGLPixelTransferOptions setCompressedData(int, const void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture17setCompressedDataEiPKvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
const void * arg2,
const QOpenGLPixelTransferOptions *const arg3) {
  ((QOpenGLTexture*)qthis)->setCompressedData(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 398, column 10>
//   // proto:  void QOpenGLTexture::allocateStorage(QOpenGLTexture::PixelFormat pixelFormat, QOpenGLTexture::PixelType pixelType);
// _ZN14QOpenGLTexture15allocateStorageENS_11PixelFormatENS_9PixelTypeE allocateStorage(enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType)
extern "C"
void
C_ZN14QOpenGLTexture15allocateStorageENS_11PixelFormatENS_9PixelTypeE(void *qthis,
QOpenGLTexture::PixelFormat arg1,
QOpenGLTexture::PixelType arg2) {
  ((QOpenGLTexture*)qthis)->allocateStorage(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 551, column 10>
//   // proto:  void QOpenGLTexture::setMaximumLevelOfDetail(float value);
// _ZN14QOpenGLTexture23setMaximumLevelOfDetailEf setMaximumLevelOfDetail(float)
extern "C"
void
C_ZN14QOpenGLTexture23setMaximumLevelOfDetailEf(void *qthis,
float arg1) {
  ((QOpenGLTexture*)qthis)->setMaximumLevelOfDetail(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 438, column 24>
//   // proto:  void QOpenGLTexture::setCompressedData(int mipLevel, int layer, QOpenGLTexture::CubeMapFace cubeFace, int dataSize, void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture17setCompressedDataEiiNS_11CubeMapFaceEiPvPK27QOpenGLPixelTransferOptions setCompressedData(int, int, enum QOpenGLTexture::CubeMapFace, int, void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture17setCompressedDataEiiNS_11CubeMapFaceEiPvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
QOpenGLTexture::CubeMapFace arg3,
int arg4,
void * arg5,
const QOpenGLPixelTransferOptions *const arg6) {
  ((QOpenGLTexture*)qthis)->setCompressedData(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 474, column 10>
//   // proto:  void QOpenGLTexture::setAutoMipMapGenerationEnabled(bool enabled);
// _ZN14QOpenGLTexture30setAutoMipMapGenerationEnabledEb setAutoMipMapGenerationEnabled(_Bool)
extern "C"
void
C_ZN14QOpenGLTexture30setAutoMipMapGenerationEnabledEb(void *qthis,
bool arg1) {
  ((QOpenGLTexture*)qthis)->setAutoMipMapGenerationEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 386, column 9>
//   // proto:  int QOpenGLTexture::depth();
// _ZNK14QOpenGLTexture5depthEv depth()
extern "C"
int
C_ZNK14QOpenGLTexture5depthEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->depth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 478, column 10>
//   // proto:  void QOpenGLTexture::generateMipMaps(int baseLevel, bool resetBaseLevel);
// _ZN14QOpenGLTexture15generateMipMapsEib generateMipMaps(int, _Bool)
extern "C"
void
C_ZN14QOpenGLTexture15generateMipMapsEib(void *qthis,
int arg1,
bool arg2) {
  ((QOpenGLTexture*)qthis)->generateMipMaps(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 456, column 10>
//   // proto:  void QOpenGLTexture::setCompressedData(int mipLevel, int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture17setCompressedDataEiiPKvPK27QOpenGLPixelTransferOptions setCompressedData(int, int, const void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture17setCompressedDataEiiPKvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
const void * arg3,
const QOpenGLPixelTransferOptions *const arg4) {
  ((QOpenGLTexture*)qthis)->setCompressedData(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 467, column 10>
//   // proto:  void QOpenGLTexture::setMipBaseLevel(int baseLevel);
// _ZN14QOpenGLTexture15setMipBaseLevelEi setMipBaseLevel(int)
extern "C"
void
C_ZN14QOpenGLTexture15setMipBaseLevelEi(void *qthis,
int arg1) {
  ((QOpenGLTexture*)qthis)->setMipBaseLevel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 413, column 24>
//   // proto:  void QOpenGLTexture::setData(int mipLevel, int layer, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture7setDataEiiNS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions setData(int, int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture7setDataEiiNS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
QOpenGLTexture::PixelFormat arg3,
QOpenGLTexture::PixelType arg4,
void * arg5,
const QOpenGLPixelTransferOptions *const arg6) {
  ((QOpenGLTexture*)qthis)->setData(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 416, column 24>
//   // proto:  void QOpenGLTexture::setData(int mipLevel, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture7setDataEiNS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions setData(int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture7setDataEiNS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
QOpenGLTexture::PixelFormat arg2,
QOpenGLTexture::PixelType arg3,
void * arg4,
const QOpenGLPixelTransferOptions *const arg5) {
  ((QOpenGLTexture*)qthis)->setData(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 554, column 25>
//   // proto:  QPair<float, float> QOpenGLTexture::levelOfDetailRange();
// _ZNK14QOpenGLTexture18levelOfDetailRangeEv levelOfDetailRange()
extern "C"
QPair<float, float>*
C_ZNK14QOpenGLTexture18levelOfDetailRangeEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->levelOfDetailRange();
  return new QPair<float, float>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 373, column 10>
//   // proto:  void QOpenGLTexture::release(uint unit, QOpenGLTexture::TextureUnitReset reset);
// _ZN14QOpenGLTexture7releaseEjNS_16TextureUnitResetE release(uint, enum QOpenGLTexture::TextureUnitReset)
extern "C"
void
C_ZN14QOpenGLTexture7releaseEjNS_16TextureUnitResetE(void *qthis,
uint arg1,
QOpenGLTexture::TextureUnitReset arg2) {
  ((QOpenGLTexture*)qthis)->release(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 364, column 10>
//   // proto:  bool QOpenGLTexture::create();
// _ZN14QOpenGLTexture6createEv create()
extern "C"
bool
C_ZN14QOpenGLTexture6createEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->create();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 361, column 12>
//   // proto:  QOpenGLTexture::Target QOpenGLTexture::target();
// _ZNK14QOpenGLTexture6targetEv target()
extern "C"
QOpenGLTexture::Target
C_ZNK14QOpenGLTexture6targetEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->target();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 453, column 10>
//   // proto:  void QOpenGLTexture::setCompressedData(int mipLevel, int layer, int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture17setCompressedDataEiiiPKvPK27QOpenGLPixelTransferOptions setCompressedData(int, int, int, const void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture17setCompressedDataEiiiPKvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
int arg3,
const void * arg4,
const QOpenGLPixelTransferOptions *const arg5) {
  ((QOpenGLTexture*)qthis)->setCompressedData(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 491, column 22>
//   // proto:  QOpenGLTexture::DepthStencilMode QOpenGLTexture::depthStencilMode();
// _ZNK14QOpenGLTexture16depthStencilModeEv depthStencilMode()
extern "C"
QOpenGLTexture::DepthStencilMode
C_ZNK14QOpenGLTexture16depthStencilModeEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->depthStencilMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 423, column 10>
//   // proto:  void QOpenGLTexture::setData(int mipLevel, int layer, QOpenGLTexture::CubeMapFace cubeFace, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture7setDataEiiNS_11CubeMapFaceENS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions setData(int, int, enum QOpenGLTexture::CubeMapFace, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, const void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture7setDataEiiNS_11CubeMapFaceENS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
QOpenGLTexture::CubeMapFace arg3,
QOpenGLTexture::PixelFormat arg4,
QOpenGLTexture::PixelType arg5,
const void * arg6,
const QOpenGLPixelTransferOptions *const arg7) {
  ((QOpenGLTexture*)qthis)->setData(arg1,
arg2,
arg3,
arg4,
arg5,
arg6,
arg7);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 481, column 10>
//   // proto:  void QOpenGLTexture::setSwizzleMask(QOpenGLTexture::SwizzleValue r, QOpenGLTexture::SwizzleValue g, QOpenGLTexture::SwizzleValue b, QOpenGLTexture::SwizzleValue a);
// _ZN14QOpenGLTexture14setSwizzleMaskENS_12SwizzleValueES0_S0_S0_ setSwizzleMask(enum QOpenGLTexture::SwizzleValue, enum QOpenGLTexture::SwizzleValue, enum QOpenGLTexture::SwizzleValue, enum QOpenGLTexture::SwizzleValue)
extern "C"
void
C_ZN14QOpenGLTexture14setSwizzleMaskENS_12SwizzleValueES0_S0_S0_(void *qthis,
QOpenGLTexture::SwizzleValue arg1,
QOpenGLTexture::SwizzleValue arg2,
QOpenGLTexture::SwizzleValue arg3,
QOpenGLTexture::SwizzleValue arg4) {
  ((QOpenGLTexture*)qthis)->setSwizzleMask(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 553, column 10>
//   // proto:  void QOpenGLTexture::setLevelOfDetailRange(float min, float max);
// _ZN14QOpenGLTexture21setLevelOfDetailRangeEff setLevelOfDetailRange(float, float)
extern "C"
void
C_ZN14QOpenGLTexture21setLevelOfDetailRangeEff(void *qthis,
float arg1,
float arg2) {
  ((QOpenGLTexture*)qthis)->setLevelOfDetailRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 547, column 10>
//   // proto:  void QOpenGLTexture::borderColor(unsigned int * border);
// _ZNK14QOpenGLTexture11borderColorEPj borderColor(unsigned int *)
extern "C"
void
C_ZNK14QOpenGLTexture11borderColorEPj(void *qthis,
unsigned int * arg1) {
  ((QOpenGLTexture*)qthis)->borderColor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 399, column 10>
//   // proto:  bool QOpenGLTexture::isStorageAllocated();
// _ZNK14QOpenGLTexture18isStorageAllocatedEv isStorageAllocated()
extern "C"
bool
C_ZNK14QOpenGLTexture18isStorageAllocatedEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->isStorageAllocated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 546, column 10>
//   // proto:  void QOpenGLTexture::borderColor(int * border);
// _ZNK14QOpenGLTexture11borderColorEPi borderColor(int *)
extern "C"
void
C_ZNK14QOpenGLTexture11borderColorEPi(void *qthis,
int * arg1) {
  ((QOpenGLTexture*)qthis)->borderColor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 525, column 10>
//   // proto:  void QOpenGLTexture::setMinificationFilter(QOpenGLTexture::Filter filter);
// _ZN14QOpenGLTexture21setMinificationFilterENS_6FilterE setMinificationFilter(enum QOpenGLTexture::Filter)
extern "C"
void
C_ZN14QOpenGLTexture21setMinificationFilterENS_6FilterE(void *qthis,
QOpenGLTexture::Filter arg1) {
  ((QOpenGLTexture*)qthis)->setMinificationFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 358, column 14>
//   // proto:  void QOpenGLTexture::QOpenGLTexture(const QImage & image, QOpenGLTexture::MipMapGeneration genMipMaps);
extern "C"
QOpenGLTexture*
C_ZN14QOpenGLTextureC2ERK6QImageNS_16MipMapGenerationE(const QImage* arg1,
QOpenGLTexture::MipMapGeneration arg2) {
  auto ret = new QOpenGLTexture(*((const QImage*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 405, column 10>
//   // proto:  bool QOpenGLTexture::isTextureView();
// _ZNK14QOpenGLTexture13isTextureViewEv isTextureView()
extern "C"
bool
C_ZNK14QOpenGLTexture13isTextureViewEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->isTextureView();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 396, column 10>
//   // proto:  bool QOpenGLTexture::isFixedSamplePositions();
// _ZNK14QOpenGLTexture22isFixedSamplePositionsEv isFixedSamplePositions()
extern "C"
bool
C_ZNK14QOpenGLTexture22isFixedSamplePositionsEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->isFixedSamplePositions();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 392, column 9>
//   // proto:  int QOpenGLTexture::faces();
// _ZNK14QOpenGLTexture5facesEv faces()
extern "C"
int
C_ZNK14QOpenGLTexture5facesEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->faces();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 390, column 10>
//   // proto:  void QOpenGLTexture::setLayers(int layers);
// _ZN14QOpenGLTexture9setLayersEi setLayers(int)
extern "C"
void
C_ZN14QOpenGLTexture9setLayersEi(void *qthis,
int arg1) {
  ((QOpenGLTexture*)qthis)->setLayers(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 446, column 24>
//   // proto:  void QOpenGLTexture::setCompressedData(int dataSize, void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture17setCompressedDataEiPvPK27QOpenGLPixelTransferOptions setCompressedData(int, void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture17setCompressedDataEiPvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
void * arg2,
const QOpenGLPixelTransferOptions *const arg3) {
  ((QOpenGLTexture*)qthis)->setCompressedData(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 529, column 10>
//   // proto:  void QOpenGLTexture::setMinMagFilters(QOpenGLTexture::Filter minificationFilter, QOpenGLTexture::Filter magnificationFilter);
// _ZN14QOpenGLTexture16setMinMagFiltersENS_6FilterES0_ setMinMagFilters(enum QOpenGLTexture::Filter, enum QOpenGLTexture::Filter)
extern "C"
void
C_ZN14QOpenGLTexture16setMinMagFiltersENS_6FilterES0_(void *qthis,
QOpenGLTexture::Filter arg1,
QOpenGLTexture::Filter arg2) {
  ((QOpenGLTexture*)qthis)->setMinMagFilters(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 384, column 9>
//   // proto:  int QOpenGLTexture::width();
// _ZNK14QOpenGLTexture5widthEv width()
extern "C"
int
C_ZNK14QOpenGLTexture5widthEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->width();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 391, column 9>
//   // proto:  int QOpenGLTexture::layers();
// _ZNK14QOpenGLTexture6layersEv layers()
extern "C"
int
C_ZNK14QOpenGLTexture6layersEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->layers();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 490, column 10>
//   // proto:  void QOpenGLTexture::setDepthStencilMode(QOpenGLTexture::DepthStencilMode mode);
// _ZN14QOpenGLTexture19setDepthStencilModeENS_16DepthStencilModeE setDepthStencilMode(enum QOpenGLTexture::DepthStencilMode)
extern "C"
void
C_ZN14QOpenGLTexture19setDepthStencilModeENS_16DepthStencilModeE(void *qthis,
QOpenGLTexture::DepthStencilMode arg1) {
  ((QOpenGLTexture*)qthis)->setDepthStencilMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 527, column 10>
//   // proto:  void QOpenGLTexture::setMagnificationFilter(QOpenGLTexture::Filter filter);
// _ZN14QOpenGLTexture22setMagnificationFilterENS_6FilterE setMagnificationFilter(enum QOpenGLTexture::Filter)
extern "C"
void
C_ZN14QOpenGLTexture22setMagnificationFilterENS_6FilterE(void *qthis,
QOpenGLTexture::Filter arg1) {
  ((QOpenGLTexture*)qthis)->setMagnificationFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 545, column 10>
//   // proto:  void QOpenGLTexture::borderColor(float * border);
// _ZNK14QOpenGLTexture11borderColorEPf borderColor(float *)
extern "C"
void
C_ZNK14QOpenGLTexture11borderColorEPf(void *qthis,
float * arg1) {
  ((QOpenGLTexture*)qthis)->borderColor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 550, column 11>
//   // proto:  float QOpenGLTexture::minimumLevelOfDetail();
// _ZNK14QOpenGLTexture20minimumLevelOfDetailEv minimumLevelOfDetail()
extern "C"
float
C_ZNK14QOpenGLTexture20minimumLevelOfDetailEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->minimumLevelOfDetail();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 541, column 10>
//   // proto:  void QOpenGLTexture::setBorderColor(int r, int g, int b, int a);
// _ZN14QOpenGLTexture14setBorderColorEiiii setBorderColor(int, int, int, int)
extern "C"
void
C_ZN14QOpenGLTexture14setBorderColorEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QOpenGLTexture*)qthis)->setBorderColor(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 401, column 21>
//   // proto:  QOpenGLTexture * QOpenGLTexture::createTextureView(QOpenGLTexture::Target target, QOpenGLTexture::TextureFormat viewFormat, int minimumMipmapLevel, int maximumMipmapLevel, int minimumLayer, int maximumLayer);
// _ZNK14QOpenGLTexture17createTextureViewENS_6TargetENS_13TextureFormatEiiii createTextureView(enum QOpenGLTexture::Target, enum QOpenGLTexture::TextureFormat, int, int, int, int)
extern "C"
void*
C_ZNK14QOpenGLTexture17createTextureViewENS_6TargetENS_13TextureFormatEiiii(void *qthis,
QOpenGLTexture::Target arg1,
QOpenGLTexture::TextureFormat arg2,
int arg3,
int arg4,
int arg5,
int arg6) {
  auto ret =
  ((QOpenGLTexture*)qthis)->createTextureView(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 549, column 10>
//   // proto:  void QOpenGLTexture::setMinimumLevelOfDetail(float value);
// _ZN14QOpenGLTexture23setMinimumLevelOfDetailEf setMinimumLevelOfDetail(float)
extern "C"
void
C_ZN14QOpenGLTexture23setMinimumLevelOfDetailEf(void *qthis,
float arg1) {
  ((QOpenGLTexture*)qthis)->setMinimumLevelOfDetail(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 387, column 10>
//   // proto:  void QOpenGLTexture::setMipLevels(int levels);
// _ZN14QOpenGLTexture12setMipLevelsEi setMipLevels(int)
extern "C"
void
C_ZN14QOpenGLTexture12setMipLevelsEi(void *qthis,
int arg1) {
  ((QOpenGLTexture*)qthis)->setMipLevels(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 472, column 21>
//   // proto:  QPair<int, int> QOpenGLTexture::mipLevelRange();
// _ZNK14QOpenGLTexture13mipLevelRangeEv mipLevelRange()
extern "C"
QPair<int, int>*
C_ZNK14QOpenGLTexture13mipLevelRangeEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->mipLevelRange();
  return new QPair<int, int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 469, column 10>
//   // proto:  void QOpenGLTexture::setMipMaxLevel(int maxLevel);
// _ZN14QOpenGLTexture14setMipMaxLevelEi setMipMaxLevel(int)
extern "C"
void
C_ZN14QOpenGLTexture14setMipMaxLevelEi(void *qthis,
int arg1) {
  ((QOpenGLTexture*)qthis)->setMipMaxLevel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 556, column 11>
//   // proto:  float QOpenGLTexture::levelofDetailBias();
// _ZNK14QOpenGLTexture17levelofDetailBiasEv levelofDetailBias()
extern "C"
float
C_ZNK14QOpenGLTexture17levelofDetailBiasEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->levelofDetailBias();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 389, column 9>
//   // proto:  int QOpenGLTexture::maximumMipLevels();
// _ZNK14QOpenGLTexture16maximumMipLevelsEv maximumMipLevels()
extern "C"
int
C_ZNK14QOpenGLTexture16maximumMipLevelsEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->maximumMipLevels();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 376, column 10>
//   // proto:  bool QOpenGLTexture::isBound(uint unit);
// _ZN14QOpenGLTexture7isBoundEj isBound(uint)
extern "C"
bool
C_ZN14QOpenGLTexture7isBoundEj(void *qthis,
uint arg1) {
  auto ret =
  ((QOpenGLTexture*)qthis)->isBound(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 542, column 10>
//   // proto:  void QOpenGLTexture::setBorderColor(uint r, uint g, uint b, uint a);
// _ZN14QOpenGLTexture14setBorderColorEjjjj setBorderColor(uint, uint, uint, uint)
extern "C"
void
C_ZN14QOpenGLTexture14setBorderColorEjjjj(void *qthis,
uint arg1,
uint arg2,
uint arg3,
uint arg4) {
  ((QOpenGLTexture*)qthis)->setBorderColor(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 532, column 10>
//   // proto:  void QOpenGLTexture::setMaximumAnisotropy(float anisotropy);
// _ZN14QOpenGLTexture20setMaximumAnisotropyEf setMaximumAnisotropy(float)
extern "C"
void
C_ZN14QOpenGLTexture20setMaximumAnisotropyEf(void *qthis,
float arg1) {
  ((QOpenGLTexture*)qthis)->setMaximumAnisotropy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 393, column 10>
//   // proto:  void QOpenGLTexture::setSamples(int samples);
// _ZN14QOpenGLTexture10setSamplesEi setSamples(int)
extern "C"
void
C_ZN14QOpenGLTexture10setSamplesEi(void *qthis,
int arg1) {
  ((QOpenGLTexture*)qthis)->setSamples(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 388, column 9>
//   // proto:  int QOpenGLTexture::mipLevels();
// _ZNK14QOpenGLTexture9mipLevelsEv mipLevels()
extern "C"
int
C_ZNK14QOpenGLTexture9mipLevelsEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->mipLevels();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 555, column 10>
//   // proto:  void QOpenGLTexture::setLevelofDetailBias(float bias);
// _ZN14QOpenGLTexture20setLevelofDetailBiasEf setLevelofDetailBias(float)
extern "C"
void
C_ZN14QOpenGLTexture20setLevelofDetailBiasEf(void *qthis,
float arg1) {
  ((QOpenGLTexture*)qthis)->setLevelofDetailBias(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 367, column 12>
//   // proto:  GLuint QOpenGLTexture::textureId();
// _ZNK14QOpenGLTexture9textureIdEv textureId()
extern "C"
unsigned int
C_ZNK14QOpenGLTexture9textureIdEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->textureId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 371, column 10>
//   // proto:  void QOpenGLTexture::bind(uint unit, QOpenGLTexture::TextureUnitReset reset);
// _ZN14QOpenGLTexture4bindEjNS_16TextureUnitResetE bind(uint, enum QOpenGLTexture::TextureUnitReset)
extern "C"
void
C_ZN14QOpenGLTexture4bindEjNS_16TextureUnitResetE(void *qthis,
uint arg1,
QOpenGLTexture::TextureUnitReset arg2) {
  ((QOpenGLTexture*)qthis)->bind(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 471, column 10>
//   // proto:  void QOpenGLTexture::setMipLevelRange(int baseLevel, int maxLevel);
// _ZN14QOpenGLTexture16setMipLevelRangeEii setMipLevelRange(int, int)
extern "C"
void
C_ZN14QOpenGLTexture16setMipLevelRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QOpenGLTexture*)qthis)->setMipLevelRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 397, column 10>
//   // proto:  void QOpenGLTexture::allocateStorage();
// _ZN14QOpenGLTexture15allocateStorageEv allocateStorage()
extern "C"
void
C_ZN14QOpenGLTexture15allocateStorageEv(void *qthis) {
  ((QOpenGLTexture*)qthis)->allocateStorage();
}
//   // proto:  void QOpenGLTexture::~QOpenGLTexture();
extern "C"
void C_ZN14QOpenGLTextureD2Ev(void *qthis) {
  delete (QOpenGLTexture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 470, column 9>
//   // proto:  int QOpenGLTexture::mipMaxLevel();
// _ZNK14QOpenGLTexture11mipMaxLevelEv mipMaxLevel()
extern "C"
int
C_ZNK14QOpenGLTexture11mipMaxLevelEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->mipMaxLevel();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 539, column 10>
//   // proto:  void QOpenGLTexture::setBorderColor(QColor color);
// _ZN14QOpenGLTexture14setBorderColorE6QColor setBorderColor(class QColor)
extern "C"
void
C_ZN14QOpenGLTexture14setBorderColorE6QColor(void *qthis,
QColor* arg1) {
  ((QOpenGLTexture*)qthis)->setBorderColor(*((QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 382, column 19>
//   // proto:  QOpenGLTexture::TextureFormat QOpenGLTexture::format();
// _ZNK14QOpenGLTexture6formatEv format()
extern "C"
QOpenGLTexture::TextureFormat
C_ZNK14QOpenGLTexture6formatEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->format();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 536, column 10>
//   // proto:  void QOpenGLTexture::setWrapMode(QOpenGLTexture::CoordinateDirection direction, QOpenGLTexture::WrapMode mode);
// _ZN14QOpenGLTexture11setWrapModeENS_19CoordinateDirectionENS_8WrapModeE setWrapMode(enum QOpenGLTexture::CoordinateDirection, enum QOpenGLTexture::WrapMode)
extern "C"
void
C_ZN14QOpenGLTexture11setWrapModeENS_19CoordinateDirectionENS_8WrapModeE(void *qthis,
QOpenGLTexture::CoordinateDirection arg1,
QOpenGLTexture::WrapMode arg2) {
  ((QOpenGLTexture*)qthis)->setWrapMode(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 429, column 10>
//   // proto:  void QOpenGLTexture::setData(int mipLevel, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture7setDataEiNS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions setData(int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, const void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture7setDataEiNS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
QOpenGLTexture::PixelFormat arg2,
QOpenGLTexture::PixelType arg3,
const void * arg4,
const QOpenGLPixelTransferOptions *const arg5) {
  ((QOpenGLTexture*)qthis)->setData(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 365, column 10>
//   // proto:  void QOpenGLTexture::destroy();
// _ZN14QOpenGLTexture7destroyEv destroy()
extern "C"
void
C_ZN14QOpenGLTexture7destroyEv(void *qthis) {
  ((QOpenGLTexture*)qthis)->destroy();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 477, column 10>
//   // proto:  void QOpenGLTexture::generateMipMaps();
// _ZN14QOpenGLTexture15generateMipMapsEv generateMipMaps()
extern "C"
void
C_ZN14QOpenGLTexture15generateMipMapsEv(void *qthis) {
  ((QOpenGLTexture*)qthis)->generateMipMaps();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 504, column 10>
//   // proto:  void QOpenGLTexture::setComparisonFunction(QOpenGLTexture::ComparisonFunction function);
// _ZN14QOpenGLTexture21setComparisonFunctionENS_18ComparisonFunctionE setComparisonFunction(enum QOpenGLTexture::ComparisonFunction)
extern "C"
void
C_ZN14QOpenGLTexture21setComparisonFunctionENS_18ComparisonFunctionE(void *qthis,
QOpenGLTexture::ComparisonFunction arg1) {
  ((QOpenGLTexture*)qthis)->setComparisonFunction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 410, column 24>
//   // proto:  void QOpenGLTexture::setData(int mipLevel, int layer, QOpenGLTexture::CubeMapFace cubeFace, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture7setDataEiiNS_11CubeMapFaceENS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions setData(int, int, enum QOpenGLTexture::CubeMapFace, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture7setDataEiiNS_11CubeMapFaceENS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
QOpenGLTexture::CubeMapFace arg3,
QOpenGLTexture::PixelFormat arg4,
QOpenGLTexture::PixelType arg5,
void * arg6,
const QOpenGLPixelTransferOptions *const arg7) {
  ((QOpenGLTexture*)qthis)->setData(arg1,
arg2,
arg3,
arg4,
arg5,
arg6,
arg7);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 372, column 10>
//   // proto:  void QOpenGLTexture::release();
// _ZN14QOpenGLTexture7releaseEv release()
extern "C"
void
C_ZN14QOpenGLTexture7releaseEv(void *qthis) {
  ((QOpenGLTexture*)qthis)->release();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 450, column 10>
//   // proto:  void QOpenGLTexture::setCompressedData(int mipLevel, int layer, QOpenGLTexture::CubeMapFace cubeFace, int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture17setCompressedDataEiiNS_11CubeMapFaceEiPKvPK27QOpenGLPixelTransferOptions setCompressedData(int, int, enum QOpenGLTexture::CubeMapFace, int, const void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture17setCompressedDataEiiNS_11CubeMapFaceEiPKvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
QOpenGLTexture::CubeMapFace arg3,
int arg4,
const void * arg5,
const QOpenGLPixelTransferOptions *const arg6) {
  ((QOpenGLTexture*)qthis)->setCompressedData(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 533, column 11>
//   // proto:  float QOpenGLTexture::maximumAnisotropy();
// _ZNK14QOpenGLTexture17maximumAnisotropyEv maximumAnisotropy()
extern "C"
float
C_ZNK14QOpenGLTexture17maximumAnisotropyEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->maximumAnisotropy();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 464, column 17>
//   // proto: static bool QOpenGLTexture::hasFeature(QOpenGLTexture::Feature feature);
// _ZN14QOpenGLTexture10hasFeatureENS_7FeatureE hasFeature(enum QOpenGLTexture::Feature)
extern "C"
bool
C_ZN14QOpenGLTexture10hasFeatureENS_7FeatureE(QOpenGLTexture::Feature arg1) {
  auto ret =
  QOpenGLTexture::hasFeature(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 483, column 18>
//   // proto:  QOpenGLTexture::SwizzleValue QOpenGLTexture::swizzleMask(QOpenGLTexture::SwizzleComponent component);
// _ZNK14QOpenGLTexture11swizzleMaskENS_16SwizzleComponentE swizzleMask(enum QOpenGLTexture::SwizzleComponent)
extern "C"
QOpenGLTexture::SwizzleValue
C_ZNK14QOpenGLTexture11swizzleMaskENS_16SwizzleComponentE(void *qthis,
QOpenGLTexture::SwizzleComponent arg1) {
  auto ret =
  ((QOpenGLTexture*)qthis)->swizzleMask(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 552, column 11>
//   // proto:  float QOpenGLTexture::maximumLevelOfDetail();
// _ZNK14QOpenGLTexture20maximumLevelOfDetailEv maximumLevelOfDetail()
extern "C"
float
C_ZNK14QOpenGLTexture20maximumLevelOfDetailEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->maximumLevelOfDetail();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 383, column 10>
//   // proto:  void QOpenGLTexture::setSize(int width, int height, int depth);
// _ZN14QOpenGLTexture7setSizeEiii setSize(int, int, int)
extern "C"
void
C_ZN14QOpenGLTexture7setSizeEiii(void *qthis,
int arg1,
int arg2,
int arg3) {
  ((QOpenGLTexture*)qthis)->setSize(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 480, column 10>
//   // proto:  void QOpenGLTexture::setSwizzleMask(QOpenGLTexture::SwizzleComponent component, QOpenGLTexture::SwizzleValue value);
// _ZN14QOpenGLTexture14setSwizzleMaskENS_16SwizzleComponentENS_12SwizzleValueE setSwizzleMask(enum QOpenGLTexture::SwizzleComponent, enum QOpenGLTexture::SwizzleValue)
extern "C"
void
C_ZN14QOpenGLTexture14setSwizzleMaskENS_16SwizzleComponentENS_12SwizzleValueE(void *qthis,
QOpenGLTexture::SwizzleComponent arg1,
QOpenGLTexture::SwizzleValue arg2) {
  ((QOpenGLTexture*)qthis)->setSwizzleMask(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 366, column 10>
//   // proto:  bool QOpenGLTexture::isCreated();
// _ZNK14QOpenGLTexture9isCreatedEv isCreated()
extern "C"
bool
C_ZNK14QOpenGLTexture9isCreatedEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->isCreated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 375, column 10>
//   // proto:  bool QOpenGLTexture::isBound();
// _ZNK14QOpenGLTexture7isBoundEv isBound()
extern "C"
bool
C_ZNK14QOpenGLTexture7isBoundEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->isBound();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 526, column 12>
//   // proto:  QOpenGLTexture::Filter QOpenGLTexture::minificationFilter();
// _ZNK14QOpenGLTexture18minificationFilterEv minificationFilter()
extern "C"
QOpenGLTexture::Filter
C_ZNK14QOpenGLTexture18minificationFilterEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->minificationFilter();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 419, column 24>
//   // proto:  void QOpenGLTexture::setData(QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture7setDataENS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions setData(enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture7setDataENS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions(void *qthis,
QOpenGLTexture::PixelFormat arg1,
QOpenGLTexture::PixelType arg2,
void * arg3,
const QOpenGLPixelTransferOptions *const arg4) {
  ((QOpenGLTexture*)qthis)->setData(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 540, column 10>
//   // proto:  void QOpenGLTexture::setBorderColor(float r, float g, float b, float a);
// _ZN14QOpenGLTexture14setBorderColorEffff setBorderColor(float, float, float, float)
extern "C"
void
C_ZN14QOpenGLTexture14setBorderColorEffff(void *qthis,
float arg1,
float arg2,
float arg3,
float arg4) {
  ((QOpenGLTexture*)qthis)->setBorderColor(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 394, column 9>
//   // proto:  int QOpenGLTexture::samples();
// _ZNK14QOpenGLTexture7samplesEv samples()
extern "C"
int
C_ZNK14QOpenGLTexture7samplesEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->samples();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 512, column 10>
//   // proto:  void QOpenGLTexture::setComparisonMode(QOpenGLTexture::ComparisonMode mode);
// _ZN14QOpenGLTexture17setComparisonModeENS_14ComparisonModeE setComparisonMode(enum QOpenGLTexture::ComparisonMode)
extern "C"
void
C_ZN14QOpenGLTexture17setComparisonModeENS_14ComparisonModeE(void *qthis,
QOpenGLTexture::ComparisonMode arg1) {
  ((QOpenGLTexture*)qthis)->setComparisonMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 468, column 9>
//   // proto:  int QOpenGLTexture::mipBaseLevel();
// _ZNK14QOpenGLTexture12mipBaseLevelEv mipBaseLevel()
extern "C"
int
C_ZNK14QOpenGLTexture12mipBaseLevelEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->mipBaseLevel();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 544, column 12>
//   // proto:  QColor QOpenGLTexture::borderColor();
// _ZNK14QOpenGLTexture11borderColorEv borderColor()
extern "C"
QColor*
C_ZNK14QOpenGLTexture11borderColorEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->borderColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 537, column 14>
//   // proto:  QOpenGLTexture::WrapMode QOpenGLTexture::wrapMode(QOpenGLTexture::CoordinateDirection direction);
// _ZNK14QOpenGLTexture8wrapModeENS_19CoordinateDirectionE wrapMode(enum QOpenGLTexture::CoordinateDirection)
extern "C"
QOpenGLTexture::WrapMode
C_ZNK14QOpenGLTexture8wrapModeENS_19CoordinateDirectionE(void *qthis,
QOpenGLTexture::CoordinateDirection arg1) {
  auto ret =
  ((QOpenGLTexture*)qthis)->wrapMode(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 505, column 24>
//   // proto:  QOpenGLTexture::ComparisonFunction QOpenGLTexture::comparisonFunction();
// _ZNK14QOpenGLTexture18comparisonFunctionEv comparisonFunction()
extern "C"
QOpenGLTexture::ComparisonFunction
C_ZNK14QOpenGLTexture18comparisonFunctionEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->comparisonFunction();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 528, column 12>
//   // proto:  QOpenGLTexture::Filter QOpenGLTexture::magnificationFilter();
// _ZNK14QOpenGLTexture19magnificationFilterEv magnificationFilter()
extern "C"
QOpenGLTexture::Filter
C_ZNK14QOpenGLTexture19magnificationFilterEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->magnificationFilter();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 441, column 24>
//   // proto:  void QOpenGLTexture::setCompressedData(int mipLevel, int layer, int dataSize, void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture17setCompressedDataEiiiPvPK27QOpenGLPixelTransferOptions setCompressedData(int, int, int, void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture17setCompressedDataEiiiPvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
int arg3,
void * arg4,
const QOpenGLPixelTransferOptions *const arg5) {
  ((QOpenGLTexture*)qthis)->setCompressedData(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 357, column 14>
//   // proto:  void QOpenGLTexture::QOpenGLTexture(QOpenGLTexture::Target target);
extern "C"
QOpenGLTexture*
C_ZN14QOpenGLTextureC2ENS_6TargetE(QOpenGLTexture::Target arg1) {
  auto ret = new QOpenGLTexture(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 531, column 27>
//   // proto:  QPair<QOpenGLTexture::Filter, QOpenGLTexture::Filter> QOpenGLTexture::minMagFilters();
// _ZNK14QOpenGLTexture13minMagFiltersEv minMagFilters()
extern "C"
QPair<QOpenGLTexture::Filter, QOpenGLTexture::Filter>*
C_ZNK14QOpenGLTexture13minMagFiltersEv(void *qthis) {
  auto ret =
  ((QOpenGLTexture*)qthis)->minMagFilters();
  return new QPair<QOpenGLTexture::Filter, QOpenGLTexture::Filter>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 462, column 10>
//   // proto:  void QOpenGLTexture::setData(const QImage & image, QOpenGLTexture::MipMapGeneration genMipMaps);
// _ZN14QOpenGLTexture7setDataERK6QImageNS_16MipMapGenerationE setData(const class QImage &, enum QOpenGLTexture::MipMapGeneration)
extern "C"
void
C_ZN14QOpenGLTexture7setDataERK6QImageNS_16MipMapGenerationE(void *qthis,
const QImage* arg1,
QOpenGLTexture::MipMapGeneration arg2) {
  ((QOpenGLTexture*)qthis)->setData(*((const QImage*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 426, column 10>
//   // proto:  void QOpenGLTexture::setData(int mipLevel, int layer, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture7setDataEiiNS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions setData(int, int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, const void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture7setDataEiiNS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
QOpenGLTexture::PixelFormat arg3,
QOpenGLTexture::PixelType arg4,
const void * arg5,
const QOpenGLPixelTransferOptions *const arg6) {
  ((QOpenGLTexture*)qthis)->setData(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 432, column 10>
//   // proto:  void QOpenGLTexture::setData(QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture7setDataENS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions setData(enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, const void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture7setDataENS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *qthis,
QOpenGLTexture::PixelFormat arg1,
QOpenGLTexture::PixelType arg2,
const void * arg3,
const QOpenGLPixelTransferOptions *const arg4) {
  ((QOpenGLTexture*)qthis)->setData(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltexture.h', line 444, column 24>
//   // proto:  void QOpenGLTexture::setCompressedData(int mipLevel, int dataSize, void * data, const QOpenGLPixelTransferOptions *const options);
// _ZN14QOpenGLTexture17setCompressedDataEiiPvPK27QOpenGLPixelTransferOptions setCompressedData(int, int, void *, const class QOpenGLPixelTransferOptions *const)
extern "C"
void
C_ZN14QOpenGLTexture17setCompressedDataEiiPvPK27QOpenGLPixelTransferOptions(void *qthis,
int arg1,
int arg2,
void * arg3,
const QOpenGLPixelTransferOptions *const arg4) {
  ((QOpenGLTexture*)qthis)->setCompressedData(arg1,
arg2,
arg3,
arg4);
}
// <= ext block end

// body block begin =>
// <= body block end

