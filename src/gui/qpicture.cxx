//  header block begin
// /usr/include/qt/QtGui/qpicture.h
#include <qpicture.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpicture.h:58
// void QPicture(int)
extern "C"
void* C_ZN8QPictureC1Ei(int formatVersion) {
  return new QPicture(formatVersion);
}
// virtual
// /usr/include/qt/QtGui/qpicture.h:60
// void ~QPicture()
extern "C"
void C_ZN8QPictureD1Ev(void *this_) {
  delete (QPicture*)(this_);
}
// /usr/include/qt/QtGui/qpicture.h:62
// bool isNull()
extern "C"
void C_ZNK8QPicture6isNullEv(void *this_) {
  /*return*/ ((QPicture*)this_)->isNull();
}
// virtual
// /usr/include/qt/QtGui/qpicture.h:64
// int devType()
extern "C"
void C_ZNK8QPicture7devTypeEv(void *this_) {
  /*return*/ ((QPicture*)this_)->devType();
}
// /usr/include/qt/QtGui/qpicture.h:65
// uint size()
extern "C"
void C_ZNK8QPicture4sizeEv(void *this_) {
  /*return*/ ((QPicture*)this_)->size();
}
// /usr/include/qt/QtGui/qpicture.h:66
// const char * data()
extern "C"
void C_ZNK8QPicture4dataEv(void *this_) {
  /*return*/ ((QPicture*)this_)->data();
}
// virtual
// /usr/include/qt/QtGui/qpicture.h:67
// void setData(const char *, uint)
extern "C"
void C_ZN8QPicture7setDataEPKcj(void *this_, const char * data, uint size) {
  ((QPicture*)this_)->setData(data, size);
}
// /usr/include/qt/QtGui/qpicture.h:69
// bool play(class QPainter *)
extern "C"
void C_ZN8QPicture4playEP8QPainter(void *this_, QPainter * p) {
  /*return*/ ((QPicture*)this_)->play(p);
}
// /usr/include/qt/QtGui/qpicture.h:71
// bool load(class QIODevice *, const char *)
extern "C"
void C_ZN8QPicture4loadEP9QIODevicePKc(void *this_, QIODevice * dev, const char * format) {
  /*return*/ ((QPicture*)this_)->load(dev, format);
}
// /usr/include/qt/QtGui/qpicture.h:72
// bool load(const class QString &, const char *)
extern "C"
void C_ZN8QPicture4loadERK7QStringPKc(void *this_, const QString & fileName, const char * format) {
  /*return*/ ((QPicture*)this_)->load(fileName, format);
}
// /usr/include/qt/QtGui/qpicture.h:73
// bool save(class QIODevice *, const char *)
extern "C"
void C_ZN8QPicture4saveEP9QIODevicePKc(void *this_, QIODevice * dev, const char * format) {
  /*return*/ ((QPicture*)this_)->save(dev, format);
}
// /usr/include/qt/QtGui/qpicture.h:74
// bool save(const class QString &, const char *)
extern "C"
void C_ZN8QPicture4saveERK7QStringPKc(void *this_, const QString & fileName, const char * format) {
  /*return*/ ((QPicture*)this_)->save(fileName, format);
}
// /usr/include/qt/QtGui/qpicture.h:76
// QRect boundingRect()
extern "C"
void C_ZNK8QPicture12boundingRectEv(void *this_) {
  /*return*/ ((QPicture*)this_)->boundingRect();
}
// /usr/include/qt/QtGui/qpicture.h:77
// void setBoundingRect(const class QRect &)
extern "C"
void C_ZN8QPicture15setBoundingRectERK5QRect(void *this_, const QRect & r) {
  ((QPicture*)this_)->setBoundingRect(r);
}
// inline
// /usr/include/qt/QtGui/qpicture.h:84
// void swap(class QPicture &)
extern "C"
void C_ZN8QPicture4swapERS_(void *this_, QPicture & other) {
  ((QPicture*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qpicture.h:86
// void detach()
extern "C"
void C_ZN8QPicture6detachEv(void *this_) {
  ((QPicture*)this_)->detach();
}
// /usr/include/qt/QtGui/qpicture.h:87
// bool isDetached()
extern "C"
void C_ZNK8QPicture10isDetachedEv(void *this_) {
  /*return*/ ((QPicture*)this_)->isDetached();
}
// static
// /usr/include/qt/QtGui/qpicture.h:92
// const char * pictureFormat(const class QString &)
extern "C"
void C_ZN8QPicture13pictureFormatERK7QString(const QString & fileName) {
  /*return*/ QPicture::pictureFormat(fileName);
}
// static
// /usr/include/qt/QtGui/qpicture.h:93
// QList<QByteArray> inputFormats()
extern "C"
void C_ZN8QPicture12inputFormatsEv() {
  /*return*/ QPicture::inputFormats();
}
// static
// /usr/include/qt/QtGui/qpicture.h:94
// QList<QByteArray> outputFormats()
extern "C"
void C_ZN8QPicture13outputFormatsEv() {
  /*return*/ QPicture::outputFormats();
}
// static
// /usr/include/qt/QtGui/qpicture.h:95
// QStringList inputFormatList()
extern "C"
void C_ZN8QPicture15inputFormatListEv() {
  /*return*/ QPicture::inputFormatList();
}
// static
// /usr/include/qt/QtGui/qpicture.h:96
// QStringList outputFormatList()
extern "C"
void C_ZN8QPicture16outputFormatListEv() {
  /*return*/ QPicture::outputFormatList();
}
// virtual
// /usr/include/qt/QtGui/qpicture.h:98
// QPaintEngine * paintEngine()
extern "C"
void C_ZNK8QPicture11paintEngineEv(void *this_) {
  /*return*/ ((QPicture*)this_)->paintEngine();
}
//  main block end
