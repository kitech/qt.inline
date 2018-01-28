//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>

// QJsonValueRefPtr is pure virtual: false
//  header block end

//  main block begin

class MyQJsonValueRefPtr : public QJsonValueRefPtr {
public:
MyQJsonValueRefPtr(QJsonArray * array, int idx) : QJsonValueRefPtr(array, idx) {}
MyQJsonValueRefPtr(QJsonObject * object, int idx) : QJsonValueRefPtr(object, idx) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:237
// [-2] void QJsonValueRefPtr(class QJsonArray *, int)
extern "C"
void* C_ZN16QJsonValueRefPtrC1EP10QJsonArrayi(QJsonArray * array, int idx) {
  (MyQJsonValueRefPtr*)(0);
  return  new MyQJsonValueRefPtr(array, idx);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:239
// [-2] void QJsonValueRefPtr(class QJsonObject *, int)
extern "C"
void* C_ZN16QJsonValueRefPtrC1EP11QJsonObjecti(QJsonObject * object, int idx) {
  (MyQJsonValueRefPtr*)(0);
  return  new MyQJsonValueRefPtr(object, idx);
}
//  main block end
