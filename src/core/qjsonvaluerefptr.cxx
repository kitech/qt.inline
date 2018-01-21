//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:210
// void QJsonValueRefPtr(class QJsonArray *, int)
extern "C"
void* C_ZN16QJsonValueRefPtrC1EP10QJsonArrayi(QJsonArray * array, int idx) {
  return new QJsonValueRefPtr(array, idx);
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:212
// void QJsonValueRefPtr(class QJsonObject *, int)
extern "C"
void* C_ZN16QJsonValueRefPtrC1EP11QJsonObjecti(QJsonObject * object, int idx) {
  return new QJsonValueRefPtr(object, idx);
}
//  main block end
