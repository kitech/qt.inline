//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleTextInterface is pure virtual: true
// QAccessibleTextInterface has virtual projected: false
//  header block end

//  main block begin

class MyQAccessibleTextInterface : public QAccessibleTextInterface {
public:
  virtual ~MyQAccessibleTextInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:523
// [-2] void ~QAccessibleTextInterface()
extern "C"
void C_ZN24QAccessibleTextInterfaceD2Ev(void *this_) {
  delete (QAccessibleTextInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:525
// [-2] void selection(int, int *, int *)
extern "C"
void C_ZNK24QAccessibleTextInterface9selectionEiPiS0_(void *this_, int selectionIndex, int * startOffset, int * endOffset) {
  ((QAccessibleTextInterface*)this_)->selection(selectionIndex, startOffset, endOffset);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:526
// [4] int selectionCount()
extern "C"
int C_ZNK24QAccessibleTextInterface14selectionCountEv(void *this_) {
  return (int)((QAccessibleTextInterface*)this_)->selectionCount();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:527
// [-2] void addSelection(int, int)
extern "C"
void C_ZN24QAccessibleTextInterface12addSelectionEii(void *this_, int startOffset, int endOffset) {
  ((QAccessibleTextInterface*)this_)->addSelection(startOffset, endOffset);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:528
// [-2] void removeSelection(int)
extern "C"
void C_ZN24QAccessibleTextInterface15removeSelectionEi(void *this_, int selectionIndex) {
  ((QAccessibleTextInterface*)this_)->removeSelection(selectionIndex);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:529
// [-2] void setSelection(int, int, int)
extern "C"
void C_ZN24QAccessibleTextInterface12setSelectionEiii(void *this_, int selectionIndex, int startOffset, int endOffset) {
  ((QAccessibleTextInterface*)this_)->setSelection(selectionIndex, startOffset, endOffset);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:532
// [4] int cursorPosition()
extern "C"
int C_ZNK24QAccessibleTextInterface14cursorPositionEv(void *this_) {
  return (int)((QAccessibleTextInterface*)this_)->cursorPosition();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:533
// [-2] void setCursorPosition(int)
extern "C"
void C_ZN24QAccessibleTextInterface17setCursorPositionEi(void *this_, int position) {
  ((QAccessibleTextInterface*)this_)->setCursorPosition(position);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:536
// [8] QString text(int, int)
extern "C"
void* C_ZNK24QAccessibleTextInterface4textEii(void *this_, int startOffset, int endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->text(startOffset, endOffset);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:537
// [8] QString textBeforeOffset(int, class QAccessible::TextBoundaryType, int *, int *)
extern "C"
void* C_ZNK24QAccessibleTextInterface16textBeforeOffsetEiN11QAccessible16TextBoundaryTypeEPiS2_(void *this_, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->textBeforeOffset(offset, boundaryType, startOffset, endOffset);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:539
// [8] QString textAfterOffset(int, class QAccessible::TextBoundaryType, int *, int *)
extern "C"
void* C_ZNK24QAccessibleTextInterface15textAfterOffsetEiN11QAccessible16TextBoundaryTypeEPiS2_(void *this_, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->textAfterOffset(offset, boundaryType, startOffset, endOffset);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:541
// [8] QString textAtOffset(int, class QAccessible::TextBoundaryType, int *, int *)
extern "C"
void* C_ZNK24QAccessibleTextInterface12textAtOffsetEiN11QAccessible16TextBoundaryTypeEPiS2_(void *this_, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->textAtOffset(offset, boundaryType, startOffset, endOffset);
return new QString(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:543
// [4] int characterCount()
extern "C"
int C_ZNK24QAccessibleTextInterface14characterCountEv(void *this_) {
  return (int)((QAccessibleTextInterface*)this_)->characterCount();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:546
// [16] QRect characterRect(int)
extern "C"
void* C_ZNK24QAccessibleTextInterface13characterRectEi(void *this_, int offset) {
  auto rv = ((QAccessibleTextInterface*)this_)->characterRect(offset);
return new QRect(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:547
// [4] int offsetAtPoint(const class QPoint &)
extern "C"
int C_ZNK24QAccessibleTextInterface13offsetAtPointERK6QPoint(void *this_, const QPoint & point) {
  return (int)((QAccessibleTextInterface*)this_)->offsetAtPoint(point);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:549
// [-2] void scrollToSubstring(int, int)
extern "C"
void C_ZN24QAccessibleTextInterface17scrollToSubstringEii(void *this_, int startIndex, int endIndex) {
  ((QAccessibleTextInterface*)this_)->scrollToSubstring(startIndex, endIndex);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:550
// [8] QString attributes(int, int *, int *)
extern "C"
void* C_ZNK24QAccessibleTextInterface10attributesEiPiS0_(void *this_, int offset, int * startOffset, int * endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->attributes(offset, startOffset, endOffset);
return new QString(rv);
}
//  main block end
