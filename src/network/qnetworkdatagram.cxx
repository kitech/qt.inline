//  header block begin

// /usr/include/qt/QtNetwork/qnetworkdatagram.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkdatagram.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkDatagram is pure virtual: false false
// QNetworkDatagram has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkDatagram_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkDatagram_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkDatagram_t qt_meta_stringdata_MyQNetworkDatagram = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQNetworkDatagram"
  },
  "MyQNetworkDatagram"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkDatagram[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQNetworkDatagram : public QNetworkDatagram {
public:
  virtual ~MyQNetworkDatagram() {}
// void QNetworkDatagram()
MyQNetworkDatagram() : QNetworkDatagram() {}
// void QNetworkDatagram(const QByteArray &, const QHostAddress &, quint16)
MyQNetworkDatagram(const QByteArray & data, const QHostAddress & destinationAddress, quint16 port) : QNetworkDatagram(data, destinationAddress, port) {}
// void QNetworkDatagram(const QNetworkDatagram &)
MyQNetworkDatagram(const QNetworkDatagram & other) : QNetworkDatagram(other) {}
// void QNetworkDatagram(QNetworkDatagram &&)
MyQNetworkDatagram(QNetworkDatagram && other) : QNetworkDatagram(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkdatagram(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:56
// [-2] void QNetworkDatagram() 
// (12)qm1778679952 (25)_ZN16QNetworkDatagramC2Ev
/*void* qm1778679952()*/{
  ;
  this_ =  new QNetworkDatagram();
  this_ =  new MyQNetworkDatagram();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:57
// [-2] void QNetworkDatagram(const QByteArray &, const QHostAddress &, quint16) 
// (12)qm2014476337 (55)_ZN16QNetworkDatagramC2ERK10QByteArrayRK12QHostAddresst
/*void* qm2014476337(const QByteArray & data, const QHostAddress & destinationAddress, unsigned short port)*/{
  const QByteArray & data = *(const QByteArray *)this_; const QHostAddress & destinationAddress = *(const QHostAddress *)this_; unsigned short port = *(unsigned short*)this_;
  this_ =  new QNetworkDatagram(data, destinationAddress, port);
  this_ =  new MyQNetworkDatagram(data, destinationAddress, port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:59
// [-2] void QNetworkDatagram(const QNetworkDatagram &) 
// (11)qm123807072 (28)_ZN16QNetworkDatagramC2ERKS_
/*void* qm123807072(const QNetworkDatagram & other)*/{
  const QNetworkDatagram & other = *(const QNetworkDatagram *)this_;
  this_ =  new QNetworkDatagram(other);
  this_ =  new MyQNetworkDatagram(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:61
// [-2] void ~QNetworkDatagram() 
// (12)qm4157847593 (25)_ZN16QNetworkDatagramD2Ev
/*void qm4157847593 (void *this_)*/ {
  delete (QNetworkDatagram*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:64
// [-2] void QNetworkDatagram(QNetworkDatagram &&) 
// (12)qm2631462188 (27)_ZN16QNetworkDatagramC2EOS_
/*void* qm2631462188(QNetworkDatagram && other)*/{
  QNetworkDatagram && other =  static_cast<QNetworkDatagram &&>(*(QNetworkDatagram *)this_);
  this_ =  new QNetworkDatagram(other);
  this_ =  new MyQNetworkDatagram(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:67
// [8] QNetworkDatagram & operator=(QNetworkDatagram &&) 
// (12)qm1928206316 (27)_ZN16QNetworkDatagramaSEOS_
//static
/*void qm1928206316(QNetworkDatagram && other)*/ {
  QNetworkDatagram && other =  static_cast<QNetworkDatagram &&>(*(QNetworkDatagram *)this_);
  (void) ((QNetworkDatagram*)this_)->operator=(other);
  // auto xptr = (QNetworkDatagram & (QNetworkDatagram::*)(QNetworkDatagram&&) ) &QNetworkDatagram::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:70
// [-2] void swap(QNetworkDatagram &) 
// (12)qm1658738460 (30)_ZN16QNetworkDatagram4swapERS_
//static
/*void qm1658738460(QNetworkDatagram & other)*/ {
  QNetworkDatagram & other = *(QNetworkDatagram *)this_;
  (void) ((QNetworkDatagram*)this_)->swap(other);
   auto xptr = (void (QNetworkDatagram::*)(QNetworkDatagram&) ) &QNetworkDatagram::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:75
// [1] bool isNull() const
// (11)qm170342801 (31)_ZNK16QNetworkDatagram6isNullEv
//static
/*void qm170342801()*/ {
  ;
  (void) ((QNetworkDatagram*)this_)->isNull();
   auto xptr = (bool (QNetworkDatagram::*)() const ) &QNetworkDatagram::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:95
// [8] QNetworkDatagram makeReply(const QByteArray &) const
// (12)qm2651809966 (48)_ZNKR16QNetworkDatagram9makeReplyERK10QByteArray
//static
/*void qm2651809966(const QByteArray & payload)*/ {
  const QByteArray & payload = *(const QByteArray *)this_;
  (void) ((QNetworkDatagram*)this_)->makeReply(payload);
   auto xptr = (QNetworkDatagram (QNetworkDatagram::*)(QByteArray const&) const & ) &QNetworkDatagram::makeReply;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:97
// [8] QNetworkDatagram makeReply(const QByteArray &) 
// (11)qm735621022 (47)_ZNO16QNetworkDatagram9makeReplyERK10QByteArray
//static
/*void qm735621022(const QByteArray & payload)*/ {
  const QByteArray & payload = *(const QByteArray *)this_;
  (void) ((QNetworkDatagram*)this_)->makeReply(payload);
  (void) (QNetworkDatagram{}).makeReply(payload);
   auto xptr = (QNetworkDatagram (QNetworkDatagram::*)(QByteArray const&) && ) &QNetworkDatagram::makeReply;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkdatagram
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
