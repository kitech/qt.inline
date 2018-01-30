//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleImageInterface is pure virtual: true
// QAccessibleImageInterface has virtual projected: false
//  header block end

//  main block begin

class MyQAccessibleImageInterface : public QAccessibleImageInterface {
public:
  virtual ~MyQAccessibleImageInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:655
// [-2] void ~QAccessibleImageInterface()
extern "C"
void C_ZN25QAccessibleImageInterfaceD2Ev(void *this_) {
  delete (QAccessibleImageInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:657
// [8] QString imageDescription()
extern "C"
void* C_ZNK25QAccessibleImageInterface16imageDescriptionEv(void *this_) {
  auto rv = ((QAccessibleImageInterface*)this_)->imageDescription();
return new QString(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:658
// [8] QSize imageSize()
extern "C"
void* C_ZNK25QAccessibleImageInterface9imageSizeEv(void *this_) {
  auto rv = ((QAccessibleImageInterface*)this_)->imageSize();
return new QSize(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:659
// [8] QPoint imagePosition()
extern "C"
void* C_ZNK25QAccessibleImageInterface13imagePositionEv(void *this_) {
  auto rv = ((QAccessibleImageInterface*)this_)->imagePosition();
return new QPoint(rv);
}
//  main block end
