// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qlayoutitem.h
// dst-file: /src/widgets/qlayoutitem.cxx
//

// header block begin =>
#include <qlayoutitem.h>

extern "C" {

int QLayoutItem_Class_Size()
{
  return sizeof(QLayoutItem);
}

int QSpacerItem_Class_Size()
{
  return sizeof(QSpacerItem);
}

// ~QSpacerItem()
void dedtor_ZN11QSpacerItemD0Ev(QSpacerItem* that)
{
  QSpacerItem* rthis = (QSpacerItem*)that;
  delete rthis;
}

// QSpacerItem(int, int, class QSizePolicy::Policy, class QSizePolicy::Policy)
QSpacerItem* dector_ZN11QSpacerItemC1EiiN11QSizePolicy6PolicyES1_(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData)
{
  // static_assert(sizeof(QSpacerItem) == 32, "tyszerr");
  QSpacerItem* rthis = new QSpacerItem(w, h, hData, vData);
  return rthis;
}

int QWidgetItem_Class_Size()
{
  return sizeof(QWidgetItem);
}

// ~QWidgetItem()
void dedtor_ZN11QWidgetItemD0Ev(QWidgetItem* that)
{
  QWidgetItem* rthis = (QWidgetItem*)that;
  delete rthis;
}

// QWidgetItem(class QWidget *)
QWidgetItem* dector_ZN11QWidgetItemC1EP7QWidget(QWidget * w)
{
  // static_assert(sizeof(QWidgetItem) == 32, "tyszerr");
  QWidgetItem* rthis = new QWidgetItem(w);
  return rthis;
}

int QWidgetItemV2_Class_Size()
{
  return sizeof(QWidgetItemV2);
}

// ~QWidgetItemV2()
void dedtor_ZN13QWidgetItemV2D0Ev(QWidgetItemV2* that)
{
  QWidgetItemV2* rthis = (QWidgetItemV2*)that;
  delete rthis;
}

// QWidgetItemV2(class QWidget *)
QWidgetItemV2* dector_ZN13QWidgetItemV2C1EP7QWidget(QWidget * widget)
{
  // static_assert(sizeof(QWidgetItemV2) == 32, "tyszerr");
  QWidgetItemV2* rthis = new QWidgetItemV2(widget);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

