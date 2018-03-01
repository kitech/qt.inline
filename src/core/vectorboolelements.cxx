//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#ifndef protected
#define protected public
#endif
#include <qmetatype.h>
#include <QtCore>
#include "callback_inherit.h"

// VectorBoolElements is pure virtual: false
// VectorBoolElements has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyVectorBoolElements : public QtMetaTypePrivate::VectorBoolElements {
public:
  virtual ~MyVectorBoolElements() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN18VectorBoolElementsD2Ev(void *this_) {
  delete (QtMetaTypePrivate::VectorBoolElements*)(this_);
}
//  main block end
