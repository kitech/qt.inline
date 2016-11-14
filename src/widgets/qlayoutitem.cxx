// /usr/include/qt/QtWidgets/qlayoutitem.h
#include <qlayoutitem.h>
#include <QtWidgets>

// /usr/include/qt/QtWidgets/qlayoutitem.h:147
// void QWidgetItemV2(class QWidget *)
extern "C"
void* C_ZN13QWidgetItemV2C1EP7QWidget(QWidget * widget) {
  return new QWidgetItemV2(widget);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:148
// void ~QWidgetItemV2()
extern "C"
void C_ZN13QWidgetItemV2D1Ev(void *this_) {
  delete (QWidgetItemV2*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:150
// QSize sizeHint()
extern "C"
void C_ZNK13QWidgetItemV28sizeHintEv(void *this_) {
  /*return*/ ((QWidgetItemV2*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:151
// QSize minimumSize()
extern "C"
void C_ZNK13QWidgetItemV211minimumSizeEv(void *this_) {
  /*return*/ ((QWidgetItemV2*)this_)->minimumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:152
// QSize maximumSize()
extern "C"
void C_ZNK13QWidgetItemV211maximumSizeEv(void *this_) {
  /*return*/ ((QWidgetItemV2*)this_)->maximumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qlayoutitem.h:153
// int heightForWidth(int)
extern "C"
void C_ZNK13QWidgetItemV214heightForWidthEi(void *this_, int width) {
  /*return*/ ((QWidgetItemV2*)this_)->heightForWidth(width);
}