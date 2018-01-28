//  header block begin
// /usr/include/qt/QtWidgets/qlayoutitem.h
#include <qlayoutitem.h>
#include <QtWidgets>

// QWidgetItemV2 is pure virtual: false
//  header block end

//  main block begin

class MyQWidgetItemV2 : public QWidgetItemV2 {
public:
MyQWidgetItemV2(QWidget * widget) : QWidgetItemV2(widget) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:148
// [-2] void QWidgetItemV2(class QWidget *)
extern "C"
void* C_ZN13QWidgetItemV2C1EP7QWidget(QWidget * widget) {
  (MyQWidgetItemV2*)(0);
  return  new MyQWidgetItemV2(widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:149
// [-2] void ~QWidgetItemV2()
extern "C"
void C_ZN13QWidgetItemV2D1Ev(void *this_) {
  delete (QWidgetItemV2*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:151
// [8] QSize sizeHint()
extern "C"
void* C_ZNK13QWidgetItemV28sizeHintEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:152
// [8] QSize minimumSize()
extern "C"
void* C_ZNK13QWidgetItemV211minimumSizeEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->minimumSize();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:153
// [8] QSize maximumSize()
extern "C"
void* C_ZNK13QWidgetItemV211maximumSizeEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->maximumSize();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:154
// [4] int heightForWidth(int)
extern "C"
int C_ZNK13QWidgetItemV214heightForWidthEi(void *this_, int width) {
  return (int)((QWidgetItemV2*)this_)->heightForWidth(width);
}
//  main block end
