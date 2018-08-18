//  header block begin
// /usr/include/qt/QtCore/qshareddata.h
#ifndef protected
#define protected public
#endif
#include <qshareddata.h>
#include <QtCore>
#include "callback_inherit.h"

// QSharedData is pure virtual: false
// QSharedData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSharedData : public QSharedData {
public:
  virtual ~MyQSharedData() {}
// void QSharedData()
MyQSharedData() : QSharedData() {}
// void QSharedData(const QSharedData &)
MyQSharedData(const QSharedData & arg0) : QSharedData(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:60
// [-2] void QSharedData()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSharedDataC2Ev() {
  return  new QSharedData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:61
// [-2] void QSharedData(const QSharedData &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QSharedDataC2ERKS_(QSharedData* arg0) {
  return  new QSharedData(*arg0);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QSharedDataD2Ev(void *this_) {
  delete (QSharedData*)(this_);
}
//  main block end
