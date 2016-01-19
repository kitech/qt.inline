// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qabstractnetworkcache.h
// dst-file: /src/network/qabstractnetworkcache.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qabstractnetworkcache.h>

extern "C" {

int QNetworkCacheMetaData_Class_Size()
{
  return sizeof(QNetworkCacheMetaData);
}

int QAbstractNetworkCache_Class_Size()
{
  return sizeof(QAbstractNetworkCache);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qabstractnetworkcache_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 65, column 10>
//   // proto:  void QNetworkCacheMetaData::swap(QNetworkCacheMetaData & other);
if (true) {
  auto f = [](QNetworkCacheMetaData flythis, QNetworkCacheMetaData & arg1) {
    ((QNetworkCacheMetaData*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkCacheMetaData4swapERS_ swap(class QNetworkCacheMetaData &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QAbstractNetworkCache_SlotProxy here
class QAbstractNetworkCache_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractNetworkCache_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qabstractnetworkcache.moc"

extern "C" {
  QAbstractNetworkCache_SlotProxy* QAbstractNetworkCache_SlotProxy_new()
  {
    return new QAbstractNetworkCache_SlotProxy();
  }
};

// <= body block end

