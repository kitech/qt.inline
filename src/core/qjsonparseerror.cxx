//  header block begin
// /usr/include/qt/QtCore/qjsondocument.h
#include <qjsondocument.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonParseError is pure virtual: false
// QJsonParseError has virtual projected: false
//  header block end

//  main block begin

class MyQJsonParseError : public QJsonParseError {
public:
  virtual ~MyQJsonParseError() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:73
// [8] QString errorString()
extern "C"
void* C_ZNK15QJsonParseError11errorStringEv(void *this_) {
  auto rv = ((QJsonParseError*)this_)->errorString();
return new QString(rv);
}

extern "C"
void C_ZN15QJsonParseErrorD2Ev(void *this_) {
  delete (QJsonParseError*)(this_);
}
//  main block end
