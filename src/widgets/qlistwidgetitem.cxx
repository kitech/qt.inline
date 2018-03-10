//  header block begin
// /usr/include/qt/QtWidgets/qlistwidget.h
#ifndef protected
#define protected public
#endif
#include <qlistwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QListWidgetItem is pure virtual: false
// QListWidgetItem has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQListWidgetItem : public QListWidgetItem {
public:
  virtual ~MyQListWidgetItem() {}
// void QListWidgetItem(class QListWidget *, int)
MyQListWidgetItem(QListWidget * view, int type_) : QListWidgetItem(view, type_) {}
// void QListWidgetItem(const class QString &, class QListWidget *, int)
MyQListWidgetItem(const QString & text, QListWidget * view, int type_) : QListWidgetItem(text, view, type_) {}
// void QListWidgetItem(const class QIcon &, const class QString &, class QListWidget *, int)
MyQListWidgetItem(const QIcon & icon, const QString & text, QListWidget * view, int type_) : QListWidgetItem(icon, text, view, type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:64
// [-2] void QListWidgetItem(class QListWidget *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QListWidgetItemC2EP11QListWidgeti(QListWidget * view, int type_) {
  return  new QListWidgetItem(view, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:65
// [-2] void QListWidgetItem(const class QString &, class QListWidget *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QListWidgetItemC2ERK7QStringP11QListWidgeti(QString* text, QListWidget * view, int type_) {
  return  new QListWidgetItem(*text, view, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:66
// [-2] void QListWidgetItem(const class QIcon &, const class QString &, class QListWidget *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QListWidgetItemC2ERK5QIconRK7QStringP11QListWidgeti(QIcon* icon, QString* text, QListWidget * view, int type_) {
  return  new QListWidgetItem(*icon, *text, view, type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:69
// [-2] void ~QListWidgetItem()
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItemD2Ev(void *this_) {
  delete (QListWidgetItem*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:71
// [8] QListWidgetItem * clone()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem5cloneEv(void *this_) {
  return (void*)((QListWidgetItem*)this_)->clone();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:73
// [8] QListWidget * listWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem10listWidgetEv(void *this_) {
  return (void*)((QListWidgetItem*)this_)->listWidget();
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistwidget.h:75
// [-2] void setSelected(_Bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem11setSelectedEb(void *this_, bool select_) {
  ((QListWidgetItem*)this_)->setSelected(select_);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistwidget.h:76
// [1] bool isSelected()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK15QListWidgetItem10isSelectedEv(void *this_) {
  return (bool)((QListWidgetItem*)this_)->isSelected();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistwidget.h:78
// [-2] void setHidden(_Bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem9setHiddenEb(void *this_, bool hide) {
  ((QListWidgetItem*)this_)->setHidden(hide);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistwidget.h:79
// [1] bool isHidden()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK15QListWidgetItem8isHiddenEv(void *this_) {
  return (bool)((QListWidgetItem*)this_)->isHidden();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:81
// [4] Qt::ItemFlags flags()
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK15QListWidgetItem5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QListWidgetItem*)this_)->flags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:82
// [-2] void setFlags(Qt::ItemFlags)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QListWidgetItem*)this_)->setFlags(flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:84
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem4textEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->text();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:86
// [-2] void setText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem7setTextERK7QString(void *this_, QString* text) {
  ((QListWidgetItem*)this_)->setText(*text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:88
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem4iconEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->icon();
return new QIcon(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:90
// [-2] void setIcon(const class QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QListWidgetItem*)this_)->setIcon(*icon);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:92
// [8] QString statusTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem9statusTipEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->statusTip();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:94
// [-2] void setStatusTip(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem12setStatusTipERK7QString(void *this_, QString* statusTip) {
  ((QListWidgetItem*)this_)->setStatusTip(*statusTip);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:97
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem7toolTipEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->toolTip();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:99
// [-2] void setToolTip(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem10setToolTipERK7QString(void *this_, QString* toolTip) {
  ((QListWidgetItem*)this_)->setToolTip(*toolTip);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:103
// [8] QString whatsThis()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem9whatsThisEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->whatsThis();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:105
// [-2] void setWhatsThis(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem12setWhatsThisERK7QString(void *this_, QString* whatsThis) {
  ((QListWidgetItem*)this_)->setWhatsThis(*whatsThis);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:108
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem4fontEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->font();
return new QFont(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:110
// [-2] void setFont(const class QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem7setFontERK5QFont(void *this_, QFont* font) {
  ((QListWidgetItem*)this_)->setFont(*font);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:112
// [4] int textAlignment()
extern "C" Q_DECL_EXPORT
int C_ZNK15QListWidgetItem13textAlignmentEv(void *this_) {
  return (int)((QListWidgetItem*)this_)->textAlignment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:114
// [-2] void setTextAlignment(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem16setTextAlignmentEi(void *this_, int alignment) {
  ((QListWidgetItem*)this_)->setTextAlignment(alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:117
// [16] QColor backgroundColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem15backgroundColorEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->backgroundColor();
return new QColor(rv);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:119
// [-2] void setBackgroundColor(const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem18setBackgroundColorERK6QColor(void *this_, QColor* color) {
  ((QListWidgetItem*)this_)->setBackgroundColor(*color);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistwidget.h:122
// [8] QBrush background()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem10backgroundEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->background();
return new QBrush(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistwidget.h:124
// [-2] void setBackground(const class QBrush &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem13setBackgroundERK6QBrush(void *this_, QBrush* brush) {
  ((QListWidgetItem*)this_)->setBackground(*brush);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:127
// [16] QColor textColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem9textColorEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->textColor();
return new QColor(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:129
// [-2] void setTextColor(const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem12setTextColorERK6QColor(void *this_, QColor* color) {
  ((QListWidgetItem*)this_)->setTextColor(*color);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistwidget.h:132
// [8] QBrush foreground()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem10foregroundEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->foreground();
return new QBrush(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistwidget.h:134
// [-2] void setForeground(const class QBrush &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem13setForegroundERK6QBrush(void *this_, QBrush* brush) {
  ((QListWidgetItem*)this_)->setForeground(*brush);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:137
// [4] Qt::CheckState checkState()
extern "C" Q_DECL_EXPORT
Qt::CheckState C_ZNK15QListWidgetItem10checkStateEv(void *this_) {
  return (Qt::CheckState)((QListWidgetItem*)this_)->checkState();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:139
// [-2] void setCheckState(Qt::CheckState)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState state) {
  ((QListWidgetItem*)this_)->setCheckState(state);
}

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qlistwidget.h:142
// [8] QSize sizeHint()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem8sizeHintEv(void *this_) {
  auto rv = ((QListWidgetItem*)this_)->sizeHint();
return new QSize(rv);
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qlistwidget.h:144
// [-2] void setSizeHint(const class QSize &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem11setSizeHintERK5QSize(void *this_, QSize* size) {
  ((QListWidgetItem*)this_)->setSizeHint(*size);
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:147
// [16] QVariant data(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QListWidgetItem4dataEi(void *this_, int role) {
  auto rv = ((QListWidgetItem*)this_)->data(role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:148
// [-2] void setData(int, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem7setDataEiRK8QVariant(void *this_, int role, QVariant* value) {
  ((QListWidgetItem*)this_)->setData(role, *value);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:150
// [1] bool operator<(const class QListWidgetItem &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QListWidgetItemltERKS_(void *this_, QListWidgetItem* other) {
  return (bool)((QListWidgetItem*)this_)->operator<(*other);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:153
// [-2] void read(class QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZN15QListWidgetItem4readER11QDataStream(void *this_, QDataStream* in) {
  ((QListWidgetItem*)this_)->read(*in);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:154
// [-2] void write(class QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZNK15QListWidgetItem5writeER11QDataStream(void *this_, QDataStream* out) {
  ((QListWidgetItem*)this_)->write(*out);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:156
// [48] QListWidgetItem & operator=(const class QListWidgetItem &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QListWidgetItemaSERKS_(void *this_, QListWidgetItem* other) {
  auto& rv = ((QListWidgetItem*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:158
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK15QListWidgetItem4typeEv(void *this_) {
  return (int)((QListWidgetItem*)this_)->type();
}

//  main block end
