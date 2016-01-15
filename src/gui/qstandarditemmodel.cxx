#include <qsize.h>
#include <qfont.h>
#include <qbrush.h>
#include <qicon.h>
#include <qnamespace.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qstandarditemmodel.h
// dst-file: /src/gui/qstandarditemmodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstandarditemmodel.h>

extern "C" {

int QStandardItemModel_Class_Size()
{
  return sizeof(QStandardItemModel);
}

int QStandardItem_Class_Size()
{
  return sizeof(QStandardItem);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qstandarditemmodel_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 380, column 17>
//   // proto:  bool QStandardItemModel::insertRow(int row, const QModelIndex & parent);
if (false) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QStandardItemModel*)0)->insertRow(arg1, arg2);
  };
}
// _ZN18QStandardItemModel9insertRowEiRK11QModelIndex insertRow(int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 358, column 17>
//   // proto:  void QStandardItemModel::setItem(int row, QStandardItem * item);
if (false) {
  auto f = [](int arg1, QStandardItem * arg2) {
    ((QStandardItemModel*)0)->setItem(arg1, arg2);
  };
}
// _ZN18QStandardItemModel7setItemEiP13QStandardItem setItem(int, class QStandardItem *)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 381, column 17>
//   // proto:  bool QStandardItemModel::insertColumn(int column, const QModelIndex & parent);
if (false) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QStandardItemModel*)0)->insertColumn(arg1, arg2);
  };
}
// _ZN18QStandardItemModel12insertColumnEiRK11QModelIndex insertColumn(int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 378, column 17>
//   // proto:  void QStandardItemModel::insertRow(int row, QStandardItem * item);
if (false) {
  auto f = [](int arg1, QStandardItem * arg2) {
    ((QStandardItemModel*)0)->insertRow(arg1, arg2);
  };
}
// _ZN18QStandardItemModel9insertRowEiP13QStandardItem insertRow(int, class QStandardItem *)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 374, column 17>
//   // proto:  void QStandardItemModel::appendRow(QStandardItem * item);
if (false) {
  auto f = [](QStandardItem * arg1) {
    ((QStandardItemModel*)0)->appendRow(arg1);
  };
}
// _ZN18QStandardItemModel9appendRowEP13QStandardItem appendRow(class QStandardItem *)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 126, column 17>
//   // proto:  void QStandardItem::setCheckState(Qt::CheckState checkState);
if (false) {
  auto f = [](Qt::CheckState arg1) {
    ((QStandardItem*)0)->setCheckState(arg1);
  };
}
// _ZN13QStandardItem13setCheckStateEN2Qt10CheckStateE setCheckState(Qt::CheckState)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 192, column 17>
//   // proto:  void QStandardItem::setChild(int row, QStandardItem * item);
if (false) {
  auto f = [](int arg1, QStandardItem * arg2) {
    ((QStandardItem*)0)->setChild(arg1, arg2);
  };
}
// _ZN13QStandardItem8setChildEiPS_ setChild(int, class QStandardItem *)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 92, column 20>
//   // proto:  QString QStandardItem::whatsThis();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->whatsThis();
  };
}
// _ZNK13QStandardItem9whatsThisEv whatsThis()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 108, column 26>
//   // proto:  Qt::Alignment QStandardItem::textAlignment();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->textAlignment();
  };
}
// _ZNK13QStandardItem13textAlignmentEv textAlignment()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 121, column 17>
//   // proto:  void QStandardItem::setForeground(const QBrush & brush);
if (false) {
  auto f = [](const QBrush & arg1) {
    ((QStandardItem*)0)->setForeground(arg1);
  };
}
// _ZN13QStandardItem13setForegroundERK6QBrush setForeground(const class QBrush &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 146, column 17>
//   // proto:  bool QStandardItem::isEditable();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->isEditable();
  };
}
// _ZNK13QStandardItem10isEditableEv isEditable()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 72, column 18>
//   // proto:  QIcon QStandardItem::icon();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->icon();
  };
}
// _ZNK13QStandardItem4iconEv icon()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 95, column 17>
//   // proto:  void QStandardItem::setWhatsThis(const QString & whatsThis);
if (false) {
  auto f = [](const QString & arg1) {
    ((QStandardItem*)0)->setWhatsThis(arg1);
  };
}
// _ZN13QStandardItem12setWhatsThisERK7QString setWhatsThis(const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 156, column 17>
//   // proto:  bool QStandardItem::isCheckable();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->isCheckable();
  };
}
// _ZNK13QStandardItem11isCheckableEv isCheckable()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 67, column 20>
//   // proto:  QString QStandardItem::text();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->text();
  };
}
// _ZNK13QStandardItem4textEv text()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 172, column 17>
//   // proto:  bool QStandardItem::isDropEnabled();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->isDropEnabled();
  };
}
// _ZNK13QStandardItem13isDropEnabledEv isDropEnabled()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 85, column 20>
//   // proto:  QString QStandardItem::statusTip();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->statusTip();
  };
}
// _ZNK13QStandardItem9statusTipEv statusTip()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 88, column 17>
//   // proto:  void QStandardItem::setStatusTip(const QString & statusTip);
if (false) {
  auto f = [](const QString & arg1) {
    ((QStandardItem*)0)->setStatusTip(arg1);
  };
}
// _ZN13QStandardItem12setStatusTipERK7QString setStatusTip(const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 209, column 17>
//   // proto:  void QStandardItem::appendRow(QStandardItem * item);
if (false) {
  auto f = [](QStandardItem * arg1) {
    ((QStandardItem*)0)->appendRow(arg1);
  };
}
// _ZN13QStandardItem9appendRowEPS_ appendRow(class QStandardItem *)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 75, column 17>
//   // proto:  void QStandardItem::setIcon(const QIcon & icon);
if (false) {
  auto f = [](const QIcon & arg1) {
    ((QStandardItem*)0)->setIcon(arg1);
  };
}
// _ZN13QStandardItem7setIconERK5QIcon setIcon(const class QIcon &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 81, column 17>
//   // proto:  void QStandardItem::setToolTip(const QString & toolTip);
if (false) {
  auto f = [](const QString & arg1) {
    ((QStandardItem*)0)->setToolTip(arg1);
  };
}
// _ZN13QStandardItem10setToolTipERK7QString setToolTip(const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 207, column 17>
//   // proto:  void QStandardItem::appendColumn(const QList<QStandardItem *> & items);
if (false) {
  auto f = [](const QList<QStandardItem *> & arg1) {
    ((QStandardItem*)0)->appendColumn(arg1);
  };
}
// _ZN13QStandardItem12appendColumnERK5QListIPS_E appendColumn(const QList<class QStandardItem *> &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 113, column 19>
//   // proto:  QBrush QStandardItem::background();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->background();
  };
}
// _ZNK13QStandardItem10backgroundEv background()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 151, column 17>
//   // proto:  bool QStandardItem::isSelectable();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->isSelectable();
  };
}
// _ZNK13QStandardItem12isSelectableEv isSelectable()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 206, column 17>
//   // proto:  void QStandardItem::appendRows(const QList<QStandardItem *> & items);
if (false) {
  auto f = [](const QList<QStandardItem *> & arg1) {
    ((QStandardItem*)0)->appendRows(arg1);
  };
}
// _ZN13QStandardItem10appendRowsERK5QListIPS_E appendRows(const QList<class QStandardItem *> &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 78, column 20>
//   // proto:  QString QStandardItem::toolTip();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->toolTip();
  };
}
// _ZNK13QStandardItem7toolTipEv toolTip()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 167, column 17>
//   // proto:  bool QStandardItem::isDragEnabled();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->isDragEnabled();
  };
}
// _ZNK13QStandardItem13isDragEnabledEv isDragEnabled()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 131, column 17>
//   // proto:  void QStandardItem::setAccessibleText(const QString & accessibleText);
if (false) {
  auto f = [](const QString & arg1) {
    ((QStandardItem*)0)->setAccessibleText(arg1);
  };
}
// _ZN13QStandardItem17setAccessibleTextERK7QString setAccessibleText(const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 111, column 17>
//   // proto:  void QStandardItem::setTextAlignment(Qt::Alignment textAlignment);
if (false) {
  auto f = [](Qt::Alignment arg1) {
    ((QStandardItem*)0)->setTextAlignment(arg1);
  };
}
// _ZN13QStandardItem16setTextAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setTextAlignment(Qt::Alignment)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 161, column 17>
//   // proto:  bool QStandardItem::isTristate();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->isTristate();
  };
}
// _ZNK13QStandardItem10isTristateEv isTristate()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 208, column 17>
//   // proto:  void QStandardItem::insertRow(int row, QStandardItem * item);
if (false) {
  auto f = [](int arg1, QStandardItem * arg2) {
    ((QStandardItem*)0)->insertRow(arg1, arg2);
  };
}
// _ZN13QStandardItem9insertRowEiPS_ insertRow(int, class QStandardItem *)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 106, column 17>
//   // proto:  void QStandardItem::setFont(const QFont & font);
if (false) {
  auto f = [](const QFont & arg1) {
    ((QStandardItem*)0)->setFont(arg1);
  };
}
// _ZN13QStandardItem7setFontERK5QFont setFont(const class QFont &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 205, column 17>
//   // proto:  void QStandardItem::appendRow(const QList<QStandardItem *> & items);
if (false) {
  auto f = [](const QList<QStandardItem *> & arg1) {
    ((QStandardItem*)0)->appendRow(arg1);
  };
}
// _ZN13QStandardItem9appendRowERK5QListIPS_E appendRow(const QList<class QStandardItem *> &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 103, column 18>
//   // proto:  QFont QStandardItem::font();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->font();
  };
}
// _ZNK13QStandardItem4fontEv font()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 70, column 17>
//   // proto:  void QStandardItem::setText(const QString & text);
if (false) {
  auto f = [](const QString & arg1) {
    ((QStandardItem*)0)->setText(arg1);
  };
}
// _ZN13QStandardItem7setTextERK7QString setText(const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 141, column 17>
//   // proto:  bool QStandardItem::isEnabled();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->isEnabled();
  };
}
// _ZNK13QStandardItem9isEnabledEv isEnabled()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 123, column 27>
//   // proto:  Qt::CheckState QStandardItem::checkState();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->checkState();
  };
}
// _ZNK13QStandardItem10checkStateEv checkState()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 128, column 20>
//   // proto:  QString QStandardItem::accessibleText();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->accessibleText();
  };
}
// _ZNK13QStandardItem14accessibleTextEv accessibleText()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 118, column 19>
//   // proto:  QBrush QStandardItem::foreground();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->foreground();
  };
}
// _ZNK13QStandardItem10foregroundEv foreground()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 98, column 18>
//   // proto:  QSize QStandardItem::sizeHint();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->sizeHint();
  };
}
// _ZNK13QStandardItem8sizeHintEv sizeHint()
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 116, column 17>
//   // proto:  void QStandardItem::setBackground(const QBrush & brush);
if (false) {
  auto f = [](const QBrush & arg1) {
    ((QStandardItem*)0)->setBackground(arg1);
  };
}
// _ZN13QStandardItem13setBackgroundERK6QBrush setBackground(const class QBrush &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 136, column 17>
//   // proto:  void QStandardItem::setAccessibleDescription(const QString & accessibleDescription);
if (false) {
  auto f = [](const QString & arg1) {
    ((QStandardItem*)0)->setAccessibleDescription(arg1);
  };
}
// _ZN13QStandardItem24setAccessibleDescriptionERK7QString setAccessibleDescription(const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 101, column 17>
//   // proto:  void QStandardItem::setSizeHint(const QSize & sizeHint);
if (false) {
  auto f = [](const QSize & arg1) {
    ((QStandardItem*)0)->setSizeHint(arg1);
  };
}
// _ZN13QStandardItem11setSizeHintERK5QSize setSizeHint(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtGui/qstandarditemmodel.h', line 133, column 20>
//   // proto:  QString QStandardItem::accessibleDescription();
if (false) {
  auto f = []() {
    ((QStandardItem*)0)->accessibleDescription();
  };
}
// _ZNK13QStandardItem21accessibleDescriptionEv accessibleDescription()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QStandardItemModel_SlotProxy here
class QStandardItemModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStandardItemModel_SlotProxy():QObject(){}

public slots:
  // itemChanged(class QStandardItem *)
  void slot_proxy_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QStandardItem * arg0);
public:
  void (*slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem)(void* rsfptr, QStandardItem * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qstandarditemmodel.moc"

extern "C" {
  QStandardItemModel_SlotProxy* QStandardItemModel_SlotProxy_new()
  {
    return new QStandardItemModel_SlotProxy();
  }
};

void QStandardItemModel_SlotProxy::slot_proxy_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QStandardItem * arg0) {
  if (this->slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem != NULL) {
    // do smth...
    this->slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QStandardItemModel_SlotProxy_connect__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStandardItemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem = (decltype(that->slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem))ffifptr;
  QObject::connect((QStandardItemModel*)sender, SIGNAL(itemChanged(class QStandardItem *)), that, SLOT(slot_proxy_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QStandardItem * arg0)));
  return that;
}
extern "C"
void QStandardItemModel_SlotProxy_disconnect__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QStandardItemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

