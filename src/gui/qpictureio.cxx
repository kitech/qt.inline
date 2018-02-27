//  header block begin
// /usr/include/qt/QtGui/qpicture.h
#ifndef protected
#define protected public
#endif
#include <qpicture.h>
#include <QtGui>
#include "callback_inherit.h"

// QPictureIO is pure virtual: false
// QPictureIO has virtual projected: false
//  header block end

//  main block begin

class MyQPictureIO : public QPictureIO {
public:
  virtual ~MyQPictureIO() {}
// void QPictureIO()
MyQPictureIO() : QPictureIO() {}
// void QPictureIO(class QIODevice *, const char *)
MyQPictureIO(QIODevice * ioDevice, const char * format) : QPictureIO(ioDevice, format) {}
// void QPictureIO(const class QString &, const char *)
MyQPictureIO(const QString & fileName, const char * format) : QPictureIO(fileName, format) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:134
// [-2] void QPictureIO()
extern "C"
void* C_ZN10QPictureIOC2Ev() {
  return  new QPictureIO();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:135
// [-2] void QPictureIO(class QIODevice *, const char *)
extern "C"
void* C_ZN10QPictureIOC2EP9QIODevicePKc(QIODevice * ioDevice, const char * format) {
  return  new QPictureIO(ioDevice, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:136
// [-2] void QPictureIO(const class QString &, const char *)
extern "C"
void* C_ZN10QPictureIOC2ERK7QStringPKc(QString* fileName, const char * format) {
  return  new QPictureIO(*fileName, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:137
// [-2] void ~QPictureIO()
extern "C"
void C_ZN10QPictureIOD2Ev(void *this_) {
  delete (QPictureIO*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:139
// [32] const QPicture & picture()
extern "C"
void* C_ZNK10QPictureIO7pictureEv(void *this_) {
  auto& rv = ((QPictureIO*)this_)->picture();
return new QPicture(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:140
// [4] int status()
extern "C"
int C_ZNK10QPictureIO6statusEv(void *this_) {
  return (int)((QPictureIO*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:141
// [8] const char * format()
extern "C"
void* C_ZNK10QPictureIO6formatEv(void *this_) {
  return (void*)((QPictureIO*)this_)->format();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:142
// [8] QIODevice * ioDevice()
extern "C"
void* C_ZNK10QPictureIO8ioDeviceEv(void *this_) {
  return (void*)((QPictureIO*)this_)->ioDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:143
// [8] QString fileName()
extern "C"
void* C_ZNK10QPictureIO8fileNameEv(void *this_) {
  auto rv = ((QPictureIO*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:144
// [4] int quality()
extern "C"
int C_ZNK10QPictureIO7qualityEv(void *this_) {
  return (int)((QPictureIO*)this_)->quality();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:145
// [8] QString description()
extern "C"
void* C_ZNK10QPictureIO11descriptionEv(void *this_) {
  auto rv = ((QPictureIO*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:146
// [8] const char * parameters()
extern "C"
void* C_ZNK10QPictureIO10parametersEv(void *this_) {
  return (void*)((QPictureIO*)this_)->parameters();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:147
// [4] float gamma()
extern "C"
float C_ZNK10QPictureIO5gammaEv(void *this_) {
  return (float)((QPictureIO*)this_)->gamma();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:149
// [-2] void setPicture(const class QPicture &)
extern "C"
void C_ZN10QPictureIO10setPictureERK8QPicture(void *this_, QPicture* arg0) {
  ((QPictureIO*)this_)->setPicture(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:150
// [-2] void setStatus(int)
extern "C"
void C_ZN10QPictureIO9setStatusEi(void *this_, int arg0) {
  ((QPictureIO*)this_)->setStatus(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:151
// [-2] void setFormat(const char *)
extern "C"
void C_ZN10QPictureIO9setFormatEPKc(void *this_, const char * arg0) {
  ((QPictureIO*)this_)->setFormat(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:152
// [-2] void setIODevice(class QIODevice *)
extern "C"
void C_ZN10QPictureIO11setIODeviceEP9QIODevice(void *this_, QIODevice * arg0) {
  ((QPictureIO*)this_)->setIODevice(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:153
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN10QPictureIO11setFileNameERK7QString(void *this_, QString* arg0) {
  ((QPictureIO*)this_)->setFileName(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:154
// [-2] void setQuality(int)
extern "C"
void C_ZN10QPictureIO10setQualityEi(void *this_, int arg0) {
  ((QPictureIO*)this_)->setQuality(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:155
// [-2] void setDescription(const class QString &)
extern "C"
void C_ZN10QPictureIO14setDescriptionERK7QString(void *this_, QString* arg0) {
  ((QPictureIO*)this_)->setDescription(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:156
// [-2] void setParameters(const char *)
extern "C"
void C_ZN10QPictureIO13setParametersEPKc(void *this_, const char * arg0) {
  ((QPictureIO*)this_)->setParameters(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:157
// [-2] void setGamma(float)
extern "C"
void C_ZN10QPictureIO8setGammaEf(void *this_, float arg0) {
  ((QPictureIO*)this_)->setGamma(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:159
// [1] bool read()
extern "C"
bool C_ZN10QPictureIO4readEv(void *this_) {
  return (bool)((QPictureIO*)this_)->read();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:160
// [1] bool write()
extern "C"
bool C_ZN10QPictureIO5writeEv(void *this_) {
  return (bool)((QPictureIO*)this_)->write();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:162
// [8] QByteArray pictureFormat(const class QString &)
extern "C"
void* C_ZN10QPictureIO13pictureFormatERK7QString(QString* fileName) {
  auto rv = QPictureIO::pictureFormat(*fileName);
return new QByteArray(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:163
// [8] QByteArray pictureFormat(class QIODevice *)
extern "C"
void* C_ZN10QPictureIO13pictureFormatEP9QIODevice(QIODevice * arg0) {
  auto rv = QPictureIO::pictureFormat(arg0);
return new QByteArray(rv);
}
//  main block end
