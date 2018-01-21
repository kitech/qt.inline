//  header block begin
// /usr/include/qt/QtWidgets/qlayoutitem.h
#include <qlayoutitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtWidgets/qlayoutitem.h:125
// void QWidgetItem(class QWidget *)
extern "C"
void* C_ZN11QWidgetItemC1EP7QWidget(QWidget * w) {
  return new QWidgetItem(w);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:126
// void ~QWidgetItem()
extern "C"
void C_ZN11QWidgetItemD1Ev(void *this_) {
  delete (QWidgetItem*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:128
// QSize sizeHint()
extern "C"
void C_ZNK11QWidgetItem8sizeHintEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:129
// QSize minimumSize()
extern "C"
void C_ZNK11QWidgetItem11minimumSizeEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->minimumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:130
// QSize maximumSize()
extern "C"
void C_ZNK11QWidgetItem11maximumSizeEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->maximumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:131
// Qt::Orientations expandingDirections()
extern "C"
void C_ZNK11QWidgetItem19expandingDirectionsEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->expandingDirections();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:132
// bool isEmpty()
extern "C"
void C_ZNK11QWidgetItem7isEmptyEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->isEmpty();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:133
// void setGeometry(const class QRect &)
extern "C"
void C_ZN11QWidgetItem11setGeometryERK5QRect(void *this_, const QRect & arg0) {
  ((QWidgetItem*)this_)->setGeometry(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:134
// QRect geometry()
extern "C"
void C_ZNK11QWidgetItem8geometryEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->geometry();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:135
// QWidget * widget()
extern "C"
void C_ZN11QWidgetItem6widgetEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->widget();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:137
// bool hasHeightForWidth()
extern "C"
void C_ZNK11QWidgetItem17hasHeightForWidthEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->hasHeightForWidth();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:138
// int heightForWidth(int)
extern "C"
void C_ZNK11QWidgetItem14heightForWidthEi(void *this_, int arg0) {
  /*return*/ ((QWidgetItem*)this_)->heightForWidth(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:139
// QSizePolicy::ControlTypes controlTypes()
extern "C"
void C_ZNK11QWidgetItem12controlTypesEv(void *this_) {
  /*return*/ ((QWidgetItem*)this_)->controlTypes();
}
//  main block end
