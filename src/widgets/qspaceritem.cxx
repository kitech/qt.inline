//  header block begin
// /usr/include/qt/QtWidgets/qlayoutitem.h
#include <qlayoutitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtWidgets/qlayoutitem.h:94
// void QSpacerItem(int, int, class QSizePolicy::Policy, class QSizePolicy::Policy)
extern "C"
void* C_ZN11QSpacerItemC1EiiN11QSizePolicy6PolicyES1_(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) {
  return new QSpacerItem(w, h, hData, vData);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:98
// void ~QSpacerItem()
extern "C"
void C_ZN11QSpacerItemD1Ev(void *this_) {
  delete (QSpacerItem*)(this_);
}
// /usr/include/qt/QtWidgets/qlayoutitem.h:100
// void changeSize(int, int, class QSizePolicy::Policy, class QSizePolicy::Policy)
extern "C"
void C_ZN11QSpacerItem10changeSizeEiiN11QSizePolicy6PolicyES1_(void *this_, int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) {
  ((QSpacerItem*)this_)->changeSize(w, h, hData, vData);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:103
// QSize sizeHint()
extern "C"
void C_ZNK11QSpacerItem8sizeHintEv(void *this_) {
  /*return*/ ((QSpacerItem*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:104
// QSize minimumSize()
extern "C"
void C_ZNK11QSpacerItem11minimumSizeEv(void *this_) {
  /*return*/ ((QSpacerItem*)this_)->minimumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:105
// QSize maximumSize()
extern "C"
void C_ZNK11QSpacerItem11maximumSizeEv(void *this_) {
  /*return*/ ((QSpacerItem*)this_)->maximumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:106
// Qt::Orientations expandingDirections()
extern "C"
void C_ZNK11QSpacerItem19expandingDirectionsEv(void *this_) {
  /*return*/ ((QSpacerItem*)this_)->expandingDirections();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:107
// bool isEmpty()
extern "C"
void C_ZNK11QSpacerItem7isEmptyEv(void *this_) {
  /*return*/ ((QSpacerItem*)this_)->isEmpty();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:108
// void setGeometry(const class QRect &)
extern "C"
void C_ZN11QSpacerItem11setGeometryERK5QRect(void *this_, const QRect & arg0) {
  ((QSpacerItem*)this_)->setGeometry(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:109
// QRect geometry()
extern "C"
void C_ZNK11QSpacerItem8geometryEv(void *this_) {
  /*return*/ ((QSpacerItem*)this_)->geometry();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:110
// QSpacerItem * spacerItem()
extern "C"
void C_ZN11QSpacerItem10spacerItemEv(void *this_) {
  /*return*/ ((QSpacerItem*)this_)->spacerItem();
}
// inline
// /usr/include/qt/QtWidgets/qlayoutitem.h:111
// QSizePolicy sizePolicy()
extern "C"
void C_ZNK11QSpacerItem10sizePolicyEv(void *this_) {
  /*return*/ ((QSpacerItem*)this_)->sizePolicy();
}
//  main block end
