// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qcombobox.h
// dst-file: /src/widgets/qcombobox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcombobox.h>


#include <qsize.h>
#include <qabstractitemmodel.h>
#include <qnamespace.h>
#include <qvariant.h>
#include <qstring.h>
#include <qicon.h>
// <= header block end

// main block begin =>
void __keep_qcombobox_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 171, column 17>
//   // proto:  void QComboBox::addItem(const QIcon & icon, const QString & text, const QVariant & userData);
if (true) {
  auto f = [](QComboBox flythis, const QIcon & arg1, const QString & arg2, const QVariant & arg3) {
    ((QComboBox*)0)->addItem(arg1, arg2, arg3);
    flythis.addItem(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant addItem(const class QIcon &, const class QString &, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 101, column 16>
//   // proto:  int QComboBox::findText(const QString & text, Qt::MatchFlags flags);
if (true) {
  auto f = [](QComboBox flythis, const QString & arg1, Qt::MatchFlags arg2) {
    ((QComboBox*)0)->findText(arg1, arg2);
    flythis.findText(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK9QComboBox8findTextERK7QString6QFlagsIN2Qt9MatchFlagEE findText(const class QString &, Qt::MatchFlags)
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 170, column 17>
//   // proto:  void QComboBox::addItem(const QString & text, const QVariant & userData);
if (true) {
  auto f = [](QComboBox flythis, const QString & arg1, const QVariant & arg2) {
    ((QComboBox*)0)->addItem(arg1, arg2);
    flythis.addItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN9QComboBox7addItemERK7QStringRK8QVariant addItem(const class QString &, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 173, column 17>
//   // proto:  void QComboBox::addItems(const QStringList & texts);
if (true) {
  auto f = [](QComboBox flythis, const QStringList & arg1) {
    ((QComboBox*)0)->addItems(arg1);
    flythis.addItems(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QComboBox8addItemsERK11QStringList addItems(const class QStringList &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 176, column 17>
//   // proto:  void QComboBox::insertItem(int index, const QString & text, const QVariant & userData);
if (true) {
  auto f = [](QComboBox flythis, int arg1, const QString & arg2, const QVariant & arg3) {
    ((QComboBox*)0)->insertItem(arg1, arg2, arg3);
    flythis.insertItem(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN9QComboBox10insertItemEiRK7QStringRK8QVariant insertItem(int, const class QString &, const class QVariant &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QComboBox_Class_Size()
{
  return sizeof(QComboBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 154, column 10>
//   // proto:  void QComboBox::setModel(QAbstractItemModel * model);
// _ZN9QComboBox8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN9QComboBox8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QComboBox*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 202, column 10>
//   // proto:  void QComboBox::clearEditText();
// _ZN9QComboBox13clearEditTextEv clearEditText()
extern "C"
void
C_ZN9QComboBox13clearEditTextEv(void *qthis) {
  ((QComboBox*)qthis)->clearEditText();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 89, column 10>
//   // proto:  void QComboBox::setAutoCompletion(bool enable);
// _ZN9QComboBox17setAutoCompletionEb setAutoCompletion(_Bool)
extern "C"
void
C_ZN9QComboBox17setAutoCompletionEb(void *qthis,
bool arg1) {
  ((QComboBox*)qthis)->setAutoCompletion(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 98, column 10>
//   // proto:  void QComboBox::setFrame(bool );
// _ZN9QComboBox8setFrameEb setFrame(_Bool)
extern "C"
void
C_ZN9QComboBox8setFrameEb(void *qthis,
bool arg1) {
  ((QComboBox*)qthis)->setFrame(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 134, column 10>
//   // proto:  void QComboBox::setIconSize(const QSize & size);
// _ZN9QComboBox11setIconSizeERK5QSize setIconSize(const class QSize &)
extern "C"
void
C_ZN9QComboBox11setIconSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QComboBox*)qthis)->setIconSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 189, column 10>
//   // proto:  void QComboBox::setView(QAbstractItemView * itemView);
// _ZN9QComboBox7setViewEP17QAbstractItemView setView(class QAbstractItemView *)
extern "C"
void
C_ZN9QComboBox7setViewEP17QAbstractItemView(void *qthis,
QAbstractItemView * arg1) {
  ((QComboBox*)qthis)->setView(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 188, column 24>
//   // proto:  QAbstractItemView * QComboBox::view();
// _ZNK9QComboBox4viewEv view()
extern "C"
void*
C_ZNK9QComboBox4viewEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->view();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 130, column 10>
//   // proto:  void QComboBox::setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy policy);
// _ZN9QComboBox19setSizeAdjustPolicyENS_16SizeAdjustPolicyE setSizeAdjustPolicy(enum QComboBox::SizeAdjustPolicy)
extern "C"
void
C_ZN9QComboBox19setSizeAdjustPolicyENS_16SizeAdjustPolicyE(void *qthis,
QComboBox::SizeAdjustPolicy arg1) {
  ((QComboBox*)qthis)->setSizeAdjustPolicy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 192, column 11>
//   // proto:  QSize QComboBox::minimumSizeHint();
// _ZNK9QComboBox15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK9QComboBox15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 201, column 10>
//   // proto:  void QComboBox::clear();
// _ZN9QComboBox5clearEv clear()
extern "C"
void
C_ZN9QComboBox5clearEv(void *qthis) {
  ((QComboBox*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 85, column 9>
//   // proto:  int QComboBox::maxCount();
// _ZNK9QComboBox8maxCountEv maxCount()
extern "C"
int
C_ZNK9QComboBox8maxCountEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->maxCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 171, column 17>
//   // proto:  void QComboBox::addItem(const QIcon & icon, const QString & text, const QVariant & userData);
// _ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant addItem(const class QIcon &, const class QString &, const class QVariant &)
extern "C"
void
C_ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant(void *qthis,
const QIcon* arg1,
const QString* arg2,
const QVariant* arg3) {
  ((QComboBox*)qthis)->addItem(*((const QIcon*)arg1),
*((const QString*)arg2),
*((const QVariant*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 101, column 16>
//   // proto:  int QComboBox::findText(const QString & text, Qt::MatchFlags flags);
// _ZNK9QComboBox8findTextERK7QString6QFlagsIN2Qt9MatchFlagEE findText(const class QString &, Qt::MatchFlags)
extern "C"
int
C_ZNK9QComboBox8findTextERK7QString6QFlagsIN2Qt9MatchFlagEE(void *qthis,
const QString* arg1,
Qt::MatchFlags* arg2) {
  auto ret =
  ((QComboBox*)qthis)->findText(*((const QString*)arg1),
*((Qt::MatchFlags*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 179, column 10>
//   // proto:  void QComboBox::insertItems(int index, const QStringList & texts);
// _ZN9QComboBox11insertItemsEiRK11QStringList insertItems(int, const class QStringList &)
extern "C"
void
C_ZN9QComboBox11insertItemsEiRK11QStringList(void *qthis,
int arg1,
const QStringList* arg2) {
  ((QComboBox*)qthis)->insertItems(arg1,
*((const QStringList*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 133, column 11>
//   // proto:  QSize QComboBox::iconSize();
// _ZNK9QComboBox8iconSizeEv iconSize()
extern "C"
QSize*
C_ZNK9QComboBox8iconSizeEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->iconSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 156, column 17>
//   // proto:  QModelIndex QComboBox::rootModelIndex();
// _ZNK9QComboBox14rootModelIndexEv rootModelIndex()
extern "C"
QModelIndex*
C_ZNK9QComboBox14rootModelIndexEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->rootModelIndex();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 137, column 10>
//   // proto:  void QComboBox::setEditable(bool editable);
// _ZN9QComboBox11setEditableEb setEditable(_Bool)
extern "C"
void
C_ZN9QComboBox11setEditableEb(void *qthis,
bool arg1) {
  ((QComboBox*)qthis)->setEditable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 91, column 25>
//   // proto:  Qt::CaseSensitivity QComboBox::autoCompletionCaseSensitivity();
// _ZNK9QComboBox29autoCompletionCaseSensitivityEv autoCompletionCaseSensitivity()
extern "C"
Qt::CaseSensitivity
C_ZNK9QComboBox29autoCompletionCaseSensitivityEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->autoCompletionCaseSensitivity();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 185, column 10>
//   // proto:  void QComboBox::setItemIcon(int index, const QIcon & icon);
// _ZN9QComboBox11setItemIconEiRK5QIcon setItemIcon(int, const class QIcon &)
extern "C"
void
C_ZN9QComboBox11setItemIconEiRK5QIcon(void *qthis,
int arg1,
const QIcon* arg2) {
  ((QComboBox*)qthis)->setItemIcon(arg1,
*((const QIcon*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 92, column 10>
//   // proto:  void QComboBox::setAutoCompletionCaseSensitivity(Qt::CaseSensitivity sensitivity);
// _ZN9QComboBox32setAutoCompletionCaseSensitivityEN2Qt15CaseSensitivityE setAutoCompletionCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void
C_ZN9QComboBox32setAutoCompletionCaseSensitivityEN2Qt15CaseSensitivityE(void *qthis,
Qt::CaseSensitivity* arg1) {
  ((QComboBox*)qthis)->setAutoCompletionCaseSensitivity(*((Qt::CaseSensitivity*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 215, column 10>
//   // proto:  void QComboBox::currentTextChanged(const QString & );
// _ZN9QComboBox18currentTextChangedERK7QString currentTextChanged(const class QString &)
extern "C"
void
C_ZN9QComboBox18currentTextChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QComboBox*)qthis)->currentTextChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 88, column 10>
//   // proto:  bool QComboBox::autoCompletion();
// _ZNK9QComboBox14autoCompletionEv autoCompletion()
extern "C"
bool
C_ZNK9QComboBox14autoCompletionEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->autoCompletion();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 164, column 14>
//   // proto:  QVariant QComboBox::currentData(int role);
// _ZNK9QComboBox11currentDataEi currentData(int)
extern "C"
QVariant*
C_ZNK9QComboBox11currentDataEi(void *qthis,
int arg1) {
  auto ret =
  ((QComboBox*)qthis)->currentData(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 99, column 10>
//   // proto:  bool QComboBox::hasFrame();
// _ZNK9QComboBox8hasFrameEv hasFrame()
extern "C"
bool
C_ZNK9QComboBox8hasFrameEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->hasFrame();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 142, column 23>
//   // proto:  const QValidator * QComboBox::validator();
// _ZNK9QComboBox9validatorEv validator()
extern "C"
void*
C_ZNK9QComboBox9validatorEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->validator();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 166, column 13>
//   // proto:  QString QComboBox::itemText(int index);
// _ZNK9QComboBox8itemTextEi itemText(int)
extern "C"
QString*
C_ZNK9QComboBox8itemTextEi(void *qthis,
int arg1) {
  auto ret =
  ((QComboBox*)qthis)->itemText(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 186, column 10>
//   // proto:  void QComboBox::setItemData(int index, const QVariant & value, int role);
// _ZN9QComboBox11setItemDataEiRK8QVarianti setItemData(int, const class QVariant &, int)
extern "C"
void
C_ZN9QComboBox11setItemDataEiRK8QVarianti(void *qthis,
int arg1,
const QVariant* arg2,
int arg3) {
  ((QComboBox*)qthis)->setItemData(arg1,
*((const QVariant*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 211, column 10>
//   // proto:  void QComboBox::highlighted(int index);
// _ZN9QComboBox11highlightedEi highlighted(int)
extern "C"
void
C_ZN9QComboBox11highlightedEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->highlighted(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 195, column 18>
//   // proto:  void QComboBox::hidePopup();
// _ZN9QComboBox9hidePopupEv hidePopup()
extern "C"
void
C_ZN9QComboBox9hidePopupEv(void *qthis) {
  ((QComboBox*)qthis)->hidePopup();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 119, column 10>
//   // proto:  void QComboBox::setInsertPolicy(QComboBox::InsertPolicy policy);
// _ZN9QComboBox15setInsertPolicyENS_12InsertPolicyE setInsertPolicy(enum QComboBox::InsertPolicy)
extern "C"
void
C_ZN9QComboBox15setInsertPolicyENS_12InsertPolicyE(void *qthis,
QComboBox::InsertPolicy arg1) {
  ((QComboBox*)qthis)->setInsertPolicy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 177, column 10>
//   // proto:  void QComboBox::insertItem(int index, const QIcon & icon, const QString & text, const QVariant & userData);
// _ZN9QComboBox10insertItemEiRK5QIconRK7QStringRK8QVariant insertItem(int, const class QIcon &, const class QString &, const class QVariant &)
extern "C"
void
C_ZN9QComboBox10insertItemEiRK5QIconRK7QStringRK8QVariant(void *qthis,
int arg1,
const QIcon* arg2,
const QString* arg3,
const QVariant* arg4) {
  ((QComboBox*)qthis)->insertItem(arg1,
*((const QIcon*)arg2),
*((const QString*)arg3),
*((const QVariant*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 205, column 10>
//   // proto:  void QComboBox::setCurrentText(const QString & text);
// _ZN9QComboBox14setCurrentTextERK7QString setCurrentText(const class QString &)
extern "C"
void
C_ZN9QComboBox14setCurrentTextERK7QString(void *qthis,
const QString* arg1) {
  ((QComboBox*)qthis)->setCurrentText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 212, column 10>
//   // proto:  void QComboBox::highlighted(const QString & );
// _ZN9QComboBox11highlightedERK7QString highlighted(const class QString &)
extern "C"
void
C_ZN9QComboBox11highlightedERK7QString(void *qthis,
const QString* arg1) {
  ((QComboBox*)qthis)->highlighted(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 208, column 10>
//   // proto:  void QComboBox::editTextChanged(const QString & );
// _ZN9QComboBox15editTextChangedERK7QString editTextChanged(const class QString &)
extern "C"
void
C_ZN9QComboBox15editTextChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QComboBox*)qthis)->editTextChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 198, column 14>
//   // proto:  QVariant QComboBox::inputMethodQuery(Qt::InputMethodQuery );
// _ZNK9QComboBox16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
extern "C"
QVariant*
C_ZNK9QComboBox16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis,
Qt::InputMethodQuery* arg1) {
  auto ret =
  ((QComboBox*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 159, column 9>
//   // proto:  int QComboBox::modelColumn();
// _ZNK9QComboBox11modelColumnEv modelColumn()
extern "C"
int
C_ZNK9QComboBox11modelColumnEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->modelColumn();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 191, column 11>
//   // proto:  QSize QComboBox::sizeHint();
// _ZNK9QComboBox8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK9QComboBox8sizeHintEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 168, column 14>
//   // proto:  QVariant QComboBox::itemData(int index, int role);
// _ZNK9QComboBox8itemDataEii itemData(int, int)
extern "C"
QVariant*
C_ZNK9QComboBox8itemDataEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QComboBox*)qthis)->itemData(arg1,
arg2);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 209, column 10>
//   // proto:  void QComboBox::activated(int index);
// _ZN9QComboBox9activatedEi activated(int)
extern "C"
void
C_ZN9QComboBox9activatedEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->activated(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 146, column 10>
//   // proto:  void QComboBox::setCompleter(QCompleter * c);
// _ZN9QComboBox12setCompleterEP10QCompleter setCompleter(class QCompleter *)
extern "C"
void
C_ZN9QComboBox12setCompleterEP10QCompleter(void *qthis,
QCompleter * arg1) {
  ((QComboBox*)qthis)->setCompleter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 210, column 10>
//   // proto:  void QComboBox::activated(const QString & );
// _ZN9QComboBox9activatedERK7QString activated(const class QString &)
extern "C"
void
C_ZN9QComboBox9activatedERK7QString(void *qthis,
const QString* arg1) {
  ((QComboBox*)qthis)->activated(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 80, column 9>
//   // proto:  int QComboBox::maxVisibleItems();
// _ZNK9QComboBox15maxVisibleItemsEv maxVisibleItems()
extern "C"
int
C_ZNK9QComboBox15maxVisibleItemsEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->maxVisibleItems();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 77, column 14>
//   // proto:  void QComboBox::QComboBox(QWidget * parent);
extern "C"
QComboBox*
C_ZN9QComboBoxC2EP7QWidget(QWidget * arg1) {
  auto ret = new QComboBox(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 214, column 10>
//   // proto:  void QComboBox::currentIndexChanged(const QString & );
// _ZN9QComboBox19currentIndexChangedERK7QString currentIndexChanged(const class QString &)
extern "C"
void
C_ZN9QComboBox19currentIndexChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QComboBox*)qthis)->currentIndexChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 118, column 18>
//   // proto:  QComboBox::InsertPolicy QComboBox::insertPolicy();
// _ZNK9QComboBox12insertPolicyEv insertPolicy()
extern "C"
QComboBox::InsertPolicy
C_ZNK9QComboBox12insertPolicyEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->insertPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 204, column 10>
//   // proto:  void QComboBox::setCurrentIndex(int index);
// _ZN9QComboBox15setCurrentIndexEi setCurrentIndex(int)
extern "C"
void
C_ZN9QComboBox15setCurrentIndexEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->setCurrentIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 157, column 10>
//   // proto:  void QComboBox::setRootModelIndex(const QModelIndex & index);
// _ZN9QComboBox17setRootModelIndexERK11QModelIndex setRootModelIndex(const class QModelIndex &)
extern "C"
void
C_ZN9QComboBox17setRootModelIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QComboBox*)qthis)->setRootModelIndex(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 104, column 9>
//   // proto:  int QComboBox::findData(const QVariant & data, int role, Qt::MatchFlags flags);
// _ZNK9QComboBox8findDataERK8QVarianti6QFlagsIN2Qt9MatchFlagEE findData(const class QVariant &, int, Qt::MatchFlags)
extern "C"
int
C_ZNK9QComboBox8findDataERK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *qthis,
const QVariant* arg1,
int arg2,
Qt::MatchFlags* arg3) {
  auto ret =
  ((QComboBox*)qthis)->findData(*((const QVariant*)arg1),
arg2,
*((Qt::MatchFlags*)arg3));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 203, column 10>
//   // proto:  void QComboBox::setEditText(const QString & text);
// _ZN9QComboBox11setEditTextERK7QString setEditText(const class QString &)
extern "C"
void
C_ZN9QComboBox11setEditTextERK7QString(void *qthis,
const QString* arg1) {
  ((QComboBox*)qthis)->setEditText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 170, column 17>
//   // proto:  void QComboBox::addItem(const QString & text, const QVariant & userData);
// _ZN9QComboBox7addItemERK7QStringRK8QVariant addItem(const class QString &, const class QVariant &)
extern "C"
void
C_ZN9QComboBox7addItemERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  ((QComboBox*)qthis)->addItem(*((const QString*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 147, column 17>
//   // proto:  QCompleter * QComboBox::completer();
// _ZNK9QComboBox9completerEv completer()
extern "C"
void*
C_ZNK9QComboBox9completerEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->completer();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 182, column 10>
//   // proto:  void QComboBox::removeItem(int index);
// _ZN9QComboBox10removeItemEi removeItem(int)
extern "C"
void
C_ZN9QComboBox10removeItemEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->removeItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 83, column 9>
//   // proto:  int QComboBox::count();
// _ZNK9QComboBox5countEv count()
extern "C"
int
C_ZNK9QComboBox5countEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 151, column 10>
//   // proto:  void QComboBox::setItemDelegate(QAbstractItemDelegate * delegate);
// _ZN9QComboBox15setItemDelegateEP21QAbstractItemDelegate setItemDelegate(class QAbstractItemDelegate *)
extern "C"
void
C_ZN9QComboBox15setItemDelegateEP21QAbstractItemDelegate(void *qthis,
QAbstractItemDelegate * arg1) {
  ((QComboBox*)qthis)->setItemDelegate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 173, column 17>
//   // proto:  void QComboBox::addItems(const QStringList & texts);
// _ZN9QComboBox8addItemsERK11QStringList addItems(const class QStringList &)
extern "C"
void
C_ZN9QComboBox8addItemsERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QComboBox*)qthis)->addItems(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 132, column 10>
//   // proto:  void QComboBox::setMinimumContentsLength(int characters);
// _ZN9QComboBox24setMinimumContentsLengthEi setMinimumContentsLength(int)
extern "C"
void
C_ZN9QComboBox24setMinimumContentsLengthEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->setMinimumContentsLength(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 95, column 10>
//   // proto:  bool QComboBox::duplicatesEnabled();
// _ZNK9QComboBox17duplicatesEnabledEv duplicatesEnabled()
extern "C"
bool
C_ZNK9QComboBox17duplicatesEnabledEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->duplicatesEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 129, column 22>
//   // proto:  QComboBox::SizeAdjustPolicy QComboBox::sizeAdjustPolicy();
// _ZNK9QComboBox16sizeAdjustPolicyEv sizeAdjustPolicy()
extern "C"
QComboBox::SizeAdjustPolicy
C_ZNK9QComboBox16sizeAdjustPolicyEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->sizeAdjustPolicy();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QComboBox::~QComboBox();
extern "C"
void C_ZN9QComboBoxD2Ev(void *qthis) {
  delete (QComboBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 153, column 25>
//   // proto:  QAbstractItemModel * QComboBox::model();
// _ZNK9QComboBox5modelEv model()
extern "C"
void*
C_ZNK9QComboBox5modelEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->model();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 131, column 9>
//   // proto:  int QComboBox::minimumContentsLength();
// _ZNK9QComboBox21minimumContentsLengthEv minimumContentsLength()
extern "C"
int
C_ZNK9QComboBox21minimumContentsLengthEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->minimumContentsLength();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 136, column 10>
//   // proto:  bool QComboBox::isEditable();
// _ZNK9QComboBox10isEditableEv isEditable()
extern "C"
bool
C_ZNK9QComboBox10isEditableEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->isEditable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 84, column 10>
//   // proto:  void QComboBox::setMaxCount(int max);
// _ZN9QComboBox11setMaxCountEi setMaxCount(int)
extern "C"
void
C_ZN9QComboBox11setMaxCountEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->setMaxCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 162, column 9>
//   // proto:  int QComboBox::currentIndex();
// _ZNK9QComboBox12currentIndexEv currentIndex()
extern "C"
int
C_ZNK9QComboBox12currentIndexEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->currentIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 96, column 10>
//   // proto:  void QComboBox::setDuplicatesEnabled(bool enable);
// _ZN9QComboBox20setDuplicatesEnabledEb setDuplicatesEnabled(_Bool)
extern "C"
void
C_ZN9QComboBox20setDuplicatesEnabledEb(void *qthis,
bool arg1) {
  ((QComboBox*)qthis)->setDuplicatesEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 163, column 13>
//   // proto:  QString QComboBox::currentText();
// _ZNK9QComboBox11currentTextEv currentText()
extern "C"
QString*
C_ZNK9QComboBox11currentTextEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->currentText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 194, column 18>
//   // proto:  void QComboBox::showPopup();
// _ZN9QComboBox9showPopupEv showPopup()
extern "C"
void
C_ZN9QComboBox9showPopupEv(void *qthis) {
  ((QComboBox*)qthis)->showPopup();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 139, column 16>
//   // proto:  QLineEdit * QComboBox::lineEdit();
// _ZNK9QComboBox8lineEditEv lineEdit()
extern "C"
void*
C_ZNK9QComboBox8lineEditEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->lineEdit();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 150, column 28>
//   // proto:  QAbstractItemDelegate * QComboBox::itemDelegate();
// _ZNK9QComboBox12itemDelegateEv itemDelegate()
extern "C"
void*
C_ZNK9QComboBox12itemDelegateEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->itemDelegate();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 213, column 10>
//   // proto:  void QComboBox::currentIndexChanged(int index);
// _ZN9QComboBox19currentIndexChangedEi currentIndexChanged(int)
extern "C"
void
C_ZN9QComboBox19currentIndexChangedEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->currentIndexChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 81, column 10>
//   // proto:  void QComboBox::setMaxVisibleItems(int maxItems);
// _ZN9QComboBox18setMaxVisibleItemsEi setMaxVisibleItems(int)
extern "C"
void
C_ZN9QComboBox18setMaxVisibleItemsEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->setMaxVisibleItems(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 197, column 10>
//   // proto:  bool QComboBox::event(QEvent * event);
// _ZN9QComboBox5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN9QComboBox5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QComboBox*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 160, column 10>
//   // proto:  void QComboBox::setModelColumn(int visibleColumn);
// _ZN9QComboBox14setModelColumnEi setModelColumn(int)
extern "C"
void
C_ZN9QComboBox14setModelColumnEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->setModelColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 184, column 10>
//   // proto:  void QComboBox::setItemText(int index, const QString & text);
// _ZN9QComboBox11setItemTextEiRK7QString setItemText(int, const class QString &)
extern "C"
void
C_ZN9QComboBox11setItemTextEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QComboBox*)qthis)->setItemText(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 138, column 10>
//   // proto:  void QComboBox::setLineEdit(QLineEdit * edit);
// _ZN9QComboBox11setLineEditEP9QLineEdit setLineEdit(class QLineEdit *)
extern "C"
void
C_ZN9QComboBox11setLineEditEP9QLineEdit(void *qthis,
QLineEdit * arg1) {
  ((QComboBox*)qthis)->setLineEdit(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 167, column 11>
//   // proto:  QIcon QComboBox::itemIcon(int index);
// _ZNK9QComboBox8itemIconEi itemIcon(int)
extern "C"
QIcon*
C_ZNK9QComboBox8itemIconEi(void *qthis,
int arg1) {
  auto ret =
  ((QComboBox*)qthis)->itemIcon(arg1);
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 176, column 17>
//   // proto:  void QComboBox::insertItem(int index, const QString & text, const QVariant & userData);
// _ZN9QComboBox10insertItemEiRK7QStringRK8QVariant insertItem(int, const class QString &, const class QVariant &)
extern "C"
void
C_ZN9QComboBox10insertItemEiRK7QStringRK8QVariant(void *qthis,
int arg1,
const QString* arg2,
const QVariant* arg3) {
  ((QComboBox*)qthis)->insertItem(arg1,
*((const QString*)arg2),
*((const QVariant*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 141, column 10>
//   // proto:  void QComboBox::setValidator(const QValidator * v);
// _ZN9QComboBox12setValidatorEPK10QValidator setValidator(const class QValidator *)
extern "C"
void
C_ZN9QComboBox12setValidatorEPK10QValidator(void *qthis,
const QValidator * arg1) {
  ((QComboBox*)qthis)->setValidator(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 180, column 10>
//   // proto:  void QComboBox::insertSeparator(int index);
// _ZN9QComboBox15insertSeparatorEi insertSeparator(int)
extern "C"
void
C_ZN9QComboBox15insertSeparatorEi(void *qthis,
int arg1) {
  ((QComboBox*)qthis)->insertSeparator(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 53, column 5>
//   // proto:  const QMetaObject * QComboBox::metaObject();
// _ZNK9QComboBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QComboBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QComboBox*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QComboBox_SlotProxy here
class QComboBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QComboBox_SlotProxy():QObject(){}

public slots:
  // activated(const class QString &)
  void slot_proxy_func__ZN9QComboBox9activatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox9activatedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // currentIndexChanged(const class QString &)
  void slot_proxy_func__ZN9QComboBox19currentIndexChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox19currentIndexChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // currentTextChanged(const class QString &)
  void slot_proxy_func__ZN9QComboBox18currentTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox18currentTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // highlighted(const class QString &)
  void slot_proxy_func__ZN9QComboBox11highlightedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox11highlightedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // editTextChanged(const class QString &)
  void slot_proxy_func__ZN9QComboBox15editTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox15editTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // highlighted(int)
  void slot_proxy_func__ZN9QComboBox11highlightedEi(int arg0);
public:
  void (*slot_func__ZN9QComboBox11highlightedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // activated(int)
  void slot_proxy_func__ZN9QComboBox9activatedEi(int arg0);
public:
  void (*slot_func__ZN9QComboBox9activatedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // currentIndexChanged(int)
  void slot_proxy_func__ZN9QComboBox19currentIndexChangedEi(int arg0);
public:
  void (*slot_func__ZN9QComboBox19currentIndexChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcombobox.moc"

extern "C" {
  QComboBox_SlotProxy* QComboBox_SlotProxy_new()
  {
    return new QComboBox_SlotProxy();
  }
};

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox9activatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox9activatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox9activatedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox9activatedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox9activatedERK7QString = (decltype(that->slot_func__ZN9QComboBox9activatedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(activated(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox9activatedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox9activatedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox19currentIndexChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox19currentIndexChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox19currentIndexChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox19currentIndexChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox19currentIndexChangedERK7QString = (decltype(that->slot_func__ZN9QComboBox19currentIndexChangedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(currentIndexChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox19currentIndexChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox19currentIndexChangedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox18currentTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox18currentTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox18currentTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox18currentTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox18currentTextChangedERK7QString = (decltype(that->slot_func__ZN9QComboBox18currentTextChangedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(currentTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox18currentTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox18currentTextChangedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox11highlightedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox11highlightedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox11highlightedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox11highlightedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox11highlightedERK7QString = (decltype(that->slot_func__ZN9QComboBox11highlightedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(highlighted(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox11highlightedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox11highlightedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox15editTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox15editTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox15editTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox15editTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox15editTextChangedERK7QString = (decltype(that->slot_func__ZN9QComboBox15editTextChangedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(editTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox15editTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox15editTextChangedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox11highlightedEi(int arg0) {
  if (this->slot_func__ZN9QComboBox11highlightedEi != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox11highlightedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox11highlightedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox11highlightedEi = (decltype(that->slot_func__ZN9QComboBox11highlightedEi))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(highlighted(int)), that, SLOT(slot_proxy_func__ZN9QComboBox11highlightedEi(int arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox11highlightedEi(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox9activatedEi(int arg0) {
  if (this->slot_func__ZN9QComboBox9activatedEi != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox9activatedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox9activatedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox9activatedEi = (decltype(that->slot_func__ZN9QComboBox9activatedEi))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(activated(int)), that, SLOT(slot_proxy_func__ZN9QComboBox9activatedEi(int arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox9activatedEi(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox19currentIndexChangedEi(int arg0) {
  if (this->slot_func__ZN9QComboBox19currentIndexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox19currentIndexChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox19currentIndexChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox19currentIndexChangedEi = (decltype(that->slot_func__ZN9QComboBox19currentIndexChangedEi))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(currentIndexChanged(int)), that, SLOT(slot_proxy_func__ZN9QComboBox19currentIndexChangedEi(int arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox19currentIndexChangedEi(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

