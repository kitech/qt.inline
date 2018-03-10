//  header block begin
// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetItemV2 is pure virtual: false
// QWidgetItemV2 has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWidgetItemV2 : public QWidgetItemV2 {
public:
  virtual ~MyQWidgetItemV2() {}
// void QWidgetItemV2(class QWidget *)
MyQWidgetItemV2(QWidget * widget) : QWidgetItemV2(widget) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:148
// [-2] void QWidgetItemV2(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetItemV2C2EP7QWidget(QWidget * widget) {
  return  new QWidgetItemV2(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:149
// [-2] void ~QWidgetItemV2()
extern "C" Q_DECL_EXPORT
void C_ZN13QWidgetItemV2D2Ev(void *this_) {
  delete (QWidgetItemV2*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:151
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetItemV28sizeHintEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:152
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetItemV211minimumSizeEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:153
// [8] QSize maximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetItemV211maximumSizeEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->maximumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:154
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK13QWidgetItemV214heightForWidthEi(void *this_, int width) {
  return (int)((QWidgetItemV2*)this_)->heightForWidth(width);
}

//  main block end
