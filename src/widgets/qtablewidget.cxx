// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qtablewidget.h
// dst-file: /src/widgets/qtablewidget.cxx
//

// header block begin =>
#include <qtablewidget.h>

extern "C" {

int QTableWidgetSelectionRange_Class_Size()
{
  return sizeof(QTableWidgetSelectionRange);
}

// QTableWidgetSelectionRange(int, int, int, int)
QTableWidgetSelectionRange* dector_ZN26QTableWidgetSelectionRangeC1Eiiii(int top, int left, int bottom, int right)
{
  // static_assert(sizeof(QTableWidgetSelectionRange) == 32, "tyszerr");
  QTableWidgetSelectionRange* rthis = new QTableWidgetSelectionRange(top, left, bottom, right);
  return rthis;
}

// QTableWidgetSelectionRange(const class QTableWidgetSelectionRange &)
QTableWidgetSelectionRange* dector_ZN26QTableWidgetSelectionRangeC1ERKS_(const QTableWidgetSelectionRange & other)
{
  // static_assert(sizeof(QTableWidgetSelectionRange) == 32, "tyszerr");
  QTableWidgetSelectionRange* rthis = new QTableWidgetSelectionRange(other);
  return rthis;
}

// QTableWidgetSelectionRange()
QTableWidgetSelectionRange* dector_ZN26QTableWidgetSelectionRangeC1Ev()
{
  // static_assert(sizeof(QTableWidgetSelectionRange) == 32, "tyszerr");
  QTableWidgetSelectionRange* rthis = new QTableWidgetSelectionRange();
  return rthis;
}

// ~QTableWidgetSelectionRange()
void dedtor_ZN26QTableWidgetSelectionRangeD0Ev(QTableWidgetSelectionRange* that)
{
  QTableWidgetSelectionRange* rthis = (QTableWidgetSelectionRange*)that;
  delete rthis;
}

int QTableWidget_Class_Size()
{
  return sizeof(QTableWidget);
}

// ~QTableWidget()
void dedtor_ZN12QTableWidgetD0Ev(QTableWidget* that)
{
  QTableWidget* rthis = (QTableWidget*)that;
  delete rthis;
}

// QTableWidget(int, int, class QWidget *)
QTableWidget* dector_ZN12QTableWidgetC1EiiP7QWidget(int rows, int columns, QWidget * parent)
{
  // static_assert(sizeof(QTableWidget) == 32, "tyszerr");
  QTableWidget* rthis = new QTableWidget(rows, columns, parent);
  return rthis;
}

// QTableWidget(class QWidget *)
QTableWidget* dector_ZN12QTableWidgetC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTableWidget) == 32, "tyszerr");
  QTableWidget* rthis = new QTableWidget(parent);
  return rthis;
}

  // proto:  void QTableWidget::removeCellWidget(int row, int column);
void _ZN12QTableWidget16removeCellWidgetEii(void *that, int row, int column)
{
  QTableWidget *cthat = (QTableWidget *)that;
   cthat->removeCellWidget(row, column);
}

  // proto:  QTableWidgetItem * QTableWidget::itemAt(int x, int y);
QTableWidgetItem * _ZNK12QTableWidget6itemAtEii(void *that, int x, int y)
{
  QTableWidget *cthat = (QTableWidget *)that;
  return cthat->itemAt(x, y);
}

int QTableWidgetItem_Class_Size()
{
  return sizeof(QTableWidgetItem);
}

// ~QTableWidgetItem()
void dedtor_ZN16QTableWidgetItemD0Ev(QTableWidgetItem* that)
{
  QTableWidgetItem* rthis = (QTableWidgetItem*)that;
  delete rthis;
}

// QTableWidgetItem(const class QTableWidgetItem &)
QTableWidgetItem* dector_ZN16QTableWidgetItemC1ERKS_(const QTableWidgetItem & other)
{
  // static_assert(sizeof(QTableWidgetItem) == 32, "tyszerr");
  QTableWidgetItem* rthis = new QTableWidgetItem(other);
  return rthis;
}

// QTableWidgetItem(const class QString &, int)
QTableWidgetItem* dector_ZN16QTableWidgetItemC1ERK7QStringi(const QString & text, int type)
{
  // static_assert(sizeof(QTableWidgetItem) == 32, "tyszerr");
  QTableWidgetItem* rthis = new QTableWidgetItem(text, type);
  return rthis;
}

// QTableWidgetItem(int)
QTableWidgetItem* dector_ZN16QTableWidgetItemC1Ei(int type)
{
  // static_assert(sizeof(QTableWidgetItem) == 32, "tyszerr");
  QTableWidgetItem* rthis = new QTableWidgetItem(type);
  return rthis;
}

// QTableWidgetItem(const class QIcon &, const class QString &, int)
QTableWidgetItem* dector_ZN16QTableWidgetItemC1ERK5QIconRK7QStringi(const QIcon & icon, const QString & text, int type)
{
  // static_assert(sizeof(QTableWidgetItem) == 32, "tyszerr");
  QTableWidgetItem* rthis = new QTableWidgetItem(icon, text, type);
  return rthis;
}

  // proto:  void QTableWidgetItem::setSelected(bool select);
void _ZN16QTableWidgetItem11setSelectedEb(void *that, bool select)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setSelected(select);
}

  // proto:  void QTableWidgetItem::setStatusTip(const QString & statusTip);
void _ZN16QTableWidgetItem12setStatusTipERK7QString(void *that, const QString & statusTip)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setStatusTip(statusTip);
}

  // proto:  int QTableWidgetItem::column();
int _ZNK16QTableWidgetItem6columnEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->column();
}

  // proto:  void QTableWidgetItem::setIcon(const QIcon & icon);
void _ZN16QTableWidgetItem7setIconERK5QIcon(void *that, const QIcon & icon)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setIcon(icon);
}

  // proto:  void QTableWidgetItem::setWhatsThis(const QString & whatsThis);
void _ZN16QTableWidgetItem12setWhatsThisERK7QString(void *that, const QString & whatsThis)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setWhatsThis(whatsThis);
}

  // proto:  int QTableWidgetItem::row();
int _ZNK16QTableWidgetItem3rowEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->row();
}

  // proto:  bool QTableWidgetItem::isSelected();
bool _ZNK16QTableWidgetItem10isSelectedEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->isSelected();
}

  // proto:  void QTableWidgetItem::setFont(const QFont & font);
void _ZN16QTableWidgetItem7setFontERK5QFont(void *that, const QFont & font)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setFont(font);
}

  // proto:  void QTableWidgetItem::setText(const QString & text);
void _ZN16QTableWidgetItem7setTextERK7QString(void *that, const QString & text)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setText(text);
}

  // proto:  void QTableWidgetItem::setToolTip(const QString & toolTip);
void _ZN16QTableWidgetItem10setToolTipERK7QString(void *that, const QString & toolTip)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setToolTip(toolTip);
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

