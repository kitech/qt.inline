//  header block begin
// /usr/include/qt/QtGui/qpicture.h
#include <qpicture.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpicture.h:131
// void QPictureIO()
extern "C"
void* C_ZN10QPictureIOC1Ev() {
  return new QPictureIO();
}
// /usr/include/qt/QtGui/qpicture.h:132
// void QPictureIO(class QIODevice *, const char *)
extern "C"
void* C_ZN10QPictureIOC1EP9QIODevicePKc(QIODevice * ioDevice, const char * format) {
  return new QPictureIO(ioDevice, format);
}
// /usr/include/qt/QtGui/qpicture.h:133
// void QPictureIO(const class QString &, const char *)
extern "C"
void* C_ZN10QPictureIOC1ERK7QStringPKc(const QString & fileName, const char * format) {
  return new QPictureIO(fileName, format);
}
// /usr/include/qt/QtGui/qpicture.h:134
// void ~QPictureIO()
extern "C"
void C_ZN10QPictureIOD1Ev(void *this_) {
  delete (QPictureIO*)(this_);
}
// /usr/include/qt/QtGui/qpicture.h:136
// const QPicture & picture()
extern "C"
void C_ZNK10QPictureIO7pictureEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->picture();
}
// /usr/include/qt/QtGui/qpicture.h:137
// int status()
extern "C"
void C_ZNK10QPictureIO6statusEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->status();
}
// /usr/include/qt/QtGui/qpicture.h:138
// const char * format()
extern "C"
void C_ZNK10QPictureIO6formatEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->format();
}
// /usr/include/qt/QtGui/qpicture.h:139
// QIODevice * ioDevice()
extern "C"
void C_ZNK10QPictureIO8ioDeviceEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->ioDevice();
}
// /usr/include/qt/QtGui/qpicture.h:140
// QString fileName()
extern "C"
void C_ZNK10QPictureIO8fileNameEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->fileName();
}
// /usr/include/qt/QtGui/qpicture.h:141
// int quality()
extern "C"
void C_ZNK10QPictureIO7qualityEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->quality();
}
// /usr/include/qt/QtGui/qpicture.h:142
// QString description()
extern "C"
void C_ZNK10QPictureIO11descriptionEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->description();
}
// /usr/include/qt/QtGui/qpicture.h:143
// const char * parameters()
extern "C"
void C_ZNK10QPictureIO10parametersEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->parameters();
}
// /usr/include/qt/QtGui/qpicture.h:144
// float gamma()
extern "C"
void C_ZNK10QPictureIO5gammaEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->gamma();
}
// /usr/include/qt/QtGui/qpicture.h:146
// void setPicture(const class QPicture &)
extern "C"
void C_ZN10QPictureIO10setPictureERK8QPicture(void *this_, const QPicture & arg0) {
  ((QPictureIO*)this_)->setPicture(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:147
// void setStatus(int)
extern "C"
void C_ZN10QPictureIO9setStatusEi(void *this_, int arg0) {
  ((QPictureIO*)this_)->setStatus(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:148
// void setFormat(const char *)
extern "C"
void C_ZN10QPictureIO9setFormatEPKc(void *this_, const char * arg0) {
  ((QPictureIO*)this_)->setFormat(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:149
// void setIODevice(class QIODevice *)
extern "C"
void C_ZN10QPictureIO11setIODeviceEP9QIODevice(void *this_, QIODevice * arg0) {
  ((QPictureIO*)this_)->setIODevice(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:150
// void setFileName(const class QString &)
extern "C"
void C_ZN10QPictureIO11setFileNameERK7QString(void *this_, const QString & arg0) {
  ((QPictureIO*)this_)->setFileName(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:151
// void setQuality(int)
extern "C"
void C_ZN10QPictureIO10setQualityEi(void *this_, int arg0) {
  ((QPictureIO*)this_)->setQuality(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:152
// void setDescription(const class QString &)
extern "C"
void C_ZN10QPictureIO14setDescriptionERK7QString(void *this_, const QString & arg0) {
  ((QPictureIO*)this_)->setDescription(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:153
// void setParameters(const char *)
extern "C"
void C_ZN10QPictureIO13setParametersEPKc(void *this_, const char * arg0) {
  ((QPictureIO*)this_)->setParameters(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:154
// void setGamma(float)
extern "C"
void C_ZN10QPictureIO8setGammaEf(void *this_, float arg0) {
  ((QPictureIO*)this_)->setGamma(arg0);
}
// /usr/include/qt/QtGui/qpicture.h:156
// bool read()
extern "C"
void C_ZN10QPictureIO4readEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->read();
}
// /usr/include/qt/QtGui/qpicture.h:157
// bool write()
extern "C"
void C_ZN10QPictureIO5writeEv(void *this_) {
  /*return*/ ((QPictureIO*)this_)->write();
}
// static
// /usr/include/qt/QtGui/qpicture.h:159
// QByteArray pictureFormat(const class QString &)
extern "C"
void C_ZN10QPictureIO13pictureFormatERK7QString(const QString & fileName) {
  /*return*/ QPictureIO::pictureFormat(fileName);
}
// static
// /usr/include/qt/QtGui/qpicture.h:160
// QByteArray pictureFormat(class QIODevice *)
extern "C"
void C_ZN10QPictureIO13pictureFormatEP9QIODevice(QIODevice * arg0) {
  /*return*/ QPictureIO::pictureFormat(arg0);
}
// static
// /usr/include/qt/QtGui/qpicture.h:161
// QList<QByteArray> inputFormats()
extern "C"
void C_ZN10QPictureIO12inputFormatsEv() {
  /*return*/ QPictureIO::inputFormats();
}
// static
// /usr/include/qt/QtGui/qpicture.h:162
// QList<QByteArray> outputFormats()
extern "C"
void C_ZN10QPictureIO13outputFormatsEv() {
  /*return*/ QPictureIO::outputFormats();
}
// static
// /usr/include/qt/QtGui/qpicture.h:164
// void defineIOHandler(const char *, const char *, const char *, picture_io_handler, picture_io_handler)
extern "C"
void C_ZN10QPictureIO15defineIOHandlerEPKcS1_S1_PFvPS_ES4_(const char * format, const char * header, const char * flags, picture_io_handler read_picture, picture_io_handler write_picture) {
  QPictureIO::defineIOHandler(format, header, flags, read_picture, write_picture);
}
//  main block end
