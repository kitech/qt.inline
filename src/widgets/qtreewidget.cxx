// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qtreewidget.h
// dst-file: /src/widgets/qtreewidget.cxx
//

// header block begin =>
#include <qtreewidget.h>

extern "C" {

// ~QTreeWidget()
void dedtor_ZN11QTreeWidgetD0Ev(QTreeWidget* that)
{
  QTreeWidget* rthis = (QTreeWidget*)that;
  delete rthis;
}

// QTreeWidget(class QWidget *)
QTreeWidget* dector_ZN11QTreeWidgetC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTreeWidget) == 32, "tyszerr");
  QTreeWidget* rthis = new QTreeWidget(parent);
  return rthis;
}

  // proto:  QTreeWidgetItem * QTreeWidget::itemAt(int x, int y);
QTreeWidgetItem * _ZNK11QTreeWidget6itemAtEii(void *that, int x, int y)
{
  QTreeWidget *cthat = (QTreeWidget *)that;
  return cthat->itemAt(x, y);
}

  // proto:  void QTreeWidget::removeItemWidget(QTreeWidgetItem * item, int column);
void _ZN11QTreeWidget16removeItemWidgetEP15QTreeWidgetItemi(void *that, QTreeWidgetItem * item, int column)
{
  QTreeWidget *cthat = (QTreeWidget *)that;
   cthat->removeItemWidget(item, column);
}

  // proto:  void QTreeWidget::setHeaderLabel(const QString & label);
void _ZN11QTreeWidget14setHeaderLabelERK7QString(void *that, const QString & label)
{
  QTreeWidget *cthat = (QTreeWidget *)that;
   cthat->setHeaderLabel(label);
}

// QTreeWidgetItem(class QTreeWidgetItem *, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EPS_i(QTreeWidgetItem * parent, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(parent, type);
  return rthis;
}

// QTreeWidgetItem(class QTreeWidgetItem *, class QTreeWidgetItem *, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EPS_S0_i(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(parent, after, type);
  return rthis;
}

// QTreeWidgetItem(class QTreeWidget *, class QTreeWidgetItem *, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EP11QTreeWidgetPS_i(QTreeWidget * view, QTreeWidgetItem * after, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(view, after, type);
  return rthis;
}

// QTreeWidgetItem(const class QTreeWidgetItem &)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1ERKS_(const QTreeWidgetItem & other)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(other);
  return rthis;
}

// QTreeWidgetItem(int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1Ei(int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(type);
  return rthis;
}

// QTreeWidgetItem(class QTreeWidget *, const class QStringList &, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EP11QTreeWidgetRK11QStringListi(QTreeWidget * view, const QStringList & strings, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(view, strings, type);
  return rthis;
}

// QTreeWidgetItem(const class QStringList &, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1ERK11QStringListi(const QStringList & strings, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(strings, type);
  return rthis;
}

// ~QTreeWidgetItem()
void dedtor_ZN15QTreeWidgetItemD0Ev(QTreeWidgetItem* that)
{
  QTreeWidgetItem* rthis = (QTreeWidgetItem*)that;
  delete rthis;
}

// QTreeWidgetItem(class QTreeWidgetItem *, const class QStringList &, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EPS_RK11QStringListi(QTreeWidgetItem * parent, const QStringList & strings, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(parent, strings, type);
  return rthis;
}

// QTreeWidgetItem(class QTreeWidget *, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EP11QTreeWidgeti(QTreeWidget * view, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(view, type);
  return rthis;
}

  // proto:  void QTreeWidgetItem::setFirstColumnSpanned(bool span);
void _ZN15QTreeWidgetItem21setFirstColumnSpannedEb(void *that, bool span)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setFirstColumnSpanned(span);
}

  // proto:  int QTreeWidgetItem::indexOfChild(QTreeWidgetItem * child);
int _ZNK15QTreeWidgetItem12indexOfChildEPS_(void *that, QTreeWidgetItem * child)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->indexOfChild(child);
}

  // proto:  void QTreeWidgetItem::setFont(int column, const QFont & font);
void _ZN15QTreeWidgetItem7setFontEiRK5QFont(void *that, int column, const QFont & font)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setFont(column, font);
}

  // proto:  void QTreeWidgetItem::setStatusTip(int column, const QString & statusTip);
void _ZN15QTreeWidgetItem12setStatusTipEiRK7QString(void *that, int column, const QString & statusTip)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setStatusTip(column, statusTip);
}

  // proto:  void QTreeWidgetItem::setExpanded(bool expand);
void _ZN15QTreeWidgetItem11setExpandedEb(void *that, bool expand)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setExpanded(expand);
}

  // proto:  bool QTreeWidgetItem::isExpanded();
bool _ZNK15QTreeWidgetItem10isExpandedEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isExpanded();
}

  // proto:  void QTreeWidgetItem::setIcon(int column, const QIcon & icon);
void _ZN15QTreeWidgetItem7setIconEiRK5QIcon(void *that, int column, const QIcon & icon)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setIcon(column, icon);
}

  // proto:  bool QTreeWidgetItem::isHidden();
bool _ZNK15QTreeWidgetItem8isHiddenEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isHidden();
}

  // proto:  bool QTreeWidgetItem::isDisabled();
bool _ZNK15QTreeWidgetItem10isDisabledEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isDisabled();
}

  // proto:  void QTreeWidgetItem::setText(int column, const QString & text);
void _ZN15QTreeWidgetItem7setTextEiRK7QString(void *that, int column, const QString & text)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setText(column, text);
}

  // proto:  void QTreeWidgetItem::setToolTip(int column, const QString & toolTip);
void _ZN15QTreeWidgetItem10setToolTipEiRK7QString(void *that, int column, const QString & toolTip)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setToolTip(column, toolTip);
}

  // proto:  bool QTreeWidgetItem::isFirstColumnSpanned();
bool _ZNK15QTreeWidgetItem20isFirstColumnSpannedEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isFirstColumnSpanned();
}

  // proto:  void QTreeWidgetItem::setSelected(bool select);
void _ZN15QTreeWidgetItem11setSelectedEb(void *that, bool select)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setSelected(select);
}

  // proto:  void QTreeWidgetItem::setHidden(bool hide);
void _ZN15QTreeWidgetItem9setHiddenEb(void *that, bool hide)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setHidden(hide);
}

  // proto:  void QTreeWidgetItem::setDisabled(bool disabled);
void _ZN15QTreeWidgetItem11setDisabledEb(void *that, bool disabled)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setDisabled(disabled);
}

  // proto:  void QTreeWidgetItem::setWhatsThis(int column, const QString & whatsThis);
void _ZN15QTreeWidgetItem12setWhatsThisEiRK7QString(void *that, int column, const QString & whatsThis)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setWhatsThis(column, whatsThis);
}

  // proto:  bool QTreeWidgetItem::isSelected();
bool _ZNK15QTreeWidgetItem10isSelectedEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isSelected();
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

