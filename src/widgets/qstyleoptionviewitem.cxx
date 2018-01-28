//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionViewItem is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:446
// [-2] void QStyleOptionViewItem(int)
extern "C"
void* callback_ZN20QStyleOptionViewItemC1Ei = 0;
extern "C" void set_callback_ZN20QStyleOptionViewItemC1Ei(void*cbfn)
{ callback_ZN20QStyleOptionViewItemC1Ei = cbfn; }

class MyQStyleOptionViewItem : public QStyleOptionViewItem {
public:
MyQStyleOptionViewItem() : QStyleOptionViewItem() {}
MyQStyleOptionViewItem(int version) : QStyleOptionViewItem(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:442
// [-2] void QStyleOptionViewItem()
extern "C"
void* C_ZN20QStyleOptionViewItemC1Ev() {
  (MyQStyleOptionViewItem*)(0);
  return  new MyQStyleOptionViewItem();
}
//  main block end
