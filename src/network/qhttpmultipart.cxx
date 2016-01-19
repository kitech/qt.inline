// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qhttpmultipart.h
// dst-file: /src/network/qhttpmultipart.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qhttpmultipart.h>

extern "C" {

int QHttpMultiPart_Class_Size()
{
  return sizeof(QHttpMultiPart);
}

int QHttpPart_Class_Size()
{
  return sizeof(QHttpPart);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qhttpmultipart_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 56, column 10>
//   // proto:  void QHttpPart::swap(QHttpPart & other);
if (true) {
  auto f = [](QHttpPart flythis, QHttpPart & arg1) {
    ((QHttpPart*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHttpPart4swapERS_ swap(class QHttpPart &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QHttpMultiPart_SlotProxy here
class QHttpMultiPart_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QHttpMultiPart_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qhttpmultipart.moc"

extern "C" {
  QHttpMultiPart_SlotProxy* QHttpMultiPart_SlotProxy_new()
  {
    return new QHttpMultiPart_SlotProxy();
  }
};

// <= body block end

