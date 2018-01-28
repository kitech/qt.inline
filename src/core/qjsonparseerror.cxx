//  header block begin
// /usr/include/qt/QtCore/qjsondocument.h
#include <qjsondocument.h>
#include <QtCore>

// QJsonParseError is pure virtual: false
//  header block end

//  main block begin

class MyQJsonParseError : public QJsonParseError {
public:
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:73
// [8] QString errorString()
extern "C"
void* C_ZNK15QJsonParseError11errorStringEv(void *this_) {
  auto rv = ((QJsonParseError*)this_)->errorString();
return new QString(rv);
}
//  main block end
