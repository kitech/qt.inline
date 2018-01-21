//  header block begin
// /usr/include/qt/QtCore/qmimedata.h
#include <qmimedata.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qmimedata.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QMimeData10metaObjectEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qmimedata.h:56
// void QMimeData()
extern "C"
void* C_ZN9QMimeDataC1Ev() {
  return new QMimeData();
}
// virtual
// /usr/include/qt/QtCore/qmimedata.h:57
// void ~QMimeData()
extern "C"
void C_ZN9QMimeDataD1Ev(void *this_) {
  delete (QMimeData*)(this_);
}
// /usr/include/qt/QtCore/qmimedata.h:59
// QList<QUrl> urls()
extern "C"
void C_ZNK9QMimeData4urlsEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->urls();
}
// /usr/include/qt/QtCore/qmimedata.h:60
// void setUrls(const QList<class QUrl> &)
extern "C"
void C_ZN9QMimeData7setUrlsERK5QListI4QUrlE(void *this_, const QList<QUrl> & urls) {
  ((QMimeData*)this_)->setUrls(urls);
}
// /usr/include/qt/QtCore/qmimedata.h:61
// bool hasUrls()
extern "C"
void C_ZNK9QMimeData7hasUrlsEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->hasUrls();
}
// /usr/include/qt/QtCore/qmimedata.h:63
// QString text()
extern "C"
void C_ZNK9QMimeData4textEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->text();
}
// /usr/include/qt/QtCore/qmimedata.h:64
// void setText(const class QString &)
extern "C"
void C_ZN9QMimeData7setTextERK7QString(void *this_, const QString & text) {
  ((QMimeData*)this_)->setText(text);
}
// /usr/include/qt/QtCore/qmimedata.h:65
// bool hasText()
extern "C"
void C_ZNK9QMimeData7hasTextEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->hasText();
}
// /usr/include/qt/QtCore/qmimedata.h:67
// QString html()
extern "C"
void C_ZNK9QMimeData4htmlEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->html();
}
// /usr/include/qt/QtCore/qmimedata.h:68
// void setHtml(const class QString &)
extern "C"
void C_ZN9QMimeData7setHtmlERK7QString(void *this_, const QString & html) {
  ((QMimeData*)this_)->setHtml(html);
}
// /usr/include/qt/QtCore/qmimedata.h:69
// bool hasHtml()
extern "C"
void C_ZNK9QMimeData7hasHtmlEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->hasHtml();
}
// /usr/include/qt/QtCore/qmimedata.h:71
// QVariant imageData()
extern "C"
void C_ZNK9QMimeData9imageDataEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->imageData();
}
// /usr/include/qt/QtCore/qmimedata.h:72
// void setImageData(const class QVariant &)
extern "C"
void C_ZN9QMimeData12setImageDataERK8QVariant(void *this_, const QVariant & image) {
  ((QMimeData*)this_)->setImageData(image);
}
// /usr/include/qt/QtCore/qmimedata.h:73
// bool hasImage()
extern "C"
void C_ZNK9QMimeData8hasImageEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->hasImage();
}
// /usr/include/qt/QtCore/qmimedata.h:75
// QVariant colorData()
extern "C"
void C_ZNK9QMimeData9colorDataEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->colorData();
}
// /usr/include/qt/QtCore/qmimedata.h:76
// void setColorData(const class QVariant &)
extern "C"
void C_ZN9QMimeData12setColorDataERK8QVariant(void *this_, const QVariant & color) {
  ((QMimeData*)this_)->setColorData(color);
}
// /usr/include/qt/QtCore/qmimedata.h:77
// bool hasColor()
extern "C"
void C_ZNK9QMimeData8hasColorEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->hasColor();
}
// /usr/include/qt/QtCore/qmimedata.h:79
// QByteArray data(const class QString &)
extern "C"
void C_ZNK9QMimeData4dataERK7QString(void *this_, const QString & mimetype) {
  /*return*/ ((QMimeData*)this_)->data(mimetype);
}
// /usr/include/qt/QtCore/qmimedata.h:80
// void setData(const class QString &, const class QByteArray &)
extern "C"
void C_ZN9QMimeData7setDataERK7QStringRK10QByteArray(void *this_, const QString & mimetype, const QByteArray & data) {
  ((QMimeData*)this_)->setData(mimetype, data);
}
// /usr/include/qt/QtCore/qmimedata.h:81
// void removeFormat(const class QString &)
extern "C"
void C_ZN9QMimeData12removeFormatERK7QString(void *this_, const QString & mimetype) {
  ((QMimeData*)this_)->removeFormat(mimetype);
}
// virtual
// /usr/include/qt/QtCore/qmimedata.h:83
// bool hasFormat(const class QString &)
extern "C"
void C_ZNK9QMimeData9hasFormatERK7QString(void *this_, const QString & mimetype) {
  /*return*/ ((QMimeData*)this_)->hasFormat(mimetype);
}
// virtual
// /usr/include/qt/QtCore/qmimedata.h:84
// QStringList formats()
extern "C"
void C_ZNK9QMimeData7formatsEv(void *this_) {
  /*return*/ ((QMimeData*)this_)->formats();
}
// /usr/include/qt/QtCore/qmimedata.h:86
// void clear()
extern "C"
void C_ZN9QMimeData5clearEv(void *this_) {
  ((QMimeData*)this_)->clear();
}
//  main block end
