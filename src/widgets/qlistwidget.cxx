// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qlistwidget.h
// dst-file: /src/widgets/qlistwidget.cxx
//

// header block begin =>
#include <qlistwidget.h>

extern "C" {

int QListWidgetItem_Class_Size()
{
  return sizeof(QListWidgetItem);
}

// ~QListWidgetItem()
void dedtor_ZN15QListWidgetItemD0Ev(QListWidgetItem* that)
{
  QListWidgetItem* rthis = (QListWidgetItem*)that;
  delete rthis;
}

// QListWidgetItem(class QListWidget *, int)
QListWidgetItem* dector_ZN15QListWidgetItemC1EP11QListWidgeti(QListWidget * view, int type)
{
  // static_assert(sizeof(QListWidgetItem) == 32, "tyszerr");
  QListWidgetItem* rthis = new QListWidgetItem(view, type);
  return rthis;
}

// QListWidgetItem(const class QIcon &, const class QString &, class QListWidget *, int)
QListWidgetItem* dector_ZN15QListWidgetItemC1ERK5QIconRK7QStringP11QListWidgeti(const QIcon & icon, const QString & text, QListWidget * view, int type)
{
  // static_assert(sizeof(QListWidgetItem) == 32, "tyszerr");
  QListWidgetItem* rthis = new QListWidgetItem(icon, text, view, type);
  return rthis;
}

// QListWidgetItem(const class QString &, class QListWidget *, int)
QListWidgetItem* dector_ZN15QListWidgetItemC1ERK7QStringP11QListWidgeti(const QString & text, QListWidget * view, int type)
{
  // static_assert(sizeof(QListWidgetItem) == 32, "tyszerr");
  QListWidgetItem* rthis = new QListWidgetItem(text, view, type);
  return rthis;
}

// QListWidgetItem(const class QListWidgetItem &)
QListWidgetItem* dector_ZN15QListWidgetItemC1ERKS_(const QListWidgetItem & other)
{
  // static_assert(sizeof(QListWidgetItem) == 32, "tyszerr");
  QListWidgetItem* rthis = new QListWidgetItem(other);
  return rthis;
}

  // proto:  bool QListWidgetItem::isHidden();
bool _ZNK15QListWidgetItem8isHiddenEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->isHidden();
}

  // proto:  void QListWidgetItem::setSelected(bool select);
void _ZN15QListWidgetItem11setSelectedEb(void *that, bool select)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setSelected(select);
}

  // proto:  void QListWidgetItem::setStatusTip(const QString & statusTip);
void _ZN15QListWidgetItem12setStatusTipERK7QString(void *that, const QString & statusTip)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setStatusTip(statusTip);
}

  // proto:  bool QListWidgetItem::isSelected();
bool _ZNK15QListWidgetItem10isSelectedEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->isSelected();
}

  // proto:  void QListWidgetItem::setFont(const QFont & font);
void _ZN15QListWidgetItem7setFontERK5QFont(void *that, const QFont & font)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setFont(font);
}

  // proto:  void QListWidgetItem::setText(const QString & text);
void _ZN15QListWidgetItem7setTextERK7QString(void *that, const QString & text)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setText(text);
}

  // proto:  void QListWidgetItem::setWhatsThis(const QString & whatsThis);
void _ZN15QListWidgetItem12setWhatsThisERK7QString(void *that, const QString & whatsThis)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setWhatsThis(whatsThis);
}

  // proto:  void QListWidgetItem::setIcon(const QIcon & icon);
void _ZN15QListWidgetItem7setIconERK5QIcon(void *that, const QIcon & icon)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setIcon(icon);
}

  // proto:  void QListWidgetItem::setHidden(bool hide);
void _ZN15QListWidgetItem9setHiddenEb(void *that, bool hide)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setHidden(hide);
}

  // proto:  void QListWidgetItem::setToolTip(const QString & toolTip);
void _ZN15QListWidgetItem10setToolTipERK7QString(void *that, const QString & toolTip)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setToolTip(toolTip);
}

int QListWidget_Class_Size()
{
  return sizeof(QListWidget);
}

// QListWidget(class QWidget *)
QListWidget* dector_ZN11QListWidgetC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QListWidget) == 32, "tyszerr");
  QListWidget* rthis = new QListWidget(parent);
  return rthis;
}

// ~QListWidget()
void dedtor_ZN11QListWidgetD0Ev(QListWidget* that)
{
  QListWidget* rthis = (QListWidget*)that;
  delete rthis;
}

  // proto:  void QListWidget::addItem(QListWidgetItem * item);
void _ZN11QListWidget7addItemEP15QListWidgetItem(void *that, QListWidgetItem * item)
{
  QListWidget *cthat = (QListWidget *)that;
   cthat->addItem(item);
}

  // proto:  void QListWidget::removeItemWidget(QListWidgetItem * item);
void _ZN11QListWidget16removeItemWidgetEP15QListWidgetItem(void *that, QListWidgetItem * item)
{
  QListWidget *cthat = (QListWidget *)that;
   cthat->removeItemWidget(item);
}

  // proto:  QListWidgetItem * QListWidget::itemAt(int x, int y);
QListWidgetItem * _ZNK11QListWidget6itemAtEii(void *that, int x, int y)
{
  QListWidget *cthat = (QListWidget *)that;
  return cthat->itemAt(x, y);
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

