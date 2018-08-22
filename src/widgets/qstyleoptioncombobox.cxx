//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComboBox is pure virtual: false
// QStyleOptionComboBox has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionComboBox : public QStyleOptionComboBox {
public:
  virtual ~MyQStyleOptionComboBox() {}
// void QStyleOptionComboBox()
MyQStyleOptionComboBox() : QStyleOptionComboBox() {}
// void QStyleOptionComboBox(const QStyleOptionComboBox &)
MyQStyleOptionComboBox(const QStyleOptionComboBox & other) : QStyleOptionComboBox(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:601
// [-2] void QStyleOptionComboBox()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionComboBoxC2Ev() {
  return  new QStyleOptionComboBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:602
// [-2] void QStyleOptionComboBox(const QStyleOptionComboBox &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionComboBoxC2ERKS_(QStyleOptionComboBox* other) {
  return  new QStyleOptionComboBox(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionComboBoxD2Ev(void *this_) {
  delete (QStyleOptionComboBox*)(this_);
}
//  main block end
