//  header block begin
// /usr/include/qt/QtCore/qmimedata.h
#include <qmimedata.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeData is pure virtual: false
// QMimeData has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZNK9QMimeData12retrieveDataERK7QStringN8QVariant4TypeE_fnptr = 0;
// extern "C" void set_callback_ZNK9QMimeData12retrieveDataERK7QStringN8QVariant4TypeE(void*cbfn)
// { callback_ZNK9QMimeData12retrieveDataERK7QStringN8QVariant4TypeE_fnptr = cbfn; }

class MyQMimeData : public QMimeData {
public:
  virtual ~MyQMimeData() {}
// void QMimeData()
MyQMimeData() : QMimeData() {}
// QVariant retrieveData(const class QString &, class QVariant::Type)
  virtual QVariant retrieveData(const QString & mimetype, QVariant::Type preferredType) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"retrieveData", &handled, 2, (uint64_t)&mimetype, (uint64_t)preferredType, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    // auto fnptr = ((QVariant (*)(void* , QString*, QVariant::Type))(callback_ZNK9QMimeData12retrieveDataERK7QStringN8QVariant4TypeE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QString*)&mimetype, preferredType);
    // }
    return QMimeData::retrieveData(mimetype, preferredType);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QMimeData10metaObjectEv(void *this_) {
  return (void*)((QMimeData*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:56
// [-2] void QMimeData()
extern "C"
void* C_ZN9QMimeDataC2Ev() {
  auto _nilp = (MyQMimeData*)(0);
  return  new MyQMimeData();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:57
// [-2] void ~QMimeData()
extern "C"
void C_ZN9QMimeDataD2Ev(void *this_) {
  delete (QMimeData*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:61
// [1] bool hasUrls()
extern "C"
bool C_ZNK9QMimeData7hasUrlsEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasUrls();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:63
// [8] QString text()
extern "C"
void* C_ZNK9QMimeData4textEv(void *this_) {
  auto rv = ((QMimeData*)this_)->text();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:64
// [-2] void setText(const class QString &)
extern "C"
void C_ZN9QMimeData7setTextERK7QString(void *this_, QString* text) {
  ((QMimeData*)this_)->setText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:65
// [1] bool hasText()
extern "C"
bool C_ZNK9QMimeData7hasTextEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasText();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:67
// [8] QString html()
extern "C"
void* C_ZNK9QMimeData4htmlEv(void *this_) {
  auto rv = ((QMimeData*)this_)->html();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:68
// [-2] void setHtml(const class QString &)
extern "C"
void C_ZN9QMimeData7setHtmlERK7QString(void *this_, QString* html) {
  ((QMimeData*)this_)->setHtml(*html);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:69
// [1] bool hasHtml()
extern "C"
bool C_ZNK9QMimeData7hasHtmlEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasHtml();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:71
// [16] QVariant imageData()
extern "C"
void* C_ZNK9QMimeData9imageDataEv(void *this_) {
  auto rv = ((QMimeData*)this_)->imageData();
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:72
// [-2] void setImageData(const class QVariant &)
extern "C"
void C_ZN9QMimeData12setImageDataERK8QVariant(void *this_, QVariant* image) {
  ((QMimeData*)this_)->setImageData(*image);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:73
// [1] bool hasImage()
extern "C"
bool C_ZNK9QMimeData8hasImageEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasImage();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:75
// [16] QVariant colorData()
extern "C"
void* C_ZNK9QMimeData9colorDataEv(void *this_) {
  auto rv = ((QMimeData*)this_)->colorData();
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:76
// [-2] void setColorData(const class QVariant &)
extern "C"
void C_ZN9QMimeData12setColorDataERK8QVariant(void *this_, QVariant* color) {
  ((QMimeData*)this_)->setColorData(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:77
// [1] bool hasColor()
extern "C"
bool C_ZNK9QMimeData8hasColorEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasColor();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:79
// [8] QByteArray data(const class QString &)
extern "C"
void* C_ZNK9QMimeData4dataERK7QString(void *this_, QString* mimetype) {
  auto rv = ((QMimeData*)this_)->data(*mimetype);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:80
// [-2] void setData(const class QString &, const class QByteArray &)
extern "C"
void C_ZN9QMimeData7setDataERK7QStringRK10QByteArray(void *this_, QString* mimetype, QByteArray* data) {
  ((QMimeData*)this_)->setData(*mimetype, *data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:81
// [-2] void removeFormat(const class QString &)
extern "C"
void C_ZN9QMimeData12removeFormatERK7QString(void *this_, QString* mimetype) {
  ((QMimeData*)this_)->removeFormat(*mimetype);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:83
// [1] bool hasFormat(const class QString &)
extern "C"
bool C_ZNK9QMimeData9hasFormatERK7QString(void *this_, QString* mimetype) {
  return (bool)((QMimeData*)this_)->hasFormat(*mimetype);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:86
// [-2] void clear()
extern "C"
void C_ZN9QMimeData5clearEv(void *this_) {
  ((QMimeData*)this_)->clear();
}
//  main block end
