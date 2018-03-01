//  header block begin
// /usr/include/qt/QtCore/qcontiguouscache.h
#ifndef protected
#define protected public
#endif
#include <qcontiguouscache.h>
#include <QtCore>
#include "callback_inherit.h"

// QContiguousCacheData is pure virtual: false
// QContiguousCacheData has virtual projected: false
//  header block end

//  main block begin

class MyQContiguousCacheData : public QContiguousCacheData {
public:
  virtual ~MyQContiguousCacheData() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcontiguouscache.h:67
// [8] QContiguousCacheData * allocateData(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QContiguousCacheData12allocateDataEii(int size, int alignment) {
  return (void*)QContiguousCacheData::allocateData(size, alignment);
}

extern "C" Q_DECL_EXPORT
void C_ZN20QContiguousCacheDataD2Ev(void *this_) {
  delete (QContiguousCacheData*)(this_);
}
//  main block end
