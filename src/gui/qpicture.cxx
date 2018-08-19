//  header block begin
// /usr/include/qt/QtGui/qpicture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpicture.h>
#include <QtGui>
#include "callback_inherit.h"

// QPicture is pure virtual: false
// QPicture has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPicture : public QPicture {
public:
  virtual ~MyQPicture() {}
// void QPicture(int)
MyQPicture(int formatVersion) : QPicture(formatVersion) {}
// void QPicture(const QPicture &)
MyQPicture(const QPicture & arg0) : QPicture(arg0) {}
// void QPicture(QPicturePrivate &)
MyQPicture(QPicturePrivate & data) : QPicture(data) {}
// Protected virtual Visibility=Default Availability=Available
// int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric m) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)m, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QPicture::metric(m);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:106
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK8QPicture6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric m) {
  return (int)((QPicture*)this_)->QPicture::metric(m);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:59
// [-2] void QPicture(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPictureC2Ei(int formatVersion) {
  auto _nilp = (MyQPicture*)(0);
  return  new MyQPicture(formatVersion);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:60
// [-2] void QPicture(const QPicture &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPictureC2ERKS_(QPicture* arg0) {
  auto _nilp = (MyQPicture*)(0);
  return  new MyQPicture(*arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:61
// [-2] void ~QPicture()
extern "C" Q_DECL_EXPORT
void C_ZN8QPictureD2Ev(void *this_) {
  delete (QPicture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:63
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPicture6isNullEv(void *this_) {
  return (bool)((QPicture*)this_)->isNull();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:65
// [4] int devType()
extern "C" Q_DECL_EXPORT
int C_ZNK8QPicture7devTypeEv(void *this_) {
  return (int)((QPicture*)this_)->devType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:66
// [4] uint size()
extern "C" Q_DECL_EXPORT
uint C_ZNK8QPicture4sizeEv(void *this_) {
  return (uint)((QPicture*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:67
// [8] const char * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPicture4dataEv(void *this_) {
  return (void*)((QPicture*)this_)->data();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:68
// [-2] void setData(const char *, uint)
extern "C" Q_DECL_EXPORT
void C_ZN8QPicture7setDataEPKcj(void *this_, const char * data, uint size) {
  ((QPicture*)this_)->setData(data, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:70
// [1] bool play(QPainter *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QPicture4playEP8QPainter(void *this_, QPainter * p) {
  return (bool)((QPicture*)this_)->play(p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:72
// [1] bool load(QIODevice *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QPicture4loadEP9QIODevicePKc(void *this_, QIODevice * dev, const char * format) {
  return (bool)((QPicture*)this_)->load(dev, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:73
// [1] bool load(const QString &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QPicture4loadERK7QStringPKc(void *this_, QString* fileName, const char * format) {
  return (bool)((QPicture*)this_)->load(*fileName, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:74
// [1] bool save(QIODevice *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QPicture4saveEP9QIODevicePKc(void *this_, QIODevice * dev, const char * format) {
  return (bool)((QPicture*)this_)->save(dev, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:75
// [1] bool save(const QString &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QPicture4saveERK7QStringPKc(void *this_, QString* fileName, const char * format) {
  return (bool)((QPicture*)this_)->save(*fileName, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:77
// [16] QRect boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPicture12boundingRectEv(void *this_) {
  auto rv = ((QPicture*)this_)->boundingRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:78
// [-2] void setBoundingRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPicture15setBoundingRectERK5QRect(void *this_, QRect* r) {
  ((QPicture*)this_)->setBoundingRect(*r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:80
// [32] QPicture & operator=(const QPicture &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPictureaSERKS_(void *this_, QPicture* p) {
  auto& rv = ((QPicture*)this_)->operator=(*p);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:82
// [32] QPicture & operator=(QPicture &&)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPictureaSEOS_(void *this_, QPicture && other) {
  auto& rv = ((QPicture*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qpicture.h:85
// [-2] void swap(QPicture &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN8QPicture4swapERS_(void *this_, QPicture* other) {
  ((QPicture*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:87
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN8QPicture6detachEv(void *this_) {
  ((QPicture*)this_)->detach();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:88
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPicture10isDetachedEv(void *this_) {
  return (bool)((QPicture*)this_)->isDetached();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:94
// [8] const char * pictureFormat(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPicture13pictureFormatERK7QString(QString* fileName) {
  return (void*)QPicture::pictureFormat(*fileName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:95
// [8] QList<QByteArray> inputFormats()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN8QPicture12inputFormatsEv() {
  auto rv = QPicture::inputFormats();
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:96
// [8] QList<QByteArray> outputFormats()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN8QPicture13outputFormatsEv() {
  auto rv = QPicture::outputFormats();
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:97
// [8] QStringList inputFormatList()
extern "C" Q_DECL_EXPORT
void* C_ZN8QPicture15inputFormatListEv() {
  auto rv = QPicture::inputFormatList();
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:98
// [8] QStringList outputFormatList()
extern "C" Q_DECL_EXPORT
void* C_ZN8QPicture16outputFormatListEv() {
  auto rv = QPicture::outputFormatList();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:101
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPicture11paintEngineEv(void *this_) {
  return (void*)((QPicture*)this_)->paintEngine();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:118
// [8] QPicture::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN8QPicture8data_ptrEv(void *this_) {
  auto& rv = ((QPicture*)this_)->data_ptr();
return &rv;
}

//  main block end
