//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>

// QJsonValueRefPtr is pure virtual: false
// QJsonValueRefPtr has virtual projected: false
//  header block end

//  main block begin

class MyQJsonValueRefPtr : public QJsonValueRefPtr {
public:
  virtual ~MyQJsonValueRefPtr() {}
// void QJsonValueRefPtr(class QJsonArray *, int)
MyQJsonValueRefPtr(QJsonArray * array, int idx) : QJsonValueRefPtr(array, idx) {}
// void QJsonValueRefPtr(class QJsonObject *, int)
MyQJsonValueRefPtr(QJsonObject * object, int idx) : QJsonValueRefPtr(object, idx) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:237
// [-2] void QJsonValueRefPtr(class QJsonArray *, int)
extern "C"
void* C_ZN16QJsonValueRefPtrC2EP10QJsonArrayi(QJsonArray * array, int idx) {
  return  new QJsonValueRefPtr(array, idx);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:239
// [-2] void QJsonValueRefPtr(class QJsonObject *, int)
extern "C"
void* C_ZN16QJsonValueRefPtrC2EP11QJsonObjecti(QJsonObject * object, int idx) {
  return  new QJsonValueRefPtr(object, idx);
}
//  main block end
