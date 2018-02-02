//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionViewItem is pure virtual: false
// QStyleOptionViewItem has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:446
// [-2] void QStyleOptionViewItem(int)
extern "C"
void* callback_ZN20QStyleOptionViewItemC1Ei_fnptr = 0;
extern "C" void set_callback_ZN20QStyleOptionViewItemC1Ei(void*cbfn)
{ callback_ZN20QStyleOptionViewItemC1Ei_fnptr = cbfn; }

class MyQStyleOptionViewItem : public QStyleOptionViewItem {
public:
  virtual ~MyQStyleOptionViewItem() {}
// void QStyleOptionViewItem()
MyQStyleOptionViewItem() : QStyleOptionViewItem() {}
// void QStyleOptionViewItem(int)
MyQStyleOptionViewItem(int version) : QStyleOptionViewItem(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:442
// [-2] void QStyleOptionViewItem()
extern "C"
void* C_ZN20QStyleOptionViewItemC2Ev() {
  return  new QStyleOptionViewItem();
}

extern "C"
void C_ZN20QStyleOptionViewItemD2Ev(void *this_) {
  delete (QStyleOptionViewItem*)(this_);
}
//  main block end
