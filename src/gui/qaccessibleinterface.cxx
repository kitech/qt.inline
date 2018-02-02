//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleInterface is pure virtual: true
// QAccessibleInterface has virtual projected: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:460
// [-2] void ~QAccessibleInterface()
extern "C"
void* callback_ZN20QAccessibleInterfaceD1Ev_fnptr = 0;
extern "C" void set_callback_ZN20QAccessibleInterfaceD1Ev(void*cbfn)
{ callback_ZN20QAccessibleInterfaceD1Ev_fnptr = cbfn; }

class MyQAccessibleInterface : public QAccessibleInterface {
public:
  virtual ~MyQAccessibleInterface() {}
// void ~QAccessibleInterface()
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:464
// [1] bool isValid()
extern "C"
bool C_ZNK20QAccessibleInterface7isValidEv(void *this_) {
  return (bool)((QAccessibleInterface*)this_)->isValid();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:465
// [8] QObject * object()
extern "C"
void* C_ZNK20QAccessibleInterface6objectEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->object();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:466
// [8] QWindow * window()
extern "C"
void* C_ZNK20QAccessibleInterface6windowEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->window();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:470
// [8] QAccessibleInterface * focusChild()
extern "C"
void* C_ZNK20QAccessibleInterface10focusChildEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->focusChild();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:472
// [8] QAccessibleInterface * childAt(int, int)
extern "C"
void* C_ZNK20QAccessibleInterface7childAtEii(void *this_, int x, int y) {
  return (void*)((QAccessibleInterface*)this_)->childAt(x, y);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:475
// [8] QAccessibleInterface * parent()
extern "C"
void* C_ZNK20QAccessibleInterface6parentEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->parent();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:476
// [8] QAccessibleInterface * child(int)
extern "C"
void* C_ZNK20QAccessibleInterface5childEi(void *this_, int index) {
  return (void*)((QAccessibleInterface*)this_)->child(index);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:477
// [4] int childCount()
extern "C"
int C_ZNK20QAccessibleInterface10childCountEv(void *this_) {
  return (int)((QAccessibleInterface*)this_)->childCount();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:478
// [4] int indexOfChild(const class QAccessibleInterface *)
extern "C"
int C_ZNK20QAccessibleInterface12indexOfChildEPKS_(void *this_, const QAccessibleInterface * arg0) {
  return (int)((QAccessibleInterface*)this_)->indexOfChild(arg0);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:481
// [8] QString text(class QAccessible::Text)
extern "C"
void* C_ZNK20QAccessibleInterface4textEN11QAccessible4TextE(void *this_, QAccessible::Text t) {
  auto rv = ((QAccessibleInterface*)this_)->text(t);
return new QString(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:482
// [-2] void setText(class QAccessible::Text, const class QString &)
extern "C"
void C_ZN20QAccessibleInterface7setTextEN11QAccessible4TextERK7QString(void *this_, QAccessible::Text t, QString* text) {
  ((QAccessibleInterface*)this_)->setText(t, *text);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:483
// [16] QRect rect()
extern "C"
void* C_ZNK20QAccessibleInterface4rectEv(void *this_) {
  auto rv = ((QAccessibleInterface*)this_)->rect();
return new QRect(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:484
// [4] QAccessible::Role role()
extern "C"
QAccessible::Role C_ZNK20QAccessibleInterface4roleEv(void *this_) {
  return (QAccessible::Role)((QAccessibleInterface*)this_)->role();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:485
// [8] QAccessible::State state()
extern "C"
QAccessible::State C_ZNK20QAccessibleInterface5stateEv(void *this_) {
  return (QAccessible::State)((QAccessibleInterface*)this_)->state();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:487
// [16] QColor foregroundColor()
extern "C"
void* C_ZNK20QAccessibleInterface15foregroundColorEv(void *this_) {
  auto rv = ((QAccessibleInterface*)this_)->foregroundColor();
return new QColor(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:488
// [16] QColor backgroundColor()
extern "C"
void* C_ZNK20QAccessibleInterface15backgroundColorEv(void *this_) {
  auto rv = ((QAccessibleInterface*)this_)->backgroundColor();
return new QColor(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:490
// [8] QAccessibleTextInterface * textInterface()
extern "C"
void* C_ZN20QAccessibleInterface13textInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->textInterface();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:493
// [8] QAccessibleEditableTextInterface * editableTextInterface()
extern "C"
void* C_ZN20QAccessibleInterface21editableTextInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->editableTextInterface();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:496
// [8] QAccessibleValueInterface * valueInterface()
extern "C"
void* C_ZN20QAccessibleInterface14valueInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->valueInterface();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:502
// [8] QAccessibleImageInterface * imageInterface()
extern "C"
void* C_ZN20QAccessibleInterface14imageInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->imageInterface();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:505
// [8] QAccessibleTableInterface * tableInterface()
extern "C"
void* C_ZN20QAccessibleInterface14tableInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->tableInterface();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:508
// [8] QAccessibleTableCellInterface * tableCellInterface()
extern "C"
void* C_ZN20QAccessibleInterface18tableCellInterfaceEv(void *this_) {
  return (void*)((QAccessibleInterface*)this_)->tableCellInterface();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:511
// [-2] void virtual_hook(int, void *)
extern "C"
void C_ZN20QAccessibleInterface12virtual_hookEiPv(void *this_, int id, void * data) {
  ((QAccessibleInterface*)this_)->virtual_hook(id, data);
}
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:513
// [8] void * interface_cast(class QAccessible::InterfaceType)
extern "C"
void* C_ZN20QAccessibleInterface14interface_castEN11QAccessible13InterfaceTypeE(void *this_, QAccessible::InterfaceType arg0) {
  return (void*)((QAccessibleInterface*)this_)->interface_cast(arg0);
}
//  main block end
