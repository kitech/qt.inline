#include <qbrush.h>
#include <qnamespace.h>
#include <qicon.h>
#include <qsize.h>
#include <qcolor.h>
#include <qstring.h>
#include <qfont.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qtreewidget.h
// dst-file: /src/widgets/qtreewidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtreewidget.h>

extern "C" {

int QTreeWidget_Class_Size()
{
  return sizeof(QTreeWidget);
}

int QTreeWidgetItem_Class_Size()
{
  return sizeof(QTreeWidgetItem);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtreewidget_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 287, column 29>
//   // proto:  QTreeWidgetItem * QTreeWidget::itemAt(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QTreeWidget*)0)->itemAt(arg1, arg2);
  };
}
// _ZNK11QTreeWidget6itemAtEii itemAt(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 299, column 17>
//   // proto:  void QTreeWidget::removeItemWidget(QTreeWidgetItem * item, int column);
if (false) {
  auto f = [](QTreeWidgetItem * arg1, int arg2) {
    ((QTreeWidget*)0)->removeItemWidget(arg1, arg2);
  };
}
// _ZN11QTreeWidget16removeItemWidgetEP15QTreeWidgetItemi removeItemWidget(class QTreeWidgetItem *, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 278, column 17>
//   // proto:  void QTreeWidget::setHeaderLabel(const QString & label);
if (false) {
  auto f = [](const QString & arg1) {
    ((QTreeWidget*)0)->setHeaderLabel(arg1);
  };
}
// _ZN11QTreeWidget14setHeaderLabelERK7QString setHeaderLabel(const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 85, column 17>
//   // proto:  void QTreeWidgetItem::setFirstColumnSpanned(bool span);
if (false) {
  auto f = [](bool arg1) {
    ((QTreeWidgetItem*)0)->setFirstColumnSpanned(arg1);
  };
}
// _ZN15QTreeWidgetItem21setFirstColumnSpannedEb setFirstColumnSpanned(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 181, column 16>
//   // proto:  int QTreeWidgetItem::indexOfChild(QTreeWidgetItem * child);
if (false) {
  auto f = [](QTreeWidgetItem * arg1) {
    ((QTreeWidgetItem*)0)->indexOfChild(arg1);
  };
}
// _ZNK15QTreeWidgetItem12indexOfChildEPS_ indexOfChild(class QTreeWidgetItem *)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 172, column 29>
//   // proto:  QTreeWidgetItem * QTreeWidgetItem::parent();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->parent();
  };
}
// _ZNK15QTreeWidgetItem6parentEv parent()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 124, column 17>
//   // proto:  void QTreeWidgetItem::setFont(int column, const QFont & font);
if (false) {
  auto f = [](int arg1, const QFont & arg2) {
    ((QTreeWidgetItem*)0)->setFont(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem7setFontEiRK5QFont setFont(int, const class QFont &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 122, column 18>
//   // proto:  QFont QTreeWidgetItem::font(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->font(arg1);
  };
}
// _ZNK15QTreeWidgetItem4fontEi font(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 108, column 17>
//   // proto:  void QTreeWidgetItem::setStatusTip(int column, const QString & statusTip);
if (false) {
  auto f = [](int arg1, const QString & arg2) {
    ((QTreeWidgetItem*)0)->setStatusTip(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem12setStatusTipEiRK7QString setStatusTip(int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 82, column 17>
//   // proto:  void QTreeWidgetItem::setExpanded(bool expand);
if (false) {
  auto f = [](bool arg1) {
    ((QTreeWidgetItem*)0)->setExpanded(arg1);
  };
}
// _ZN15QTreeWidgetItem11setExpandedEb setExpanded(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 83, column 17>
//   // proto:  bool QTreeWidgetItem::isExpanded();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->isExpanded();
  };
}
// _ZNK15QTreeWidgetItem10isExpandedEv isExpanded()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 104, column 17>
//   // proto:  void QTreeWidgetItem::setIcon(int column, const QIcon & icon);
if (false) {
  auto f = [](int arg1, const QIcon & arg2) {
    ((QTreeWidgetItem*)0)->setIcon(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem7setIconEiRK5QIcon setIcon(int, const class QIcon &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 111, column 20>
//   // proto:  QString QTreeWidgetItem::toolTip(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->toolTip(arg1);
  };
}
// _ZNK15QTreeWidgetItem7toolTipEi toolTip(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 131, column 19>
//   // proto:  QColor QTreeWidgetItem::backgroundColor(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->backgroundColor(arg1);
  };
}
// _ZNK15QTreeWidgetItem15backgroundColorEi backgroundColor(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 98, column 20>
//   // proto:  QString QTreeWidgetItem::text(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->text(arg1);
  };
}
// _ZNK15QTreeWidgetItem4textEi text(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 80, column 17>
//   // proto:  bool QTreeWidgetItem::isHidden();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->isHidden();
  };
}
// _ZNK15QTreeWidgetItem8isHiddenEv isHidden()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 128, column 17>
//   // proto:  void QTreeWidgetItem::setTextAlignment(int column, int alignment);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QTreeWidgetItem*)0)->setTextAlignment(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem16setTextAlignmentEii setTextAlignment(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 89, column 17>
//   // proto:  bool QTreeWidgetItem::isDisabled();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->isDisabled();
  };
}
// _ZNK15QTreeWidgetItem10isDisabledEv isDisabled()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 100, column 17>
//   // proto:  void QTreeWidgetItem::setText(int column, const QString & text);
if (false) {
  auto f = [](int arg1, const QString & arg2) {
    ((QTreeWidgetItem*)0)->setText(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem7setTextEiRK7QString setText(int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 143, column 17>
//   // proto:  void QTreeWidgetItem::setTextColor(int column, const QColor & color);
if (false) {
  auto f = [](int arg1, const QColor & arg2) {
    ((QTreeWidgetItem*)0)->setTextColor(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem12setTextColorEiRK6QColor setTextColor(int, const class QColor &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 156, column 18>
//   // proto:  QSize QTreeWidgetItem::sizeHint(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->sizeHint(arg1);
  };
}
// _ZNK15QTreeWidgetItem8sizeHintEi sizeHint(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 117, column 20>
//   // proto:  QString QTreeWidgetItem::whatsThis(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->whatsThis(arg1);
  };
}
// _ZNK15QTreeWidgetItem9whatsThisEi whatsThis(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 119, column 17>
//   // proto:  void QTreeWidgetItem::setWhatsThis(int column, const QString & whatsThis);
if (false) {
  auto f = [](int arg1, const QString & arg2) {
    ((QTreeWidgetItem*)0)->setWhatsThis(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem12setWhatsThisEiRK7QString setWhatsThis(int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 193, column 17>
//   // proto:  void QTreeWidgetItem::sortChildren(int column, Qt::SortOrder order);
if (false) {
  auto f = [](int arg1, Qt::SortOrder arg2) {
    ((QTreeWidgetItem*)0)->sortChildren(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem12sortChildrenEiN2Qt9SortOrderE sortChildren(int, Qt::SortOrder)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 141, column 19>
//   // proto:  QColor QTreeWidgetItem::textColor(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->textColor(arg1);
  };
}
// _ZNK15QTreeWidgetItem9textColorEi textColor(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 102, column 18>
//   // proto:  QIcon QTreeWidgetItem::icon(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->icon(arg1);
  };
}
// _ZNK15QTreeWidgetItem4iconEi icon(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 113, column 17>
//   // proto:  void QTreeWidgetItem::setToolTip(int column, const QString & toolTip);
if (false) {
  auto f = [](int arg1, const QString & arg2) {
    ((QTreeWidgetItem*)0)->setToolTip(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem10setToolTipEiRK7QString setToolTip(int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 86, column 17>
//   // proto:  bool QTreeWidgetItem::isFirstColumnSpanned();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->isFirstColumnSpanned();
  };
}
// _ZNK15QTreeWidgetItem20isFirstColumnSpannedEv isFirstColumnSpanned()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 126, column 16>
//   // proto:  int QTreeWidgetItem::textAlignment(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->textAlignment(arg1);
  };
}
// _ZNK15QTreeWidgetItem13textAlignmentEi textAlignment(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 173, column 29>
//   // proto:  QTreeWidgetItem * QTreeWidgetItem::child(int index);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->child(arg1);
  };
}
// _ZNK15QTreeWidgetItem5childEi child(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 76, column 17>
//   // proto:  void QTreeWidgetItem::setSelected(bool select);
if (false) {
  auto f = [](bool arg1) {
    ((QTreeWidgetItem*)0)->setSelected(arg1);
  };
}
// _ZN15QTreeWidgetItem11setSelectedEb setSelected(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 79, column 17>
//   // proto:  void QTreeWidgetItem::setHidden(bool hide);
if (false) {
  auto f = [](bool arg1) {
    ((QTreeWidgetItem*)0)->setHidden(arg1);
  };
}
// _ZN15QTreeWidgetItem9setHiddenEb setHidden(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 180, column 16>
//   // proto:  int QTreeWidgetItem::columnCount();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->columnCount();
  };
}
// _ZNK15QTreeWidgetItem11columnCountEv columnCount()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 151, column 27>
//   // proto:  Qt::CheckState QTreeWidgetItem::checkState(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->checkState(arg1);
  };
}
// _ZNK15QTreeWidgetItem10checkStateEi checkState(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 88, column 17>
//   // proto:  void QTreeWidgetItem::setDisabled(bool disabled);
if (false) {
  auto f = [](bool arg1) {
    ((QTreeWidgetItem*)0)->setDisabled(arg1);
  };
}
// _ZN15QTreeWidgetItem11setDisabledEb setDisabled(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 138, column 17>
//   // proto:  void QTreeWidgetItem::setBackground(int column, const QBrush & brush);
if (false) {
  auto f = [](int arg1, const QBrush & arg2) {
    ((QTreeWidgetItem*)0)->setBackground(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem13setBackgroundEiRK6QBrush setBackground(int, const class QBrush &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 158, column 17>
//   // proto:  void QTreeWidgetItem::setSizeHint(int column, const QSize & size);
if (false) {
  auto f = [](int arg1, const QSize & arg2) {
    ((QTreeWidgetItem*)0)->setSizeHint(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem11setSizeHintEiRK5QSize setSizeHint(int, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 153, column 17>
//   // proto:  void QTreeWidgetItem::setCheckState(int column, Qt::CheckState state);
if (false) {
  auto f = [](int arg1, Qt::CheckState arg2) {
    ((QTreeWidgetItem*)0)->setCheckState(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem13setCheckStateEiN2Qt10CheckStateE setCheckState(int, Qt::CheckState)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 146, column 19>
//   // proto:  QBrush QTreeWidgetItem::foreground(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->foreground(arg1);
  };
}
// _ZNK15QTreeWidgetItem10foregroundEi foreground(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 179, column 16>
//   // proto:  int QTreeWidgetItem::childCount();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->childCount();
  };
}
// _ZNK15QTreeWidgetItem10childCountEv childCount()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 133, column 17>
//   // proto:  void QTreeWidgetItem::setBackgroundColor(int column, const QColor & color);
if (false) {
  auto f = [](int arg1, const QColor & arg2) {
    ((QTreeWidgetItem*)0)->setBackgroundColor(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem18setBackgroundColorEiRK6QColor setBackgroundColor(int, const class QColor &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 106, column 20>
//   // proto:  QString QTreeWidgetItem::statusTip(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->statusTip(arg1);
  };
}
// _ZNK15QTreeWidgetItem9statusTipEi statusTip(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 136, column 19>
//   // proto:  QBrush QTreeWidgetItem::background(int column);
if (false) {
  auto f = [](int arg1) {
    ((QTreeWidgetItem*)0)->background(arg1);
  };
}
// _ZNK15QTreeWidgetItem10backgroundEi background(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 192, column 16>
//   // proto:  int QTreeWidgetItem::type();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->type();
  };
}
// _ZNK15QTreeWidgetItem4typeEv type()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 74, column 25>
//   // proto:  QTreeWidget * QTreeWidgetItem::treeWidget();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->treeWidget();
  };
}
// _ZNK15QTreeWidgetItem10treeWidgetEv treeWidget()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 148, column 17>
//   // proto:  void QTreeWidgetItem::setForeground(int column, const QBrush & brush);
if (false) {
  auto f = [](int arg1, const QBrush & arg2) {
    ((QTreeWidgetItem*)0)->setForeground(arg1, arg2);
  };
}
// _ZN15QTreeWidgetItem13setForegroundEiRK6QBrush setForeground(int, const class QBrush &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidget.h', line 77, column 17>
//   // proto:  bool QTreeWidgetItem::isSelected();
if (false) {
  auto f = []() {
    ((QTreeWidgetItem*)0)->isSelected();
  };
}
// _ZNK15QTreeWidgetItem10isSelectedEv isSelected()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTreeWidget_SlotProxy here
class QTreeWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTreeWidget_SlotProxy():QObject(){}

public slots:
  // itemPressed(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemDoubleClicked(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemEntered(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemExpanded(class QTreeWidgetItem *)
  void slot_proxy_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QTreeWidgetItem * arg0);
public:
  void (*slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem)(void* rsfptr, QTreeWidgetItem * arg0) = NULL;
public slots:
  // itemCollapsed(class QTreeWidgetItem *)
  void slot_proxy_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QTreeWidgetItem * arg0);
public:
  void (*slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem)(void* rsfptr, QTreeWidgetItem * arg0) = NULL;
public slots:
  // currentItemChanged(class QTreeWidgetItem *, class QTreeWidgetItem *)
  void slot_proxy_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QTreeWidgetItem * arg0, QTreeWidgetItem * arg1);
public:
  void (*slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_)(void* rsfptr, QTreeWidgetItem * arg0, QTreeWidgetItem * arg1) = NULL;
public slots:
  // itemSelectionChanged()
  void slot_proxy_func__ZN11QTreeWidget20itemSelectionChangedEv();
public:
  void (*slot_func__ZN11QTreeWidget20itemSelectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // itemClicked(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemChanged(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemActivated(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtreewidget.moc"

extern "C" {
  QTreeWidget_SlotProxy* QTreeWidget_SlotProxy_new()
  {
    return new QTreeWidget_SlotProxy();
  }
};

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemPressed(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemDoubleClicked(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemEntered(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QTreeWidgetItem * arg0) {
  if (this->slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem = (decltype(that->slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemExpanded(class QTreeWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QTreeWidgetItem * arg0)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QTreeWidgetItem * arg0) {
  if (this->slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem = (decltype(that->slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemCollapsed(class QTreeWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QTreeWidgetItem * arg0)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QTreeWidgetItem * arg0, QTreeWidgetItem * arg1) {
  if (this->slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_ != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_ = (decltype(that->slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(currentItemChanged(class QTreeWidgetItem *, class QTreeWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QTreeWidgetItem * arg0, QTreeWidgetItem * arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget20itemSelectionChangedEv() {
  if (this->slot_func__ZN11QTreeWidget20itemSelectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget20itemSelectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget20itemSelectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget20itemSelectionChangedEv = (decltype(that->slot_func__ZN11QTreeWidget20itemSelectionChangedEv))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemSelectionChanged()), that, SLOT(slot_proxy_func__ZN11QTreeWidget20itemSelectionChangedEv()));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget20itemSelectionChangedEv(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemClicked(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemChanged(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemActivated(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

