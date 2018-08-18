//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionHeader is pure virtual: false
// QStyleOptionHeader has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionHeader : public QStyleOptionHeader {
public:
  virtual ~MyQStyleOptionHeader() {}
// void QStyleOptionHeader()
MyQStyleOptionHeader() : QStyleOptionHeader() {}
// void QStyleOptionHeader(const QStyleOptionHeader &)
MyQStyleOptionHeader(const QStyleOptionHeader & other) : QStyleOptionHeader(other) {}
// void QStyleOptionHeader(int)
MyQStyleOptionHeader(int version) : QStyleOptionHeader(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:226
// [-2] void QStyleOptionHeader()
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionHeaderC2Ev() {
  return  new QStyleOptionHeader();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:227
// [-2] void QStyleOptionHeader(const QStyleOptionHeader &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionHeaderC2ERKS_(QStyleOptionHeader* other) {
  return  new QStyleOptionHeader(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN18QStyleOptionHeaderD2Ev(void *this_) {
  delete (QStyleOptionHeader*)(this_);
}
//  main block end
