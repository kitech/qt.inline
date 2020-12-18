//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(ssl)
// /usr/include/qt/QtNetwork/qocspresponse.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qocspresponse.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QOcspResponse is pure virtual: false false
// QOcspResponse has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOcspResponse_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOcspResponse_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOcspResponse_t qt_meta_stringdata_MyQOcspResponse = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQOcspResponse"
  },
  "MyQOcspResponse"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOcspResponse[] = {
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
class Q_DECL_EXPORT MyQOcspResponse : public QOcspResponse {
public:
  virtual ~MyQOcspResponse() {}
// void QOcspResponse()
MyQOcspResponse() : QOcspResponse() {}
// void QOcspResponse(const QOcspResponse &)
MyQOcspResponse(const QOcspResponse & other) : QOcspResponse(other) {}
// void QOcspResponse(QOcspResponse &&)
MyQOcspResponse(QOcspResponse && other) : QOcspResponse(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qocspresponse(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qocspresponse.h:97
// [-2] void swap(QOcspResponse &) 
// (12)qm2091572064 (27)_ZN13QOcspResponse4swapERS_
//static
/*void qm2091572064(QOcspResponse & other)*/ {
  QOcspResponse & other = *(QOcspResponse *)this_;
  (void) ((QOcspResponse*)this_)->swap(other);
   auto xptr = (void (QOcspResponse::*)(QOcspResponse&) ) &QOcspResponse::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QOcspResponseD2Ev(void *this_)*/ {
  delete (QOcspResponse*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qocspresponse
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(ssl)
#endif // #ifndef QT_MINIMAL
//  footer block end
