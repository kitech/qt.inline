// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qbuffer.h
// dst-file: /src/core/qbuffer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qbuffer.h>

extern "C" {

int QBuffer_Class_Size()
{
  return sizeof(QBuffer);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qbuffer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 67, column 17>
//   // proto:  void QBuffer::setData(const char * data, int len);
if (false) {
  auto f = [](const char * arg1, int arg2) {
    ((QBuffer*)0)->setData(arg1, arg2);
  };
}
// _ZN7QBuffer7setDataEPKci setData(const char *, int)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QBuffer_SlotProxy here
class QBuffer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QBuffer_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qbuffer.moc"

extern "C" {
  QBuffer_SlotProxy* QBuffer_SlotProxy_new()
  {
    return new QBuffer_SlotProxy();
  }
};

// <= body block end

