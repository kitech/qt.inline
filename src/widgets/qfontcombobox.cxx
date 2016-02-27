// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qfontcombobox.h
// dst-file: /src/widgets/qfontcombobox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfontcombobox.h>


#include <qfontdatabase.h>
#include <qsize.h>
#include <qfont.h>
// <= header block end

// main block begin =>
void __keep_qfontcombobox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFontComboBox_Class_Size()
{
  return sizeof(QFontComboBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 59, column 10>
//   // proto:  void QFontComboBox::setWritingSystem(QFontDatabase::WritingSystem );
// _ZN13QFontComboBox16setWritingSystemEN13QFontDatabase13WritingSystemE setWritingSystem(class QFontDatabase::WritingSystem)
extern "C"
void
C_ZN13QFontComboBox16setWritingSystemEN13QFontDatabase13WritingSystemE(void *qthis,
QFontDatabase::WritingSystem* arg1) {
  ((QFontComboBox*)qthis)->setWritingSystem(*((QFontDatabase::WritingSystem*)arg1));
}
//   // proto:  void QFontComboBox::~QFontComboBox();
extern "C"
void C_ZN13QFontComboBoxD2Ev(void *qthis) {
  delete (QFontComboBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 71, column 10>
//   // proto:  void QFontComboBox::setFontFilters(FontFilters filters);
// _ZN13QFontComboBox14setFontFiltersE6QFlagsINS_10FontFilterEE setFontFilters(FontFilters)
extern "C"
void
C_ZN13QFontComboBox14setFontFiltersE6QFlagsINS_10FontFilterEE(void *qthis,
QFontComboBox::FontFilters arg1) {
  ((QFontComboBox*)qthis)->setFontFilters(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 49, column 5>
//   // proto:  const QMetaObject * QFontComboBox::metaObject();
// _ZNK13QFontComboBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QFontComboBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QFontComboBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 60, column 34>
//   // proto:  QFontDatabase::WritingSystem QFontComboBox::writingSystem();
// _ZNK13QFontComboBox13writingSystemEv writingSystem()
extern "C"
QFontDatabase::WritingSystem
C_ZNK13QFontComboBox13writingSystemEv(void *qthis) {
  auto ret =
  ((QFontComboBox*)qthis)->writingSystem();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 56, column 14>
//   // proto:  void QFontComboBox::QFontComboBox(QWidget * parent);
extern "C"
QFontComboBox*
C_ZN13QFontComboBoxC2EP7QWidget(QWidget * arg1) {
  auto ret = new QFontComboBox(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 75, column 11>
//   // proto:  QSize QFontComboBox::sizeHint();
// _ZNK13QFontComboBox8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK13QFontComboBox8sizeHintEv(void *qthis) {
  auto ret =
  ((QFontComboBox*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 72, column 17>
//   // proto:  FontFilters QFontComboBox::fontFilters();
// _ZNK13QFontComboBox11fontFiltersEv fontFilters()
extern "C"
QFlags<QFontComboBox::FontFilter>*
C_ZNK13QFontComboBox11fontFiltersEv(void *qthis) {
  auto ret =
  ((QFontComboBox*)qthis)->fontFilters();
  return new QFlags<QFontComboBox::FontFilter>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 74, column 11>
//   // proto:  QFont QFontComboBox::currentFont();
// _ZNK13QFontComboBox11currentFontEv currentFont()
extern "C"
QFont*
C_ZNK13QFontComboBox11currentFontEv(void *qthis) {
  auto ret =
  ((QFontComboBox*)qthis)->currentFont();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 81, column 10>
//   // proto:  void QFontComboBox::currentFontChanged(const QFont & f);
// _ZN13QFontComboBox18currentFontChangedERK5QFont currentFontChanged(const class QFont &)
extern "C"
void
C_ZN13QFontComboBox18currentFontChangedERK5QFont(void *qthis,
const QFont* arg1) {
  ((QFontComboBox*)qthis)->currentFontChanged(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontcombobox.h', line 78, column 10>
//   // proto:  void QFontComboBox::setCurrentFont(const QFont & f);
// _ZN13QFontComboBox14setCurrentFontERK5QFont setCurrentFont(const class QFont &)
extern "C"
void
C_ZN13QFontComboBox14setCurrentFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QFontComboBox*)qthis)->setCurrentFont(*((const QFont*)arg1));
}
// <= ext block end

// body block begin =>
// QFontComboBox_SlotProxy here
class QFontComboBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFontComboBox_SlotProxy():QObject(){}

public slots:
  // currentFontChanged(const class QFont &)
  void slot_proxy_func__ZN13QFontComboBox18currentFontChangedERK5QFont(const QFont & arg0);
public:
  void (*slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont)(void* rsfptr, const QFont & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qfontcombobox.moc"

extern "C" {
  QFontComboBox_SlotProxy* QFontComboBox_SlotProxy_new()
  {
    return new QFontComboBox_SlotProxy();
  }
};

void QFontComboBox_SlotProxy::slot_proxy_func__ZN13QFontComboBox18currentFontChangedERK5QFont(const QFont & arg0) {
  if (this->slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont != NULL) {
    // do smth...
    this->slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont(this->rsfptr, arg0);
  }
}
extern "C"
void* QFontComboBox_SlotProxy_connect__ZN13QFontComboBox18currentFontChangedERK5QFont(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFontComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont = (decltype(that->slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont))ffifptr;
  QObject::connect((QFontComboBox*)sender, SIGNAL(currentFontChanged(const class QFont &)), that, SLOT(slot_proxy_func__ZN13QFontComboBox18currentFontChangedERK5QFont(const QFont & arg0)));
  return that;
}
extern "C"
void QFontComboBox_SlotProxy_disconnect__ZN13QFontComboBox18currentFontChangedERK5QFont(QFontComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

