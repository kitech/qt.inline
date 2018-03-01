//  header block begin
// /usr/include/qt/QtNetwork/qdnslookup.h
#ifndef protected
#define protected public
#endif
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsTextRecord is pure virtual: false
// QDnsTextRecord has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDnsTextRecord : public QDnsTextRecord {
public:
  virtual ~MyQDnsTextRecord() {}
// void QDnsTextRecord()
MyQDnsTextRecord() : QDnsTextRecord() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:163
// [-2] void QDnsTextRecord()
extern "C" Q_DECL_EXPORT
void* C_ZN14QDnsTextRecordC2Ev() {
  return  new QDnsTextRecord();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:166
// [8] QDnsTextRecord & operator=(class QDnsTextRecord &&)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDnsTextRecordaSEOS_(void *this_, QDnsTextRecord && other) {
  auto& rv = ((QDnsTextRecord*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:168
// [8] QDnsTextRecord & operator=(const class QDnsTextRecord &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDnsTextRecordaSERKS_(void *this_, QDnsTextRecord* other) {
  auto& rv = ((QDnsTextRecord*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:169
// [-2] void ~QDnsTextRecord()
extern "C" Q_DECL_EXPORT
void C_ZN14QDnsTextRecordD2Ev(void *this_) {
  delete (QDnsTextRecord*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:171
// [-2] void swap(class QDnsTextRecord &)
extern "C" Q_DECL_EXPORT
void C_ZN14QDnsTextRecord4swapERS_(void *this_, QDnsTextRecord* other) {
  ((QDnsTextRecord*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:173
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDnsTextRecord4nameEv(void *this_) {
  auto rv = ((QDnsTextRecord*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:174
// [4] quint32 timeToLive()
extern "C" Q_DECL_EXPORT
quint32 C_ZNK14QDnsTextRecord10timeToLiveEv(void *this_) {
  return (quint32)((QDnsTextRecord*)this_)->timeToLive();
}

//  main block end
