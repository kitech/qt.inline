//  header block begin
// /usr/include/qt/QtQuick/qsgmaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgmaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGMaterialType is pure virtual: false
// QSGMaterialType has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGMaterialType : public QSGMaterialType {
public:
  virtual ~MyQSGMaterialType() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN15QSGMaterialTypeD2Ev(void *this_) {
  delete (QSGMaterialType*)(this_);
}
//  main block end
