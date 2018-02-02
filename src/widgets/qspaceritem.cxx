//  header block begin
// /usr/include/qt/QtWidgets/qlayoutitem.h
#include <qlayoutitem.h>
#include <QtWidgets>

// QSpacerItem is pure virtual: false
// QSpacerItem has virtual projected: false
//  header block end

//  main block begin

class MyQSpacerItem : public QSpacerItem {
public:
  virtual ~MyQSpacerItem() {}
// void QSpacerItem(int, int, class QSizePolicy::Policy, class QSizePolicy::Policy)
MyQSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) : QSpacerItem(w, h, hData, vData) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:95
// [-2] void QSpacerItem(int, int, class QSizePolicy::Policy, class QSizePolicy::Policy)
extern "C"
void* C_ZN11QSpacerItemC2EiiN11QSizePolicy6PolicyES1_(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) {
  return  new QSpacerItem(w, h, hData, vData);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:99
// [-2] void ~QSpacerItem()
extern "C"
void C_ZN11QSpacerItemD2Ev(void *this_) {
  delete (QSpacerItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:101
// [-2] void changeSize(int, int, class QSizePolicy::Policy, class QSizePolicy::Policy)
extern "C"
void C_ZN11QSpacerItem10changeSizeEiiN11QSizePolicy6PolicyES1_(void *this_, int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) {
  ((QSpacerItem*)this_)->changeSize(w, h, hData, vData);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:104
// [8] QSize sizeHint()
extern "C"
void* C_ZNK11QSpacerItem8sizeHintEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:105
// [8] QSize minimumSize()
extern "C"
void* C_ZNK11QSpacerItem11minimumSizeEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->minimumSize();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:106
// [8] QSize maximumSize()
extern "C"
void* C_ZNK11QSpacerItem11maximumSizeEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->maximumSize();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:107
// [4] Qt::Orientations expandingDirections()
extern "C"
Qt::Orientations C_ZNK11QSpacerItem19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QSpacerItem*)this_)->expandingDirections();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:108
// [1] bool isEmpty()
extern "C"
bool C_ZNK11QSpacerItem7isEmptyEv(void *this_) {
  return (bool)((QSpacerItem*)this_)->isEmpty();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:109
// [-2] void setGeometry(const class QRect &)
extern "C"
void C_ZN11QSpacerItem11setGeometryERK5QRect(void *this_, QRect* arg0) {
  ((QSpacerItem*)this_)->setGeometry(*arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:110
// [16] QRect geometry()
extern "C"
void* C_ZNK11QSpacerItem8geometryEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->geometry();
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:111
// [8] QSpacerItem * spacerItem()
extern "C"
void* C_ZN11QSpacerItem10spacerItemEv(void *this_) {
  return (void*)((QSpacerItem*)this_)->spacerItem();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:112
// [4] QSizePolicy sizePolicy()
extern "C"
void* C_ZNK11QSpacerItem10sizePolicyEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->sizePolicy();
return new QSizePolicy(rv);
}
//  main block end
