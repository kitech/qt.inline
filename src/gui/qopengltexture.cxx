//  header block begin

// since 0x050200
// /usr/include/qt/QtGui/qopengltexture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengltexture.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLTexture is pure virtual: false
// QOpenGLTexture has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLTexture_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLTexture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLTexture_t qt_meta_stringdata_MyQOpenGLTexture = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQOpenGLTexture"
  },
  "MyQOpenGLTexture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLTexture[] = {
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
class Q_DECL_EXPORT MyQOpenGLTexture : public QOpenGLTexture {
public:
  virtual ~MyQOpenGLTexture() {}
// void QOpenGLTexture(QOpenGLTexture::Target)
MyQOpenGLTexture(QOpenGLTexture::Target target) : QOpenGLTexture(target) {}
// void QOpenGLTexture(const QImage &, QOpenGLTexture::MipMapGeneration)
MyQOpenGLTexture(const QImage & image, QOpenGLTexture::MipMapGeneration genMipMaps) : QOpenGLTexture(image, genMipMaps) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:407
// [-2] void QOpenGLTexture(QOpenGLTexture::Target)
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLTextureC2ENS_6TargetE(QOpenGLTexture::Target target) {
  return  new QOpenGLTexture(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:408
// [-2] void QOpenGLTexture(const QImage &, QOpenGLTexture::MipMapGeneration)
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLTextureC2ERK6QImageNS_16MipMapGenerationE(QImage* image, QOpenGLTexture::MipMapGeneration genMipMaps) {
  return  new QOpenGLTexture(*image, genMipMaps);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:409
// [-2] void ~QOpenGLTexture()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTextureD2Ev(void *this_) {
  delete (QOpenGLTexture*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qopengltexture.h:411
// [4] QOpenGLTexture::Target target()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
QOpenGLTexture::Target C_ZNK14QOpenGLTexture6targetEv(void *this_) {
  return (QOpenGLTexture::Target)((QOpenGLTexture*)this_)->target();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:414
// [1] bool create()
extern "C" Q_DECL_EXPORT
bool C_ZN14QOpenGLTexture6createEv(void *this_) {
  return (bool)((QOpenGLTexture*)this_)->create();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:415
// [-2] void destroy()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7destroyEv(void *this_) {
  ((QOpenGLTexture*)this_)->destroy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:416
// [1] bool isCreated()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLTexture9isCreatedEv(void *this_) {
  return (bool)((QOpenGLTexture*)this_)->isCreated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:417
// [4] GLuint textureId()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK14QOpenGLTexture9textureIdEv(void *this_) {
  return (GLuint)((QOpenGLTexture*)this_)->textureId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:420
// [-2] void bind()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture4bindEv(void *this_) {
  ((QOpenGLTexture*)this_)->bind();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:421
// [-2] void bind(uint, QOpenGLTexture::TextureUnitReset)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture4bindEjNS_16TextureUnitResetE(void *this_, uint unit, QOpenGLTexture::TextureUnitReset reset) {
  ((QOpenGLTexture*)this_)->bind(unit, reset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:422
// [-2] void release()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7releaseEv(void *this_) {
  ((QOpenGLTexture*)this_)->release();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:423
// [-2] void release(uint, QOpenGLTexture::TextureUnitReset)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7releaseEjNS_16TextureUnitResetE(void *this_, uint unit, QOpenGLTexture::TextureUnitReset reset) {
  ((QOpenGLTexture*)this_)->release(unit, reset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:425
// [1] bool isBound()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLTexture7isBoundEv(void *this_) {
  return (bool)((QOpenGLTexture*)this_)->isBound();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:426
// [1] bool isBound(uint)
extern "C" Q_DECL_EXPORT
bool C_ZN14QOpenGLTexture7isBoundEj(void *this_, uint unit) {
  return (bool)((QOpenGLTexture*)this_)->isBound(unit);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:427
// [4] GLuint boundTextureId(QOpenGLTexture::BindingTarget)
extern "C" Q_DECL_EXPORT
GLuint C_ZN14QOpenGLTexture14boundTextureIdENS_13BindingTargetE(QOpenGLTexture::BindingTarget target) {
  return (GLuint)QOpenGLTexture::boundTextureId(target);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:428
// [4] GLuint boundTextureId(uint, QOpenGLTexture::BindingTarget)
extern "C" Q_DECL_EXPORT
GLuint C_ZN14QOpenGLTexture14boundTextureIdEjNS_13BindingTargetE(uint unit, QOpenGLTexture::BindingTarget target) {
  return (GLuint)QOpenGLTexture::boundTextureId(unit, target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:431
// [-2] void setFormat(QOpenGLTexture::TextureFormat)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture9setFormatENS_13TextureFormatE(void *this_, QOpenGLTexture::TextureFormat format) {
  ((QOpenGLTexture*)this_)->setFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:432
// [4] QOpenGLTexture::TextureFormat format()
extern "C" Q_DECL_EXPORT
QOpenGLTexture::TextureFormat C_ZNK14QOpenGLTexture6formatEv(void *this_) {
  return (QOpenGLTexture::TextureFormat)((QOpenGLTexture*)this_)->format();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:433
// [-2] void setSize(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setSizeEiii(void *this_, int width, int height, int depth) {
  ((QOpenGLTexture*)this_)->setSize(width, height, depth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:434
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture5widthEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:435
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture6heightEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:436
// [4] int depth()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture5depthEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->depth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:437
// [-2] void setMipLevels(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture12setMipLevelsEi(void *this_, int levels) {
  ((QOpenGLTexture*)this_)->setMipLevels(levels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:438
// [4] int mipLevels()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture9mipLevelsEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->mipLevels();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:439
// [4] int maximumMipLevels()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture16maximumMipLevelsEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->maximumMipLevels();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:440
// [-2] void setLayers(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture9setLayersEi(void *this_, int layers) {
  ((QOpenGLTexture*)this_)->setLayers(layers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:441
// [4] int layers()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture6layersEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->layers();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:442
// [4] int faces()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture5facesEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->faces();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:443
// [-2] void setSamples(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture10setSamplesEi(void *this_, int samples) {
  ((QOpenGLTexture*)this_)->setSamples(samples);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:444
// [4] int samples()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture7samplesEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->samples();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:445
// [-2] void setFixedSamplePositions(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture23setFixedSamplePositionsEb(void *this_, bool fixed) {
  ((QOpenGLTexture*)this_)->setFixedSamplePositions(fixed);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:446
// [1] bool isFixedSamplePositions()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLTexture22isFixedSamplePositionsEv(void *this_) {
  return (bool)((QOpenGLTexture*)this_)->isFixedSamplePositions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:447
// [-2] void allocateStorage()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture15allocateStorageEv(void *this_) {
  ((QOpenGLTexture*)this_)->allocateStorage();
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qopengltexture.h:448
// [-2] void allocateStorage(QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture15allocateStorageENS_11PixelFormatENS_9PixelTypeE(void *this_, QOpenGLTexture::PixelFormat pixelFormat, QOpenGLTexture::PixelType pixelType) {
  ((QOpenGLTexture*)this_)->allocateStorage(pixelFormat, pixelType);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:449
// [1] bool isStorageAllocated()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLTexture18isStorageAllocatedEv(void *this_) {
  return (bool)((QOpenGLTexture*)this_)->isStorageAllocated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:451
// [8] QOpenGLTexture * createTextureView(QOpenGLTexture::Target, QOpenGLTexture::TextureFormat, int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLTexture17createTextureViewENS_6TargetENS_13TextureFormatEiiii(void *this_, QOpenGLTexture::Target target, QOpenGLTexture::TextureFormat viewFormat, int minimumMipmapLevel, int maximumMipmapLevel, int minimumLayer, int maximumLayer) {
  return (void*)((QOpenGLTexture*)this_)->createTextureView(target, viewFormat, minimumMipmapLevel, maximumMipmapLevel, minimumLayer, maximumLayer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:455
// [1] bool isTextureView()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLTexture13isTextureViewEv(void *this_) {
  return (bool)((QOpenGLTexture*)this_)->isTextureView();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:460
// [-2] void setData(int, int, QOpenGLTexture::CubeMapFace, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataEiiNS_11CubeMapFaceENS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, QOpenGLTexture::CubeMapFace cubeFace, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(mipLevel, layer, cubeFace, sourceFormat, sourceType, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:463
// [-2] void setData(int, int, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataEiiNS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(mipLevel, layer, sourceFormat, sourceType, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:466
// [-2] void setData(int, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataEiNS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(mipLevel, sourceFormat, sourceType, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:469
// [-2] void setData(QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataENS_11PixelFormatENS_9PixelTypeEPvPK27QOpenGLPixelTransferOptions(void *this_, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(sourceFormat, sourceType, data, options);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopengltexture.h:473
// [-2] void setData(int, int, QOpenGLTexture::CubeMapFace, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, const void *, const QOpenGLPixelTransferOptions *const)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataEiiNS_11CubeMapFaceENS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, QOpenGLTexture::CubeMapFace cubeFace, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(mipLevel, layer, cubeFace, sourceFormat, sourceType, data, options);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qopengltexture.h:476
// [-2] void setData(int, int, int, QOpenGLTexture::CubeMapFace, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, const void *, const QOpenGLPixelTransferOptions *const)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataEiiiNS_11CubeMapFaceENS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, int layerCount, QOpenGLTexture::CubeMapFace cubeFace, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(mipLevel, layer, layerCount, cubeFace, sourceFormat, sourceType, data, options);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopengltexture.h:479
// [-2] void setData(int, int, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, const void *, const QOpenGLPixelTransferOptions *const)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataEiiNS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(mipLevel, layer, sourceFormat, sourceType, data, options);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopengltexture.h:482
// [-2] void setData(int, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, const void *, const QOpenGLPixelTransferOptions *const)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataEiNS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(mipLevel, sourceFormat, sourceType, data, options);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopengltexture.h:485
// [-2] void setData(QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, const void *, const QOpenGLPixelTransferOptions *const)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataENS_11PixelFormatENS_9PixelTypeEPKvPK27QOpenGLPixelTransferOptions(void *this_, QOpenGLTexture::PixelFormat sourceFormat, QOpenGLTexture::PixelType sourceType, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setData(sourceFormat, sourceType, data, options);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:491
// [-2] void setCompressedData(int, int, QOpenGLTexture::CubeMapFace, int, void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiiNS_11CubeMapFaceEiPvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, QOpenGLTexture::CubeMapFace cubeFace, int dataSize, void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(mipLevel, layer, cubeFace, dataSize, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:494
// [-2] void setCompressedData(int, int, int, void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiiiPvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, int dataSize, void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(mipLevel, layer, dataSize, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:497
// [-2] void setCompressedData(int, int, void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiiPvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int dataSize, void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(mipLevel, dataSize, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:499
// [-2] void setCompressedData(int, void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiPvPK27QOpenGLPixelTransferOptions(void *this_, int dataSize, void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(dataSize, data, options);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopengltexture.h:503
// [-2] void setCompressedData(int, int, QOpenGLTexture::CubeMapFace, int, const void *, const QOpenGLPixelTransferOptions *const)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiiNS_11CubeMapFaceEiPKvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, QOpenGLTexture::CubeMapFace cubeFace, int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(mipLevel, layer, cubeFace, dataSize, data, options);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qopengltexture.h:506
// [-2] void setCompressedData(int, int, int, QOpenGLTexture::CubeMapFace, int, const void *, const QOpenGLPixelTransferOptions *const)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiiiNS_11CubeMapFaceEiPKvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, int layerCount, QOpenGLTexture::CubeMapFace cubeFace, int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(mipLevel, layer, layerCount, cubeFace, dataSize, data, options);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:509
// [-2] void setCompressedData(int, int, int, const void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiiiPKvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int layer, int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(mipLevel, layer, dataSize, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:512
// [-2] void setCompressedData(int, int, const void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiiPKvPK27QOpenGLPixelTransferOptions(void *this_, int mipLevel, int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(mipLevel, dataSize, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:514
// [-2] void setCompressedData(int, const void *, const QOpenGLPixelTransferOptions *const)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setCompressedDataEiPKvPK27QOpenGLPixelTransferOptions(void *this_, int dataSize, const void * data, const QOpenGLPixelTransferOptions *const options) {
  ((QOpenGLTexture*)this_)->setCompressedData(dataSize, data, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:518
// [-2] void setData(const QImage &, QOpenGLTexture::MipMapGeneration)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture7setDataERK6QImageNS_16MipMapGenerationE(void *this_, QImage* image, QOpenGLTexture::MipMapGeneration genMipMaps) {
  ((QOpenGLTexture*)this_)->setData(*image, genMipMaps);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:520
// [1] bool hasFeature(QOpenGLTexture::Feature)
extern "C" Q_DECL_EXPORT
bool C_ZN14QOpenGLTexture10hasFeatureENS_7FeatureE(QOpenGLTexture::Feature feature) {
  return (bool)QOpenGLTexture::hasFeature(feature);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:523
// [-2] void setMipBaseLevel(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture15setMipBaseLevelEi(void *this_, int baseLevel) {
  ((QOpenGLTexture*)this_)->setMipBaseLevel(baseLevel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:524
// [4] int mipBaseLevel()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture12mipBaseLevelEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->mipBaseLevel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:525
// [-2] void setMipMaxLevel(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture14setMipMaxLevelEi(void *this_, int maxLevel) {
  ((QOpenGLTexture*)this_)->setMipMaxLevel(maxLevel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:526
// [4] int mipMaxLevel()
extern "C" Q_DECL_EXPORT
int C_ZNK14QOpenGLTexture11mipMaxLevelEv(void *this_) {
  return (int)((QOpenGLTexture*)this_)->mipMaxLevel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:527
// [-2] void setMipLevelRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture16setMipLevelRangeEii(void *this_, int baseLevel, int maxLevel) {
  ((QOpenGLTexture*)this_)->setMipLevelRange(baseLevel, maxLevel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:528
// [8] QPair<int, int> mipLevelRange()
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLTexture13mipLevelRangeEv(void *this_) {
  auto rv = ((QOpenGLTexture*)this_)->mipLevelRange();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:530
// [-2] void setAutoMipMapGenerationEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture30setAutoMipMapGenerationEnabledEb(void *this_, bool enabled) {
  ((QOpenGLTexture*)this_)->setAutoMipMapGenerationEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:531
// [1] bool isAutoMipMapGenerationEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLTexture29isAutoMipMapGenerationEnabledEv(void *this_) {
  return (bool)((QOpenGLTexture*)this_)->isAutoMipMapGenerationEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:533
// [-2] void generateMipMaps()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture15generateMipMapsEv(void *this_) {
  ((QOpenGLTexture*)this_)->generateMipMaps();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:534
// [-2] void generateMipMaps(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture15generateMipMapsEib(void *this_, int baseLevel, bool resetBaseLevel) {
  ((QOpenGLTexture*)this_)->generateMipMaps(baseLevel, resetBaseLevel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:536
// [-2] void setSwizzleMask(QOpenGLTexture::SwizzleComponent, QOpenGLTexture::SwizzleValue)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture14setSwizzleMaskENS_16SwizzleComponentENS_12SwizzleValueE(void *this_, QOpenGLTexture::SwizzleComponent component, QOpenGLTexture::SwizzleValue value) {
  ((QOpenGLTexture*)this_)->setSwizzleMask(component, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:537
// [-2] void setSwizzleMask(QOpenGLTexture::SwizzleValue, QOpenGLTexture::SwizzleValue, QOpenGLTexture::SwizzleValue, QOpenGLTexture::SwizzleValue)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture14setSwizzleMaskENS_12SwizzleValueES0_S0_S0_(void *this_, QOpenGLTexture::SwizzleValue r, QOpenGLTexture::SwizzleValue g, QOpenGLTexture::SwizzleValue b, QOpenGLTexture::SwizzleValue a) {
  ((QOpenGLTexture*)this_)->setSwizzleMask(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:539
// [4] QOpenGLTexture::SwizzleValue swizzleMask(QOpenGLTexture::SwizzleComponent)
extern "C" Q_DECL_EXPORT
QOpenGLTexture::SwizzleValue C_ZNK14QOpenGLTexture11swizzleMaskENS_16SwizzleComponentE(void *this_, QOpenGLTexture::SwizzleComponent component) {
  return (QOpenGLTexture::SwizzleValue)((QOpenGLTexture*)this_)->swizzleMask(component);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qopengltexture.h:547
// [-2] void setDepthStencilMode(QOpenGLTexture::DepthStencilMode)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture19setDepthStencilModeENS_16DepthStencilModeE(void *this_, QOpenGLTexture::DepthStencilMode mode) {
  ((QOpenGLTexture*)this_)->setDepthStencilMode(mode);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qopengltexture.h:548
// [4] QOpenGLTexture::DepthStencilMode depthStencilMode()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
QOpenGLTexture::DepthStencilMode C_ZNK14QOpenGLTexture16depthStencilModeEv(void *this_) {
  return (QOpenGLTexture::DepthStencilMode)((QOpenGLTexture*)this_)->depthStencilMode();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:562
// [-2] void setComparisonFunction(QOpenGLTexture::ComparisonFunction)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture21setComparisonFunctionENS_18ComparisonFunctionE(void *this_, QOpenGLTexture::ComparisonFunction function) {
  ((QOpenGLTexture*)this_)->setComparisonFunction(function);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qopengltexture.h:563
// [4] QOpenGLTexture::ComparisonFunction comparisonFunction()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QOpenGLTexture::ComparisonFunction C_ZNK14QOpenGLTexture18comparisonFunctionEv(void *this_) {
  return (QOpenGLTexture::ComparisonFunction)((QOpenGLTexture*)this_)->comparisonFunction();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qopengltexture.h:570
// [-2] void setComparisonMode(QOpenGLTexture::ComparisonMode)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture17setComparisonModeENS_14ComparisonModeE(void *this_, QOpenGLTexture::ComparisonMode mode) {
  ((QOpenGLTexture*)this_)->setComparisonMode(mode);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qopengltexture.h:571
// [4] QOpenGLTexture::ComparisonMode comparisonMode()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QOpenGLTexture::ComparisonMode C_ZNK14QOpenGLTexture14comparisonModeEv(void *this_) {
  return (QOpenGLTexture::ComparisonMode)((QOpenGLTexture*)this_)->comparisonMode();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:584
// [-2] void setMinificationFilter(QOpenGLTexture::Filter)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture21setMinificationFilterENS_6FilterE(void *this_, QOpenGLTexture::Filter filter) {
  ((QOpenGLTexture*)this_)->setMinificationFilter(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:585
// [4] QOpenGLTexture::Filter minificationFilter()
extern "C" Q_DECL_EXPORT
QOpenGLTexture::Filter C_ZNK14QOpenGLTexture18minificationFilterEv(void *this_) {
  return (QOpenGLTexture::Filter)((QOpenGLTexture*)this_)->minificationFilter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:586
// [-2] void setMagnificationFilter(QOpenGLTexture::Filter)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture22setMagnificationFilterENS_6FilterE(void *this_, QOpenGLTexture::Filter filter) {
  ((QOpenGLTexture*)this_)->setMagnificationFilter(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:587
// [4] QOpenGLTexture::Filter magnificationFilter()
extern "C" Q_DECL_EXPORT
QOpenGLTexture::Filter C_ZNK14QOpenGLTexture19magnificationFilterEv(void *this_) {
  return (QOpenGLTexture::Filter)((QOpenGLTexture*)this_)->magnificationFilter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:588
// [-2] void setMinMagFilters(QOpenGLTexture::Filter, QOpenGLTexture::Filter)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture16setMinMagFiltersENS_6FilterES0_(void *this_, QOpenGLTexture::Filter minificationFilter, QOpenGLTexture::Filter magnificationFilter) {
  ((QOpenGLTexture*)this_)->setMinMagFilters(minificationFilter, magnificationFilter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:590
// [-2] QPair<QOpenGLTexture::Filter, QOpenGLTexture::Filter> minMagFilters()
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLTexture13minMagFiltersEv(void *this_) {
  auto rv = ((QOpenGLTexture*)this_)->minMagFilters();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:591
// [-2] void setMaximumAnisotropy(float)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture20setMaximumAnisotropyEf(void *this_, float anisotropy) {
  ((QOpenGLTexture*)this_)->setMaximumAnisotropy(anisotropy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:592
// [4] float maximumAnisotropy()
extern "C" Q_DECL_EXPORT
float C_ZNK14QOpenGLTexture17maximumAnisotropyEv(void *this_) {
  return (float)((QOpenGLTexture*)this_)->maximumAnisotropy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:594
// [-2] void setWrapMode(QOpenGLTexture::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture11setWrapModeENS_8WrapModeE(void *this_, QOpenGLTexture::WrapMode mode) {
  ((QOpenGLTexture*)this_)->setWrapMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:595
// [-2] void setWrapMode(QOpenGLTexture::CoordinateDirection, QOpenGLTexture::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture11setWrapModeENS_19CoordinateDirectionENS_8WrapModeE(void *this_, QOpenGLTexture::CoordinateDirection direction, QOpenGLTexture::WrapMode mode) {
  ((QOpenGLTexture*)this_)->setWrapMode(direction, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:596
// [4] QOpenGLTexture::WrapMode wrapMode(QOpenGLTexture::CoordinateDirection)
extern "C" Q_DECL_EXPORT
QOpenGLTexture::WrapMode C_ZNK14QOpenGLTexture8wrapModeENS_19CoordinateDirectionE(void *this_, QOpenGLTexture::CoordinateDirection direction) {
  return (QOpenGLTexture::WrapMode)((QOpenGLTexture*)this_)->wrapMode(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:598
// [-2] void setBorderColor(QColor)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture14setBorderColorE6QColor(void *this_, QColor* color) {
  ((QOpenGLTexture*)this_)->setBorderColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:599
// [-2] void setBorderColor(float, float, float, float)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture14setBorderColorEffff(void *this_, float r, float g, float b, float a) {
  ((QOpenGLTexture*)this_)->setBorderColor(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:600
// [-2] void setBorderColor(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture14setBorderColorEiiii(void *this_, int r, int g, int b, int a) {
  ((QOpenGLTexture*)this_)->setBorderColor(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:601
// [-2] void setBorderColor(uint, uint, uint, uint)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture14setBorderColorEjjjj(void *this_, uint r, uint g, uint b, uint a) {
  ((QOpenGLTexture*)this_)->setBorderColor(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:603
// [16] QColor borderColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLTexture11borderColorEv(void *this_) {
  auto rv = ((QOpenGLTexture*)this_)->borderColor();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:604
// [-2] void borderColor(float *)
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLTexture11borderColorEPf(void *this_, float * border) {
  ((QOpenGLTexture*)this_)->borderColor(border);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:605
// [-2] void borderColor(int *)
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLTexture11borderColorEPi(void *this_, int * border) {
  ((QOpenGLTexture*)this_)->borderColor(border);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:606
// [-2] void borderColor(unsigned int *)
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLTexture11borderColorEPj(void *this_, unsigned int * border) {
  ((QOpenGLTexture*)this_)->borderColor(border);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:608
// [-2] void setMinimumLevelOfDetail(float)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture23setMinimumLevelOfDetailEf(void *this_, float value) {
  ((QOpenGLTexture*)this_)->setMinimumLevelOfDetail(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:609
// [4] float minimumLevelOfDetail()
extern "C" Q_DECL_EXPORT
float C_ZNK14QOpenGLTexture20minimumLevelOfDetailEv(void *this_) {
  return (float)((QOpenGLTexture*)this_)->minimumLevelOfDetail();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:610
// [-2] void setMaximumLevelOfDetail(float)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture23setMaximumLevelOfDetailEf(void *this_, float value) {
  ((QOpenGLTexture*)this_)->setMaximumLevelOfDetail(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:611
// [4] float maximumLevelOfDetail()
extern "C" Q_DECL_EXPORT
float C_ZNK14QOpenGLTexture20maximumLevelOfDetailEv(void *this_) {
  return (float)((QOpenGLTexture*)this_)->maximumLevelOfDetail();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:612
// [-2] void setLevelOfDetailRange(float, float)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture21setLevelOfDetailRangeEff(void *this_, float min, float max) {
  ((QOpenGLTexture*)this_)->setLevelOfDetailRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:613
// [-2] QPair<float, float> levelOfDetailRange()
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLTexture18levelOfDetailRangeEv(void *this_) {
  auto rv = ((QOpenGLTexture*)this_)->levelOfDetailRange();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:614
// [-2] void setLevelofDetailBias(float)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLTexture20setLevelofDetailBiasEf(void *this_, float bias) {
  ((QOpenGLTexture*)this_)->setLevelofDetailBias(bias);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:615
// [4] float levelofDetailBias()
extern "C" Q_DECL_EXPORT
float C_ZNK14QOpenGLTexture17levelofDetailBiasEv(void *this_) {
  return (float)((QOpenGLTexture*)this_)->levelofDetailBias();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
