//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValueRefPtr is pure virtual: false
// QJsonValueRefPtr has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQJsonValueRefPtr : public QJsonValueRefPtr {
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
extern "C" Q_DECL_EXPORT
void* C_ZN16QJsonValueRefPtrC2EP10QJsonArrayi(QJsonArray * array, int idx) {
  return  new QJsonValueRefPtr(array, idx);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:239
// [-2] void QJsonValueRefPtr(class QJsonObject *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QJsonValueRefPtrC2EP11QJsonObjecti(QJsonObject * object, int idx) {
  return  new QJsonValueRefPtr(object, idx);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:242
// [16] QJsonValueRef & operator*()
extern "C" Q_DECL_EXPORT
void* C_ZN16QJsonValueRefPtrdeEv(void *this_) {
  auto& rv = ((QJsonValueRefPtr*)this_)->operator*();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:243
// [8] QJsonValueRef * operator->()
extern "C" Q_DECL_EXPORT
void* C_ZN16QJsonValueRefPtrptEv(void *this_) {
  return (void*)((QJsonValueRefPtr*)this_)->operator->();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QJsonValueRefPtrD2Ev(void *this_) {
  delete (QJsonValueRefPtr*)(this_);
}
//  main block end
